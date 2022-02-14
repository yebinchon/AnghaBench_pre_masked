
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (char const*) ;
 int FUNC_1 (char const**) ;

int FUNC_2(char VAR_1, const void *VAR_2, const void *VAR_3, char **VAR_4) {
        const char *VAR_5;
        char *VAR_6;
        int VAR_7;

        VAR_7 = FUNC_1(&VAR_5);
        if (VAR_7 < 0)
                return VAR_7;

        VAR_6 = FUNC_0(VAR_5);
        if (!VAR_6)
                return -VAR_0;

        *VAR_4 = VAR_6;
        return 0;
}
