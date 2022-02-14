
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int bus; } ;
typedef TYPE_1__ Manager ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*,char*,char**) ;
 char** FUNC_2 (char const*) ;

int FUNC_3(Manager *VAR_0, const char *VAR_1, ...) {
        char **VAR_2;

        FUNC_0(VAR_0);

        VAR_2 = FUNC_2(VAR_1);

        return FUNC_1(
                        VAR_0->bus,
                        "/org/freedesktop/login1",
                        "org.freedesktop.login1.Manager",
                        VAR_2);
}
