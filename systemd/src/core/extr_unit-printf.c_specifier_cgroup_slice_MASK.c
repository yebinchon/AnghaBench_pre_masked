
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* manager; scalar_t__ cgroup_path; int slice; } ;
typedef TYPE_2__ Unit ;
struct TYPE_7__ {scalar_t__ cgroup_root; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__ const*) ;
 int FUNC_3 (TYPE_2__ const*,char) ;
 char* FUNC_4 (scalar_t__) ;
 char* FUNC_5 (TYPE_2__ const*) ;

__attribute__((used)) static int FUNC_6(char VAR_1, const void *VAR_2, const void *VAR_3, char **VAR_4) {
        const Unit *VAR_5 = VAR_3;
        char *VAR_6;

        FUNC_2(VAR_5);

        FUNC_3(VAR_5, VAR_1);

        if (FUNC_1(VAR_5->slice)) {
                const Unit *VAR_7;

                VAR_7 = FUNC_0(VAR_5->slice);

                if (VAR_7->cgroup_path)
                        VAR_6 = FUNC_4(VAR_7->cgroup_path);
                else
                        VAR_6 = FUNC_5(VAR_7);
        } else
                VAR_6 = FUNC_4(VAR_5->manager->cgroup_root);
        if (!VAR_6)
                return -VAR_0;

        *VAR_4 = VAR_6;
        return 0;
}
