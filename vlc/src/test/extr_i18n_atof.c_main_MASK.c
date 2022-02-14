
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char**) ;

int FUNC_3 (void)
{
    const char VAR_0[] = "999999.999999";
    const char VAR_1[] = "999999,999999";
    const char VAR_2[] = "999999#999999";
    char *VAR_3;

    FUNC_0 (FUNC_1("0") == 0.);
    FUNC_0 (FUNC_1("1") == 1.);
    FUNC_0 (FUNC_1("1.") == 1.);
    FUNC_0 (FUNC_1("1,") == 1.);
    FUNC_0 (FUNC_1("1#") == 1.);
    FUNC_0 (FUNC_1(VAR_0) == 999999.999999);
    FUNC_0 (FUNC_1(VAR_1) == 999999.);
    FUNC_0 (FUNC_1(VAR_2) == 999999.);
    FUNC_0 (FUNC_1("invalid") == 0.);

    FUNC_0 ((FUNC_2(VAR_0, &VAR_3 ) == 999999.999999)
            && (*VAR_3 == '\0'));
    FUNC_0 ((FUNC_2(VAR_1, &VAR_3 ) == 999999.)
            && (*VAR_3 == ','));
    FUNC_0 ((FUNC_2(VAR_2, &VAR_3 ) == 999999.)
            && (*VAR_3 == '#'));

    return 0;
}
