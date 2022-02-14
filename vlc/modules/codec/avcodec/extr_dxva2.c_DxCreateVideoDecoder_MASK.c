
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


struct TYPE_23__ {TYPE_5__* sys; } ;
typedef TYPE_4__ vlc_va_t ;
struct TYPE_22__ {int decoder; } ;
struct TYPE_28__ {int ConfigBitstreamRaw; int guidConfigBitstreamEncryption; } ;
struct TYPE_24__ {int ** hw_surface; TYPE_3__ hw; TYPE_9__ cfg; TYPE_2__* selected_decoder; int d3ddec; int render; } ;
typedef TYPE_5__ vlc_va_sys_t ;
struct TYPE_25__ {scalar_t__ i_frame_rate; scalar_t__ i_frame_rate_base; int i_height; int i_width; } ;
typedef TYPE_6__ video_format_t ;
typedef int dsc ;
typedef unsigned int UINT ;
struct TYPE_27__ {scalar_t__ VideoTransferFunction; scalar_t__ VideoPrimaries; scalar_t__ VideoLighting; scalar_t__ VideoTransferMatrix; scalar_t__ NominalRange; scalar_t__ VideoChromaSubsampling; scalar_t__ SampleFormat; } ;
struct TYPE_20__ {scalar_t__ Numerator; scalar_t__ Denominator; } ;
struct TYPE_26__ {TYPE_8__ SampleFormat; scalar_t__ Reserved; int UABProtectionLevel; TYPE_1__ InputSampleFreq; TYPE_1__ OutputFrameFreq; int Format; int SampleHeight; int SampleWidth; } ;
struct TYPE_21__ {int guid; } ;
typedef int IDirect3DSurface9 ;
typedef int HRESULT ;
typedef TYPE_7__ DXVA2_VideoDesc ;
typedef TYPE_8__ DXVA2_ExtendedFormat ;
typedef TYPE_9__ DXVA2_ConfigPictureDecode ;


 int VAR_0 ;
 int FUNC_0 (TYPE_9__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ,size_t,int ,int ,int ,int ,int **,int *) ;
 int FUNC_4 (int ,int ,TYPE_7__*,TYPE_9__*,int **,size_t,int *) ;
 int FUNC_5 (int ,int ,TYPE_7__*,int *,unsigned int*,TYPE_9__**) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (TYPE_7__*,int) ;
 int FUNC_8 (TYPE_4__*,char*,...) ;
 int FUNC_9 (TYPE_4__*,char*,...) ;

__attribute__((used)) static int FUNC_10(vlc_va_t *VAR_7, int VAR_8,
                                const video_format_t *VAR_9, size_t VAR_10)
{
    vlc_va_sys_t *VAR_11 = VAR_7->sys;
    HRESULT VAR_12;

    VAR_12 = FUNC_3(VAR_11->d3ddec,
                                                         VAR_9->i_width,
                                                         VAR_9->i_height,
                                                         VAR_10 - 1,
                                                         VAR_11->render,
                                                         VAR_1,
                                                         0,
                                                         VAR_3,
                                                         VAR_11->hw_surface,
                                                         ((void*)0));
    if (FUNC_1(VAR_12)) {
        FUNC_9(VAR_7, "IDirectXVideoAccelerationService_CreateSurface %zu failed (hr=0x%lX)", VAR_10 - 1, VAR_12);
        return VAR_5;
    }
    FUNC_8(VAR_7, "IDirectXVideoAccelerationService_CreateSurface succeed with %zu surfaces (%dx%d)",
            VAR_10, VAR_9->i_width, VAR_9->i_height);

    IDirect3DSurface9 *VAR_13;
    VAR_12 = FUNC_3(VAR_11->d3ddec,
                                                         VAR_9->i_width,
                                                         VAR_9->i_height,
                                                         0,
                                                         VAR_11->render,
                                                         VAR_1,
                                                         0,
                                                         VAR_3,
                                                         &VAR_13,
                                                         ((void*)0));
    if (FUNC_1(VAR_12)) {
        FUNC_9(VAR_7, "extra buffer impossible, avoid a crash (hr=0x%lX)", VAR_12);
        goto error;
    }
    FUNC_2(VAR_13);


    DXVA2_VideoDesc VAR_14;
    FUNC_7(&VAR_14, sizeof(VAR_14));
    VAR_14.SampleWidth = VAR_9->i_width;
    VAR_14.SampleHeight = VAR_9->i_height;
    VAR_14.Format = VAR_11->render;
    if (VAR_9->i_frame_rate > 0 && VAR_9->i_frame_rate_base > 0) {
        VAR_14.InputSampleFreq.Numerator = VAR_9->i_frame_rate;
        VAR_14.InputSampleFreq.Denominator = VAR_9->i_frame_rate_base;
    } else {
        VAR_14.InputSampleFreq.Numerator = 0;
        VAR_14.InputSampleFreq.Denominator = 0;
    }
    VAR_14.OutputFrameFreq = VAR_14.InputSampleFreq;
    VAR_14.UABProtectionLevel = VAR_4;
    VAR_14.Reserved = 0;


    DXVA2_ExtendedFormat *VAR_15 = &VAR_14.SampleFormat;
    VAR_15->SampleFormat = 0;
    VAR_15->VideoChromaSubsampling = 0;
    VAR_15->NominalRange = 0;
    VAR_15->VideoTransferMatrix = 0;
    VAR_15->VideoLighting = 0;
    VAR_15->VideoPrimaries = 0;
    VAR_15->VideoTransferFunction = 0;


    UINT VAR_16 = 0;
    DXVA2_ConfigPictureDecode *VAR_17 = ((void*)0);
    VAR_12 = FUNC_5(VAR_11->d3ddec,
                                                              VAR_11->selected_decoder->guid,
                                                              &VAR_14,
                                                              ((void*)0),
                                                              &VAR_16,
                                                              &VAR_17);
    if (FUNC_1(VAR_12)) {
        FUNC_9(VAR_7, "IDirectXVideoDecoderService_GetDecoderConfigurations failed. (hr=0x%lX)", VAR_12);
        goto error;
    }
    FUNC_8(VAR_7, "we got %d decoder configurations", VAR_16);


    int VAR_18 = 0;
    for (unsigned VAR_19 = 0; VAR_19 < VAR_16; VAR_19++) {
        const DXVA2_ConfigPictureDecode *VAR_20 = &VAR_17[VAR_19];


        FUNC_8(VAR_7, "configuration[%d] ConfigBitstreamRaw %d",
                VAR_19, VAR_20->ConfigBitstreamRaw);


        int VAR_21;
        if (VAR_20->ConfigBitstreamRaw == 1)
            VAR_21 = 1;
        else if (VAR_8 == VAR_0 && VAR_20->ConfigBitstreamRaw == 2)
            VAR_21 = 2;
        else
            continue;
        if (FUNC_6(&VAR_20->guidConfigBitstreamEncryption, &VAR_2))
            VAR_21 += 16;

        if (VAR_18 < VAR_21) {
            VAR_11->cfg = *VAR_20;
            VAR_18 = VAR_21;
        }
    }
    FUNC_0(VAR_17);
    if (VAR_18 <= 0) {
        FUNC_9(VAR_7, "Failed to find a supported decoder configuration");
        goto error;
    }



    if (FUNC_1(FUNC_4(VAR_11->d3ddec,
                                                              VAR_11->selected_decoder->guid,
                                                              &VAR_14,
                                                              &VAR_11->cfg,
                                                              VAR_11->hw_surface,
                                                              VAR_10,
                                                              &VAR_11->hw.decoder))) {
        FUNC_9(VAR_7, "IDirectXVideoDecoderService_CreateVideoDecoder failed");
        goto error;
    }

    FUNC_8(VAR_7, "IDirectXVideoDecoderService_CreateVideoDecoder succeed");
    return VAR_6;
error:
    for (size_t VAR_22 = 0; VAR_22 < VAR_10; VAR_22++)
        FUNC_2( VAR_11->hw_surface[VAR_22] );
    return VAR_5;
}
