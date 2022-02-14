
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char**) ;
 int FUNC_1 (char*,char*) ;
 char* FUNC_2 (char const*,char*) ;

__attribute__((used)) static int FUNC_3(char **VAR_1, const char *VAR_2) {
        char *VAR_3;

        FUNC_0(VAR_1);

        if (!*VAR_1)
                return 0;

        VAR_3 = FUNC_2(VAR_2, *VAR_1);
        if (!VAR_3)
                return -VAR_0;

        FUNC_1(*VAR_1, VAR_3);
        return 0;
}
