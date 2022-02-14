
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 char* FUNC_1 (size_t) ;
 int FUNC_2 (char const*,char*) ;
 scalar_t__ FUNC_3 (int ) ;
 char* FUNC_4 (char const*,char const*) ;
 size_t FUNC_5 (char const*) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static char *FUNC_7(const char *VAR_0, const char *VAR_1)
{
    VAR_0 = FUNC_4(VAR_0, VAR_1);
    if (VAR_0 == ((void*)0))
        return ((void*)0);

    VAR_0 += FUNC_6(VAR_0);
    VAR_0 += FUNC_2(VAR_0, " \t");

    if (*VAR_0 != '=')
        return ((void*)0);

    VAR_0++;
    VAR_0 += FUNC_2(VAR_0, " \t");

    size_t VAR_2 = FUNC_5(VAR_0);
    if (VAR_2 == 0)
        return ((void*)0);

    FUNC_0(VAR_2 >= 2);
    VAR_0++;
    VAR_2 -= 2;

    char *VAR_3 = FUNC_1(VAR_2 + 1), *VAR_4;
    if (FUNC_3(VAR_3 == ((void*)0)))
        return ((void*)0);

    for (VAR_4 = VAR_3; VAR_2 > 0; VAR_2--)
    {
        char VAR_5 = *(VAR_0++);
        if (VAR_5 == '\\')
        {
            VAR_5 = *(VAR_0++);
            VAR_2--;
        }
        *(VAR_4++) = VAR_5;
    }
    *VAR_4 = '\0';
    return VAR_3;
}
