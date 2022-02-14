
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int flags; int cgroup_path; TYPE_6__* manager; int prefix; int cgroup_supported; int confirm_spawn; int environment; } ;
typedef TYPE_1__ Unit ;
struct TYPE_11__ {int prefix; int cgroup_supported; } ;
typedef TYPE_1__ ExecParameters ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_6__*,int *) ;
 int FUNC_5 (TYPE_1__*) ;

int FUNC_6(Unit *VAR_3, ExecParameters *VAR_4) {
        int VAR_5;

        FUNC_2(VAR_3);
        FUNC_2(VAR_4);


        VAR_5 = FUNC_4(VAR_3->manager, &VAR_4->environment);
        if (VAR_5 < 0)
                return VAR_5;

        VAR_4->confirm_spawn = FUNC_3(VAR_3->manager);
        VAR_4->cgroup_supported = VAR_3->manager->cgroup_supported;
        VAR_4->prefix = VAR_3->manager->prefix;
        FUNC_1(VAR_4->flags, VAR_2|VAR_1, FUNC_0(VAR_3->manager));


        VAR_4->cgroup_path = VAR_3->cgroup_path;
        FUNC_1(VAR_4->flags, VAR_0, FUNC_5(VAR_3));

        return 0;
}
