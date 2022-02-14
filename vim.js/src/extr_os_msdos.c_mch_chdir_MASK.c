
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int char_u ;


 char VAR_0 ;
 char FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

int
FUNC_6(char *VAR_2)
{
    if (VAR_2[0] == VAR_0)
 return 0;
    if (VAR_1 >= 5)
    {
 FUNC_4();
 FUNC_3((char_u *)"chdir(%s)", VAR_2);
 FUNC_5();
    }
    if (VAR_2[1] == ':')
    {
 if (FUNC_1(FUNC_0(VAR_2[0]) - 'a' + 1))
     return -1;
 VAR_2 += 2;
    }
    if (*VAR_2 == VAR_0)
 return 0;
    return FUNC_2(VAR_2);
}
