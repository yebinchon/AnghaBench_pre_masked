
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static size_t FUNC_0(const char *VAR_0)
{
    size_t VAR_1 = 0;
    unsigned char VAR_2;

    if (VAR_0[VAR_1++] != '"')
        return 0;

    do
    {
        VAR_2 = VAR_0[VAR_1++];

        if (VAR_2 == '\0')
            return 0;

        if (VAR_2 == '\\')
        {
            unsigned char VAR_3 = VAR_0[VAR_1++];
            if (VAR_3 < 32 && VAR_3 != '\t')
                return 0;
        }
    }
    while (VAR_2 != '"');

    return VAR_1;
}
