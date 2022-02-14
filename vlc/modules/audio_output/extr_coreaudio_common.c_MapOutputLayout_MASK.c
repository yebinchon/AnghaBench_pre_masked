
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef unsigned int const uint32_t ;
typedef int i_auhal_channel_mapping ;
struct TYPE_13__ {unsigned int i_physical_channels; } ;
typedef TYPE_2__ audio_sample_format_t ;
typedef int audio_output_t ;
struct TYPE_14__ {scalar_t__ mChannelLayoutTag; int mNumberChannelDescriptions; TYPE_1__* mChannelDescriptions; } ;
struct TYPE_12__ {size_t mChannelLabel; } ;
typedef TYPE_3__ AudioChannelLayout ;
typedef size_t const AudioChannelLabel ;


 void* VAR_0 ;
 TYPE_3__* FUNC_0 (int *,TYPE_3__ const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_3__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (int *,char*,...) ;

__attribute__((used)) static int
FUNC_7(audio_output_t *VAR_4, audio_sample_format_t *VAR_5,
                const AudioChannelLayout *VAR_6, bool *VAR_7)
{

    VAR_5->i_physical_channels = 0;
    uint32_t VAR_8 = VAR_5->i_physical_channels;
    AudioChannelLayout *VAR_9 = ((void*)0);

    if (VAR_6 == ((void*)0))
    {
        FUNC_6(VAR_4, "not output layout, default to Stereo");
        VAR_5->i_physical_channels = VAR_0;
        goto end;
    }

    if (VAR_6->mChannelLayoutTag !=
        VAR_3)
    {
        VAR_9 = FUNC_0(VAR_4, VAR_6);
        if (VAR_9 == ((void*)0))
            return VAR_1;
        VAR_6 = VAR_9;
    }

    if (VAR_8 == 145
     || VAR_6->mNumberChannelDescriptions < 2)
    {

        VAR_5->i_physical_channels = 145;
        FUNC_6(VAR_4, "output layout of AUHAL has 1 channel");
    }
    else if (VAR_8 == (144 | 137)
          || VAR_6->mNumberChannelDescriptions < 3)
    {

        VAR_5->i_physical_channels = VAR_0;
        FUNC_6(VAR_4, "output layout of AUHAL is Stereo");
    }
    else
    {
        FUNC_4(VAR_6->mNumberChannelDescriptions > 0);

        FUNC_6(VAR_4, "output layout of AUHAL has %i channels",
                VAR_6->mNumberChannelDescriptions);


        static const unsigned VAR_10[] = {
            [133] = 144,
            [129] = 137,
            [136] = 145,
            [134] = 143,
            [132] = 139,
            [128] = 138,

            [131] = 142,

            [130] = 141,
            [135] = 140
        };
        static const size_t VAR_11 = sizeof(VAR_10)
                                         / sizeof(VAR_10[0]);


        for (unsigned VAR_12 = 0; VAR_12 < VAR_6->mNumberChannelDescriptions; VAR_12++)
        {
            AudioChannelLabel VAR_13 =
                VAR_6->mChannelDescriptions[VAR_12].mChannelLabel;

            FUNC_6(VAR_4, "this is channel: %d", (int) VAR_13);

            if (VAR_13 < VAR_11 && VAR_10[VAR_13] > 0)
                VAR_5->i_physical_channels |= VAR_10[VAR_13];
            else
                FUNC_6(VAR_4, "found nonrecognized channel %d at index "
                        "%d", VAR_13, VAR_12);
        }
        if (VAR_5->i_physical_channels == 0)
        {
            VAR_5->i_physical_channels = VAR_0;
            if (VAR_7)
                *VAR_7 = 1;
        }

    }

end:
    FUNC_5(VAR_9);
    FUNC_2(VAR_5);

    FUNC_6(VAR_4, "selected %d physical channels for device output",
            FUNC_1(VAR_5));
    FUNC_6(VAR_4, "VLC will output: %s", FUNC_3(VAR_5));

    return VAR_2;
}
