
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mode_t ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_0 ;

const char *
FUNC_4(mode_t VAR_1)
{
 if (FUNC_0(VAR_1))
  return "drwxr-xr-x";
 else if (FUNC_2(VAR_1))
  return "lrwxrwxrwx";
 else if (FUNC_1(VAR_1))
  return "m---------";
 else if (FUNC_3(VAR_1) && VAR_1 & VAR_0)
  return "-rwxr-xr-x";
 else if (FUNC_3(VAR_1))
  return "-rw-r--r--";
 else
  return "----------";
}
