
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int i_format; int i_rate; int i_bytes_per_frame; int i_frame_length; int i_channels; } ;
typedef TYPE_3__ audio_sample_format_t ;
struct TYPE_9__ {int nChannels; int nSamplesPerSec; int wBitsPerSample; int nBlockAlign; int nAvgBytesPerSec; int cbSize; int wFormatTag; } ;
struct TYPE_8__ {int wValidBitsPerSample; } ;
struct TYPE_12__ {TYPE_2__ Format; TYPE_1__ Samples; void* dwChannelMask; int SubFormat; } ;
struct TYPE_11__ {int dwEncodedSamplesPerSec; scalar_t__ dwAverageBytesPerSec; int dwEncodedChannelCount; TYPE_5__ FormatExt; } ;
typedef TYPE_4__ WAVEFORMATEXTENSIBLE_IEC61937 ;
typedef TYPE_5__ WAVEFORMATEXTENSIBLE ;


 void* VAR_0 ;
 void* VAR_1 ;



 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(WAVEFORMATEXTENSIBLE_IEC61937 *restrict VAR_7,
                           audio_sample_format_t *restrict VAR_8)
{
    WAVEFORMATEXTENSIBLE *VAR_9 = &VAR_7->FormatExt;

    switch (VAR_8->i_format)
    {
    case 131:
        VAR_9->SubFormat = VAR_6;
        VAR_9->Format.nChannels = 8;
        VAR_9->dwChannelMask = VAR_1;
        VAR_8->i_rate = 768000;
        break;
    case 130:
        VAR_9->SubFormat = VAR_4;
        VAR_9->Format.nChannels = 2;
        VAR_9->dwChannelMask = VAR_0;
        break;
    case 128:
    case 129:
        VAR_9->SubFormat = VAR_5;
        VAR_9->Format.nChannels = 8;
        VAR_9->dwChannelMask = VAR_1;
        VAR_8->i_rate = 768000;
        break;
    default:
        FUNC_0();
    }
    VAR_9->Format.wFormatTag = VAR_3;
    VAR_9->Format.nSamplesPerSec = 192000;
    VAR_9->Format.wBitsPerSample = 16;
    VAR_9->Format.nBlockAlign = VAR_9->Format.wBitsPerSample / 8 * VAR_9->Format.nChannels;
    VAR_9->Format.nAvgBytesPerSec = VAR_9->Format.nSamplesPerSec * VAR_9->Format.nBlockAlign;
    VAR_9->Format.cbSize = sizeof (*VAR_7) - sizeof (VAR_9->Format);

    VAR_9->Samples.wValidBitsPerSample = VAR_9->Format.wBitsPerSample;

    VAR_7->dwEncodedSamplesPerSec = VAR_8->i_rate;
    VAR_7->dwEncodedChannelCount = VAR_8->i_channels;
    VAR_7->dwAverageBytesPerSec = 0;

    VAR_8->i_format = VAR_2;
    VAR_8->i_bytes_per_frame = VAR_9->Format.nBlockAlign;
    VAR_8->i_frame_length = 1;
}
