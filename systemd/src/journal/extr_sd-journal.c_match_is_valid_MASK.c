
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void const*) ;
 scalar_t__ FUNC_1 (void const*,char*) ;

__attribute__((used)) static int FUNC_2(const void *VAR_0, size_t VAR_1) {
        const char *VAR_2, *VAR_3;

        FUNC_0(VAR_0);

        if (VAR_1 < 2)
                return 0;

        if (FUNC_1(VAR_0, "__"))
                return 0;

        VAR_2 = VAR_0;
        for (VAR_3 = VAR_2; VAR_3 < VAR_2 + VAR_1; VAR_3++) {

                if (*VAR_3 == '=')
                        return VAR_3 > VAR_2;

                if (*VAR_3 == '_')
                        continue;

                if (*VAR_3 >= 'A' && *VAR_3 <= 'Z')
                        continue;

                if (*VAR_3 >= '0' && *VAR_3 <= '9')
                        continue;

                return 0;
        }

        return 0;
}
