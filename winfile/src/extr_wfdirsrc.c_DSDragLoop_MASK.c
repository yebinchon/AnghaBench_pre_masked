
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ WPARAM ;
typedef scalar_t__ WORD ;
typedef int VOID ;
struct TYPE_6__ {scalar_t__ hwndSink; scalar_t__ dwControlData; int ptDrop; } ;
struct TYPE_5__ {int dwAttrs; } ;
typedef TYPE_1__* LPXDTA ;
typedef scalar_t__ LPTSTR ;
typedef TYPE_2__* LPDROPSTRUCT ;
typedef long LPARAM ;
typedef scalar_t__ INT ;
typedef scalar_t__ HWND ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_3 ;
 int FUNC_7 (int ,scalar_t__) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (TYPE_1__*) ;
 scalar_t__ FUNC_10 (scalar_t__,int ,scalar_t__,long) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (scalar_t__,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;

VOID
FUNC_13(HWND VAR_11, WPARAM VAR_12, LPDROPSTRUCT VAR_13)
{
   BOOL VAR_14;
   LPXDTA VAR_15;
   HWND VAR_16, VAR_17;
   BOOL VAR_18 = VAR_1;
   VAR_9 = VAR_13->hwndSink;




   VAR_14 = VAR_4;




   if (!VAR_12)
      goto DragLoopCont;




   if (FUNC_1(VAR_5) < 0) {
       VAR_14 = VAR_4;
       goto DragLoopCont;
   }




   if (FUNC_1(VAR_6)<0 || FUNC_1(VAR_7)<0) {
      VAR_14 = VAR_1;
      goto DragLoopCont;
   }

   VAR_16 = FUNC_2(VAR_13->hwndSink);




   if (VAR_13->hwndSink == VAR_11) {




      if (VAR_13->dwControlData == (DWORD)-1) {




         VAR_18 = VAR_4;
         goto DragLoopCont;

      } else {




         FUNC_10(VAR_11, VAR_3, (WPARAM)(VAR_13->dwControlData), (LPARAM)&VAR_15);

         if (!(VAR_15 && VAR_15->dwAttrs & VAR_0)) {




            VAR_18 = VAR_4;

            goto DragLoopCont;
         }
      }
   }
   if (VAR_16)
      VAR_17 = FUNC_5(VAR_16);
   else
      VAR_17 = ((void*)0);

   if (VAR_17 && (VAR_17 == FUNC_4(VAR_13->hwndSink))) {




      if (VAR_13->dwControlData != (DWORD)-1) {




         FUNC_10(VAR_13->hwndSink, VAR_3, (WORD)(VAR_13->dwControlData), (LPARAM)(LPTSTR)&VAR_15);

         if (VAR_15 && FUNC_6(FUNC_9(VAR_15))) {
            goto DragLoopCont;
         }
      }
   }




   VAR_14 = ((INT)FUNC_10(FUNC_4(VAR_11), VAR_2, 0, 0L) !=
                  FUNC_0(VAR_13->hwndSink, VAR_13->ptDrop));

DragLoopCont:

   FUNC_12(VAR_11, VAR_14);




   if (VAR_12) {
      if (VAR_18) {
         FUNC_11(FUNC_7(VAR_8, (LPTSTR) FUNC_8(VAR_10 & ~1)));
      } else {
         FUNC_11(FUNC_3());
      }
   }
}
