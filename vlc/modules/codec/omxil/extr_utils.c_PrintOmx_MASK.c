
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int vlc_fourcc_t ;
typedef int uint8_t ;
typedef int decoder_t ;
struct TYPE_13__ {scalar_t__ eEncoding; } ;
struct TYPE_12__ {scalar_t__ nSliceHeight; scalar_t__ nStride; scalar_t__ eColorFormat; scalar_t__ eCompressionFormat; scalar_t__ xFramerate; scalar_t__ nFrameHeight; scalar_t__ nFrameWidth; } ;
struct TYPE_14__ {TYPE_2__ audio; TYPE_1__ video; } ;
struct TYPE_15__ {unsigned int nPorts; scalar_t__ nStartPortNumber; scalar_t__ nPortIndex; scalar_t__ eDir; int eDomain; TYPE_3__ format; scalar_t__ nHeight; scalar_t__ nWidth; scalar_t__ nTop; scalar_t__ nLeft; scalar_t__ bEnabled; scalar_t__ nBufferAlignment; scalar_t__ bBuffersContiguous; scalar_t__ nBufferSize; scalar_t__ nBufferCountMin; scalar_t__ nBufferCountActual; scalar_t__ nU32; } ;
typedef int OmxFormatParam ;
typedef scalar_t__ OMX_U32 ;
typedef TYPE_4__* OMX_PTR ;
typedef TYPE_4__ OMX_PORT_PARAM_TYPE ;
typedef TYPE_4__ OMX_PARAM_U32TYPE ;
typedef TYPE_4__ OMX_PARAM_PORTDEFINITIONTYPE ;
typedef int OMX_HANDLETYPE ;
typedef scalar_t__ OMX_ERRORTYPE ;
typedef TYPE_4__ OMX_CONFIG_RECTTYPE ;


 int FUNC_0 (int ,int *,scalar_t__,scalar_t__,int *,unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;
 int FUNC_1 (scalar_t__,int *,char const**) ;
 int FUNC_2 (scalar_t__,int *,char const**) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (int ,int ,TYPE_4__*) ;
 scalar_t__ FUNC_4 (int ,scalar_t__,TYPE_4__*) ;
 int FUNC_5 (TYPE_4__) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;


 int FUNC_6 (scalar_t__,int *,char const**) ;
 int FUNC_7 (int *,char*,...) ;

void FUNC_8(decoder_t *VAR_7, OMX_HANDLETYPE VAR_8, OMX_U32 VAR_9)
{
    OMX_PARAM_PORTDEFINITIONTYPE VAR_10;
    OMX_PORT_PARAM_TYPE VAR_11;
    OMX_ERRORTYPE VAR_12;
    unsigned int VAR_13, VAR_14;


    FUNC_5(VAR_11);
    FUNC_5(VAR_10);

    for(VAR_13 = 0; VAR_13 < 3; VAR_13++)
    {
        VAR_12 = FUNC_4(VAR_8, VAR_4 + VAR_13, &VAR_11);
        if(VAR_12 != VAR_2) continue;

        if(VAR_9 == VAR_0)
            FUNC_7( VAR_7, "found %i %s ports", (int)VAR_11.nPorts,
                     VAR_13 == 0 ? "audio" : VAR_13 == 1 ? "image" : "video" );

        for(VAR_14 = 0; VAR_14 < VAR_11.nPorts; VAR_14++)
        {
            unsigned int VAR_15, VAR_16;
            unsigned int VAR_17, VAR_18;
            uint8_t VAR_19;
            OmxFormatParam VAR_20;
            vlc_fourcc_t VAR_21;
            const char *VAR_22;
            OMX_CONFIG_RECTTYPE VAR_23;

            if(VAR_9 != VAR_0 && VAR_9 != VAR_11.nStartPortNumber + VAR_14)
                continue;


            VAR_10.nPortIndex = VAR_11.nStartPortNumber + VAR_14;
            VAR_12 = FUNC_4(VAR_8, VAR_6,
                                      &VAR_10);
            if(VAR_12 != VAR_2) continue;

            OMX_PARAM_U32TYPE VAR_24;
            FUNC_5(VAR_24);
            VAR_24.nPortIndex = VAR_11.nStartPortNumber + VAR_14;
            VAR_12 = FUNC_4(VAR_8, VAR_5,
                                         (OMX_PTR)&VAR_24);

            FUNC_7( VAR_7, "-> %s %i (%i streams) (%i:%i:%i buffers) (%i,%i) %s",
                     VAR_10.eDir == VAR_1 ? "output" : "input",
                     (int)VAR_10.nPortIndex, (int)VAR_24.nU32,
                     (int)VAR_10.nBufferCountActual,
                     (int)VAR_10.nBufferCountMin, (int)VAR_10.nBufferSize,
                     (int)VAR_10.bBuffersContiguous,
                     (int)VAR_10.nBufferAlignment,
                     VAR_10.bEnabled ? "enabled" : "disabled" );

            switch(VAR_10.eDomain)
            {
            case 128:

                if(VAR_10.format.video.eCompressionFormat)
                    FUNC_2( VAR_10.format.video.eCompressionFormat,
                                       &VAR_21, &VAR_22 );
                else
                    FUNC_1( VAR_10.format.video.eColorFormat,
                                        &VAR_21, &VAR_22 );

                FUNC_5(VAR_23);
                VAR_23.nPortIndex = VAR_10.nPortIndex;
                VAR_12 = FUNC_3(VAR_8, VAR_3, &VAR_23);
                if (VAR_12 != VAR_2)
                {
                    VAR_23.nLeft = VAR_23.nTop = 0;
                    VAR_23.nWidth = VAR_10.format.video.nFrameWidth;
                    VAR_23.nHeight = VAR_10.format.video.nFrameHeight;
                }

                FUNC_7( VAR_7, "  -> video %s %ix%i@%.2f (%i,%i) (%i,%i) (%i,%i,%i,%i)", VAR_22,
                         (int)VAR_10.format.video.nFrameWidth,
                         (int)VAR_10.format.video.nFrameHeight,
                         (float)VAR_10.format.video.xFramerate/(float)(1<<16),
                         (int)VAR_10.format.video.eCompressionFormat,
                         (int)VAR_10.format.video.eColorFormat,
                         (int)VAR_10.format.video.nStride,
                         (int)VAR_10.format.video.nSliceHeight,
                         (int)VAR_23.nLeft, (int)VAR_23.nTop,
                         (int)VAR_23.nWidth, (int)VAR_23.nHeight);
                break;

            case 129:

                FUNC_6( VAR_10.format.audio.eEncoding,
                                   &VAR_21, &VAR_22 );

                FUNC_0(VAR_8, &VAR_20,
                                   VAR_10.nPortIndex,
                                   VAR_10.format.audio.eEncoding,
                                   &VAR_19, &VAR_15, &VAR_16,
                                   &VAR_17, &VAR_18);

                FUNC_7( VAR_7, "  -> audio %s (%i) %i,%i,%i,%i,%i", VAR_22,
                         (int)VAR_10.format.audio.eEncoding,
                         VAR_19, VAR_15, VAR_16, VAR_17,
                         VAR_18);
                break;

            default: break;
            }
        }
    }
}
