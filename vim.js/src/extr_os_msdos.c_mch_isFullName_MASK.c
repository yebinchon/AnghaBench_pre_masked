
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char char_u ;


 char VAR_0 ;

int
FUNC_0(char_u *VAR_1)
{

    return (VAR_1[0] != VAR_0 && VAR_1[1] == ':'
         && (VAR_1[2] == '/' || VAR_1[2] == '\\'))
 || (VAR_1[0] == VAR_1[1] && (VAR_1[0] == '/' || VAR_1[0] == '\\'));
}
