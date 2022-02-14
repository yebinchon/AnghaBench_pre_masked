
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char const*,char*) ;
 size_t FUNC_1 (char const*) ;
 int FUNC_2 (char const) ;
 size_t FUNC_3 (char const*) ;

__attribute__((used)) static bool FUNC_4(const char *VAR_0)
{
    if (!FUNC_2(*VAR_0))
        return 0;

    for (;;)
    {
        size_t VAR_1 = FUNC_3(VAR_0);
        if (VAR_1 != 0)
        {
            if (VAR_0[VAR_1] == '/')
            {
                VAR_0 += VAR_1 + 1;
                VAR_1 = FUNC_3(VAR_0);
            }
        }
        else
            VAR_1 = FUNC_1(VAR_0);

        if (VAR_1 == 0)
            break;

        VAR_0 += VAR_1;

        if (*VAR_0 == '\0')
            return 1;

        VAR_1 = FUNC_0(VAR_0, "\t ");

        if (VAR_1 == 0)
            break;

        VAR_0 += VAR_1;
    }

    return 0;
}
