
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ i_channels; int i_format; int i_physical_channels; int i_rate; } ;
typedef TYPE_2__ audio_sample_format_t ;
struct TYPE_8__ {int wValidBitsPerSample; } ;
struct TYPE_10__ {int dwChannelMask; int SubFormat; TYPE_1__ Samples; } ;
typedef TYPE_3__ WAVEFORMATEXTENSIBLE ;
struct TYPE_11__ {scalar_t__ wFormatTag; scalar_t__ nChannels; scalar_t__ wBitsPerSample; int nSamplesPerSec; } ;
typedef TYPE_4__ WAVEFORMATEX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
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
 scalar_t__ VAR_24 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(const WAVEFORMATEX *restrict VAR_25,
                        audio_sample_format_t *restrict VAR_26)
{
    VAR_26->i_rate = VAR_25->nSamplesPerSec;


    FUNC_2(VAR_25->wFormatTag == VAR_24);

    const WAVEFORMATEXTENSIBLE *VAR_27 = (void *)VAR_25;

    VAR_26->i_physical_channels = 0;
    if (VAR_27->dwChannelMask & VAR_10)
        VAR_26->i_physical_channels |= VAR_1;
    if (VAR_27->dwChannelMask & VAR_11)
        VAR_26->i_physical_channels |= VAR_3;
    if (VAR_27->dwChannelMask & VAR_9)
        VAR_26->i_physical_channels |= VAR_0;
    if (VAR_27->dwChannelMask & VAR_12)
        VAR_26->i_physical_channels |= VAR_2;

    FUNC_2(FUNC_3(VAR_27->dwChannelMask) == VAR_25->nChannels);

    if (FUNC_0(&VAR_27->SubFormat, &VAR_8))
    {
        switch (VAR_25->wBitsPerSample)
        {
            case 32:
                switch (VAR_27->Samples.wValidBitsPerSample)
                {
                    case 32:
                        VAR_26->i_format = VAR_22;
                        break;
                    case 24:



                        VAR_26->i_format = VAR_20;

                        break;
                    default:
                        return -1;
                }
                break;
            case 24:
                if (VAR_27->Samples.wValidBitsPerSample == 24)
                    VAR_26->i_format = VAR_21;
                else
                    return -1;
                break;
            case 16:
                if (VAR_27->Samples.wValidBitsPerSample == 16)
                    VAR_26->i_format = VAR_18;
                else
                    return -1;
                break;
            case 8:
                if (VAR_27->Samples.wValidBitsPerSample == 8)
                    VAR_26->i_format = VAR_23;
                else
                    return -1;
                break;
            default:
                return -1;
        }
    }
    else if (FUNC_0(&VAR_27->SubFormat, &VAR_6))
    {
        if (VAR_25->wBitsPerSample != VAR_27->Samples.wValidBitsPerSample)
            return -1;

        switch (VAR_25->wBitsPerSample)
        {
            case 64:
                VAR_26->i_format = VAR_16;
                break;
            case 32:
                VAR_26->i_format = VAR_15;
                break;
            default:
                return -1;
        }
    }

    else if (FUNC_0(&VAR_27->SubFormat, &VAR_5))
        VAR_26->i_format = VAR_14;
    else if (FUNC_0(&VAR_27->SubFormat, &VAR_7))
        VAR_26->i_format = VAR_17;
    else if (FUNC_0(&VAR_27->SubFormat, &VAR_4))
        VAR_26->i_format = VAR_13;
    else
        return -1;

    FUNC_1(VAR_26);
    if (VAR_25->nChannels != VAR_26->i_channels)
        return -1;

    return 0;
}
