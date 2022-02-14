
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (int) ;
 char* FUNC_1 (char*,char const*) ;

__attribute__((used)) static int FUNC_2(int VAR_1, char **VAR_2) {
        const char *VAR_3;
        char *VAR_4;

        if (VAR_1 < 0)
                VAR_1 = -VAR_1;

        VAR_3 = FUNC_0(VAR_1);
        if (!VAR_3)
                return 0;

        VAR_4 = FUNC_1("System.Error.", VAR_3);
        if (!VAR_4)
                return -VAR_0;

        *VAR_2 = VAR_4;
        return 1;
}
