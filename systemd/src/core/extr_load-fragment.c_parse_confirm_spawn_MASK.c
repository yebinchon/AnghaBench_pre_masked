
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (char*,char const*) ;
 char* FUNC_3 (char const*) ;

int FUNC_4(const char *VAR_1, char **VAR_2) {
        char *VAR_3;
        int VAR_4;

        VAR_4 = VAR_1 ? FUNC_1(VAR_1) : 1;
        if (VAR_4 == 0) {
                *VAR_2 = ((void*)0);
                return 0;
        } else if (VAR_4 > 0)
                VAR_3 = FUNC_3("/dev/console");
        else if (FUNC_0(VAR_1))
                VAR_3 = FUNC_3(VAR_1);
        else
                VAR_3 = FUNC_2("/dev/", VAR_1);
        if (!VAR_3)
                return -VAR_0;

        *VAR_2 = VAR_3;
        return 0;
}
