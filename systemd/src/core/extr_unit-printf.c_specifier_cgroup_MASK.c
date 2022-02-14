
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ cgroup_path; } ;
typedef TYPE_1__ Unit ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (TYPE_1__ const*,char) ;
 char* FUNC_2 (scalar_t__) ;
 char* FUNC_3 (TYPE_1__ const*) ;

__attribute__((used)) static int FUNC_4(char VAR_1, const void *VAR_2, const void *VAR_3, char **VAR_4) {
        const Unit *VAR_5 = VAR_3;
        char *VAR_6;

        FUNC_0(VAR_5);

        FUNC_1(VAR_5, VAR_1);

        if (VAR_5->cgroup_path)
                VAR_6 = FUNC_2(VAR_5->cgroup_path);
        else
                VAR_6 = FUNC_3(VAR_5);
        if (!VAR_6)
                return -VAR_0;

        *VAR_4 = VAR_6;
        return 0;
}
