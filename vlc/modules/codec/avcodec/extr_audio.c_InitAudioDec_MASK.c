
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_19__ {int i_chan_mode; scalar_t__ i_rate; } ;
struct TYPE_20__ {scalar_t__ i_profile; scalar_t__ i_level; TYPE_3__ audio; } ;
struct TYPE_17__ {int i_chan_mode; scalar_t__ i_rate; } ;
struct TYPE_18__ {TYPE_1__ audio; } ;
struct TYPE_21__ {TYPE_4__ fmt_in; int pf_flush; int pf_decode; TYPE_2__ fmt_out; TYPE_6__* p_sys; } ;
typedef TYPE_5__ decoder_t ;
struct TYPE_22__ {int b_extract; int end_date; scalar_t__ i_previous_layout; scalar_t__ i_previous_channels; scalar_t__ i_reject_count; int const* p_codec; TYPE_7__* p_context; } ;
typedef TYPE_6__ decoder_sys_t ;
struct TYPE_23__ {scalar_t__ profile; scalar_t__ level; } ;
typedef TYPE_7__ AVCodecContext ;
typedef int AVCodec ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_5__*,TYPE_7__*) ;
 scalar_t__ FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (TYPE_7__**) ;
 int FUNC_4 (int *,scalar_t__,int) ;
 TYPE_7__* FUNC_5 (TYPE_5__*,int const**) ;
 int FUNC_6 (TYPE_6__*) ;
 TYPE_6__* FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int ) ;

int FUNC_9( vlc_object_t *VAR_7 )
{
    decoder_t *VAR_8 = (decoder_t *)VAR_7;
    const AVCodec *VAR_9;
    AVCodecContext *VAR_10 = FUNC_5( VAR_8, &VAR_9 );
    if( VAR_10 == ((void*)0) )
        return VAR_4;


    decoder_sys_t *VAR_11 = FUNC_7(sizeof(*VAR_11));
    if( FUNC_8(VAR_11 == ((void*)0)) )
    {
        FUNC_3( &VAR_10 );
        return VAR_5;
    }

    VAR_8->p_sys = VAR_11;
    VAR_11->p_context = VAR_10;
    VAR_11->p_codec = VAR_9;


    FUNC_0( VAR_8, VAR_10 );


    if( FUNC_1( VAR_8 ) < 0 )
    {
        FUNC_6( VAR_11 );
        FUNC_3( &VAR_10 );
        return VAR_4;
    }

    VAR_11->i_reject_count = 0;
    VAR_11->b_extract = 0;
    VAR_11->i_previous_channels = 0;
    VAR_11->i_previous_layout = 0;



    FUNC_2( VAR_8, 0 );

    if( !VAR_8->fmt_out.audio.i_rate )
        VAR_8->fmt_out.audio.i_rate = VAR_8->fmt_in.audio.i_rate;
    if( VAR_8->fmt_out.audio.i_rate )
        FUNC_4( &VAR_11->end_date, VAR_8->fmt_out.audio.i_rate, 1 );
    VAR_8->fmt_out.audio.i_chan_mode = VAR_8->fmt_in.audio.i_chan_mode;

    VAR_8->pf_decode = VAR_0;
    VAR_8->pf_flush = VAR_3;


    if( VAR_10->profile != VAR_2 )
        VAR_8->fmt_in.i_profile = VAR_10->profile;
    if( VAR_10->level != VAR_1 )
        VAR_8->fmt_in.i_level = VAR_10->level;

    return VAR_6;
}
