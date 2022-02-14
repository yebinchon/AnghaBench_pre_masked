
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_24__ {scalar_t__ i_bitspersample; scalar_t__ i_channels; int i_rate; int i_format; } ;
typedef TYPE_3__ const vlc_clock_t ;
typedef TYPE_3__ audio_sample_format_t ;
typedef int audio_replay_gain_t ;
typedef TYPE_3__ const audio_output_t ;
struct TYPE_23__ {int update; } ;
struct TYPE_22__ {float rate; int discontinuity; scalar_t__ request_delay; scalar_t__ delay; int resamp_type; TYPE_3__ const* clock; } ;
struct TYPE_25__ {int input_profile; TYPE_2__ vp; int buffers_played; int buffers_lost; TYPE_1__ sync; int original_pts; int * volume; int * filters; int filters_cfg; TYPE_3__ mixer_format; TYPE_3__ filter_format; TYPE_3__ input_format; int restart; } ;
typedef TYPE_6__ aout_owner_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_3__ const*) ;
 int VAR_4 ;
 int * FUNC_1 (int ,TYPE_3__ const*,TYPE_3__*,TYPE_3__*,int *) ;
 int FUNC_2 (TYPE_3__ const*) ;
 int FUNC_3 (TYPE_3__ const*) ;
 scalar_t__ FUNC_4 (TYPE_3__ const*) ;
 TYPE_6__* FUNC_5 (TYPE_3__ const*) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (TYPE_3__ const*,int const*) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (TYPE_3__ const*) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int,int ) ;
 int VAR_5 ;
 int FUNC_12 (TYPE_3__ const*,char*,...) ;

int FUNC_13(audio_output_t *VAR_6, const audio_sample_format_t *VAR_7,
                int VAR_8, vlc_clock_t *VAR_9,
                const audio_replay_gain_t *VAR_10)
{
    FUNC_9(VAR_6);
    FUNC_9(VAR_7);
    FUNC_9(VAR_9);
    if( VAR_7->i_bitspersample > 0 )
    {


        int VAR_11 = FUNC_2( VAR_7 );
        if( ( VAR_11 == 0 && VAR_7->i_channels == 0 )
           || VAR_11 > VAR_0 || VAR_7->i_channels > VAR_3 )
        {
            FUNC_12( VAR_6, "invalid audio channels count" );
            return -1;
        }
    }

    if( VAR_7->i_rate > 384000 )
    {
        FUNC_12( VAR_6, "excessive audio sample frequency (%u)",
                 VAR_7->i_rate );
        return -1;
    }
    if( VAR_7->i_rate < 4000 )
    {
        FUNC_12( VAR_6, "too low audio sample frequency (%u)",
                 VAR_7->i_rate );
        return -1;
    }

    aout_owner_t *VAR_12 = FUNC_5(VAR_6);


    VAR_12->volume = FUNC_7 (VAR_6, VAR_10);

    FUNC_11(&VAR_12->restart, 0, VAR_5);
    VAR_12->input_profile = VAR_8;
    VAR_12->filter_format = VAR_12->mixer_format = VAR_12->input_format = *VAR_7;

    VAR_12->sync.clock = VAR_9;

    VAR_12->filters_cfg = VAR_1;
    if (FUNC_4 (VAR_6))
        goto error;
    FUNC_8 (VAR_12->volume, VAR_12->mixer_format.i_format);


    VAR_12->filters = FUNC_1(FUNC_0(VAR_6), VAR_9,
                                              &VAR_12->filter_format,
                                              &VAR_12->mixer_format,
                                              &VAR_12->filters_cfg);
    if (VAR_12->filters == ((void*)0))
    {
        FUNC_3 (VAR_6);
error:
        FUNC_6 (VAR_12->volume);
        VAR_12->volume = ((void*)0);
        return -1;
    }

    VAR_12->sync.rate = 1.f;
    VAR_12->sync.resamp_type = VAR_2;
    VAR_12->sync.discontinuity = 1;
    VAR_12->original_pts = VAR_4;
    VAR_12->sync.delay = VAR_12->sync.request_delay = 0;

    FUNC_10 (&VAR_12->buffers_lost, 0);
    FUNC_10 (&VAR_12->buffers_played, 0);
    FUNC_11(&VAR_12->vp.update, 1, VAR_5);
    return 0;
}
