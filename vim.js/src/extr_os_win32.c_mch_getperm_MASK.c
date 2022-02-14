
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_mode; } ;
typedef char char_u ;


 int FUNC_0 (char*,struct stat*) ;
 scalar_t__ FUNC_1 (char*) ;

long
FUNC_2(char_u *VAR_0)
{
    struct stat VAR_1;
    int VAR_2;

    if (VAR_0[0] == '\\' && VAR_0[1] == '\\')

 return (long)FUNC_1(VAR_0);
    VAR_2 = FUNC_0(VAR_0, &VAR_1);
    return VAR_2 == 0 ? (long)VAR_1.st_mode : -1L;
}
