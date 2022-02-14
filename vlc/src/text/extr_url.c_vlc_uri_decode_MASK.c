
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int *,int) ;

char *FUNC_1 (char *VAR_0)
{
    char *VAR_1 = VAR_0, *VAR_2 = VAR_0;
    if (VAR_1 == ((void*)0))
        return ((void*)0);

    char VAR_3;
    while ((VAR_3 = *(VAR_1++)) != '\0')
    {
        if (VAR_3 == '%')
        {
            char VAR_4[3];

            if (!(VAR_4[0] = *(VAR_1++)) || !(VAR_4[1] = *(VAR_1++)))
                return ((void*)0);
            VAR_4[2] = '\0';
            *(VAR_2++) = FUNC_0 (VAR_4, ((void*)0), 0x10);
        }
        else
            *(VAR_2++) = VAR_3;
    }
    *VAR_2 = '\0';
    return VAR_0;
}
