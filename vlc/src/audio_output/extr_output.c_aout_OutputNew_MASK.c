
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef scalar_t__ vlc_fourcc_t ;
struct TYPE_20__ {scalar_t__ channel_type; unsigned int i_channels; scalar_t__ i_format; scalar_t__ i_physical_channels; int i_bitspersample; scalar_t__ i_bytes_per_frame; scalar_t__ i_frame_length; } ;
typedef TYPE_2__ audio_sample_format_t ;
struct TYPE_19__ {int headphones; } ;
struct TYPE_21__ {int (* start ) (TYPE_3__*,TYPE_2__*) ;scalar_t__ pause; scalar_t__ time_get; scalar_t__ play; scalar_t__ flush; TYPE_1__ current_sink_info; } ;
typedef TYPE_3__ audio_output_t ;
typedef scalar_t__ audio_channel_type_t ;
struct TYPE_22__ {scalar_t__ requested_stereo_mode; int lock; int input_profile; int filters_cfg; TYPE_2__ filter_format; TYPE_2__ mixer_format; } ;
typedef TYPE_4__ aout_owner_t ;
typedef int aout_filters_cfg_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (scalar_t__*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;


 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_3__*,char*,TYPE_2__*) ;
 int FUNC_5 (TYPE_3__*,TYPE_2__*,int *,scalar_t__,unsigned int) ;
 int FUNC_6 (TYPE_2__*) ;
 TYPE_4__* FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (TYPE_3__*,char*) ;
 int FUNC_10 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

int FUNC_13 (audio_output_t *VAR_13)
{
    aout_owner_t *VAR_14 = FUNC_7 (VAR_13);
    audio_sample_format_t *VAR_15 = &VAR_14->mixer_format;
    audio_sample_format_t *VAR_16 = &VAR_14->filter_format;
    aout_filters_cfg_t *VAR_17 = &VAR_14->filters_cfg;

    audio_channel_type_t VAR_18 = VAR_15->channel_type;
    unsigned VAR_19 = VAR_15->i_channels;
    vlc_fourcc_t VAR_20[] = {
        VAR_15->i_format, 0, 0
    };




    if (FUNC_0(VAR_15))
    {
        if (VAR_15->channel_type == VAR_6
         && FUNC_2(VAR_15) == 0)
        {

            FUNC_8(VAR_15->i_channels > 0);
            FUNC_6(VAR_15);
        }

        if (VAR_15->channel_type == VAR_5)
        {



            VAR_15->i_physical_channels = VAR_0;
        }


        VAR_15->i_format = (VAR_15->i_bitspersample > 16) ? VAR_9
                                                    : VAR_10;

        if (VAR_15->i_physical_channels == VAR_1
         && (VAR_14->requested_stereo_mode == VAR_3
          || VAR_14->requested_stereo_mode == VAR_4))
            VAR_15->i_physical_channels = VAR_2;

        FUNC_3 (VAR_15);
        FUNC_8 (FUNC_2(VAR_15) > 0);
    }
    else
    {
        switch (VAR_15->i_format)
        {
            case 128:
                if (VAR_14->input_profile > 0)
                {
                    FUNC_8(FUNC_1(VAR_20) >= 3);

                    VAR_20[0] = VAR_7;
                    VAR_20[1] = 128;
                }
                break;
            case 129:
                if (VAR_14->input_profile > 0)
                {
                    FUNC_8(FUNC_1(VAR_20) >= 3);
                    VAR_20[0] = VAR_8;
                    VAR_20[1] = 129;
                }
                break;
            default:
                break;
        }
    }

    VAR_13->current_sink_info.headphones = 0;

    FUNC_11(&VAR_14->lock);
    int VAR_21 = VAR_11;
    for (size_t VAR_22 = 0; VAR_20[VAR_22] != 0 && VAR_21 != VAR_12; ++VAR_22)
    {
        VAR_16->i_format = VAR_15->i_format = VAR_20[VAR_22];
        VAR_21 = VAR_13->start(VAR_13, VAR_15);
    }
    FUNC_12(&VAR_14->lock);
    if (VAR_21)
    {
        FUNC_9 (VAR_13, "module not functional");
        return -1;
    }
    FUNC_8(VAR_13->flush && VAR_13->play && VAR_13->time_get && VAR_13->pause);

    FUNC_5 (VAR_13, VAR_15, VAR_17, VAR_18,
                            VAR_19);

    FUNC_3 (VAR_15);
    FUNC_8 (VAR_15->i_bytes_per_frame > 0 && VAR_15->i_frame_length > 0);
    FUNC_4 (VAR_13, "output", VAR_15);
    return 0;
}
