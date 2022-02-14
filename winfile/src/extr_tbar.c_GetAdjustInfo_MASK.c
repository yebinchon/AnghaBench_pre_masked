
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_12__ {scalar_t__ bUnicode; scalar_t__ Delta; scalar_t__ iStartBmp; int (* ExtProc ) (int ,int ,int ) ;int hMenu; } ;
struct TYPE_11__ {int idB; int idM; } ;
struct TYPE_10__ {int idCommand; void** szHelp; int hMenu; } ;
struct TYPE_9__ {int iBitmap; int idCommand; int fsStyle; size_t dwData; int fsState; } ;
struct TYPE_8__ {int iItem; void** pszText; TYPE_2__ tbButton; } ;
typedef TYPE_1__* LPTBNOTIFY ;
typedef TYPE_2__* LPTBBUTTON ;
typedef scalar_t__ LPFMS_HELPSTRING ;
typedef int LPARAM ;
typedef size_t INT ;
typedef TYPE_3__ FMS_HELPSTRING ;
typedef void* CHAR ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (void**) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,void**) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,void**,int ,void**,int ) ;
 scalar_t__ FUNC_3 (scalar_t__,int ,int,int ) ;
 int FUNC_4 (void**,void**,int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_5 (char) ;
 scalar_t__ VAR_12 ;
 TYPE_6__* VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_6 (void**,void**,int ) ;
 TYPE_5__* VAR_17 ;
 int FUNC_7 (int ,int ,int ) ;
 TYPE_2__* VAR_18 ;

BOOL
FUNC_8(LPTBNOTIFY VAR_19)
{
   LPTBBUTTON VAR_20 = &VAR_19->tbButton;
   FMS_HELPSTRING VAR_21;
   INT VAR_22;
   int VAR_23 = VAR_19->iItem;


   if ((UINT)VAR_23 < VAR_6) {

      *VAR_20 = VAR_18[VAR_7-1];
      VAR_20->iBitmap = VAR_17[VAR_23].idB & ~VAR_3;
      VAR_20->fsState = (VAR_17[VAR_23].idB & VAR_3)
         ? VAR_9 : VAR_8;
      VAR_20->idCommand = VAR_17[VAR_23].idM;

LoadDescription:
      VAR_19->pszText[0] = FUNC_5('\0');
      if (!(VAR_20->fsStyle & VAR_10))
         FUNC_1(VAR_20->idCommand, VAR_19->pszText);

UnlockAndReturn:
      return(VAR_12);
   }

   VAR_23 -= VAR_6;
   if (VAR_14 && FUNC_3(VAR_14, VAR_11, VAR_23,
      (LPARAM)VAR_20)) {

      if (VAR_20->fsStyle & VAR_10)
         goto LoadDescription;

      VAR_22 = VAR_20->dwData - 1;

      if ((UINT)VAR_22 < (UINT)VAR_16) {
         VAR_21.idCommand = VAR_20->idCommand % 100;
         VAR_21.hMenu = VAR_13[VAR_22].hMenu;
         VAR_21.szHelp[0] = FUNC_5('\0');

         VAR_13[VAR_22].ExtProc(VAR_15, VAR_2,
             (LPARAM)(LPFMS_HELPSTRING)&VAR_21);

         if (VAR_13[VAR_22].bUnicode == VAR_1) {
            CHAR VAR_24[VAR_4];

            FUNC_6 (VAR_24, VAR_21.szHelp, FUNC_0(VAR_24));
            FUNC_2 (VAR_0, VAR_5, VAR_24, FUNC_0(VAR_24),
                                 VAR_21.szHelp, FUNC_0(VAR_21.szHelp));
         }

         FUNC_4(VAR_19->pszText, VAR_21.szHelp, VAR_4 - 1);


         VAR_20->iBitmap += VAR_13[VAR_22].iStartBmp;
         VAR_20->idCommand += VAR_13[VAR_22].Delta;

         goto UnlockAndReturn;
      }
   }

   return VAR_1;
}
