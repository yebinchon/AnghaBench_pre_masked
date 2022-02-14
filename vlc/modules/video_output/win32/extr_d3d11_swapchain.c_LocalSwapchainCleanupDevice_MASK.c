
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3d11_local_swapchain {int d3d_dev; int * dxgiswapChain; int * dxgiswapChain4; int ** swapchainTargetView; } ;


 size_t FUNC_0 (int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5( void *VAR_0 )
{
    struct d3d11_local_swapchain *VAR_1 = VAR_0;
    for (size_t VAR_2=0; VAR_2 < FUNC_0(VAR_1->swapchainTargetView); VAR_2++)
    {
        if (VAR_1->swapchainTargetView[VAR_2]) {
            FUNC_2(VAR_1->swapchainTargetView[VAR_2]);
            VAR_1->swapchainTargetView[VAR_2] = ((void*)0);
        }
    }
    if (VAR_1->dxgiswapChain4)
    {
        FUNC_3(VAR_1->dxgiswapChain4);
        VAR_1->dxgiswapChain4 = ((void*)0);
    }
    if (VAR_1->dxgiswapChain)
    {
        FUNC_4(VAR_1->dxgiswapChain);
        VAR_1->dxgiswapChain = ((void*)0);
    }

    FUNC_1( &VAR_1->d3d_dev );
}
