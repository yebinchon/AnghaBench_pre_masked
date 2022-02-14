
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ filter_t ;
struct TYPE_5__ {float* table_blend; float* buf_overlap; unsigned int buf_queue; unsigned int samples_overlap; } ;
typedef TYPE_2__ filter_sys_t ;



__attribute__((used)) static void FUNC_0( filter_t *VAR_0,
                                  void *VAR_1,
                                  unsigned VAR_2 )
{
    filter_sys_t *VAR_3 = VAR_0->p_sys;
    float *VAR_4 = VAR_1;
    float *VAR_5 = VAR_3->table_blend;
    float *VAR_6 = VAR_3->buf_overlap;
    float *VAR_7 = (float *)( VAR_3->buf_queue + VAR_2 );
    unsigned VAR_8;
    for( VAR_8 = 0; VAR_8 < VAR_3->samples_overlap; VAR_8++ ) {
        *VAR_4++ = *VAR_6 - *VAR_5++ * ( *VAR_6 - *VAR_7++ ); VAR_6++;
    }
}
