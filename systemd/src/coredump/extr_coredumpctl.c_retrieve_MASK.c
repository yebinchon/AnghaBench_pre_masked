
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (void const*,char const*,size_t) ;
 int FUNC_3 (char const*) ;
 char* FUNC_4 (char const*,size_t) ;

__attribute__((used)) static int FUNC_5(const void *VAR_0,
                    size_t VAR_1,
                    const char *VAR_2,
                    char **VAR_3) {

        size_t VAR_4;
        char *VAR_5;

        VAR_4 = FUNC_3(VAR_2) + 1;

        if (VAR_1 < VAR_4)
                return 0;

        if (FUNC_2(VAR_0, VAR_2, VAR_4 - 1) != 0)
                return 0;

        if (((const char*) VAR_0)[VAR_4 - 1] != '=')
                return 0;

        VAR_5 = FUNC_4((const char*)VAR_0 + VAR_4, VAR_1 - VAR_4);
        if (!VAR_5)
                return FUNC_1();

        FUNC_0(*VAR_3, VAR_5);
        return 1;
}
