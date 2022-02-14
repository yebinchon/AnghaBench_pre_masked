
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char** client_environment; } ;
typedef TYPE_1__ Manager ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 char** FUNC_1 (char**) ;
 char** FUNC_2 (char**,int,char**) ;
 char** FUNC_3 (int,char**,char**) ;
 int FUNC_4 (char**) ;
 scalar_t__ FUNC_5 (char**) ;

int FUNC_6(
                Manager *VAR_1,
                char **VAR_2,
                char **VAR_3) {

        char **VAR_4 = ((void*)0), **VAR_5 = ((void*)0), **VAR_6;

        FUNC_0(VAR_1);

        if (FUNC_5(VAR_2) && FUNC_5(VAR_3))
                return 0;

        VAR_6 = VAR_1->client_environment;

        if (!FUNC_5(VAR_2)) {
                VAR_4 = FUNC_2(VAR_6, 1, VAR_2);
                if (!VAR_4)
                        return -VAR_0;

                VAR_6 = VAR_4;
        }

        if (!FUNC_5(VAR_3)) {
                VAR_5 = FUNC_3(2, VAR_6, VAR_3);
                if (!VAR_5) {
                        FUNC_4(VAR_4);
                        return -VAR_0;
                }

                VAR_6 = VAR_5;
        }

        if (VAR_1->client_environment != VAR_6)
                FUNC_4(VAR_1->client_environment);

        if (VAR_4 != VAR_6)
                FUNC_4(VAR_4);
        if (VAR_5 != VAR_6)
                FUNC_4(VAR_5);

        VAR_1->client_environment = FUNC_1(VAR_6);
        return 0;
}
