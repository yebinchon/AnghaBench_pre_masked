
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_18__ {scalar_t__ i_format; int i_physical_channels; int i_frame_length; int i_bytes_per_frame; int i_chan_mode; } ;
struct TYPE_16__ {scalar_t__ i_profile; TYPE_5__ audio; int audio_replay_gain; } ;
struct decoder_owner {int reset_out_state; int p_fifo; TYPE_3__ fmt; int lock; int * p_aout; int p_resource; int p_clock; } ;
struct TYPE_15__ {scalar_t__ i_codec; scalar_t__ i_profile; TYPE_5__ audio; int audio_replay_gain; } ;
struct TYPE_14__ {int audio_replay_gain; } ;
struct TYPE_17__ {TYPE_2__ fmt_out; TYPE_1__ fmt_in; } ;
typedef TYPE_4__ decoder_t ;
typedef TYPE_5__ audio_sample_format_t ;
typedef int audio_output_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_5__*,TYPE_5__*) ;
 int FUNC_1 (struct decoder_owner*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,TYPE_5__*,scalar_t__,int ,int *) ;
 int FUNC_4 (TYPE_5__*) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 struct decoder_owner* FUNC_6 (TYPE_4__*) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (TYPE_4__*,char*) ;
 int FUNC_10 (TYPE_4__*,char*) ;
 int FUNC_11 (int *,char*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16( decoder_t *VAR_3 )
{
    struct decoder_owner *VAR_4 = FUNC_6( VAR_3 );

    if( VAR_4->p_aout &&
       ( !FUNC_0(&VAR_3->fmt_out.audio, &VAR_4->fmt.audio) ||
         VAR_3->fmt_out.i_codec != VAR_3->fmt_out.audio.i_format ||
         VAR_3->fmt_out.i_profile != VAR_4->fmt.i_profile ) )
    {
        audio_output_t *VAR_5 = VAR_4->p_aout;


        FUNC_14( &VAR_4->lock );
        VAR_4->p_aout = ((void*)0);
        FUNC_15( &VAR_4->lock );
        FUNC_2( VAR_5 );

        FUNC_8( VAR_4->p_resource, VAR_5 );
    }


    if( FUNC_5( &VAR_3->fmt_in.audio_replay_gain,
                                 &VAR_4->fmt.audio_replay_gain ) )
    {
        VAR_3->fmt_out.audio_replay_gain = VAR_3->fmt_in.audio_replay_gain;
        if( VAR_4->p_aout )
        {
            VAR_4->fmt.audio_replay_gain = VAR_3->fmt_in.audio_replay_gain;
            FUNC_11( VAR_4->p_aout, "audio-replay-gain-mode" );
        }
    }

    if( VAR_4->p_aout == ((void*)0) )
    {
        VAR_3->fmt_out.audio.i_format = VAR_3->fmt_out.i_codec;

        audio_sample_format_t VAR_6 = VAR_3->fmt_out.audio;
        FUNC_4( &VAR_6 );

        const int VAR_7 = FUNC_10( VAR_3, "force-dolby-surround" );
        if( VAR_7 &&
            VAR_6.i_physical_channels == (VAR_1|VAR_2) )
        {
            if( VAR_7 == 1 )
                VAR_6.i_chan_mode |= VAR_0;
            else
                VAR_6.i_chan_mode &= ~VAR_0;
        }

        audio_output_t *VAR_8;

        VAR_8 = FUNC_7( VAR_4->p_resource );
        if( VAR_8 )
        {
            if( FUNC_3( VAR_8, &VAR_6, VAR_3->fmt_out.i_profile,
                             VAR_4->p_clock,
                             &VAR_3->fmt_out.audio_replay_gain ) )
            {
                FUNC_8( VAR_4->p_resource, VAR_8 );
                VAR_8 = ((void*)0);
            }
        }

        FUNC_14( &VAR_4->lock );
        VAR_4->p_aout = VAR_8;

        FUNC_1( VAR_4 );
        FUNC_4( &VAR_4->fmt.audio );
        FUNC_15( &VAR_4->lock );

        if( VAR_8 == ((void*)0) )
        {
            FUNC_9( VAR_3, "failed to create audio output" );
            return -1;
        }

        VAR_3->fmt_out.audio.i_bytes_per_frame =
            VAR_4->fmt.audio.i_bytes_per_frame;
        VAR_3->fmt_out.audio.i_frame_length =
            VAR_4->fmt.audio.i_frame_length;

        FUNC_12( VAR_4->p_fifo );
        VAR_4->reset_out_state = 1;
        FUNC_13( VAR_4->p_fifo );
    }
    return 0;
}
