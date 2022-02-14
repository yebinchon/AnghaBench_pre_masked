
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int d3dcontext; } ;
struct d3d11_local_swapchain {int * swapchainTargetView; TYPE_1__ d3d_dev; } ;


 int FUNC_0 (int ,int,int *,int *) ;

bool FUNC_1( void *VAR_0, size_t VAR_1 )
{
    struct d3d11_local_swapchain *VAR_2 = VAR_0;
    if (!VAR_2->swapchainTargetView[VAR_1])
        return 0;
    FUNC_0(VAR_2->d3d_dev.d3dcontext, 1,
                                            &VAR_2->swapchainTargetView[VAR_1], ((void*)0));
    return 1;
}
