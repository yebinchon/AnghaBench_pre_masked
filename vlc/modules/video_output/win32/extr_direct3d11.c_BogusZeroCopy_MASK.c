
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* sys; } ;
typedef TYPE_2__ vout_display_t ;
struct wddm_version {int revision; } ;
struct TYPE_10__ {int d3ddevice; } ;
struct TYPE_9__ {scalar_t__ VendorId; int DeviceId; } ;
struct TYPE_7__ {TYPE_5__ d3d_dev; } ;
typedef int IDXGIAdapter ;
typedef TYPE_3__ DXGI_ADAPTER_DESC ;


 int FUNC_0 (TYPE_5__*,scalar_t__,struct wddm_version*) ;
 int * FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int *,TYPE_3__*) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_5(vout_display_t *VAR_2)
{
    IDXGIAdapter *VAR_3 = FUNC_1(VAR_2->sys->d3d_dev.d3ddevice);
    if (!VAR_3)
        return 0;

    DXGI_ADAPTER_DESC VAR_4;
    if (FUNC_2(FUNC_3(VAR_3, &VAR_4)))
        return 0;
    FUNC_4(VAR_3);

    if (VAR_4.VendorId != VAR_0)
        return 0;

    switch (VAR_4.DeviceId)
    {
    case 0x687F:
    case 0x6863:
    case 0x15DD:
    {
        struct wddm_version VAR_5 = {
            .revision = 14011,
        };
        return FUNC_0(&VAR_2->sys->d3d_dev, VAR_0, &VAR_5) != VAR_1;
    }
    default:
        return 0;
    }
}
