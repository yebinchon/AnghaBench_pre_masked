
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_fourcc_t ;
typedef int uint8_t ;
struct TYPE_8__ {int nChannels; unsigned int nSamplingRate; unsigned int nBitPerSample; unsigned int nSampleRate; unsigned int nBitsPerSample; unsigned int nBitRate; int nFrameLength; unsigned int nBlockAlign; unsigned int nBitsPerFrame; unsigned int nMaxBitRate; int nQuality; void* bDownmix; void* bManaged; int nAudioBandWidth; int nMinBitRate; int eFormat; int nNumRegions; int nCouplingStartRegion; int nCouplingQuantBits; int nSamplePerFrame; int nSuperBlockAlign; int nEncodeOptions; int eProfile; void* eChannelMode; int eAACStreamFormat; int eAACProfile; int nAACERtools; int nAACtools; int eBitType; void* bDTX; int eG726Mode; void* bPostFilter; void* bHiPassFilter; int eBitRate; int eAMRFrameFormat; int eAMRDTXMode; int eAMRBandMode; int * eChannelMapping; void* bInterleaved; int eEndian; int ePCMMode; int eNumData; } ;
struct TYPE_6__ {int nPortIndex; } ;
struct TYPE_7__ {TYPE_1__ common; TYPE_5__ vorbis; TYPE_5__ ra; TYPE_5__ wma; TYPE_5__ mp3; TYPE_5__ aac; TYPE_5__ g729; TYPE_5__ g726; TYPE_5__ g723; TYPE_5__ amr; TYPE_5__ adpcm; TYPE_5__ pcm; } ;
typedef TYPE_2__ OmxFormatParam ;
typedef int OMX_U32 ;
typedef int OMX_INDEXTYPE ;
typedef int OMX_HANDLETYPE ;
typedef int OMX_ERRORTYPE ;
typedef int OMX_AUDIO_CODINGTYPE ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
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
 void* VAR_23 ;
 int FUNC_1 (TYPE_5__) ;
 int VAR_24 ;
 int FUNC_2 (int ,int ,TYPE_2__*) ;
 void* VAR_25 ;
 int VAR_26 ;

OMX_ERRORTYPE FUNC_3(OMX_HANDLETYPE VAR_27,
    OmxFormatParam *VAR_28, OMX_U32 VAR_29, OMX_AUDIO_CODINGTYPE VAR_30,
    vlc_fourcc_t VAR_31, uint8_t VAR_32, unsigned int VAR_33,
    unsigned int VAR_34, unsigned int VAR_35, unsigned int VAR_36)
{
    OMX_INDEXTYPE VAR_37;

    switch(VAR_30)
    {
    case 131:
    case 136:
        FUNC_1(VAR_28->pcm);
        VAR_28->pcm.nChannels = VAR_32;
        VAR_28->pcm.nSamplingRate = VAR_33;
        VAR_28->pcm.eNumData = VAR_24;
        VAR_28->pcm.ePCMMode = VAR_17;
        VAR_28->pcm.eEndian = VAR_21;
        VAR_28->pcm.bInterleaved = VAR_25;
        VAR_28->pcm.nBitPerSample = VAR_35;
        VAR_28->pcm.eChannelMapping[0] = VAR_8;
        if(VAR_32 == 2)
        {
            VAR_28->pcm.eChannelMapping[0] = VAR_9;
            VAR_28->pcm.eChannelMapping[1] = VAR_12;
        }
        break;
    case 138:
        FUNC_1(VAR_28->adpcm);
        VAR_28->adpcm.nChannels = VAR_32;
        VAR_28->adpcm.nSampleRate = VAR_33;
        VAR_28->adpcm.nBitsPerSample = VAR_35;
        break;
    case 137:
        FUNC_1(VAR_28->amr);
        VAR_28->amr.nChannels = VAR_32;
        VAR_28->amr.nBitRate = VAR_34;
        if (VAR_31 == VAR_26)
            VAR_28->amr.eAMRBandMode = VAR_5;
        else
            VAR_28->amr.eAMRBandMode = VAR_4;
        VAR_28->amr.eAMRDTXMode = VAR_6;
        VAR_28->amr.eAMRFrameFormat = VAR_7;
        break;
    case 135:
        FUNC_1(VAR_28->g723);
        VAR_28->g723.nChannels = VAR_32;
        VAR_28->g723.bDTX = VAR_23;
        VAR_28->g723.eBitRate = VAR_13;
        VAR_28->g723.bHiPassFilter = VAR_25;
        VAR_28->g723.bPostFilter = VAR_25;
        break;
    case 134:
        FUNC_1(VAR_28->g726);
        VAR_28->g726.nChannels = VAR_32;
        VAR_28->g726.eG726Mode = VAR_14;
        break;
    case 133:
        FUNC_1(VAR_28->g729);
        VAR_28->g729.nChannels = VAR_32;
        VAR_28->g729.bDTX = VAR_23;
        VAR_28->g729.eBitType = VAR_15;
        break;
    case 139:
        FUNC_1(VAR_28->aac);
        VAR_28->aac.nChannels = VAR_32;
        VAR_28->aac.nSampleRate = VAR_33;
        VAR_28->aac.nBitRate = VAR_34;
        VAR_28->aac.nAudioBandWidth = 0;
        VAR_28->aac.nFrameLength = 1024;
        VAR_28->aac.nAACtools = VAR_3;
        VAR_28->aac.nAACERtools = VAR_0;
        VAR_28->aac.eAACProfile = VAR_1;
        VAR_28->aac.eAACStreamFormat = VAR_2;
        VAR_28->aac.eChannelMode = VAR_32 > 1 ?
            VAR_11 : VAR_10;
        break;
    case 132:
        FUNC_1(VAR_28->mp3);
        VAR_28->mp3.nChannels = VAR_32;
        VAR_28->mp3.nSampleRate = VAR_33;
        VAR_28->mp3.nBitRate = VAR_34;
        VAR_28->mp3.eChannelMode = VAR_32 > 1 ?
            VAR_11 : VAR_10;
        VAR_28->mp3.eFormat = VAR_16;
        break;
    case 128:
        FUNC_1(VAR_28->wma);
        VAR_28->wma.nChannels = VAR_32;
        VAR_28->wma.nBitRate = VAR_34;
        VAR_28->wma.eFormat = VAR_19;
        VAR_28->wma.eProfile = VAR_20;
        VAR_28->wma.nSamplingRate = VAR_33;
        VAR_28->wma.nBlockAlign = VAR_36;
        VAR_28->wma.nEncodeOptions = 0;
        VAR_28->wma.nSuperBlockAlign = 0;
        break;
    case 130:
        FUNC_1(VAR_28->ra);
        VAR_28->ra.nChannels = VAR_32;
        VAR_28->ra.nSamplingRate = VAR_33;
        VAR_28->ra.nBitsPerFrame = VAR_35;
        VAR_28->ra.nSamplePerFrame = 0;
        VAR_28->ra.nCouplingQuantBits = 0;
        VAR_28->ra.nCouplingStartRegion = 0;
        VAR_28->ra.nNumRegions = 0;
        VAR_28->ra.eFormat = VAR_18;
        break;
    case 129:
        FUNC_1(VAR_28->vorbis);
        VAR_28->vorbis.nChannels = VAR_32;
        VAR_28->vorbis.nBitRate = VAR_34;
        VAR_28->vorbis.nMinBitRate = 0;
        VAR_28->vorbis.nMaxBitRate = VAR_34;
        VAR_28->vorbis.nSampleRate = VAR_33;
        VAR_28->vorbis.nAudioBandWidth = 0;
        VAR_28->vorbis.nQuality = 3;
        VAR_28->vorbis.bManaged = VAR_23;
        VAR_28->vorbis.bDownmix = VAR_23;
        break;
    default:
        return VAR_22;
    }

    VAR_28->common.nPortIndex = VAR_29;

    VAR_37 = FUNC_0(VAR_30);
    return FUNC_2(VAR_27, VAR_37, VAR_28);
}
