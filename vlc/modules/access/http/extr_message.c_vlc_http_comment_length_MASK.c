
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char) ;

__attribute__((used)) static size_t FUNC_1(const char *VAR_0)
{
    if (*VAR_0 != '(')
        return 0;

    size_t VAR_1 = 1;

    for (size_t VAR_2 = 1; VAR_2 > 0; VAR_1++)
    {
        unsigned char VAR_3 = VAR_0[VAR_1];

        if (VAR_3 == ')')
            VAR_2--;
        else
        if (VAR_3 == '(')
            VAR_2++;
        else
        if (VAR_3 == '\\')
        {
            VAR_1++;
            if (VAR_0[VAR_1] < 32)
                return 0;
        }
        else
        if (!FUNC_0(VAR_3))
            return 0;
    }
    return VAR_1;
}
