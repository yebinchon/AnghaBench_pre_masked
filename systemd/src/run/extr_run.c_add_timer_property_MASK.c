
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 () ;
 char* FUNC_2 (char const*,char*,char const*) ;
 scalar_t__ FUNC_3 (int *,char*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_1, const char *VAR_2) {
        char *VAR_3;

        FUNC_0(VAR_1);
        FUNC_0(VAR_2);

        VAR_3 = FUNC_2(VAR_1, "=", VAR_2);
        if (!VAR_3)
                return FUNC_1();

        if (FUNC_3(&VAR_0, VAR_3) < 0)
                return FUNC_1();

        return 0;
}
