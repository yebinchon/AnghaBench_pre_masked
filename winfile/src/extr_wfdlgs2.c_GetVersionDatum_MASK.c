
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPVOID ;
typedef int * LPTSTR ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__,int *,scalar_t__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__,int *) ;
 scalar_t__ VAR_3 ;

LPTSTR
FUNC_2(LPTSTR VAR_4)
{
   DWORD VAR_5=0;
   LPTSTR VAR_6;

   if (!VAR_1)
      return ((void*)0);

   FUNC_1(VAR_3 + VAR_0, VAR_4);

   FUNC_0(VAR_2, VAR_3, (LPVOID*)&VAR_6, &VAR_5);

   return (VAR_5 != 0) ? VAR_6 : ((void*)0);
}
