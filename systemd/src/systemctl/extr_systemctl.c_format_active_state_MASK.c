
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char*,char*) ;
 char* FUNC_1 () ;
 char* FUNC_2 () ;
 char* FUNC_3 () ;
 scalar_t__ FUNC_4 (char const*,char*) ;

__attribute__((used)) static void FUNC_5(const char *VAR_0, const char **VAR_1, const char **VAR_2) {
        if (FUNC_4(VAR_0, "failed")) {
                *VAR_1 = FUNC_2();
                *VAR_2 = FUNC_3();
        } else if (FUNC_0(VAR_0, "active", "reloading")) {
                *VAR_1 = FUNC_1();
                *VAR_2 = FUNC_3();
        } else
                *VAR_1 = *VAR_2 = "";
}
