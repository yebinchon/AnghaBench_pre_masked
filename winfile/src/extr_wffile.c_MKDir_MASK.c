
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* LPTSTR ;
typedef int DWORD ;


 int FUNC_0 (int ,scalar_t__*,int *) ;
 scalar_t__ FUNC_1 (scalar_t__*,int *) ;
 scalar_t__ FUNC_2 (scalar_t__*,scalar_t__*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 () ;

DWORD FUNC_4(
    LPTSTR VAR_2,
    LPTSTR VAR_3)
{
   DWORD VAR_4 = VAR_0;

   if ((VAR_3 && *VAR_3) ?
         FUNC_2(VAR_3, VAR_2, ((void*)0)) :
         FUNC_1(VAR_2, ((void*)0)))
   {
      FUNC_0(VAR_1, VAR_2, ((void*)0));
   }
   else
   {
      VAR_4 = FUNC_3();
   }

   return (VAR_4);
}
