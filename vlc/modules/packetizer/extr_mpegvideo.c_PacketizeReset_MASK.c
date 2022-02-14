
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_4__ {int b_frame_slice; int i_prev_temporal_ref; int b_sync_on_intra_frame; int b_waiting_iframe; int i_last_ref_pts; int i_pts; int i_dts; int prev_iframe_dts; int dts; int * p_frame; int ** pp_last; int i_next_block_flags; } ;
typedef TYPE_2__ decoder_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3( void *VAR_2, bool VAR_3 )
{
    FUNC_0(VAR_3);
    decoder_t *VAR_4 = VAR_2;
    decoder_sys_t *VAR_5 = VAR_4->p_sys;

    VAR_5->i_next_block_flags = VAR_0;
    if( VAR_5->p_frame )
    {
        FUNC_1( VAR_5->p_frame );
        VAR_5->p_frame = ((void*)0);
        VAR_5->pp_last = &VAR_5->p_frame;
        VAR_5->b_frame_slice = 0;
    }
    FUNC_2( &VAR_5->dts, VAR_1 );
    FUNC_2( &VAR_5->prev_iframe_dts, VAR_1 );
    VAR_5->i_dts =
    VAR_5->i_pts =
    VAR_5->i_last_ref_pts = VAR_1;
    VAR_5->b_waiting_iframe = VAR_5->b_sync_on_intra_frame;
    VAR_5->i_prev_temporal_ref = 2048;
}
