
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 char* VAR_1 ;

__attribute__((used)) static void
FUNC_2(char **VAR_2, char *VAR_3, int *VAR_4)
{
    int VAR_5;
    int VAR_6;

    if (*VAR_4 == VAR_0)
 return;


    for (VAR_5 = 0; VAR_5 < *VAR_4; ++VAR_5)
    {
 if (!FUNC_1(VAR_2[VAR_5], VAR_3))
     return;
    }


    if (!FUNC_1(VAR_3, VAR_1))
 VAR_5 = 0;
    else
 for (VAR_5 = 0; VAR_5 < *VAR_4; ++VAR_5)
     if (FUNC_1(VAR_2[VAR_5], VAR_3) > 0 && FUNC_1(VAR_2[VAR_5], VAR_1))
  break;


    for (VAR_6 = *VAR_4; VAR_6 > VAR_5; --VAR_6)
 VAR_2[VAR_6] = VAR_2[VAR_6-1];
    VAR_2[VAR_5] = FUNC_0(VAR_3);

    ++(*VAR_4);
}
