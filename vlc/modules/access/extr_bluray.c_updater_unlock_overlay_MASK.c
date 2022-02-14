
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lock; TYPE_3__* p_overlay; } ;
typedef TYPE_1__ bluray_spu_updater_sys_t ;
struct TYPE_5__ {int lock; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(bluray_spu_updater_sys_t *VAR_0)
{
    FUNC_0 (VAR_0->p_overlay);

    FUNC_1(&VAR_0->p_overlay->lock);
    FUNC_1(&VAR_0->lock);
}
