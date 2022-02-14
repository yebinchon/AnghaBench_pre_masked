
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*) ;
 char* FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*,char const*,size_t) ;
 char* FUNC_4 (char const*,char const*) ;
 size_t FUNC_5 (char const*,char*) ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 size_t FUNC_7 (char const*,char*) ;

__attribute__((used)) static bool FUNC_8(const char *VAR_0, const char *VAR_1) {
        const char *VAR_2;

        FUNC_0(VAR_0);
        FUNC_0(VAR_1);

        VAR_2 = FUNC_2(VAR_0);

        if (FUNC_1(VAR_1)) {
                const char *VAR_3;




                VAR_3 = FUNC_4(VAR_2, VAR_1);
                if (!VAR_3)
                        return 0;

                return
                        VAR_3[FUNC_7(VAR_3, "/")] == 0 ||
                        FUNC_6(VAR_3, ".raw");
        } else {
                const char *VAR_4;
                size_t VAR_5;




                VAR_5 = FUNC_5(VAR_2, "/");
                VAR_4 = FUNC_2(VAR_1);

                if (FUNC_5(VAR_4, "/") != VAR_5)
                        return 0;

                return FUNC_3(VAR_2, VAR_4, VAR_5) == 0;
        }
}
