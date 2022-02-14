
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* LPTSTR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

LPTSTR
FUNC_0(register LPTSTR VAR_2)
{
   register LPTSTR VAR_3;

   for (VAR_3=VAR_2; *VAR_2; VAR_2++) {
      if ((VAR_2[0] == VAR_0 || VAR_2[0] == VAR_1) && VAR_2[1])
         VAR_3 = VAR_2+1;
   }

   return(VAR_3);
}
