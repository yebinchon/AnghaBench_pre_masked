
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int lock; TYPE_2__* p_overlay; } ;
typedef TYPE_1__ bluray_spu_updater_sys_t ;
struct TYPE_6__ {int lock; } ;
typedef TYPE_2__ bluray_overlay_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static bluray_overlay_t *FUNC_2(bluray_spu_updater_sys_t *VAR_0)
{

    FUNC_0(&VAR_0->lock);

    bluray_overlay_t *VAR_1 = VAR_0->p_overlay;
    if (VAR_1) {

        FUNC_0(&VAR_1->lock);
        return VAR_1;
    }


    FUNC_1(&VAR_0->lock);
    return ((void*)0);
}
