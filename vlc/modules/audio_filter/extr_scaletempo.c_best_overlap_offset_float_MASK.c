
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ filter_t ;
struct TYPE_5__ {float* table_window; float* buf_overlap; unsigned int samples_per_frame; float* buf_pre_corr; unsigned int samples_overlap; unsigned int frames_search; unsigned int bytes_per_frame; scalar_t__ buf_queue; } ;
typedef TYPE_2__ filter_sys_t ;


 float VAR_0 ;

__attribute__((used)) static unsigned FUNC_0( filter_t *VAR_1 )
{
    filter_sys_t *VAR_2 = VAR_1->p_sys;
    float *VAR_3, *VAR_4, *VAR_5, *VAR_6;
    float VAR_7 = VAR_0;
    unsigned VAR_8 = 0;
    unsigned VAR_9, VAR_10;

    VAR_3 = VAR_2->table_window;
    VAR_4 = VAR_2->buf_overlap;
    VAR_4 += VAR_2->samples_per_frame;
    VAR_5 = VAR_2->buf_pre_corr;
    for( VAR_9 = VAR_2->samples_per_frame; VAR_9 < VAR_2->samples_overlap; VAR_9++ ) {
      *VAR_5++ = *VAR_3++ * *VAR_4++;
    }

    VAR_6 = (float *)VAR_2->buf_queue + VAR_2->samples_per_frame;
    for( VAR_10 = 0; VAR_10 < VAR_2->frames_search; VAR_10++ ) {
      float VAR_11 = 0;
      float *VAR_12 = VAR_6;
      VAR_5 = VAR_2->buf_pre_corr;
      for( VAR_9 = VAR_2->samples_per_frame; VAR_9 < VAR_2->samples_overlap; VAR_9++ ) {
        VAR_11 += *VAR_5++ * *VAR_12++;
      }
      if( VAR_11 > VAR_7 ) {
        VAR_7 = VAR_11;
        VAR_8 = VAR_10;
      }
      VAR_6 += VAR_2->samples_per_frame;
    }

    return VAR_8 * VAR_2->bytes_per_frame;
}
