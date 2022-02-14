
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char char_u ;


 char VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char**) ;
 int VAR_4 ;

void
FUNC_1()
{
    char_u *VAR_5;
    int VAR_6;

    VAR_3 = (VAR_4 & 0xf) + 1;
    VAR_2 = ((VAR_4 >> 4) & 0xf) + 1;
    if (VAR_1[0] == VAR_0 && VAR_1[1] == '|')
    {
 VAR_5 = VAR_1 + 2;
 VAR_6 = FUNC_0(&VAR_5);
 if (*VAR_5 == 'm' && VAR_6 > 0)
 {
     VAR_3 = (VAR_6 & 0xf) + 1;
     VAR_2 = ((VAR_6 >> 4) & 0xf) + 1;
 }
    }
}
