
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_13__ ;
typedef struct TYPE_18__ TYPE_12__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


typedef int uint8_t ;
struct TYPE_28__ {int nChannels; int nBitRate; int nSampleRate; } ;
struct TYPE_27__ {int nChannels; int nSampleRate; int nBitRate; int eChannelMode; } ;
struct TYPE_26__ {int nChannels; int nSampleRate; int nBitRate; int eChannelMode; } ;
struct TYPE_25__ {int nChannels; } ;
struct TYPE_24__ {int nChannels; } ;
struct TYPE_23__ {int nChannels; } ;
struct TYPE_22__ {int nChannels; int nBitRate; } ;
struct TYPE_21__ {int nChannels; int nSampleRate; int nBitsPerSample; } ;
struct TYPE_20__ {int nChannels; int nSamplingRate; int nBitPerSample; } ;
struct TYPE_19__ {int nSize; int nPortIndex; } ;
struct TYPE_17__ {int nChannels; int nSamplingRate; int nBitsPerFrame; } ;
struct TYPE_16__ {int nChannels; int nBitRate; int nSamplingRate; int nBlockAlign; } ;
struct TYPE_18__ {TYPE_11__ ra; TYPE_10__ wma; TYPE_9__ vorbis; TYPE_8__ mp3; TYPE_7__ aac; TYPE_6__ g729; TYPE_5__ g726; TYPE_4__ g723; TYPE_3__ amr; TYPE_2__ adpcm; TYPE_1__ pcm; TYPE_13__ common; } ;
typedef TYPE_12__ OmxFormatParam ;
typedef int OMX_U32 ;
typedef int OMX_INDEXTYPE ;
typedef int OMX_HANDLETYPE ;
typedef scalar_t__ OMX_ERRORTYPE ;
typedef int OMX_AUDIO_CODINGTYPE ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (int ,int ,TYPE_12__*) ;
 int FUNC_3 (TYPE_13__) ;

OMX_ERRORTYPE FUNC_4(OMX_HANDLETYPE VAR_4,
    OmxFormatParam *VAR_5, OMX_U32 VAR_6, OMX_AUDIO_CODINGTYPE VAR_7,
    uint8_t *VAR_8, unsigned int *VAR_9,
    unsigned int *VAR_10, unsigned int *VAR_11, unsigned int *VAR_12)
{
    int VAR_13 = 0, VAR_14 = 0, VAR_15 = 0;
    int VAR_16 = 0, VAR_17 = 0;
    OMX_ERRORTYPE VAR_18;
    OMX_INDEXTYPE VAR_19;

    FUNC_3(VAR_5->common);
    VAR_5->common.nPortIndex = VAR_6;
    VAR_19 = FUNC_0(VAR_7);
    if(!VAR_19) return VAR_3;

    VAR_5->common.nSize = FUNC_1(VAR_19);
    VAR_18 = FUNC_2(VAR_4, VAR_19, VAR_5);
    if(VAR_18 != VAR_2) return VAR_18;

    switch(VAR_7)
    {
    case 131:
    case 136:
        VAR_13 = VAR_5->pcm.nChannels;
        VAR_14 = VAR_5->pcm.nSamplingRate;
        VAR_16 = VAR_5->pcm.nBitPerSample;
        break;
    case 138:
        VAR_13 = VAR_5->adpcm.nChannels;
        VAR_14 = VAR_5->adpcm.nSampleRate;
        VAR_16 = VAR_5->adpcm.nBitsPerSample;
        break;
    case 137:
        VAR_13 = VAR_5->amr.nChannels;
        VAR_15 = VAR_5->amr.nBitRate;
        VAR_14 = 8000;
        break;
    case 135:
        VAR_13 = VAR_5->g723.nChannels;
        break;
    case 134:
        VAR_13 = VAR_5->g726.nChannels;
        break;
    case 133:
        VAR_13 = VAR_5->g729.nChannels;
        break;
    case 139:
        VAR_13 = VAR_5->aac.nChannels;
        VAR_14 = VAR_5->aac.nSampleRate;
        VAR_15 = VAR_5->aac.nBitRate;
        VAR_13 = VAR_5->aac.eChannelMode == VAR_0 ? 2 : 1;
        break;
    case 132:
        VAR_13 = VAR_5->mp3.nChannels;
        VAR_14 = VAR_5->mp3.nSampleRate;
        VAR_15 = VAR_5->mp3.nBitRate;
        VAR_13 = VAR_5->mp3.eChannelMode == VAR_0 ? 2 : 1;
        break;
    case 129:
        VAR_13 = VAR_5->vorbis.nChannels;
        VAR_15 = VAR_5->vorbis.nBitRate;
        VAR_14 = VAR_5->vorbis.nSampleRate;
        break;
    case 128:
        VAR_13 = VAR_5->wma.nChannels;
        VAR_15 = VAR_5->wma.nBitRate;
        VAR_14 = VAR_5->wma.nSamplingRate;
        VAR_17 = VAR_5->wma.nBlockAlign;
        break;
    case 130:
        VAR_13 = VAR_5->ra.nChannels;
        VAR_14 = VAR_5->ra.nSamplingRate;
        VAR_16 = VAR_5->ra.nBitsPerFrame;
        break;
    default:
        return VAR_1;
    }

    if(VAR_8) *VAR_8 = VAR_13;
    if(VAR_9) *VAR_9 = VAR_14;
    if(VAR_10) *VAR_10 = VAR_15;
    if(VAR_11) *VAR_11 = VAR_16;
    if(VAR_12) *VAR_12 = VAR_17;
    return VAR_2;
}
