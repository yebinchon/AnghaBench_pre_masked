
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,char) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char const*,size_t) ;
 char* FUNC_3 (char const*,char) ;

__attribute__((used)) static bool FUNC_4(const char *VAR_0,
                             const char *VAR_1)
{
    if (VAR_1 == ((void*)0))
        return 0;

    const char *VAR_2 = FUNC_3(VAR_0, '.');
    if (VAR_2 == ((void*)0))
        return 0;

    size_t VAR_3 = FUNC_1(++VAR_2);

    for (const char *VAR_4 = VAR_1, *VAR_5; VAR_4[0]; VAR_4 = VAR_5 + 1)
    {
        VAR_5 = FUNC_0(VAR_4, ',');
        if (VAR_5 == ((void*)0))
            VAR_5 = VAR_4 + FUNC_1(VAR_4);

        if (VAR_4 + VAR_3 == VAR_5 && !FUNC_2(VAR_2, VAR_4, VAR_3))
            return 1;

        if (*VAR_5 == '\0')
            break;
    }

    return 0;
}
