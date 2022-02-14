
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const**) ;
 scalar_t__ FUNC_1 (char const*) ;
 char* FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_1, const char *VAR_2, const char **VAR_3) {
        FUNC_0(VAR_3);

        if (VAR_1) {
                const char *VAR_4;

                VAR_4 = FUNC_2(VAR_1);
                if (VAR_4 && FUNC_1(VAR_4)) {
                        *VAR_3 = VAR_4;
                        return 0;
                }
        }

        if (VAR_2) {
                *VAR_3 = VAR_2;
                return 0;
        }

        return -VAR_0;
}
