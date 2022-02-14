
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char**,char*,int) ;
 char* FUNC_1 (char const*) ;

__attribute__((used)) static char *
FUNC_2(int VAR_0, const char *VAR_1)
{
    char *VAR_2;
    if (VAR_1)
        VAR_2 = FUNC_1(VAR_1);
    else if (FUNC_0(&VAR_2, "%d", VAR_0) == -1)
        VAR_2 = ((void*)0);
    return VAR_2;
}
