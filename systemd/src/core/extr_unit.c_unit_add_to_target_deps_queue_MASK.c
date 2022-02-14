
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int in_target_deps_queue; TYPE_2__* manager; } ;
typedef TYPE_1__ Unit ;
struct TYPE_7__ {int target_deps_queue; } ;
typedef TYPE_2__ Manager ;


 int FUNC_0 (int ,int ,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;

void FUNC_2(Unit *VAR_1) {
        Manager *VAR_2 = VAR_1->manager;

        FUNC_1(VAR_1);

        if (VAR_1->in_target_deps_queue)
                return;

        FUNC_0(VAR_0, VAR_2->target_deps_queue, VAR_1);
        VAR_1->in_target_deps_queue = 1;
}
