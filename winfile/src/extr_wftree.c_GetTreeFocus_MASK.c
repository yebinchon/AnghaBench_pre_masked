
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HWND ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

HWND
FUNC_3(HWND VAR_3)
{
   HWND VAR_4, VAR_5 = ((void*)0);

   if (VAR_1 && FUNC_0() == VAR_2)
      return VAR_2;

   VAR_5 = VAR_4 = (HWND)FUNC_2(VAR_3, VAR_0);

   while (VAR_4 && VAR_4 != VAR_3) {
      VAR_5 = VAR_4;
      VAR_4 = FUNC_1(VAR_4);
   }

   return VAR_5;
}
