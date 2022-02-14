
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,char) ;

__attribute__((used)) static int FUNC_2 (char **VAR_0)
{
    char *VAR_1 = *VAR_0, *VAR_2;

    if (VAR_1[0] == '[')
    {
        VAR_1 = ++*VAR_0;
        VAR_2 = FUNC_1 (VAR_1, ']');
        if (VAR_2)
            *VAR_2++ = '\0';
    }
    else
        VAR_2 = FUNC_1 (VAR_1, ':');

    if (VAR_2 == ((void*)0))
        return 0;
    *VAR_2++ = '\0';
    return FUNC_0 (VAR_2);
}
