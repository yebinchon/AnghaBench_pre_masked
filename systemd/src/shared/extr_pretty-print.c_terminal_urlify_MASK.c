
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*) ;
 char* FUNC_2 (char const*) ;
 char* FUNC_3 (char*,char const*,char*,char const*,char*) ;
 scalar_t__ FUNC_4 () ;

int FUNC_5(const char *VAR_1, const char *VAR_2, char **VAR_3) {
        char *VAR_4;

        FUNC_0(VAR_1);




        if (FUNC_1(VAR_2))
                VAR_2 = VAR_1;

        if (FUNC_4())
                VAR_4 = FUNC_3("\x1B]8;;", VAR_1, "\a", VAR_2, "\x1B]8;;\a");
        else
                VAR_4 = FUNC_2(VAR_2);
        if (!VAR_4)
                return -VAR_0;

        *VAR_3 = VAR_4;
        return 0;
}
