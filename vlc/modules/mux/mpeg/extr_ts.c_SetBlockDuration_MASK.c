
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_19__ {TYPE_6__* p_fmt; int p_fifo; scalar_t__ p_sys; } ;
typedef TYPE_7__ sout_input_t ;
struct TYPE_16__ {TYPE_3__* p_first; } ;
struct TYPE_17__ {TYPE_4__ chain_pes; } ;
struct TYPE_20__ {TYPE_5__ state; } ;
typedef TYPE_8__ sout_input_sys_t ;
struct TYPE_21__ {scalar_t__ i_dts; int i_flags; scalar_t__ i_length; int i_buffer; } ;
typedef TYPE_9__ block_t ;
struct TYPE_14__ {int i_bytes_per_frame; int i_frame_length; } ;
struct TYPE_13__ {scalar_t__ i_frame_rate_base; scalar_t__ i_frame_rate; } ;
struct TYPE_18__ {scalar_t__ i_cat; scalar_t__ i_codec; TYPE_2__ audio; TYPE_1__ video; } ;
struct TYPE_15__ {int i_length; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_9__* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_4( sout_input_t *VAR_5, block_t *VAR_6 )
{
    sout_input_sys_t *VAR_7 = (sout_input_sys_t*) VAR_5->p_sys;

    if( VAR_5->p_fmt->i_cat != VAR_2 &&
        FUNC_1( VAR_5->p_fifo ) > 0 )
    {
        block_t *VAR_8 = FUNC_2( VAR_5->p_fifo );
        vlc_tick_t VAR_9 = VAR_8->i_dts - VAR_6->i_dts;
        if( VAR_9 > 0 &&
                (VAR_8->i_flags & VAR_1) == 0 )
        {
            VAR_6->i_length = VAR_9;
        }
        else if ( VAR_6->i_length == 0 )
        {

            if( VAR_5->p_fmt->i_cat == VAR_3 &&
                VAR_5->p_fmt->video.i_frame_rate &&
                VAR_5->p_fmt->video.i_frame_rate_base )
            {
                VAR_6->i_length = FUNC_3(
                                   VAR_5->p_fmt->video.i_frame_rate,
                                   VAR_5->p_fmt->video.i_frame_rate_base);
            }
            else if( VAR_5->p_fmt->i_cat == VAR_0 &&
                     VAR_5->p_fmt->audio.i_bytes_per_frame &&
                     VAR_5->p_fmt->audio.i_frame_length )
            {
                VAR_6->i_length = VAR_6->i_buffer *
                                   VAR_5->p_fmt->audio.i_frame_length /
                                   VAR_5->p_fmt->audio.i_bytes_per_frame;
            }

            else if( VAR_7->state.chain_pes.p_first )
                VAR_6->i_length = VAR_7->state.chain_pes.p_first->i_length;

            else if( VAR_8->i_length > 0 )
                VAR_6->i_length = VAR_8->i_length;

            else
                VAR_6->i_length = FUNC_0(1);
        }
    }
    else if( VAR_5->p_fmt->i_codec != VAR_4 )
    {
        VAR_6->i_length = FUNC_0(1);
    }
}
