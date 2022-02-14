
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int * LPXDTALINK ;
typedef int LPWSTR ;
typedef scalar_t__ INT ;
typedef scalar_t__ HWND ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__,int *,int ) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int * FUNC_5 (int *) ;
 scalar_t__ VAR_7 ;
 int FUNC_6 (int ,int *) ;

LPXDTALINK
FUNC_7(
   HWND VAR_8,
   LPWSTR VAR_9,
   DWORD VAR_10)
{
   HWND VAR_11;
   HWND VAR_12;
   WCHAR VAR_13[VAR_6];

   LPXDTALINK VAR_14, VAR_15;
   INT VAR_16;

   for (VAR_12 = FUNC_2(VAR_7, VAR_3);
      VAR_12;
      VAR_12 = FUNC_2(VAR_12, VAR_4)) {

      if ((VAR_11 = FUNC_4(VAR_12)) && (VAR_11 != VAR_8)) {

         FUNC_1(VAR_12, VAR_13, FUNC_0(VAR_13));

         if ((VAR_10 == (DWORD)FUNC_3(VAR_12, VAR_0)) &&
            !FUNC_6(VAR_9, VAR_13) &&
            (VAR_14 = (LPXDTALINK)FUNC_3(VAR_11, VAR_1))) {

            VAR_16 = (INT)FUNC_3(VAR_11, VAR_2);
            if (!VAR_16 || VAR_5 == VAR_16) {

               VAR_15 = FUNC_5(VAR_14);

               return VAR_15;
            }
         }
      }
   }

   return ((void*)0);
}
