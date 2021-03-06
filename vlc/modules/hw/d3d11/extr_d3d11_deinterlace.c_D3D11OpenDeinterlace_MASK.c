
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_54__ TYPE_9__ ;
typedef struct TYPE_53__ TYPE_8__ ;
typedef struct TYPE_52__ TYPE_7__ ;
typedef struct TYPE_51__ TYPE_6__ ;
typedef struct TYPE_50__ TYPE_5__ ;
typedef struct TYPE_49__ TYPE_4__ ;
typedef struct TYPE_48__ TYPE_3__ ;
typedef struct TYPE_47__ TYPE_30__ ;
typedef struct TYPE_46__ TYPE_2__ ;
typedef struct TYPE_45__ TYPE_29__ ;
typedef struct TYPE_44__ TYPE_21__ ;
typedef struct TYPE_43__ TYPE_1__ ;
typedef struct TYPE_42__ TYPE_12__ ;
typedef struct TYPE_41__ TYPE_11__ ;
typedef struct TYPE_40__ TYPE_10__ ;


typedef int vlc_object_t ;
struct TYPE_50__ {scalar_t__ i_height; int i_width; } ;
typedef TYPE_5__ video_format_t ;
typedef int texDesc ;
struct TYPE_46__ {int b_use_frame_history; scalar_t__ b_double_rate; } ;
struct filter_mode_t {int i_mode; TYPE_2__ settings; int psz_mode; } ;
struct TYPE_49__ {TYPE_5__ video; } ;
struct TYPE_42__ {scalar_t__ i_height; int i_chroma; } ;
struct TYPE_48__ {TYPE_12__ video; } ;
struct TYPE_51__ {TYPE_7__* p_sys; int pf_flush; int pf_video_filter; TYPE_4__ fmt_out; TYPE_3__ fmt_in; int b_allow_fmt_out_change; } ;
typedef TYPE_6__ filter_t ;
struct TYPE_47__ {int * d3dcontext; int d3ddevice; } ;
struct TYPE_45__ {int procEnumerator; int d3dviddev; int * videoProcessor; } ;
struct TYPE_44__ {int pf_render_single_pic; int pf_render_ordered; TYPE_2__ settings; } ;
struct TYPE_52__ {int hd3d; TYPE_30__ d3d_dev; TYPE_29__ d3d_proc; scalar_t__ outTexture; scalar_t__ processorOutput; TYPE_21__ context; int outResource; } ;
typedef TYPE_7__ filter_sys_t ;
typedef scalar_t__ UINT ;
struct TYPE_54__ {int ViewDimension; } ;
struct TYPE_53__ {int ProcessorCaps; scalar_t__ PastFrames; scalar_t__ FutureFrames; } ;
struct TYPE_43__ {int Count; } ;
struct TYPE_41__ {scalar_t__ Height; int MipLevels; int ArraySize; int Width; void* Usage; int BindFlags; int Format; scalar_t__ CPUAccessFlags; scalar_t__ MiscFlags; TYPE_1__ SampleDesc; } ;
struct TYPE_40__ {scalar_t__ RateConversionCapsCount; } ;
typedef int HRESULT ;
typedef TYPE_8__ D3D11_VIDEO_PROCESSOR_RATE_CONVERSION_CAPS ;
typedef TYPE_9__ D3D11_VIDEO_PROCESSOR_OUTPUT_VIEW_DESC ;
typedef TYPE_10__ D3D11_VIDEO_PROCESSOR_CAPS ;
typedef TYPE_11__ D3D11_TEXTURE2D_DESC ;


 int D3D11_BIND_RENDER_TARGET ;
 scalar_t__ D3D11_Create (TYPE_6__*,int *,int) ;
 scalar_t__ D3D11_CreateProcessor (TYPE_6__*,TYPE_30__*,int ,TYPE_5__*,TYPE_5__*,TYPE_29__*) ;
 int D3D11_Destroy (int *) ;
 int D3D11_FilterHoldInstance (TYPE_6__*,TYPE_30__*,TYPE_11__*) ;
 int D3D11_FilterReleaseInstance (TYPE_30__*) ;
 int D3D11_ReleaseProcessor (TYPE_29__*) ;
 void* D3D11_USAGE_DEFAULT ;
 int D3D11_VIDEO_FRAME_FORMAT_INTERLACED_TOP_FIELD_FIRST ;
 scalar_t__ D3D11_VIDEO_PROCESSOR_FORMAT_SUPPORT_INPUT ;
 scalar_t__ D3D11_VIDEO_PROCESSOR_FORMAT_SUPPORT_OUTPUT ;
 int D3D11_VIDEO_PROCESSOR_PROCESSOR_CAPS_DEINTERLACE_BOB ;
 int D3D11_VPOV_DIMENSION_TEXTURE2D ;
 int Deinterlace ;
 int DxgiFormatToStr (int ) ;
 scalar_t__ FAILED (int ) ;
 int Flush ;
 int GetDeinterlacingOutput (TYPE_21__*,TYPE_5__*,TYPE_12__*) ;
 struct filter_mode_t* GetFilterMode (char*) ;
 int ID3D11Device_CreateTexture2D (int ,TYPE_11__*,int *,scalar_t__*) ;
 int ID3D11Texture2D_Release (scalar_t__) ;
 int ID3D11VideoDevice_CreateVideoProcessor (int ,int ,scalar_t__,int **) ;
 int ID3D11VideoDevice_CreateVideoProcessorOutputView (int ,int ,int ,TYPE_9__*,scalar_t__*) ;
 int ID3D11VideoProcessorEnumerator_CheckVideoProcessorFormat (int ,int ,scalar_t__*) ;
 int ID3D11VideoProcessorEnumerator_GetVideoProcessorCaps (int ,TYPE_10__*) ;
 int ID3D11VideoProcessorEnumerator_GetVideoProcessorRateConversionCaps (int ,scalar_t__,TYPE_8__*) ;
 int ID3D11VideoProcessorOutputView_Release (scalar_t__) ;
 int InitDeinterlacingContext (TYPE_21__*) ;
 int RenderPic ;
 int RenderSinglePic ;
 scalar_t__ SUCCEEDED (int ) ;
 int VLC_EGENERIC ;
 int VLC_ENOMEM ;
 int VLC_ENOOBJ ;
 scalar_t__ VLC_SUCCESS ;
 int ZeroMemory (TYPE_11__*,int) ;
 int free (TYPE_7__*) ;
 int is_d3d11_opaque (int ) ;
 TYPE_7__* malloc (int) ;
 int memset (TYPE_7__*,int ,int) ;
 int msg_Dbg (TYPE_6__*,char*,...) ;
 int msg_Err (TYPE_6__*,char*,...) ;
 scalar_t__ strcmp (int ,char*) ;
 scalar_t__ unlikely (int) ;
 char* var_InheritString (TYPE_6__*,char*) ;
 int video_format_IsSimilar (TYPE_12__*,TYPE_5__*) ;

int D3D11OpenDeinterlace(vlc_object_t *obj)
{
    filter_t *filter = (filter_t *)obj;
    HRESULT hr;

    if (!is_d3d11_opaque(filter->fmt_in.video.i_chroma))
        return VLC_EGENERIC;
    if (!video_format_IsSimilar(&filter->fmt_in.video, &filter->fmt_out.video))
        return VLC_EGENERIC;

    filter_sys_t *sys = malloc(sizeof (*sys));
    if (unlikely(sys == ((void*)0)))
        return VLC_ENOMEM;
    memset(sys, 0, sizeof (*sys));

    if ( unlikely(D3D11_Create(filter, &sys->hd3d, 0) != VLC_SUCCESS ))
    {
       msg_Err(filter, "Could not access the d3d11.");
       goto error;
    }

    D3D11_TEXTURE2D_DESC dstDesc;
    D3D11_FilterHoldInstance(filter, &sys->d3d_dev, &dstDesc);
    if (unlikely(sys->d3d_dev.d3dcontext==((void*)0)))
    {
        msg_Dbg(filter, "Filter without a context");
        free(sys);
        return VLC_ENOOBJ;
    }

    video_format_t fmt_out = filter->fmt_out.video;
    fmt_out.i_width = dstDesc.Width;
    fmt_out.i_height = dstDesc.Height;

    if (D3D11_CreateProcessor(filter, &sys->d3d_dev, D3D11_VIDEO_FRAME_FORMAT_INTERLACED_TOP_FIELD_FIRST,
                              &filter->fmt_out.video, &fmt_out, &sys->d3d_proc) != VLC_SUCCESS)
        goto error;

    UINT flags;
    hr = ID3D11VideoProcessorEnumerator_CheckVideoProcessorFormat(sys->d3d_proc.procEnumerator, dstDesc.Format, &flags);
    if (!SUCCEEDED(hr))
    {
        msg_Dbg(filter, "can't read processor support for %s", DxgiFormatToStr(dstDesc.Format));
        goto error;
    }
    if ( !(flags & D3D11_VIDEO_PROCESSOR_FORMAT_SUPPORT_INPUT) ||
         !(flags & D3D11_VIDEO_PROCESSOR_FORMAT_SUPPORT_OUTPUT) )
    {
        msg_Dbg(filter, "deinterlacing %s is not supported", DxgiFormatToStr(dstDesc.Format));
        goto error;
    }

    D3D11_VIDEO_PROCESSOR_CAPS processorCaps;
    hr = ID3D11VideoProcessorEnumerator_GetVideoProcessorCaps(sys->d3d_proc.procEnumerator, &processorCaps);
    if (FAILED(hr))
        goto error;

    char *psz_mode = var_InheritString( filter, "deinterlace-mode" );
    const struct filter_mode_t *p_mode = GetFilterMode(psz_mode);
    if (p_mode == ((void*)0))
    {
        msg_Dbg(filter, "unknown mode %s, trying blend", psz_mode);
        p_mode = GetFilterMode("blend");
    }
    if (strcmp(p_mode->psz_mode, psz_mode))
        msg_Dbg(filter, "using %s deinterlacing mode", p_mode->psz_mode);

    D3D11_VIDEO_PROCESSOR_RATE_CONVERSION_CAPS rateCaps;
    for (UINT type = 0; type < processorCaps.RateConversionCapsCount; ++type)
    {
        ID3D11VideoProcessorEnumerator_GetVideoProcessorRateConversionCaps(sys->d3d_proc.procEnumerator, type, &rateCaps);
        if (!(rateCaps.ProcessorCaps & p_mode->i_mode))
            continue;

        hr = ID3D11VideoDevice_CreateVideoProcessor(sys->d3d_proc.d3dviddev,
                                                    sys->d3d_proc.procEnumerator, type, &sys->d3d_proc.videoProcessor);
        if (SUCCEEDED(hr))
            break;
        sys->d3d_proc.videoProcessor = ((void*)0);
    }
    if ( sys->d3d_proc.videoProcessor==((void*)0) &&
         p_mode->i_mode != D3D11_VIDEO_PROCESSOR_PROCESSOR_CAPS_DEINTERLACE_BOB )
    {
        msg_Dbg(filter, "mode %s not available, trying bob", psz_mode);
        p_mode = GetFilterMode("bob");
        for (UINT type = 0; type < processorCaps.RateConversionCapsCount; ++type)
        {
            ID3D11VideoProcessorEnumerator_GetVideoProcessorRateConversionCaps(sys->d3d_proc.procEnumerator, type, &rateCaps);
            if (!(rateCaps.ProcessorCaps & D3D11_VIDEO_PROCESSOR_PROCESSOR_CAPS_DEINTERLACE_BOB))
                continue;

            hr = ID3D11VideoDevice_CreateVideoProcessor(sys->d3d_proc.d3dviddev,
                                                        sys->d3d_proc.procEnumerator, type, &sys->d3d_proc.videoProcessor);
            if (SUCCEEDED(hr))
                break;
            sys->d3d_proc.videoProcessor = ((void*)0);
        }
    }

    if (sys->d3d_proc.videoProcessor == ((void*)0))
    {
        msg_Dbg(filter, "couldn't find a deinterlacing filter");
        goto error;
    }

    D3D11_TEXTURE2D_DESC texDesc;
    ZeroMemory(&texDesc, sizeof(texDesc));
    texDesc.MipLevels = 1;
    texDesc.SampleDesc.Count = 1;
    texDesc.MiscFlags = 0;
    texDesc.Usage = D3D11_USAGE_DEFAULT;
    texDesc.CPUAccessFlags = 0;
    texDesc.Format = dstDesc.Format;
    texDesc.BindFlags = D3D11_BIND_RENDER_TARGET;
    texDesc.Usage = D3D11_USAGE_DEFAULT;
    texDesc.ArraySize = 1;
    texDesc.Height = dstDesc.Height;
    texDesc.Width = dstDesc.Width;

    hr = ID3D11Device_CreateTexture2D( sys->d3d_dev.d3ddevice, &texDesc, ((void*)0), &sys->outTexture );
    if (FAILED(hr)) {
        msg_Err(filter, "CreateTexture2D failed. (hr=0x%lX)", hr);
        goto error;
    }

    D3D11_VIDEO_PROCESSOR_OUTPUT_VIEW_DESC outDesc = {
        .ViewDimension = D3D11_VPOV_DIMENSION_TEXTURE2D,
    };

    hr = ID3D11VideoDevice_CreateVideoProcessorOutputView(sys->d3d_proc.d3dviddev,
                                                         sys->outResource,
                                                         sys->d3d_proc.procEnumerator,
                                                         &outDesc,
                                                         &sys->processorOutput);
    if (FAILED(hr))
    {
        msg_Dbg(filter,"Failed to create processor output. (hr=0x%lX)", hr);
        goto error;
    }

    InitDeinterlacingContext( &sys->context );

    sys->context.settings = p_mode->settings;
    sys->context.settings.b_use_frame_history = rateCaps.PastFrames != 0 ||
        rateCaps.FutureFrames != 0;
    if (sys->context.settings.b_use_frame_history != p_mode->settings.b_use_frame_history)
        msg_Dbg(filter, "deinterlacing not using frame history as requested");
    if (sys->context.settings.b_double_rate)
        sys->context.pf_render_ordered = RenderPic;
    else
        sys->context.pf_render_single_pic = RenderSinglePic;

    video_format_t out_fmt;
    GetDeinterlacingOutput( &sys->context, &out_fmt, &filter->fmt_in.video );
    if( !filter->b_allow_fmt_out_change &&
         out_fmt.i_height != filter->fmt_in.video.i_height )
    {
       goto error;
    }

    filter->fmt_out.video = out_fmt;
    filter->pf_video_filter = Deinterlace;
    filter->pf_flush = Flush;
    filter->p_sys = sys;

    return VLC_SUCCESS;
error:
    if (sys->processorOutput)
        ID3D11VideoProcessorOutputView_Release(sys->processorOutput);
    if (sys->outTexture)
        ID3D11Texture2D_Release(sys->outTexture);
    D3D11_ReleaseProcessor(&sys->d3d_proc);
    if (sys->d3d_dev.d3dcontext)
        D3D11_FilterReleaseInstance(&sys->d3d_dev);
    D3D11_Destroy(&sys->hd3d);
    free(sys);

    return VLC_EGENERIC;
}
