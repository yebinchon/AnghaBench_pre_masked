
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* sys; } ;
typedef TYPE_2__ vout_display_t ;
struct TYPE_8__ {int num_overlays; TYPE_4__* vk; int renderer; int * overlay_tex; int * overlays; int * plane_tex; } ;
typedef TYPE_3__ vout_display_sys_t ;
struct pl_gpu {int dummy; } ;
struct TYPE_9__ {TYPE_1__* vulkan; } ;
struct TYPE_6__ {struct pl_gpu* gpu; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pl_gpu const*,int *) ;
 int FUNC_3 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_4(vout_display_t *VAR_0)
{
    vout_display_sys_t *VAR_1 = VAR_0->sys;
    const struct pl_gpu *VAR_2 = VAR_1->vk->vulkan->gpu;

    for (int VAR_3 = 0; VAR_3 < 4; VAR_3++)
        FUNC_2(VAR_2, &VAR_1->plane_tex[VAR_3]);
    for (int VAR_4 = 0; VAR_4 < VAR_1->num_overlays; VAR_4++)
        FUNC_2(VAR_2, &VAR_1->overlay_tex[VAR_4]);

    if (VAR_1->overlays) {
        FUNC_0(VAR_1->overlays);
        FUNC_0(VAR_1->overlay_tex);
    }

    FUNC_1(&VAR_1->renderer);

    FUNC_3(VAR_1->vk);
}
