
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_21__ {TYPE_5__* sys; } ;
typedef TYPE_4__ vlc_va_t ;
struct TYPE_19__ {int adapterId; } ;
struct TYPE_18__ {int obj; } ;
struct TYPE_22__ {scalar_t__ render; int d3ddec; TYPE_2__ d3d_dev; TYPE_1__ hd3d; } ;
typedef TYPE_5__ vlc_va_sys_t ;
typedef int video_format_t ;
struct TYPE_23__ {int guid; int name; } ;
typedef TYPE_6__ directx_va_mode_t ;
struct TYPE_24__ {scalar_t__ format; scalar_t__ name; } ;
typedef TYPE_7__ d3d9_format_t ;
typedef int UINT ;
struct TYPE_20__ {int LowPart; } ;
struct TYPE_25__ {scalar_t__ VendorId; int DeviceId; TYPE_3__ DriverVersion; } ;
typedef int HRESULT ;
typedef scalar_t__ D3DFORMAT ;
typedef TYPE_8__ D3DADAPTER_IDENTIFIER9 ;


 int FUNC_0 (scalar_t__*) ;
 TYPE_7__* FUNC_1 (scalar_t__ const) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ,int ,int ,TYPE_8__*) ;
 int FUNC_4 (int ,int ,int*,scalar_t__**) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int const*) ;
 TYPE_7__* VAR_3 ;
 int FUNC_6 (TYPE_4__*,scalar_t__,int ,int ,int) ;
 int FUNC_7 (TYPE_4__*,char*,scalar_t__ const,...) ;
 int FUNC_8 (TYPE_4__*,char*) ;
 int FUNC_9 (TYPE_4__*,char*,int ) ;

__attribute__((used)) static int FUNC_10(vlc_va_t *VAR_4, const directx_va_mode_t *VAR_5, const video_format_t *VAR_6)
{
    FUNC_5(VAR_6);
    vlc_va_sys_t *VAR_7 = VAR_4->sys;

    D3DADAPTER_IDENTIFIER9 VAR_8;
    HRESULT VAR_9 = FUNC_3(VAR_7->hd3d.obj, VAR_7->d3d_dev.adapterId, 0, &VAR_8);
    if (FUNC_2(VAR_9))
        return VAR_1;

    UINT VAR_10 = VAR_8.DriverVersion.LowPart & 0xFFFF;
    if (VAR_8.VendorId == VAR_0 && (VAR_8.DriverVersion.LowPart >> 16) >= 100)
    {

        VAR_10 += ((VAR_8.DriverVersion.LowPart >> 16) - 100) * 1000;
    }
    if (!FUNC_6(VAR_4, VAR_8.VendorId, VAR_8.DeviceId,
                                  VAR_5->guid, VAR_10))
    {
        FUNC_9(VAR_4, "GPU blacklisted for %s codec", VAR_5->name);
        return VAR_1;
    }

    int VAR_11 = VAR_1;
    UINT VAR_12 = 0;
    D3DFORMAT *VAR_13 = ((void*)0);
    if (FUNC_2(FUNC_4(VAR_7->d3ddec,
                                                                   VAR_5->guid,
                                                                   &VAR_12,
                                                                   &VAR_13))) {
        FUNC_8(VAR_4, "IDirectXVideoDecoderService_GetDecoderRenderTargets failed");
        return VAR_1;
    }

    for (unsigned VAR_14 = 0; VAR_14 < VAR_12; VAR_14++) {
        const D3DFORMAT VAR_15 = VAR_13[VAR_14];
        const d3d9_format_t *VAR_16 = FUNC_1(VAR_15);
        if (VAR_16) {
            FUNC_7(VAR_4, "%s is supported for output", VAR_16->name);
        } else {
            FUNC_7(VAR_4, "%d is supported for output (%4.4s)", VAR_15, (const char*)&VAR_15);
        }
    }


    for (unsigned VAR_17 = 0; VAR_17 < 2 && VAR_11 != VAR_2; ++VAR_17)
    {
        for (unsigned VAR_18 = 0; VAR_3[VAR_18].name; VAR_18++) {
            const d3d9_format_t *VAR_19 = &VAR_3[VAR_18];


            bool VAR_20 = 0;
            for (unsigned VAR_21 = 0; !VAR_20 && VAR_21 < VAR_12; VAR_21++) {
                VAR_20 = VAR_19->format == VAR_13[VAR_21];
            }
            if (!VAR_20)
                continue;
            if (VAR_17 == 0 && VAR_19->format != VAR_7->render)
                continue;


            FUNC_7(VAR_4, "Using decoder output '%s'", VAR_19->name);
            VAR_7->render = VAR_19->format;
            VAR_11 = VAR_2;
            break;
        }
    }
    FUNC_0(VAR_13);
    return VAR_11;
}
