
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int i_format; int i_rate; int i_bytes_per_frame; int i_physical_channels; int i_bitspersample; int i_channels; } ;
typedef TYPE_3__ audio_sample_format_t ;
struct TYPE_9__ {int wValidBitsPerSample; } ;
struct TYPE_8__ {int nSamplesPerSec; int nAvgBytesPerSec; int nBlockAlign; int cbSize; int wBitsPerSample; int nChannels; int wFormatTag; } ;
struct TYPE_11__ {int dwChannelMask; TYPE_2__ Samples; TYPE_1__ Format; void* SubFormat; } ;
typedef TYPE_4__ WAVEFORMATEXTENSIBLE ;


 void* VAR_0 ;
 void* VAR_1 ;




 int VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 int * VAR_3 ;
 int* VAR_4 ;

__attribute__((used)) static void FUNC_1(WAVEFORMATEXTENSIBLE *restrict VAR_5,
                       audio_sample_format_t *restrict VAR_6)
{
    switch (VAR_6->i_format)
    {
        case 130:
            VAR_6->i_format = 131;

        case 131:
            VAR_5->SubFormat = VAR_0;
            break;

        case 128:
            VAR_6->i_format = 129;

        case 129:
            VAR_5->SubFormat = VAR_1;
            break;

        default:
            VAR_6->i_format = 131;
            VAR_5->SubFormat = VAR_0;
            break;
    }
    FUNC_0 (VAR_6);

    VAR_5->Format.wFormatTag = VAR_2;
    VAR_5->Format.nChannels = VAR_6->i_channels;
    VAR_5->Format.nSamplesPerSec = VAR_6->i_rate;
    VAR_5->Format.nAvgBytesPerSec = VAR_6->i_bytes_per_frame * VAR_6->i_rate;
    VAR_5->Format.nBlockAlign = VAR_6->i_bytes_per_frame;
    VAR_5->Format.wBitsPerSample = VAR_6->i_bitspersample;
    VAR_5->Format.cbSize = sizeof (*VAR_5) - sizeof (VAR_5->Format);

    VAR_5->Samples.wValidBitsPerSample = VAR_6->i_bitspersample;

    VAR_5->dwChannelMask = 0;
    for (unsigned VAR_7 = 0; VAR_4[VAR_7]; VAR_7++)
        if (VAR_6->i_physical_channels & VAR_4[VAR_7])
            VAR_5->dwChannelMask |= VAR_3[VAR_7];
}
