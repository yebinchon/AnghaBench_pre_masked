
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ref_cnt; int lock; int * p_overlay; } ;
typedef TYPE_1__ bluray_spu_updater_sys_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(bluray_spu_updater_sys_t *VAR_0)
{
    FUNC_2(&VAR_0->lock);
    int VAR_1 = --VAR_0->ref_cnt;
    VAR_0->p_overlay = ((void*)0);
    FUNC_3(&VAR_0->lock);

    if (VAR_1 < 1) {
        FUNC_1(&VAR_0->lock);
        FUNC_0(VAR_0);
    }
}
