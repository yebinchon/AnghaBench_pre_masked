
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ d3ddevice; } ;
struct d3d11_local_swapchain {int obj; int dxgiswapChain; int * swapchainHwnd; TYPE_1__ d3d_dev; } ;
typedef int UINT ;
struct TYPE_6__ {scalar_t__ Format; } ;
typedef int IUnknown ;
typedef int IDXGIFactory2 ;
typedef int IDXGIAdapter ;
typedef scalar_t__ HRESULT ;
typedef TYPE_2__ DXGI_SWAP_CHAIN_DESC1 ;


 int * FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct d3d11_local_swapchain*,int ,int ,TYPE_2__*) ;
 scalar_t__ FUNC_3 (int *,int *,void**) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int *,int *,TYPE_2__*,int *,int *,int *) ;
 int FUNC_6 (int *) ;
 int VAR_3 ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (int ,char*) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct d3d11_local_swapchain *VAR_4, UINT VAR_5, UINT VAR_6)
{
    if (VAR_4->swapchainHwnd == ((void*)0))
    {
        FUNC_7(VAR_4->obj, "missing a HWND to create the swapchain");
        return;
    }

    DXGI_SWAP_CHAIN_DESC1 VAR_7;
    FUNC_2(VAR_4, VAR_5, VAR_6, &VAR_7);

    IDXGIAdapter *VAR_8 = FUNC_0(VAR_4->d3d_dev.d3ddevice);
    if (FUNC_9(VAR_8==((void*)0))) {
        FUNC_7(VAR_4->obj, "Could not get the DXGI Adapter");
        return;
    }

    IDXGIFactory2 *VAR_9;
    HRESULT VAR_10 = FUNC_3(VAR_8, &VAR_3, (void **)&VAR_9);
    FUNC_4(VAR_8);
    if (FUNC_1(VAR_10)) {
        FUNC_7(VAR_4->obj, "Could not get the DXGI Factory. (hr=0x%lX)", VAR_10);
        return;
    }

    VAR_10 = FUNC_5(VAR_9, (IUnknown *)VAR_4->d3d_dev.d3ddevice,
                                              VAR_4->swapchainHwnd, &VAR_7,
                                              ((void*)0), ((void*)0), &VAR_4->dxgiswapChain);
    if (VAR_10 == VAR_0 && VAR_7.Format == VAR_1)
    {
        FUNC_8(VAR_4->obj, "10 bits swapchain failed, try 8 bits");
        VAR_7.Format = VAR_2;
        VAR_10 = FUNC_5(VAR_9, (IUnknown *)VAR_4->d3d_dev.d3ddevice,
                                                  VAR_4->swapchainHwnd, &VAR_7,
                                                  ((void*)0), ((void*)0), &VAR_4->dxgiswapChain);
    }
    FUNC_6(VAR_9);
    if (FUNC_1(VAR_10)) {
        FUNC_7(VAR_4->obj, "Could not create the SwapChain. (hr=0x%lX)", VAR_10);
    }
}
