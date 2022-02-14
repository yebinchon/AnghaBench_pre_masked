
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char const*) ;
 unsigned long long FUNC_1 (char const*,int *,int) ;

int FUNC_2(const char *VAR_0, const char *VAR_1)
{
    size_t VAR_2;
    char VAR_3, VAR_4;
    for (VAR_2 = 0; (VAR_3 = VAR_0[VAR_2]) == (VAR_4 = VAR_1[VAR_2]); VAR_2++)
        if (VAR_3 == '\0')
            return 0;

    if ((unsigned)(VAR_3 - '0') > 9 || (unsigned)(VAR_4 - '0') > 9)
        return FUNC_0(VAR_0, VAR_1);

    unsigned long long VAR_5 = FUNC_1(VAR_0 + VAR_2, ((void*)0), 10);
    unsigned long long VAR_6 = FUNC_1(VAR_1 + VAR_2, ((void*)0), 10);




    if (VAR_5 == VAR_6)
        return FUNC_0(VAR_0, VAR_1);

    return (VAR_5 > VAR_6) ? +1 : -1;
}
