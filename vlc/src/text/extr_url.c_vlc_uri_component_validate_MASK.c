
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char const) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int * FUNC_4 (char const*,int) ;

__attribute__((used)) static bool FUNC_5(const char *VAR_0, const char *VAR_1)
{
    FUNC_0(VAR_0 != ((void*)0));

    for (size_t VAR_2 = 0; VAR_0[VAR_2] != '\0'; VAR_2++)
    {
        int VAR_3 = VAR_0[VAR_2];

        if (FUNC_2(VAR_3) || FUNC_3(VAR_3))
            continue;
        if (FUNC_4(VAR_1, VAR_3) != ((void*)0))
            continue;
        if (VAR_3 == '%' && FUNC_1(VAR_0[VAR_2 + 1]) && FUNC_1(VAR_0[VAR_2 + 2]))
        {
            VAR_2 += 2;
            continue;
        }
        return 0;
    }
    return 1;
}
