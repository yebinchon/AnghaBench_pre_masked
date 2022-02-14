
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char**,char*,char const*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;

char *FUNC_3(const char *VAR_0)
{
    char *VAR_1, *VAR_2;




    if (FUNC_0(&VAR_1, "file://%s", VAR_0) == -1)
        return ((void*)0);

    VAR_2 = FUNC_2 (VAR_1);
    FUNC_1 (VAR_1);
    return VAR_2;
}
