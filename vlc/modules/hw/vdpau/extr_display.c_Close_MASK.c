
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* sys; } ;
typedef TYPE_1__ vout_display_t ;
struct TYPE_6__ {int conn; int vdp; int * current; int target; int queue; } ;
typedef TYPE_2__ vout_display_sys_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(vout_display_t *VAR_0)
{
    vout_display_sys_t *VAR_1 = VAR_0->sys;

    FUNC_2(VAR_1->vdp, VAR_1->queue);
    FUNC_3(VAR_1->vdp, VAR_1->target);

    if (VAR_1->current != ((void*)0))
        FUNC_1(VAR_1->current);

    FUNC_4(VAR_1->vdp);
    FUNC_5(VAR_1->conn);
    FUNC_0(VAR_1);
}
