
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,char) ;
 scalar_t__ FUNC_2 (char*,char const*) ;
 scalar_t__ FUNC_3 (char const*,char*,int) ;
 char* FUNC_4 (char const*) ;

__attribute__((used)) static bool FUNC_5(const char *VAR_0, const char *VAR_1, const char *VAR_2)
{
    if (!*VAR_0 && !*VAR_1)
        return 1;

    if (!VAR_2)
        return 0;

    if (FUNC_3(VAR_2, "BASIC", 5))
        return 0;

    VAR_2 += 5;
    while (*VAR_2 == ' ')
        VAR_2++;

    char *VAR_3 = FUNC_4(VAR_2);
    if (!VAR_3)
        return 0;

    char *VAR_4 = ((void*)0);
    VAR_4 = FUNC_1 (VAR_3, ':');
    if (!VAR_4)
        goto auth_failed;

    *VAR_4++ = '\0';

    if (FUNC_2 (VAR_3, VAR_0))
        goto auth_failed;

    if (FUNC_2 (VAR_4, VAR_1))
        goto auth_failed;

    FUNC_0(VAR_3);
    return 1;

auth_failed:
    FUNC_0(VAR_3);
    return 0;
}
