
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int d3ddevice; } ;
struct TYPE_7__ {TYPE_1__ d3d_dev; } ;
typedef TYPE_2__ vlc_va_sys_t ;
struct TYPE_8__ {scalar_t__ VendorId; } ;
typedef int IDXGIAdapter ;
typedef int HRESULT ;
typedef TYPE_3__ DXGI_ADAPTER_DESC ;


 int * FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *,TYPE_3__*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static bool FUNC_4(vlc_va_sys_t *VAR_1)
{
    IDXGIAdapter *VAR_2 = FUNC_0(VAR_1->d3d_dev.d3ddevice);
    if (!VAR_2)
        return 0;

    DXGI_ADAPTER_DESC VAR_3;
    HRESULT VAR_4 = FUNC_2(VAR_2, &VAR_3);
    FUNC_3(VAR_2);
    if (FUNC_1(VAR_4))
        return 0;



    return VAR_3.VendorId != VAR_0;
}
