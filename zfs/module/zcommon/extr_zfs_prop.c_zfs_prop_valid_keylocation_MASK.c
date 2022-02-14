
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,char const*) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char*,char const*,int) ;

boolean_t
FUNC_3(const char *VAR_2, boolean_t VAR_3)
{
 if (FUNC_0("none", VAR_2) == 0)
  return (!VAR_3);
 else if (FUNC_0("prompt", VAR_2) == 0)
  return (VAR_1);
 else if (FUNC_1(VAR_2) > 8 && FUNC_2("file:///", VAR_2, 8) == 0)
  return (VAR_1);

 return (VAR_0);
}
