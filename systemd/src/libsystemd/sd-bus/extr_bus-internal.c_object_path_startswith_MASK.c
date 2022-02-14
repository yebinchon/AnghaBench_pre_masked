
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 char* FUNC_1 (char const*,char const*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

char* FUNC_3(const char *VAR_0, const char *VAR_1) {
        const char *VAR_2;

        if (!FUNC_0(VAR_0) ||
            !FUNC_0(VAR_1))
                return ((void*)0);

        if (FUNC_2(VAR_1, "/"))
                return (char*) VAR_0 + 1;

        VAR_2 = FUNC_1(VAR_0, VAR_1);
        if (!VAR_2)
                return ((void*)0);

        if (*VAR_2 == 0)
                return (char*) VAR_2;

        if (*VAR_2 == '/')
                return (char*) VAR_2 + 1;

        return ((void*)0);
}
