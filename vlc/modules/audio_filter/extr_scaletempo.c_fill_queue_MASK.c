
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ filter_t ;
struct TYPE_5__ {scalar_t__ bytes_to_slide; scalar_t__ bytes_queued; unsigned int buf_queue; unsigned int bytes_queue_max; } ;
typedef TYPE_2__ filter_sys_t ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (unsigned int,int *,unsigned int) ;
 int FUNC_2 (unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static size_t FUNC_3( filter_t *VAR_0,
                          uint8_t *VAR_1,
                          size_t VAR_2,
                          size_t VAR_3 )
{
    filter_sys_t *VAR_4 = VAR_0->p_sys;
    unsigned VAR_5 = VAR_2 - VAR_3;
    size_t VAR_6 = VAR_3;

    if( VAR_4->bytes_to_slide > 0 ) {
        if( VAR_4->bytes_to_slide < VAR_4->bytes_queued ) {
            unsigned VAR_7 = VAR_4->bytes_queued - VAR_4->bytes_to_slide;
            FUNC_2( VAR_4->buf_queue,
                     VAR_4->buf_queue + VAR_4->bytes_to_slide,
                     VAR_7 );
            VAR_4->bytes_to_slide = 0;
            VAR_4->bytes_queued = VAR_7;
        } else {
            unsigned VAR_8;
            VAR_4->bytes_to_slide -= VAR_4->bytes_queued;
            VAR_8 = FUNC_0( VAR_4->bytes_to_slide, VAR_5 );
            VAR_4->bytes_queued = 0;
            VAR_4->bytes_to_slide -= VAR_8;
            VAR_3 += VAR_8;
            VAR_5 -= VAR_8;
        }
    }

    if( VAR_5 > 0 ) {
        unsigned VAR_9 = FUNC_0( VAR_4->bytes_queue_max - VAR_4->bytes_queued, VAR_5 );
        FUNC_1( VAR_4->buf_queue + VAR_4->bytes_queued,
                VAR_1 + VAR_3,
                VAR_9 );
        VAR_4->bytes_queued += VAR_9;
        VAR_3 += VAR_9;
    }

    return VAR_3 - VAR_6;
}
