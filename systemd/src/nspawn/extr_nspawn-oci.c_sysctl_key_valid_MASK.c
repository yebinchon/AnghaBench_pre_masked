
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*) ;

__attribute__((used)) static bool FUNC_1(const char *VAR_0) {
        bool VAR_1 = 1;




        if (FUNC_0(VAR_0))
                return 0;

        for (; *VAR_0; VAR_0++) {

                if (*VAR_0 <= ' ' || *VAR_0 >= 127)
                        return 0;
                if (*VAR_0 == '/')
                        return 0;
                if (*VAR_0 == '.') {

                        if (VAR_1)
                                return 0;

                        VAR_1 = 1;
                } else
                        VAR_1 = 0;
        }

        if (VAR_1)
                return 0;

        return 1;
}
