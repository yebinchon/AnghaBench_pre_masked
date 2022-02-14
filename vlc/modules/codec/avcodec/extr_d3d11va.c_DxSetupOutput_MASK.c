
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


struct TYPE_26__ {TYPE_4__* sys; } ;
typedef TYPE_3__ vlc_va_t ;
struct TYPE_24__ {int build; } ;
struct TYPE_25__ {int d3ddevice; TYPE_1__ WDDM; } ;
struct TYPE_27__ {int render; int d3ddec; TYPE_2__ d3d_dev; } ;
typedef TYPE_4__ vlc_va_sys_t ;
struct TYPE_28__ {int i_height; int i_width; int i_chroma; } ;
typedef TYPE_5__ video_format_t ;
struct TYPE_29__ {int bit_depth; int name; int * guid; } ;
typedef TYPE_6__ directx_va_mode_t ;
typedef int decoderDesc ;
struct TYPE_30__ {int formatTexture; } ;
typedef TYPE_7__ d3d_format_t ;
typedef scalar_t__ UINT ;
struct TYPE_32__ {int OutputFormat; int SampleHeight; int SampleWidth; int Guid; } ;
struct TYPE_31__ {int DeviceId; int VendorId; } ;
typedef int IDXGIAdapter ;
typedef int HRESULT ;
typedef int DXGI_FORMAT ;
typedef TYPE_8__ DXGI_ADAPTER_DESC ;
typedef TYPE_9__ D3D11_VIDEO_DECODER_DESC ;
typedef int BOOL ;


 int * FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_7__* FUNC_4 (TYPE_3__*,int ) ;
 TYPE_7__* FUNC_5 (TYPE_3__*,int ) ;
 int FUNC_6 (int ,int *,int,int*) ;
 int FUNC_7 (int ,TYPE_9__*,scalar_t__*) ;
 int FUNC_8 (int *,TYPE_8__*) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_11 (TYPE_9__*,int) ;
 int FUNC_12 (TYPE_3__*,int ,int ,int *,int ) ;
 int FUNC_13 (TYPE_3__*,char*,...) ;
 int FUNC_14 (TYPE_3__*,char*,int ,int ,...) ;
 int FUNC_15 (TYPE_3__*,char*,int ) ;

__attribute__((used)) static int FUNC_16(vlc_va_t *VAR_9, const directx_va_mode_t *VAR_10, const video_format_t *VAR_11)
{
    vlc_va_sys_t *VAR_12 = VAR_9->sys;
    HRESULT VAR_13;


    BOOL VAR_14 = 0;
    for (int VAR_15 = 0; VAR_15 < 188; VAR_15++) {
        VAR_13 = FUNC_6(VAR_12->d3ddec, VAR_10->guid, VAR_15, &VAR_14);
        if (FUNC_10(VAR_13) && VAR_14)
            FUNC_13(VAR_9, "format %s is supported for output", FUNC_2(VAR_15));
    }


    IDXGIAdapter *VAR_16 = FUNC_0(VAR_12->d3d_dev.d3ddevice);
    if (!VAR_16)
        return VAR_7;

    DXGI_ADAPTER_DESC VAR_17;
    VAR_13 = FUNC_8(VAR_16, &VAR_17);
    FUNC_9(VAR_16);
    if (FUNC_3(VAR_13))
        return VAR_7;

    if (!FUNC_12(VAR_9, VAR_17.VendorId, VAR_17.DeviceId,
                                  VAR_10->guid, VAR_12->d3d_dev.WDDM.build))
    {
        FUNC_15(VAR_9, "GPU blacklisted for %s codec", VAR_10->name);
        return VAR_7;
    }

    DXGI_FORMAT VAR_18[6];
    int VAR_19 = 0;
    const d3d_format_t *VAR_20 = FUNC_5(VAR_9, VAR_11->i_chroma);
    if (VAR_20 == ((void*)0))
        VAR_20 = FUNC_4(VAR_9, VAR_11->i_chroma);
    if (VAR_20 != ((void*)0))
        VAR_18[VAR_19++] = VAR_20->formatTexture;

    if (VAR_10->bit_depth > 10)
        VAR_18[VAR_19++] = VAR_5;
    if (VAR_10->bit_depth == 10)
        VAR_18[VAR_19++] = VAR_4;
    VAR_18[VAR_19++] = VAR_3;
    VAR_18[VAR_19++] = VAR_2;
    VAR_18[VAR_19++] = VAR_6;


    for (VAR_19 = 0; VAR_18[VAR_19] != VAR_6; ++VAR_19)
    {
        BOOL VAR_21 = 0;
        VAR_13 = FUNC_6(VAR_12->d3ddec, VAR_10->guid, VAR_18[VAR_19], &VAR_21);
        if (FUNC_10(VAR_13) && VAR_21)
            FUNC_13(VAR_9, "%s output is supported for decoder %s.", FUNC_2(VAR_18[VAR_19]), VAR_10->name);
        else
        {
            FUNC_13(VAR_9, "Can't get a decoder output format %s for decoder %s.", FUNC_2(VAR_18[VAR_19]), VAR_10->name);
            continue;
        }



       if ( !FUNC_1(VAR_12->d3d_dev.d3ddevice, VAR_18[VAR_19],
                                  VAR_0) )
       {

           FUNC_13(VAR_9, "Format %s needs a processor but is not supported",
                   FUNC_2(VAR_18[VAR_19]));
        }

        D3D11_VIDEO_DECODER_DESC VAR_22;
        FUNC_11(&VAR_22, sizeof(VAR_22));
        VAR_22.Guid = *VAR_10->guid;
        VAR_22.SampleWidth = VAR_11->i_width;
        VAR_22.SampleHeight = VAR_11->i_height;
        VAR_22.OutputFormat = VAR_18[VAR_19];

        UINT VAR_23 = 0;
        VAR_13 = FUNC_7( VAR_12->d3ddec, &VAR_22, &VAR_23 );
        if (FUNC_3(VAR_13))
        {
            FUNC_14( VAR_9, "Failed to get configuration for decoder %s. (hr=0x%lX)", VAR_10->name, VAR_13 );
            continue;
        }
        if (VAR_23 == 0) {
            FUNC_14( VAR_9, "No decoder configuration possible for %s %dx%d",
                     FUNC_2(VAR_22.OutputFormat),
                     VAR_22.SampleWidth, VAR_22.SampleHeight );
            continue;
        }

        FUNC_13(VAR_9, "Using output format %s for decoder %s", FUNC_2(VAR_18[VAR_19]), VAR_10->name);
        VAR_12->render = VAR_18[VAR_19];
        return VAR_8;
    }

    FUNC_13(VAR_9, "Output format from picture source not supported.");
    return VAR_7;
}
