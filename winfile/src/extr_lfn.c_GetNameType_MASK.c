
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* LPTSTR ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__*) ;
 int FUNC_1 (scalar_t__*) ;

DWORD
FUNC_2(LPTSTR VAR_3)
{
   if (VAR_0 == *(VAR_3+1)) {
      if (!FUNC_1(VAR_3))
         return VAR_1;
   } else if(FUNC_0(VAR_3))
      return VAR_1;

   return(VAR_2);
}
