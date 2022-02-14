
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int i_format; int i_rate; int i_bytes_per_frame; int i_frame_length; } ;
typedef TYPE_3__ audio_sample_format_t ;
struct TYPE_8__ {int nChannels; int nSamplesPerSec; int wBitsPerSample; int nBlockAlign; int nAvgBytesPerSec; int cbSize; int wFormatTag; } ;
struct TYPE_7__ {int wValidBitsPerSample; } ;
struct TYPE_10__ {int dwChannelMask; TYPE_2__ Format; TYPE_1__ Samples; int SubFormat; } ;
typedef TYPE_4__ WAVEFORMATEXTENSIBLE ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(WAVEFORMATEXTENSIBLE *restrict VAR_6,
                            audio_sample_format_t *restrict VAR_7)
{
    switch (VAR_7->i_format)
    {
    case 130:
        if (VAR_7->i_rate < 48000)
        {

            VAR_6->SubFormat = VAR_5;
        }
        else
            VAR_6->SubFormat = VAR_4;
        break;
    case 128:
    case 129:
    case 131:
        VAR_6->SubFormat = VAR_3;
        break;
    default:
        FUNC_0();
    }

    VAR_6->Format.wFormatTag = VAR_2;
    VAR_6->Format.nChannels = 2;
    VAR_6->Format.nSamplesPerSec = VAR_7->i_rate;
    VAR_6->Format.wBitsPerSample = 16;
    VAR_6->Format.nBlockAlign = 4;
    VAR_6->Format.nAvgBytesPerSec = VAR_6->Format.nSamplesPerSec * VAR_6->Format.nBlockAlign;
    VAR_6->Format.cbSize = sizeof (*VAR_6) - sizeof (VAR_6->Format);

    VAR_6->Samples.wValidBitsPerSample = VAR_6->Format.wBitsPerSample;

    VAR_6->dwChannelMask = VAR_0 | VAR_1;

    VAR_7->i_format = 128;
    VAR_7->i_bytes_per_frame = VAR_6->Format.nBlockAlign;
    VAR_7->i_frame_length = 1;
}
