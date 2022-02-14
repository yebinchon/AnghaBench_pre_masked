
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,char) ;
 char FUNC_3 (char) ;

__attribute__((used)) static char *FUNC_4(const char *VAR_0)
{

    while (*VAR_0 != '\0' && *VAR_0 == ' ')
        VAR_0++;

    char *VAR_1 = FUNC_0(VAR_0);
    if (!VAR_1)
        return ((void*)0);


    char *VAR_2 = FUNC_2(VAR_1, '.');
    if (VAR_2 && VAR_2 != VAR_1)
        *VAR_2 = '\0';


    int VAR_3 = FUNC_1(VAR_1) - 1;
    while (VAR_1[VAR_3] == ' ' && VAR_3 >= 0)
        VAR_1[VAR_3--] = '\0';


    VAR_2 = VAR_1;
    while (*VAR_2 != '\0')
    {
        *VAR_2 = FUNC_3(*VAR_2);
        VAR_2++;
    }

    return VAR_1;
}
