
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UdevRules ;


 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (int *,char const*,char const*,size_t,char const*) ;
 scalar_t__ FUNC_2 (char const*,size_t*,char const**) ;

__attribute__((used)) static void FUNC_3(UdevRules *VAR_0, const char *VAR_1, const char *VAR_2, bool VAR_3) {
        size_t VAR_4;
        const char *VAR_5;

        if (VAR_3 && FUNC_0(VAR_2))
                FUNC_1(VAR_0, VAR_1, VAR_2, (size_t) 0, "empty value");
        else if (FUNC_2(VAR_2, &VAR_4, &VAR_5) < 0)
                FUNC_1(VAR_0, VAR_1, VAR_2, VAR_4 + 1, VAR_5);
}
