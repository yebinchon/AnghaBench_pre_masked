
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char,char,char) ;
 char* FUNC_1 (char const*,char*) ;
 char* FUNC_2 (char*,int) ;

int FUNC_3(const char* VAR_1, char **VAR_2) {
        char *VAR_3, *VAR_4, *VAR_5;

        VAR_4 = FUNC_1(VAR_1, ".catalog");
        if (!VAR_4)
                return 0;

        VAR_3 = VAR_4 - 1;
        while (VAR_3 > VAR_1 && !FUNC_0(*VAR_3, '.', '/') && VAR_4 - VAR_3 < 32)
                VAR_3--;

        if (*VAR_3 != '.' || VAR_4 <= VAR_3 + 1)
                return 0;

        VAR_5 = FUNC_2(VAR_3 + 1, VAR_4 - VAR_3 - 1);
        if (!VAR_5)
                return -VAR_0;

        *VAR_2 = VAR_5;
        return 1;
}
