
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static bool FUNC_3(const char *VAR_0) {
        const char *VAR_1;

        FUNC_0(VAR_0);

        if (FUNC_1(VAR_0))
                return 0;

        if (FUNC_2(VAR_0, "__"))
                return 0;

        for (VAR_1 = VAR_0; *VAR_1; VAR_1++) {

                if (*VAR_1 == '_')
                        continue;

                if (*VAR_1 >= 'A' && *VAR_1 <= 'Z')
                        continue;

                if (*VAR_1 >= '0' && *VAR_1 <= '9')
                        continue;

                return 0;
        }

        return 1;
}
