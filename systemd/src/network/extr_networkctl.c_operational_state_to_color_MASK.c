
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char*,char*) ;
 char* FUNC_1 () ;
 char* FUNC_2 () ;
 char* FUNC_3 () ;
 int FUNC_4 (char const**) ;
 scalar_t__ FUNC_5 (char const*,char*) ;

__attribute__((used)) static void FUNC_6(const char *VAR_0, const char *VAR_1, const char **VAR_2, const char **VAR_3) {
        FUNC_4(VAR_2);
        FUNC_4(VAR_3);

        if (FUNC_0(VAR_1, "routable", "enslaved") ||
            (FUNC_5(VAR_0, "lo") && FUNC_5(VAR_1, "carrier"))) {
                *VAR_2 = FUNC_1();
                *VAR_3 = FUNC_3();
        } else if (FUNC_5(VAR_1, "degraded")) {
                *VAR_2 = FUNC_2();
                *VAR_3 = FUNC_3();
        } else
                *VAR_2 = *VAR_3 = "";
}
