
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int char_u ;
typedef int WCHAR ;


 scalar_t__ FUNC_0 () ;
 char VAR_0 ;
 char FUNC_1 (char) ;
 scalar_t__ FUNC_2 (char) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int VAR_1 ;
 int * FUNC_5 (char*,int *) ;
 scalar_t__ FUNC_6 (char) ;
 int VAR_2 ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;

int
FUNC_11(char *VAR_3)
{
    if (VAR_3[0] == VAR_0)
 return -1;

    if (VAR_2 >= 5)
    {
 FUNC_8();
 FUNC_7((char_u *)"chdir(%s)", VAR_3);
 FUNC_9();
    }
    if (FUNC_6(VAR_3[0]) && VAR_3[1] == ':')
    {



 if (FUNC_2(FUNC_1(VAR_3[0]) - 'a' + 1) == 0)
     VAR_3 += 2;
    }

    if (*VAR_3 == VAR_0)
 return 0;
    return FUNC_4(VAR_3);
}
