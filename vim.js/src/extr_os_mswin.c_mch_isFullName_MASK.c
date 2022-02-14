
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int szName ;
typedef char char_u ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char*,char*,int,int) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;

int
FUNC_2(char_u *VAR_4)
{






    char VAR_5[VAR_3 + 1];



    if ((VAR_4[0] && VAR_4[1] == ':' && (VAR_4[2] == '/' || VAR_4[2] == '\\'))
     || (VAR_4[0] == VAR_4[1] && (VAR_4[0] == '/' || VAR_4[0] == '\\')))
 return VAR_2;


    if (FUNC_0(VAR_4, VAR_5, sizeof(VAR_5) - 1, VAR_1) == VAR_0)
 return VAR_1;

    return FUNC_1(VAR_4, VAR_5, -1) == 0;
}
