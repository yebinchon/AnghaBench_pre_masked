
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int VOID ;
typedef int UINT_PTR ;
typedef void* UINT ;
struct TYPE_6__ {void* bRestored; scalar_t__ iStartBmp; scalar_t__ idBitmap; int * hbmButtons; void* bUnicode; scalar_t__ hMenu; scalar_t__ hModule; void* Delta; scalar_t__ (* ExtProc ) (int ,int ,int ) ;} ;
struct TYPE_5__ {int dwSize; int szMenuName; scalar_t__ hMenu; void* wMenuDelta; } ;
struct TYPE_4__ {int dwSize; int szMenuName; scalar_t__ hMenu; void* wMenuDelta; } ;
typedef scalar_t__ TCHAR ;
typedef scalar_t__* LPTSTR ;
typedef int LPARAM ;
typedef scalar_t__ INT ;
typedef scalar_t__ HMENU ;
typedef scalar_t__ HANDLE ;
typedef scalar_t__ (* FM_EXT_PROC ) (int ,int ,int ) ;
typedef TYPE_1__ FMS_LOADW ;
typedef TYPE_2__ FMS_LOADA ;
typedef void* BOOL ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,void*) ;
 int FUNC_2 (scalar_t__*) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,scalar_t__*,int ,scalar_t__*,int ,int ) ;
 scalar_t__ FUNC_6 (scalar_t__,int ) ;
 int VAR_4 ;
 int FUNC_7 (scalar_t__,scalar_t__,int,int ,int ) ;
 int FUNC_8 (scalar_t__,scalar_t__,int,int ,int ) ;
 scalar_t__ FUNC_9 (scalar_t__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_10 (int) ;
 int VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 TYPE_3__* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_11 (scalar_t__*) ;
 scalar_t__ FUNC_12 (int ,int ,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;

VOID
FUNC_13()
{
   TCHAR VAR_18[VAR_9];
   TCHAR VAR_19[VAR_5];
   LPTSTR VAR_20;
   HANDLE VAR_21;
   FM_EXT_PROC VAR_22;
   HMENU VAR_23;
   INT VAR_24;
   HMENU VAR_25;
   INT VAR_26=0;
   BOOL VAR_27;

   VAR_25 = FUNC_4(VAR_13);

   FUNC_0(!VAR_11);
   VAR_24 = FUNC_10(VAR_4);

   FUNC_5(VAR_15, ((void*)0), VAR_16, VAR_18, FUNC_2(VAR_18), VAR_17);

   for (VAR_20 = VAR_18; *VAR_20 && VAR_14 < VAR_6; VAR_20 += FUNC_11(VAR_20) + 1) {

      FUNC_5(VAR_15, VAR_20, VAR_16, VAR_19, FUNC_2(VAR_19), VAR_17);

      VAR_21 = FUNC_9(VAR_19);

      if (VAR_21) {
         VAR_22 = (FM_EXT_PROC)FUNC_6(VAR_21, VAR_3);
         if (VAR_22) {
            VAR_27 = VAR_10;
         } else {
            VAR_22 = (FM_EXT_PROC)FUNC_6(VAR_21, VAR_2);
            VAR_27 = VAR_0;
         }

         if (VAR_22) {
            UINT VAR_28;
            FMS_LOADA VAR_29;
            FMS_LOADW VAR_30;

            VAR_28 = ((VAR_4 + VAR_14 + 1)*100);
            if (VAR_27)
               VAR_30.wMenuDelta = VAR_28;
            else
               VAR_29.wMenuDelta = VAR_28;

            if ((*VAR_22)(VAR_13, VAR_1, VAR_27 ? (LPARAM)&VAR_30 : (LPARAM)&VAR_29)) {

               if ((VAR_27 ? VAR_30.dwSize : VAR_29.dwSize)
                  != (VAR_27 ? sizeof(FMS_LOADW) : sizeof(FMS_LOADA)))
                  goto LoadFail;

               VAR_23 = VAR_27 ? VAR_30.hMenu : VAR_29.hMenu;

               VAR_12[VAR_14].ExtProc = VAR_22;
               VAR_12[VAR_14].Delta = VAR_28;
               VAR_12[VAR_14].hModule = VAR_21;
               VAR_12[VAR_14].hMenu = VAR_23;
               VAR_12[VAR_14].bUnicode = VAR_27;


               VAR_12[VAR_14].hbmButtons = ((void*)0);
               VAR_12[VAR_14].idBitmap = 0;
               VAR_12[VAR_14].iStartBmp = 0;
               VAR_12[VAR_14].bRestored = VAR_0;

               if (VAR_23) {
                  FUNC_1(VAR_23, VAR_28);

                  if (VAR_27) {
                     FUNC_8(VAR_25,
                        VAR_24 + VAR_26,
                        VAR_7 | VAR_8,
                        (UINT_PTR) VAR_23, VAR_30.szMenuName);
                  } else {
                     FUNC_7(VAR_25,
                        VAR_24 + VAR_26,
                        VAR_7 | VAR_8,
                        (UINT_PTR) VAR_23, VAR_29.szMenuName);
                  }
                  VAR_26++;
               }

               VAR_14++;

            } else {
               goto LoadFail;
            }
         } else {
LoadFail:
            FUNC_3(VAR_21);
         }
      }
   }
}
