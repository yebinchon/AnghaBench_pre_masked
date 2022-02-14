
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ i_channels; int i_physical_channels; int i_format; int i_rate; } ;
typedef TYPE_2__ audio_sample_format_t ;
struct TYPE_8__ {int wValidBitsPerSample; } ;
struct TYPE_10__ {int dwChannelMask; TYPE_1__ Samples; int SubFormat; } ;
typedef TYPE_3__ WAVEFORMATEXTENSIBLE ;
struct TYPE_11__ {scalar_t__ wFormatTag; int wBitsPerSample; scalar_t__ nChannels; int nSamplesPerSec; } ;
typedef TYPE_4__ WAVEFORMATEX ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (TYPE_2__*) ;
 int* VAR_7 ;
 int * VAR_8 ;

__attribute__((used)) static int FUNC_2(const WAVEFORMATEX *restrict VAR_9,
                        audio_sample_format_t *restrict VAR_10)
{
    VAR_10->i_rate = VAR_9->nSamplesPerSec;
    VAR_10->i_physical_channels = 0;

    if (VAR_9->wFormatTag == VAR_6)
    {
        const WAVEFORMATEXTENSIBLE *VAR_11 = (void *)VAR_9;

        if (FUNC_0(&VAR_11->SubFormat, &VAR_0))
        {
            switch (VAR_9->wBitsPerSample)
            {
                case 64:
                    VAR_10->i_format = VAR_3;
                    break;
                case 32:
                    VAR_10->i_format = VAR_2;
                    break;
                default:
                    return -1;
            }
        }
        else if (FUNC_0(&VAR_11->SubFormat, &VAR_1))
        {
            switch (VAR_9->wBitsPerSample)
            {
                case 32:
                    VAR_10->i_format = VAR_5;
                    break;
                case 16:
                    VAR_10->i_format = VAR_4;
                    break;
                default:
                    return -1;
            }
        }

        if (VAR_11->Samples.wValidBitsPerSample != VAR_9->wBitsPerSample)
            return -1;

        for (unsigned VAR_12 = 0; VAR_7[VAR_12]; VAR_12++)
            if (VAR_11->dwChannelMask & VAR_7[VAR_12])
                VAR_10->i_physical_channels |= VAR_8[VAR_12];
    }
    else
        return -1;

    FUNC_1 (VAR_10);

    if (VAR_9->nChannels != VAR_10->i_channels)
        return -1;
    return 0;
}
