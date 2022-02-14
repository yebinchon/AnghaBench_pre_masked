
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static bool FUNC_0(char VAR_0, const char *VAR_1, const char *VAR_2) {
        bool VAR_3 = 0;

        if (!VAR_1 && !VAR_2)
                return 1;

        if (!VAR_1 || !VAR_2)
                return 0;

        for (;;) {
                if (*VAR_1 != *VAR_2)
                        return *VAR_1 == 0 && (*VAR_2 == VAR_0 || VAR_3);

                if (*VAR_1 == 0)
                        return 1;

                VAR_3 = *VAR_1 == VAR_0;

                VAR_1++, VAR_2++;
        }
}
