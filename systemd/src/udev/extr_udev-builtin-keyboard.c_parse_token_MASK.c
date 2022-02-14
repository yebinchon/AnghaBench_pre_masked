
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int FUNC_0 (char const*,char**,int ) ;

__attribute__((used)) static char* FUNC_1(const char *VAR_0, int32_t *VAR_1) {
        char *VAR_2;
        int32_t VAR_3;

        if (!VAR_0)
                return ((void*)0);

        VAR_3 = FUNC_0(VAR_0, &VAR_2, 0);
        if (*VAR_2 && *VAR_2 != ':')
                return ((void*)0);

        if (VAR_2 != VAR_0)
                *VAR_1 = VAR_3;

        if (*VAR_2)
                VAR_2++;

        return VAR_2;
}
