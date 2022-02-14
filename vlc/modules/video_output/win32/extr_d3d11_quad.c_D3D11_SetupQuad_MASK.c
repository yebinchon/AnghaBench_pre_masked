
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_11__ ;


typedef int vlc_object_t ;
typedef int video_orientation_t ;
struct TYPE_23__ {int i_visible_width; int i_width; float i_visible_height; float i_height; int space; int primaries; } ;
typedef TYPE_3__ video_format_t ;
struct TYPE_24__ {int primaries; TYPE_11__* pixelFormat; scalar_t__ luminance_peak; } ;
typedef TYPE_4__ display_info_t ;
struct TYPE_21__ {int context; int formatTexture; } ;
struct TYPE_27__ {float LuminanceScale; double Opacity; double BoundaryX; double BoundaryY; float* WhitePoint; float* Colorspace; int Primaries; } ;
struct TYPE_25__ {TYPE_11__* textureFormat; int resourceCount; TYPE_2__* cropViewport; TYPE_1__ picSys; TYPE_7__ shaderConstants; } ;
typedef TYPE_5__ d3d_quad_t ;
struct TYPE_26__ {int d3dcontext; } ;
typedef TYPE_6__ d3d11_device_t ;
struct TYPE_22__ {float MinDepth; float MaxDepth; } ;
struct TYPE_20__ {int bitsPerChannel; int formatTexture; } ;
typedef int RECT ;
typedef TYPE_7__ PS_COLOR_TRANSFORM ;
typedef float FLOAT ;






 size_t VAR_0 ;
 int FUNC_0 (int *,TYPE_6__*,TYPE_5__*,int const*,int ) ;
 int FUNC_1 (TYPE_11__*) ;
 float FUNC_2 (int *,TYPE_3__ const*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_11__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int *,TYPE_6__*,TYPE_5__*,int ,TYPE_7__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (float*,float const*,int) ;

int FUNC_8(vlc_object_t *VAR_5, d3d11_device_t *VAR_6, const video_format_t *VAR_7, d3d_quad_t *VAR_8,
                    const display_info_t *VAR_9, const RECT *VAR_10,
                    video_orientation_t VAR_11)
{
    const bool VAR_12 = FUNC_5(VAR_8->textureFormat);

    VAR_8->shaderConstants.LuminanceScale = (float)VAR_9->luminance_peak / FUNC_2(VAR_5, VAR_7);


    VAR_8->shaderConstants.Opacity = 1.0;
    if (VAR_7->i_visible_width == VAR_7->i_width)
        VAR_8->shaderConstants.BoundaryX = 1.0;
    else
        VAR_8->shaderConstants.BoundaryX = (FLOAT) (VAR_7->i_visible_width - 1) / VAR_7->i_width;
    if (VAR_7->i_visible_height == VAR_7->i_height)
        VAR_8->shaderConstants.BoundaryY = 1.0;
    else
        VAR_8->shaderConstants.BoundaryY = (FLOAT) (VAR_7->i_visible_height - 1) / VAR_7->i_height;

    FUNC_6(VAR_5, VAR_6, VAR_8, VAR_2, &VAR_8->shaderConstants);

    FLOAT VAR_13 = 0.f;
    FLOAT VAR_14 = 0.f;
    if (!VAR_12)
    {
        switch (VAR_8->textureFormat->bitsPerChannel)
        {
        case 8:

            VAR_13 = 16.f / 255.f;
            VAR_14 = 128.f / 255.f;
            break;
        case 10:

            VAR_13 = 64.f / 1023.f;
            VAR_14 = 512.f / 1023.f;
            break;
        case 12:

            VAR_13 = 256.f / 4095.f;
            VAR_14 = 2048.f / 4095.f;
            break;
        default:

            VAR_13 = 16.f / 256.f;
            VAR_14 = 128.f / 256.f;
            break;
        }
    }

    static const FLOAT VAR_15[4 * 4] = {
        1.f, 0.f, 0.f, 0.f,
        0.f, 1.f, 0.f, 0.f,
        0.f, 0.f, 1.f, 0.f,
        0.f, 0.f, 0.f, 1.f,
    };



    static const FLOAT VAR_16[4*4] = {
        1.164383561643836f, 0.f, 1.596026785714286f, 0.f,
        1.164383561643836f, -0.391762290094914f, -0.812967647237771f, 0.f,
        1.164383561643836f, 2.017232142857142f, 0.f, 0.f,
                       0.f, 0.f, 0.f, 1.f,
    };

    static const FLOAT VAR_17[4*4] = {
        0.299000f, 0.587000f, 0.114000f, 0.f,
       -0.168736f, -0.331264f, 0.500000f, 0.f,
        0.500000f, -0.418688f, -0.081312f, 0.f,
              0.f, 0.f, 0.f, 1.f,
    };


    static const FLOAT VAR_18[4*4] = {
        1.164383561643836f, 0.f, 1.792741071428571f, 0.f,
        1.164383561643836f, -0.213248614273730f, -0.532909328559444f, 0.f,
        1.164383561643836f, 2.112401785714286f, 0.f, 0.f,
                       0.f, 0.f, 0.f, 1.f,
    };

    static const FLOAT VAR_19[4*4] = {
        1.164383561643836f, 0.000000000000f, 1.678674107143f, 0.f,
        1.164383561643836f, -0.127007098661f, -0.440987687946f, 0.f,
        1.164383561643836f, 2.141772321429f, 0.000000000000f, 0.f,
                       0.f, 0.f, 0.f, 1.f,
    };

    PS_COLOR_TRANSFORM VAR_20;

    FUNC_7(VAR_20.WhitePoint, VAR_15, sizeof(VAR_20.WhitePoint));

    const FLOAT *VAR_21;
    if (!FUNC_5(VAR_9->pixelFormat))
    {
        if (!VAR_12)
            VAR_21 = VAR_15;
        else
        {
            VAR_21 = VAR_17;
            VAR_20.WhitePoint[0*4 + 3] = -VAR_13;
            VAR_20.WhitePoint[1*4 + 3] = VAR_14;
            VAR_20.WhitePoint[2*4 + 3] = VAR_14;
        }
    }
    else
    {
        if (VAR_12)
            VAR_21 = VAR_15;
        else {
            switch (VAR_7->space){
                case 129:
                    VAR_21 = VAR_18;
                    break;
                case 131:
                    VAR_21 = VAR_19;
                    break;
                case 130:
                    VAR_21 = VAR_16;
                    break;
                default:
                case 128:
                    if( VAR_7->i_height > 576 )
                        VAR_21 = VAR_18;
                    else
                        VAR_21 = VAR_16;
                    break;
            }

            VAR_20.WhitePoint[0*4 + 3] = -VAR_13;
            VAR_20.WhitePoint[1*4 + 3] = -VAR_14;
            VAR_20.WhitePoint[2*4 + 3] = -VAR_14;
        }
    }

    FUNC_7(VAR_20.Colorspace, VAR_21, sizeof(VAR_20.Colorspace));

    if (VAR_7->primaries != VAR_9->primaries)
    {
        FUNC_3(VAR_20.Primaries, VAR_7->primaries,
                              VAR_9->primaries);
    }

    FUNC_6(VAR_5, VAR_6, VAR_8, VAR_1, &VAR_20);


    VAR_8->picSys.formatTexture = VAR_8->textureFormat->formatTexture;
    VAR_8->picSys.context = VAR_6->d3dcontext;
    FUNC_4(VAR_8->picSys.context);

    if (!FUNC_0(VAR_5, VAR_6, VAR_8, VAR_10, VAR_11))
        return VAR_3;

    for (size_t VAR_22=0; VAR_22<VAR_0; VAR_22++)
    {
        VAR_8->cropViewport[VAR_22].MinDepth = 0.0f;
        VAR_8->cropViewport[VAR_22].MaxDepth = 1.0f;
    }
    VAR_8->resourceCount = FUNC_1(VAR_8->textureFormat);

    return VAR_4;
}
