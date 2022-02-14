
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct CGroupInfo {TYPE_1__* parent; int pids; struct CGroupInfo* cgroup_path; int is_const; struct CGroupInfo* children; } ;
struct TYPE_2__ {int children; } ;
typedef struct CGroupInfo Hashmap ;


 int FUNC_0 (int ,int ,struct CGroupInfo*) ;
 int FUNC_1 (struct CGroupInfo*) ;
 int FUNC_2 (struct CGroupInfo*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct CGroupInfo*,struct CGroupInfo*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(Hashmap *VAR_1, struct CGroupInfo *VAR_2) {
        FUNC_1(VAR_1);
        FUNC_1(VAR_2);

        while (VAR_2->children)
                FUNC_5(VAR_1, VAR_2->children);

        FUNC_4(VAR_1, VAR_2->cgroup_path);

        if (!VAR_2->is_const)
                FUNC_2(VAR_2->cgroup_path);

        FUNC_3(VAR_2->pids);

        if (VAR_2->parent)
                FUNC_0(VAR_0, VAR_2->parent->children, VAR_2);

        FUNC_2(VAR_2);
}
