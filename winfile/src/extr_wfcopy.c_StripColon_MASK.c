
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* LPTSTR ;
typedef int INT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__*) ;

LPTSTR
FUNC_1(register LPTSTR VAR_2)
{
   register INT VAR_3 = FUNC_0(VAR_2);

   if (VAR_3 > 2 && VAR_2[VAR_3-1] == VAR_0)
      VAR_2[VAR_3-1] = VAR_1;

   return VAR_2;
}
