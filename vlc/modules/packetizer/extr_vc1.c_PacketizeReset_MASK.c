
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_4__ {int b_frame; int dts; void* i_frame_pts; void* i_frame_dts; int * p_frame; int ** pp_last; } ;
typedef TYPE_2__ decoder_sys_t ;


 void* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,void*) ;

__attribute__((used)) static void FUNC_2( void *VAR_1, bool VAR_2 )
{
    decoder_t *VAR_3 = VAR_1;
    decoder_sys_t *VAR_4 = VAR_3->p_sys;

    if( VAR_2 )
    {
        if( VAR_4->p_frame )
            FUNC_0( VAR_4->p_frame );
        VAR_4->p_frame = ((void*)0);
        VAR_4->pp_last = &VAR_4->p_frame;
        VAR_4->b_frame = 0;
    }

    VAR_4->i_frame_dts = VAR_0;
    VAR_4->i_frame_pts = VAR_0;
    FUNC_1( &VAR_4->dts, VAR_0 );
}
