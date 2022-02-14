
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,char const*,char const*) ;
 scalar_t__ FUNC_2 (char const*,char const*) ;

__attribute__((used)) static void FUNC_3(const char *VAR_0, const char *VAR_1, const char *VAR_2, int VAR_3) {
        int VAR_4;

        VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2);
        FUNC_0(VAR_4 == VAR_3);

        VAR_4 = FUNC_1(VAR_2, VAR_1, VAR_0);
        if (VAR_3 >= 0)
                FUNC_0(VAR_4 == 0 || FUNC_2(VAR_0, VAR_2) > 0);
        else
                FUNC_0(VAR_4 == VAR_3);
}
