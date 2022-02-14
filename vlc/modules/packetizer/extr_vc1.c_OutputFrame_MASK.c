
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_17__ {scalar_t__ i_frame_rate_base; scalar_t__ i_frame_rate; } ;
struct TYPE_18__ {TYPE_3__ video; } ;
struct TYPE_19__ {TYPE_4__ fmt_out; TYPE_6__* p_sys; } ;
typedef TYPE_5__ decoder_t ;
struct TYPE_16__ {int b_has_bframe; int p_sh; } ;
struct TYPE_15__ {int p_ep; } ;
struct TYPE_20__ {scalar_t__ i_frame_dts; scalar_t__ i_frame_pts; int i_cc_flags; int b_frame; TYPE_7__* p_frame; TYPE_7__** pp_last; int cc_next; int cc; scalar_t__ i_cc_dts; scalar_t__ i_cc_pts; int dts; TYPE_2__ sh; TYPE_1__ ep; } ;
typedef TYPE_6__ decoder_sys_t ;
struct TYPE_21__ {int i_flags; scalar_t__ i_dts; scalar_t__ i_pts; } ;
typedef TYPE_7__ block_t ;


 int const VAR_0 ;
 int const VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_7__**,TYPE_7__*) ;
 TYPE_7__* FUNC_1 (TYPE_7__*) ;
 TYPE_7__* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,scalar_t__) ;

__attribute__((used)) static block_t *FUNC_7( decoder_t *VAR_3 )
{
    decoder_sys_t *VAR_4 = VAR_3->p_sys;
    const int VAR_5 = VAR_4->p_frame->i_flags;


    if( VAR_5 & VAR_1 )
    {
        block_t *VAR_6 = FUNC_2( VAR_4->sh.p_sh );
        block_t *VAR_7 = FUNC_2( VAR_4->ep.p_ep );
        if( VAR_7 )
            FUNC_0( &VAR_6, VAR_7 );
        FUNC_0( &VAR_6, VAR_4->p_frame );
        VAR_6->i_flags = VAR_5;
        VAR_4->p_frame = VAR_6;
    }

    vlc_tick_t VAR_8 = VAR_4->i_frame_dts;
    vlc_tick_t VAR_9 = VAR_4->i_frame_pts;


    block_t *VAR_10 = FUNC_1( VAR_4->p_frame );
    if( VAR_10 )
    {
        VAR_10->i_dts = VAR_4->i_frame_dts;
        VAR_10->i_pts = VAR_4->i_frame_pts;
    }


    if( VAR_8 == VAR_2 )
        VAR_8 = FUNC_4( &VAR_4->dts );
    else
        FUNC_6( &VAR_4->dts, VAR_8 );

    if( VAR_9 == VAR_2 )
    {
        if( !VAR_4->sh.b_has_bframe || (VAR_5 & VAR_0 ) )
            VAR_9 = VAR_8;

    }

    if( VAR_10 )
    {
        VAR_10->i_dts = VAR_8;
        VAR_10->i_pts = VAR_9;
    }




    if( VAR_3->fmt_out.video.i_frame_rate && VAR_3->fmt_out.video.i_frame_rate_base )
    {
        FUNC_5( &VAR_4->dts, 2 );


    }


    VAR_4->i_cc_pts = VAR_9;
    VAR_4->i_cc_dts = VAR_8;
    VAR_4->i_cc_flags = VAR_5;

    VAR_4->cc = VAR_4->cc_next;
    FUNC_3( &VAR_4->cc_next );


    VAR_4->b_frame = 0;
    VAR_4->i_frame_dts = VAR_2;
    VAR_4->i_frame_pts = VAR_2;
    VAR_4->p_frame = ((void*)0);
    VAR_4->pp_last = &VAR_4->p_frame;

    return VAR_10;
}
