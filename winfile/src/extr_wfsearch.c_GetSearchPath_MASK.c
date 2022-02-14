
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WCHAR ;
typedef int VOID ;
typedef scalar_t__* LPWSTR ;
typedef int HWND ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (int ,scalar_t__*,int ) ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__*,scalar_t__*) ;

VOID
FUNC_3(HWND VAR_2, LPWSTR VAR_3)
{
   LPWSTR VAR_4;

   WCHAR VAR_5[VAR_1+32];


   FUNC_1(VAR_2, VAR_5, FUNC_0(VAR_5));



   VAR_4 = VAR_5;
   while (*VAR_4 && *VAR_4 != VAR_0)
      ++VAR_4;

   VAR_4 += 2;

   FUNC_2(VAR_3, VAR_4);
}
