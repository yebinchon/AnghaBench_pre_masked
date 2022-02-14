
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WORD ;
typedef int LPTSTR ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int ,int ,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;

DWORD FUNC_3(
    LPTSTR VAR_1)
{
   DWORD VAR_2 = 0;

   if (FUNC_2(VAR_1))
   {
      FUNC_0(VAR_0, VAR_1, ((void*)0));
   }
   else
   {
      VAR_2 = (WORD)FUNC_1();
   }

   return (VAR_2);
}
