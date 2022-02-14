
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* manager; } ;
typedef TYPE_2__ Unit ;
struct TYPE_5__ {int cgroup_root; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__ const*) ;
 int FUNC_1 (TYPE_2__ const*,char) ;
 char* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(char VAR_1, const void *VAR_2, const void *VAR_3, char **VAR_4) {
        const Unit *VAR_5 = VAR_3;
        char *VAR_6;

        FUNC_0(VAR_5);

        FUNC_1(VAR_5, VAR_1);

        VAR_6 = FUNC_2(VAR_5->manager->cgroup_root);
        if (!VAR_6)
                return -VAR_0;

        *VAR_4 = VAR_6;
        return 0;
}
