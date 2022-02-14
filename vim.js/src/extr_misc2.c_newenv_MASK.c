
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int elem ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 char** VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3()
{
    char **VAR_3, *VAR_4;
    int VAR_5, VAR_6;





    for (VAR_5 = 0; VAR_1[VAR_5]; VAR_5++)
 ;

    VAR_6 = VAR_5 + VAR_0 + 1;
    VAR_3 = (char **)FUNC_0((unsigned)(VAR_6 * sizeof (VAR_4)));
    if (VAR_3 == ((void*)0))
 return -1;


    for (VAR_5 = 0; VAR_1[VAR_5]; VAR_5++)
    {
 VAR_4 = (char *)FUNC_0((unsigned)(FUNC_2(VAR_1[VAR_5]) + 1));
 if (VAR_4 == ((void*)0))
     return -1;
 VAR_3[VAR_5] = VAR_4;
 FUNC_1(VAR_4, VAR_1[VAR_5]);
    }


    VAR_3[VAR_5] = 0;
    VAR_1 = VAR_3;
    VAR_2 = VAR_6;
    return 0;
}
