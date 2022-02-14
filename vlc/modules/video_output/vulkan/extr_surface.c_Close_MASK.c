
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ctx; TYPE_3__* instance; int vulkan; int surface; int swapchain; } ;
typedef TYPE_1__ vlc_vk_t ;
typedef int vlc_object_t ;
struct TYPE_5__ {int instance; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_6 (vlc_object_t *VAR_0)
{
    vlc_vk_t *VAR_1 = (vlc_vk_t *) VAR_0;

    FUNC_1(&VAR_1->swapchain);
    FUNC_4(VAR_1->instance->instance, VAR_1->surface, ((void*)0));
    FUNC_3(&VAR_1->vulkan);
    FUNC_2(&VAR_1->instance);
    FUNC_0(&VAR_1->ctx);
    FUNC_5(VAR_1);
}
