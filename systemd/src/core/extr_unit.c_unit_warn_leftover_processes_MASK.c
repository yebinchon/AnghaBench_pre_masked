
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int cgroup_path; } ;
typedef TYPE_1__ Unit ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,int ,int ,int *,int ,TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;

int FUNC_3(Unit *VAR_2) {
        FUNC_0(VAR_2);

        (void) FUNC_2(VAR_2);

        if (!VAR_2->cgroup_path)
                return 0;

        return FUNC_1(VAR_0, VAR_2->cgroup_path, 0, 0, ((void*)0), VAR_1, VAR_2);
}
