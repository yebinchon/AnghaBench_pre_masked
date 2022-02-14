
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char*,char*) ;
 char* FUNC_1 () ;
 char* FUNC_2 () ;
 char* FUNC_3 () ;
 char* FUNC_4 () ;
 int FUNC_5 (char const**) ;
 scalar_t__ FUNC_6 (char const*,char*) ;

__attribute__((used)) static void FUNC_7(const char *VAR_0, const char **VAR_1, const char **VAR_2) {
        FUNC_5(VAR_1);
        FUNC_5(VAR_2);

        if (FUNC_6(VAR_0, "configured")) {
                *VAR_1 = FUNC_1();
                *VAR_2 = FUNC_4();
        } else if (FUNC_6(VAR_0, "configuring")) {
                *VAR_1 = FUNC_3();
                *VAR_2 = FUNC_4();
        } else if (FUNC_0(VAR_0, "failed", "linger")) {
                *VAR_1 = FUNC_2();
                *VAR_2 = FUNC_4();
        } else
                *VAR_1 = *VAR_2 = "";
}
