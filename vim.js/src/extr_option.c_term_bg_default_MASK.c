
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char char_u ;


 char VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*) ;
 int VAR_1 ;
 char* FUNC_1 (char*) ;
 char* FUNC_2 (char*,char) ;

__attribute__((used)) static char_u *
FUNC_3()
{




    char_u *VAR_2;

    if (FUNC_0(VAR_1, "linux") == 0
     || FUNC_0(VAR_1, "screen.linux") == 0
     || FUNC_0(VAR_1, "cygwin") == 0
     || FUNC_0(VAR_1, "putty") == 0
     || ((VAR_2 = FUNC_1((char_u *)"COLORFGBG")) != ((void*)0)
  && (VAR_2 = FUNC_2(VAR_2, ';')) != ((void*)0)
  && ((VAR_2[1] >= '0' && VAR_2[1] <= '6') || VAR_2[1] == '8')
  && VAR_2[2] == VAR_0))
 return (char_u *)"dark";
    return (char_u *)"light";

}
