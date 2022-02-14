
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int Unit ;
struct TYPE_4__ {int cpu_accounting; int tasks_accounting; int memory_accounting; } ;
struct TYPE_5__ {TYPE_1__ cgroup_context; } ;
typedef TYPE_2__ Slice ;
typedef int Manager ;


 scalar_t__ FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int **) ;

__attribute__((used)) static void FUNC_5(Manager *VAR_2) {
        Unit *VAR_3;
        int VAR_4;

        FUNC_2(VAR_2);

        VAR_4 = FUNC_4(VAR_2, VAR_0, &VAR_3);
        if (VAR_4 >= 0 && FUNC_3(VAR_2)) {
                Slice *VAR_5 = FUNC_1(VAR_3);





                VAR_5->cgroup_context.cpu_accounting = 1;
                VAR_5->cgroup_context.tasks_accounting = 1;
                VAR_5->cgroup_context.memory_accounting = 1;
        }

        if (FUNC_0(VAR_2))
                (void) FUNC_4(VAR_2, VAR_1, ((void*)0));
}
