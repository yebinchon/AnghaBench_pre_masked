
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* sys; } ;
typedef TYPE_2__ vout_display_t ;
struct TYPE_7__ {TYPE_1__* vk; } ;
typedef TYPE_3__ vout_display_sys_t ;
typedef int picture_t ;
struct TYPE_5__ {int swapchain; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(vout_display_t *VAR_0, picture_t *VAR_1)
{
    FUNC_0(VAR_1);
    vout_display_sys_t *VAR_2 = VAR_0->sys;
    FUNC_1(VAR_2->vk->swapchain);
}
