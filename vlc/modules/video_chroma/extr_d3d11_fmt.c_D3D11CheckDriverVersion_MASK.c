
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct wddm_version {scalar_t__ wddm; scalar_t__ d3d_features; scalar_t__ revision; scalar_t__ build; } ;
struct TYPE_6__ {scalar_t__ wddm; scalar_t__ d3d_features; scalar_t__ revision; scalar_t__ build; } ;
struct TYPE_7__ {TYPE_1__ WDDM; int d3ddevice; } ;
typedef TYPE_2__ d3d11_device_t ;
typedef scalar_t__ UINT ;
struct TYPE_8__ {scalar_t__ VendorId; } ;
typedef int IDXGIAdapter ;
typedef int HRESULT ;
typedef TYPE_3__ DXGI_ADAPTER_DESC ;


 int * FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,TYPE_3__*) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_4(d3d11_device_t *VAR_2, UINT VAR_3, const struct wddm_version *VAR_4)
{
    IDXGIAdapter *VAR_5 = FUNC_0(VAR_2->d3ddevice);
    if (!VAR_5)
        return VAR_0;

    DXGI_ADAPTER_DESC VAR_6;
    HRESULT VAR_7 = FUNC_2(VAR_5, &VAR_6);
    FUNC_3(VAR_5);
    if (FUNC_1(VAR_7))
        return VAR_0;

    if (VAR_3 && VAR_6.VendorId != VAR_3)
        return VAR_1;

    if (VAR_4->wddm)
    {
        if (VAR_2->WDDM.wddm > VAR_4->wddm)
            return VAR_1;
        if (VAR_2->WDDM.wddm != VAR_4->wddm)
            return VAR_0;
    }
    if (VAR_4->d3d_features)
    {
        if (VAR_2->WDDM.d3d_features > VAR_4->d3d_features)
            return VAR_1;
        if (VAR_2->WDDM.d3d_features != VAR_4->d3d_features)
            return VAR_0;
    }
    if (VAR_4->revision)
    {
        if (VAR_2->WDDM.revision > VAR_4->revision)
            return VAR_1;
        if (VAR_2->WDDM.revision != VAR_4->revision)
            return VAR_0;
    }
    if (VAR_4->build)
    {
        if (VAR_2->WDDM.build > VAR_4->build)
            return VAR_1;
        if (VAR_2->WDDM.build != VAR_4->build)
            return VAR_0;
    }
    return VAR_1;
}
