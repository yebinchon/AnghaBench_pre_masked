
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (size_t) ;
 int FUNC_1 (char*,char const*,size_t) ;
 size_t FUNC_2 (char const*,size_t) ;

char *FUNC_3 (const char *VAR_0, size_t VAR_1)
{
    size_t VAR_2 = FUNC_2 (VAR_0, VAR_1);
    char *VAR_3 = FUNC_0 (VAR_2 + 1);
    if (VAR_3)
    {
        FUNC_1 (VAR_3, VAR_0, VAR_2);
        VAR_3[VAR_2] = '\0';
    }
    return VAR_3;
}
