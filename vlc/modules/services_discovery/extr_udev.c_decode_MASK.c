
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;
 char* FUNC_1 (char const*) ;

__attribute__((used)) static char *FUNC_2 (const char *VAR_0)
{
    char *VAR_1 = VAR_0 ? FUNC_1 (VAR_0) : ((void*)0);
    if (VAR_1 == ((void*)0))
        return ((void*)0);

    char *VAR_2 = VAR_1;
    for (const char *VAR_3 = VAR_1; *VAR_3; VAR_2++)
    {
        int VAR_4, VAR_5;

        if ((VAR_3[0] == '\\') && (VAR_3[1] == 'x')
         && ((VAR_4 = FUNC_0 (VAR_3[2])) != -1)
         && ((VAR_5 = FUNC_0 (VAR_3[3])) != -1))
        {
            *VAR_2 = (VAR_4 << 4) | VAR_5;
            VAR_3 += 4;
        }
        else
        {
            *VAR_2 = *VAR_3;
            VAR_3++;
        }
    }
    *VAR_2 = 0;
    return VAR_1;
}
