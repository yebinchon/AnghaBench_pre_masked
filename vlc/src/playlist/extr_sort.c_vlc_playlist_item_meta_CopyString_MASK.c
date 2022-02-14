
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(const char **VAR_2, const char *VAR_3)
{
    if (VAR_3)
    {
        *VAR_2 = FUNC_0(VAR_3);
        if (FUNC_1(!*VAR_2))
            return VAR_0;
    }
    else
        *VAR_2 = ((void*)0);
    return VAR_1;
}
