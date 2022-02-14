
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int transient_environment; } ;
typedef TYPE_1__ Manager ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 int FUNC_2 (char**) ;
 char** FUNC_3 (int,int ,char**) ;
 int FUNC_4 (int ,char**) ;
 scalar_t__ FUNC_5 (char**) ;

int FUNC_6(Manager *VAR_0, char **VAR_1) {
        char **VAR_2;

        FUNC_0(VAR_0);

        if (FUNC_5(VAR_1))
                return 0;

        VAR_2 = FUNC_3(2, VAR_0->transient_environment, VAR_1);
        if (!VAR_2)
                return FUNC_1();

        FUNC_2(VAR_2);

        return FUNC_4(VAR_0->transient_environment, VAR_2);
}
