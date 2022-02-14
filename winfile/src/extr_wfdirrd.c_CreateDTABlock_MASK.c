
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ wParam; } ;
typedef TYPE_1__ MSG ;
typedef int * LPXDTALINK ;
typedef int LPWSTR ;
typedef int HWND ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int ,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int * FUNC_4 (int ,int ,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;

LPXDTALINK
FUNC_5(
   HWND VAR_8,
   LPWSTR VAR_9,
   DWORD VAR_10,
   BOOL VAR_11)
{
   LPXDTALINK VAR_12;
   MSG VAR_13;

   FUNC_3(VAR_8, VAR_3, VAR_2);

   if (!VAR_11 && (VAR_12 = FUNC_4(VAR_8, VAR_9, VAR_10))) {

      if (FUNC_2(&VAR_13,
                      ((void*)0),
                      VAR_7,
                      VAR_7,
                      VAR_4)) {

         if (VAR_13.wParam == VAR_6 || VAR_13.wParam == VAR_5) {

            FUNC_1(VAR_12);
            goto Abort;
         }
      }






      FUNC_0(VAR_8, VAR_12, VAR_0);

      return VAR_12;
   }

Abort:

   FUNC_0(VAR_8, ((void*)0), VAR_1);
   return ((void*)0);
}
