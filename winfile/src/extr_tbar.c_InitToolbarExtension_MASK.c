
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tbl ;
typedef size_t WORD ;
typedef void* UINT_PTR ;
struct TYPE_10__ {size_t iStartBmp; scalar_t__ idBitmap; int * hbmButtons; scalar_t__ hModule; int (* ExtProc ) (int ,int ,int ) ;} ;
struct TYPE_9__ {int dwSize; size_t cButtons; TYPE_3__* lpButtons; scalar_t__ idBitmap; int * hBitmap; } ;
struct TYPE_8__ {int fsStyle; scalar_t__ idCommand; } ;
struct TYPE_7__ {void* nID; scalar_t__ hInst; } ;
struct TYPE_6__ {size_t iBitmap; int fsStyle; size_t dwData; scalar_t__ iString; scalar_t__ fsState; scalar_t__ idCommand; } ;
typedef TYPE_1__ TBBUTTON ;
typedef TYPE_2__ TBADDBITMAP ;
typedef scalar_t__ LPTBBUTTON ;
typedef scalar_t__ LPFMS_TOOLBARLOAD ;
typedef TYPE_3__* LPEXT_BUTTON ;
typedef int LPARAM ;
typedef size_t INT ;
typedef TYPE_4__ FMS_TOOLBARLOAD ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,size_t,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 TYPE_5__* VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_15 ;

BOOL
FUNC_4(INT VAR_16)
{
   TBBUTTON VAR_17;
   FMS_TOOLBARLOAD VAR_18;
   LPEXT_BUTTON VAR_19;
   INT VAR_20, VAR_21, VAR_22;
   BOOL VAR_23;
   TBADDBITMAP VAR_24;

   VAR_18.dwSize = sizeof(VAR_18);
   VAR_18.lpButtons = ((void*)0);
   VAR_18.cButtons = 0;
   VAR_18.idBitmap = 0;
   VAR_18.hBitmap = ((void*)0);


   if (!VAR_10[VAR_16].ExtProc(VAR_13, VAR_1,
       (LPARAM)(LPFMS_TOOLBARLOAD)&VAR_18))

      return VAR_0;

   if (VAR_18.dwSize != sizeof(VAR_18)) {

      if (!(0x10 == VAR_18.dwSize && VAR_18.idBitmap))

         return VAR_0;
   }

   if (!VAR_18.cButtons || !VAR_18.lpButtons || (!VAR_18.idBitmap && !VAR_18.hBitmap))
      return VAR_0;



   if (VAR_12) {



      if (!FUNC_1(VAR_12))
         goto AddSep;
   } else {
      VAR_12 = FUNC_0(VAR_13, VAR_9,
         VAR_3, 0, VAR_11, VAR_2, VAR_15, 0,
         0,0,0,0,sizeof(TBBUTTON));

      if (!VAR_12)
         return VAR_0;

AddSep:
      VAR_17.iBitmap = 0;
      VAR_17.idCommand = 0;
      VAR_17.fsState = 0;
      VAR_17.fsStyle = VAR_5;
      VAR_17.dwData = 0;
      VAR_17.iString = 0;

      FUNC_2(VAR_12, VAR_7, (WORD)-1,
         (LPARAM)(LPTBBUTTON)&VAR_17);
   }




   if (VAR_18.idBitmap) {
      VAR_24.hInst = VAR_10[VAR_16].hModule;
      VAR_24.nID = (UINT_PTR)VAR_18.idBitmap;
      VAR_21 = (INT)FUNC_2(VAR_14, VAR_6, VAR_18.cButtons,
                               (LPARAM) &VAR_24);
   } else {
      VAR_24.hInst = 0;
      VAR_24.nID = (UINT_PTR)VAR_18.hBitmap;
      VAR_21 = (INT)FUNC_2(VAR_14, VAR_6, VAR_18.cButtons,
                               (LPARAM) &VAR_24);
   }


   VAR_10[VAR_16].hbmButtons = VAR_18.hBitmap;
   VAR_10[VAR_16].idBitmap = VAR_18.idBitmap;
   VAR_10[VAR_16].iStartBmp = VAR_21;





   for (VAR_23=VAR_8, VAR_20=VAR_18.cButtons, VAR_22=0, VAR_19=VAR_18.lpButtons;
      VAR_20>0; --VAR_20, ++VAR_19) {

      if (VAR_19->fsStyle & VAR_5) {
         if (VAR_23)
            continue;

         VAR_17.iBitmap = 0;
         VAR_23 = VAR_8;
      } else {
         VAR_17.iBitmap = VAR_22;
         ++VAR_22;
         VAR_23 = VAR_0;
      }

      VAR_17.fsStyle = (BYTE)VAR_19->fsStyle;
      VAR_17.idCommand = VAR_19->idCommand;
      VAR_17.fsState = VAR_4;
      VAR_17.dwData = VAR_16 + 1;
      VAR_17.iString = 0;

      FUNC_2(VAR_12, VAR_7, (WORD)-1,
         (LPARAM)(LPTBBUTTON)&VAR_17);
   }

   return VAR_8;
}
