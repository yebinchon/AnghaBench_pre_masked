
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,size_t*) ;
 scalar_t__ FUNC_1 (int ) ;
 size_t FUNC_2 (char const*) ;

char *FUNC_3 (const char *VAR_0)
{
    size_t VAR_1 = FUNC_2 (VAR_0);
    char *VAR_2 = FUNC_0 (VAR_0, &VAR_1);
    if (FUNC_1(VAR_2 != ((void*)0)))
        VAR_2[VAR_1] = '\0';
    return VAR_2;
}
