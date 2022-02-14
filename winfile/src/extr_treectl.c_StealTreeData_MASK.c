
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {scalar_t__ nLevels; struct TYPE_3__* pParent; int szName; } ;
typedef TYPE_1__* PDNODE ;
typedef int LPWSTR ;
typedef long LPARAM ;
typedef scalar_t__ INT ;
typedef scalar_t__ HWND ;
typedef int DWORD ;
typedef int DNODE ;
typedef scalar_t__ BYTE ;
typedef int BOOL ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_3 (scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (scalar_t__,int ) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_9 (int ,scalar_t__) ;
 int VAR_15 ;
 int FUNC_10 (scalar_t__,int ) ;
 scalar_t__ FUNC_11 (scalar_t__,int ,scalar_t__,long) ;
 int FUNC_12 (int *) ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ) ;

BOOL
FUNC_16(
   HWND VAR_19,
   HWND VAR_20,
   LPWSTR VAR_21)
{
   HWND VAR_22, VAR_23;
   WCHAR VAR_24[VAR_15];
   DWORD VAR_25;
   DWORD VAR_26;




   VAR_25 = FUNC_7(FUNC_5(VAR_19), VAR_5) & VAR_17;
   VAR_26 = FUNC_7(FUNC_5(VAR_19), VAR_3) & VAR_0;




   for (VAR_22 = FUNC_6(VAR_18, VAR_6); VAR_22;
      VAR_22 = FUNC_6(VAR_22, VAR_7)) {





      if ((VAR_23 = FUNC_8(VAR_22)) &&
         (VAR_23 != VAR_19) &&
         !FUNC_7(VAR_23, VAR_4) &&
         (VAR_25 == (DWORD)(FUNC_7(VAR_22, VAR_5) & VAR_17)) &&
         (VAR_26 == (DWORD)(FUNC_7(VAR_22, VAR_3) & VAR_0))) {

         FUNC_11(VAR_22, VAR_2, FUNC_2(VAR_24), (LPARAM)VAR_24);
         FUNC_12(VAR_24);

         if (!FUNC_13(VAR_21, VAR_24))
            break;
      }
   }

   if (VAR_22) {

      HWND VAR_27;
      PDNODE VAR_28, VAR_29, VAR_30;
      INT VAR_31;

      VAR_27 = FUNC_4(VAR_23, VAR_8);




      if ((INT)FUNC_11(VAR_27, VAR_10, 0, 0L) == 0) {
         return VAR_1;
      }

      VAR_30 = ((void*)0);

      for (VAR_31 = 0; FUNC_11(VAR_27, VAR_12, VAR_31, (LPARAM)&VAR_28) != VAR_9; VAR_31++) {

         if ((VAR_29 = (PDNODE)FUNC_9(VAR_14, sizeof(DNODE) + FUNC_1(FUNC_15(VAR_28->szName))))) {

            *VAR_29 = *VAR_28;
            FUNC_14(VAR_29->szName, VAR_28->szName);





            if (VAR_30 && VAR_30->nLevels == (BYTE)(VAR_28->nLevels - (BYTE)1)) {
               VAR_29->pParent = VAR_30;
            } else {
               VAR_29->pParent = VAR_30 = FUNC_3(VAR_28->nLevels-1, VAR_31-1, VAR_20);
            }

            FUNC_11(VAR_20, VAR_13, VAR_31, (LPARAM)VAR_29);
            FUNC_0((PDNODE)FUNC_11(VAR_20, VAR_11, VAR_31, 0L) == VAR_29);
         }
      }




      FUNC_10(VAR_20, VAR_1);

      return VAR_16;
   }

   return VAR_1;
}
