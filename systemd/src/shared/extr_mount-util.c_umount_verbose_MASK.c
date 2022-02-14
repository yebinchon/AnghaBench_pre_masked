
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (int ,char*,char const*) ;
 scalar_t__ FUNC_2 (char const*) ;

int FUNC_3(const char *VAR_1) {
        FUNC_0("Umounting %s...", VAR_1);
        if (FUNC_2(VAR_1) < 0)
                return FUNC_1(VAR_0, "Failed to unmount %s: %m", VAR_1);
        return 0;
}
