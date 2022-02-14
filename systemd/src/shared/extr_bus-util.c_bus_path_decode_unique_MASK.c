
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char**) ;
 char* FUNC_1 (char const*) ;
 char* FUNC_2 (char const*,int) ;
 int FUNC_3 (char*) ;
 char** FUNC_4 (char const*) ;
 char* FUNC_5 (char const*,char const*) ;
 char* FUNC_6 (char const*,char) ;

int FUNC_7(const char *VAR_1, const char *VAR_2, char **VAR_3, char **VAR_4) {
        const char *VAR_5, *VAR_6;
        char *VAR_7, *VAR_8;

        FUNC_0(FUNC_4(VAR_1));
        FUNC_0(FUNC_4(VAR_2));
        FUNC_0(VAR_3);
        FUNC_0(VAR_4);

        VAR_5 = FUNC_5(VAR_1, VAR_2);
        if (!VAR_5) {
                *VAR_3 = ((void*)0);
                *VAR_4 = ((void*)0);
                return 0;
        }

        VAR_6 = FUNC_6(VAR_5, '/');
        if (!VAR_6) {
                *VAR_3 = ((void*)0);
                *VAR_4 = ((void*)0);
                return 0;
        }

        VAR_7 = FUNC_2(VAR_5, VAR_6 - VAR_5);
        VAR_8 = FUNC_1(VAR_6 + 1);
        if (!VAR_7 || !VAR_8) {
                FUNC_3(VAR_7);
                FUNC_3(VAR_8);
                return -VAR_0;
        }

        *VAR_3 = VAR_7;
        *VAR_4 = VAR_8;
        return 1;
}
