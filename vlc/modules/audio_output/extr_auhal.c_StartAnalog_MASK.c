
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int audio_sample_format_t ;
struct TYPE_12__ {int headphones; } ;
struct TYPE_13__ {TYPE_1__ current_sink_info; TYPE_3__* sys; } ;
typedef TYPE_2__ audio_output_t ;
struct TYPE_14__ {int * au_unit; int b_mute; int f_volume; int i_selected_dev; } ;
typedef TYPE_3__ aout_sys_t ;
typedef int UInt32 ;
typedef scalar_t__ OSStatus ;
typedef int AudioObjectID ;
typedef int AudioChannelLayout ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ,int ,int ,int *,int *) ;
 scalar_t__ FUNC_4 (int *,int ,int ,int ,int *,int *) ;
 scalar_t__ FUNC_5 (int *,int ,int ,int ,int *,int) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (TYPE_2__*) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (TYPE_2__*,int *,int *,int *,int ,int*) ;
 int * FUNC_11 (TYPE_2__*,int ) ;
 int FUNC_12 (TYPE_2__*,int *) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_16 (int ) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int
FUNC_17(audio_output_t *VAR_8, audio_sample_format_t *VAR_9)
{
    aout_sys_t *VAR_10 = VAR_8->sys;
    OSStatus VAR_11 = VAR_7;
    UInt32 VAR_12;
    AudioChannelLayout *VAR_13 = ((void*)0);

    if (FUNC_9(VAR_9) == 0)
        return VAR_0;

    VAR_10->au_unit = FUNC_11(VAR_8, VAR_6);
    if (VAR_10->au_unit == ((void*)0))
        return VAR_0;

    VAR_8->current_sink_info.headphones = FUNC_1(VAR_8, VAR_10->i_selected_dev);


    VAR_11 = FUNC_5(VAR_10->au_unit,
                               VAR_3,
                               VAR_4, 0,
                               &VAR_10->i_selected_dev, sizeof(AudioObjectID));

    if (VAR_11 != VAR_7)
    {
        FUNC_13("cannot select audio output device, PCM output failed");
        goto error;
    }



    VAR_11 = FUNC_4(VAR_10->au_unit,
                                   VAR_2,
                                   VAR_5, 0, &VAR_12,
                                   ((void*)0));
    if (VAR_11 == VAR_7)
    {
        VAR_13 = (AudioChannelLayout *)FUNC_16(VAR_12);
        if (VAR_13 == ((void*)0))
            goto error;

        OSStatus VAR_14 =
            FUNC_3(VAR_10->au_unit,
                                 VAR_2,
                                 VAR_5, 0, VAR_13,
                                 &VAR_12);
        if (VAR_14 != VAR_7)
            goto error;
    }
    else
        FUNC_14("device driver does not support "
                   "kAudioDevicePropertyPreferredChannelLayout - using stereo");


    bool VAR_15;
    int VAR_16 = FUNC_10(VAR_8, VAR_10->au_unit, VAR_9, VAR_13, 0,
                            &VAR_15);
    if (VAR_16 != VAR_1)
        goto error;

    VAR_11 = FUNC_2(VAR_10->au_unit);
    if (VAR_11 != VAR_7)
    {
        FUNC_13("AudioUnitStart failed");
        FUNC_12(VAR_8, VAR_10->au_unit);
        goto error;
    }


    FUNC_7(VAR_8, VAR_10->f_volume);
    FUNC_6(VAR_8, VAR_10->b_mute);

    FUNC_15(VAR_13);

    if (VAR_15)
        FUNC_8(VAR_8);

    return VAR_1;
error:
    FUNC_0(VAR_10->au_unit);
    FUNC_15(VAR_13);
    return VAR_0;
}
