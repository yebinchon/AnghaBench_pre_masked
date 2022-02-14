
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int bus; } ;
typedef TYPE_1__ Manager ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int,char*,char const*) ;
 int FUNC_2 (int ,char*,char*,char**) ;
 char** FUNC_3 (char const*) ;

int FUNC_4(Manager *VAR_0, const char *VAR_1, ...) {
        FUNC_0(VAR_0);

        char **VAR_2 = FUNC_3(VAR_1);

        int VAR_3 = FUNC_2(
                        VAR_0->bus,
                        "/org/freedesktop/resolve1",
                        "org.freedesktop.resolve1.Manager",
                        VAR_2);
        if (VAR_3 < 0)
                FUNC_1(VAR_3, "Failed to emit notification about changed property %s: %m", VAR_1);
        return VAR_3;
}
