
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPTSTR ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int) ;

BOOL FUNC_2(
    LPTSTR VAR_3,
    DWORD VAR_4)
{
   BOOL VAR_5;





   VAR_4 = VAR_4 & ~(VAR_0 | VAR_1);

   VAR_5 = FUNC_1(VAR_3, VAR_4);

   if (VAR_5)
   {
      FUNC_0(VAR_2, VAR_3, ((void*)0));
   }

   return ( (BOOL)!VAR_5 );
}
