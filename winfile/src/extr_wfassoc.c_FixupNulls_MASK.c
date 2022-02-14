
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef scalar_t__* LPTSTR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__* FUNC_0 (scalar_t__*) ;

VOID
FUNC_1(LPTSTR VAR_2)
{
   LPTSTR VAR_3;

   while (*VAR_2) {
      if (*VAR_2 == VAR_0) {
         VAR_3 = VAR_2;
         VAR_2 = FUNC_0(VAR_2);
         *VAR_3 = VAR_1;
      }
      else
         VAR_2 = FUNC_0(VAR_2);
   }
}
