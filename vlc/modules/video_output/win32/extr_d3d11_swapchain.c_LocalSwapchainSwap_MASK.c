
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct d3d11_local_swapchain {int obj; int dxgiswapChain; } ;
struct TYPE_3__ {int member_0; } ;
typedef scalar_t__ HRESULT ;
typedef TYPE_1__ DXGI_PRESENT_PARAMETERS ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int ,TYPE_1__*) ;
 int FUNC_1 (int ,char*,scalar_t__) ;

void FUNC_2( void *VAR_2 )
{
    struct d3d11_local_swapchain *VAR_3 = VAR_2;
    DXGI_PRESENT_PARAMETERS VAR_4 = { 0 };

    HRESULT VAR_5 = FUNC_0( VAR_3->dxgiswapChain, 0, 0, &VAR_4 );
    if ( VAR_5 == VAR_0 || VAR_5 == VAR_1 )
    {

        FUNC_1( VAR_3->obj, "SwapChain Present failed. (hr=0x%lX)", VAR_5 );
    }
}
