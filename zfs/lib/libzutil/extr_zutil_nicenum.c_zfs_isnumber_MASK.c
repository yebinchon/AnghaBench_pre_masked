
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const) ;

boolean_t
FUNC_1(const char *VAR_2)
{
 for (; *VAR_2; VAR_2++)
  if (!(FUNC_0(*VAR_2) || (*VAR_2 == '.')))
   return (VAR_0);

 return (VAR_1);
}
