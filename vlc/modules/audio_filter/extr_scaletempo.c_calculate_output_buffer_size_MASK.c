
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ filter_t ;
struct TYPE_5__ {int bytes_queued; int bytes_to_slide; int bytes_queue_max; unsigned int bytes_stride; int bytes_per_frame; int bytes_stride_scaled; } ;
typedef TYPE_2__ filter_sys_t ;



__attribute__((used)) static size_t FUNC_0( filter_t *VAR_0,
                                            size_t VAR_1 )
{
    filter_sys_t *VAR_2 = VAR_0->p_sys;
    size_t VAR_3 = 0;
    int VAR_4 = VAR_1 + VAR_2->bytes_queued - VAR_2->bytes_to_slide;
    if( VAR_4 >= (int)VAR_2->bytes_queue_max ) {

      VAR_3 = VAR_2->bytes_stride * ( (unsigned)(
          ( VAR_4 - VAR_2->bytes_queue_max + VAR_2->bytes_per_frame )
          / VAR_2->bytes_stride_scaled ) + 1 );
    }
    return VAR_3;
}
