
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_13__ {int i_format; int i_rate; int i_bytes_per_frame; int i_physical_channels; int channel_type; int i_frame_length; } ;
typedef TYPE_1__ audio_sample_format_t ;
struct TYPE_14__ {int flush; int pause; int play; int time_get; TYPE_3__* sys; } ;
typedef TYPE_2__ audio_output_t ;
struct TYPE_15__ {char* device; int fd; int starting; TYPE_1__ format; } ;
typedef TYPE_3__ aout_sys_t ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;




 int VAR_21 ;

 int VAR_22 ;
 int VAR_23 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int) ;
 int VAR_24 ;
 char* FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int,int ,int*) ;
 int FUNC_7 (TYPE_2__*,char*,char const*) ;
 int FUNC_8 (TYPE_2__*,char*,...) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (TYPE_2__*,char*) ;
 int FUNC_11 (int) ;
 int FUNC_12 (char const*,int ) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14 (audio_output_t *VAR_25, audio_sample_format_t *restrict VAR_26)
{
    aout_sys_t* VAR_27 = VAR_25->sys;

    if (FUNC_1(VAR_26) == 0)
        return VAR_22;


    const char *VAR_28 = VAR_27->device;
    if (VAR_28 == ((void*)0))
        VAR_28 = FUNC_5 ("OSS_AUDIODEV");
    if (VAR_28 == ((void*)0))
        VAR_28 = "/dev/dsp";

    int VAR_29 = FUNC_12 (VAR_28, VAR_13);
    if (VAR_29 == -1)
    {
        FUNC_8 (VAR_25, "cannot open OSS device %s: %s", VAR_28,
                 FUNC_13(VAR_24));
        return VAR_22;
    }
    FUNC_7 (VAR_25, "using OSS device: %s", VAR_28);


    int VAR_30;
    bool VAR_31 = 0;

    switch (VAR_26->i_format)
    {

        case 131:
        case 132:
            VAR_30 = 136;
            break;

        case 129:
            VAR_30 = 134;
            break;
        case 130:
            VAR_30 = 135;
            break;
        case 128:
            VAR_30 = 133;
            break;
        default:
            if (FUNC_0(VAR_26))
                VAR_31 = FUNC_10(VAR_25, "oss-spdif");
            if (VAR_31)
                VAR_30 = 137;

            else if (VAR_12)
                VAR_30 = 136;

            else
                VAR_30 = 135;
    }

    if (FUNC_6 (VAR_29, VAR_17, &VAR_30) < 0)
    {
        FUNC_8 (VAR_25, "cannot set audio format 0x%X: %s", VAR_30,
                 FUNC_13(VAR_24));
        goto error;
    }

    switch (VAR_30)
    {
        case 133: VAR_26->i_format = 128; break;
        case 135: VAR_26->i_format = 130; break;
        case 134: VAR_26->i_format = 129; break;

        case 136: VAR_26->i_format = 132; break;

        case 137:
            if (VAR_31)
            {
                VAR_26->i_format = VAR_21;
                break;
            }
        default:
            FUNC_8 (VAR_25, "unsupported audio format 0x%X", VAR_30);
            goto error;
    }


    int VAR_32 = VAR_31 ? 2 : FUNC_1 (VAR_26);
    if (FUNC_6 (VAR_29, VAR_16, &VAR_32) < 0)
    {
        FUNC_8 (VAR_25, "cannot set %d channels: %s", VAR_32,
                 FUNC_13(VAR_24));
        goto error;
    }

    switch (VAR_32)
    {
        case 1: VAR_32 = VAR_5; break;
        case 2: VAR_32 = VAR_4; break;
        case 4: VAR_32 = VAR_1; break;
        case 6: VAR_32 = VAR_2; break;
        case 8: VAR_32 = VAR_3; break;
        default:
            FUNC_8 (VAR_25, "unsupported channels count %d", VAR_32);
            goto error;
    }


    int VAR_33 = VAR_31 ? 48000 : VAR_26->i_rate;
    if (FUNC_6 (VAR_29, VAR_19, &VAR_33) < 0)
    {
        FUNC_8 (VAR_25, "cannot set %d Hz sample rate: %s", VAR_33,
                 FUNC_13(VAR_24));
        goto error;
    }


    VAR_25->time_get = VAR_20;
    VAR_25->play = VAR_15;
    VAR_25->pause = VAR_14;
    VAR_25->flush = VAR_11;

    if (VAR_31)
    {
        VAR_26->i_bytes_per_frame = VAR_8;
        VAR_26->i_frame_length = VAR_0;
    }
    else
    {
        VAR_26->i_rate = VAR_33;
        VAR_26->i_physical_channels = VAR_32;
    }
    VAR_26->channel_type = VAR_9;
    FUNC_2 (VAR_26);


    uint32_t VAR_34;
    if (VAR_31)
        VAR_34 = VAR_8;
    else
        VAR_34 = VAR_26->i_rate / (VAR_10 / VAR_7)
                * VAR_26->i_bytes_per_frame;
    if (FUNC_9(VAR_34 < 16))
        VAR_34 = 16;

    int VAR_35 = (VAR_6 / VAR_7) << 16
             | (32 - FUNC_4(VAR_34 - 1));
    if (FUNC_6 (VAR_29, VAR_18, &VAR_35) < 0)
        FUNC_8 (VAR_25, "cannot set 0x%08x fragment: %s", VAR_35,
                 FUNC_13(VAR_24));

    VAR_27->fd = VAR_29;
    FUNC_3 (VAR_25);
    VAR_27->starting = 1;
    VAR_27->format = *VAR_26;
    return VAR_23;
error:
    FUNC_11 (VAR_29);
    return VAR_22;
}
