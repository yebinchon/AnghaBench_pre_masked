
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int y; int x; } ;
struct TYPE_5__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; } ;
struct TYPE_7__ {int nSplit; int sw; TYPE_2__ pt; TYPE_1__ rc; scalar_t__* szDir; int dwAttribs; int dwSort; int dwView; } ;
typedef TYPE_3__ WINDOW ;
typedef scalar_t__ WCHAR ;
typedef int INT ;
typedef int HWND ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (scalar_t__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (scalar_t__*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int) ;
 int VAR_1 ;
 int FUNC_4 (int ,scalar_t__*,int ,scalar_t__*,int ,int ) ;
 int FUNC_5 (scalar_t__*,TYPE_3__*) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int ,int *,int ,int ,int ,int ,int) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (scalar_t__*) ;
 int FUNC_10 (scalar_t__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_11 (scalar_t__*,int ) ;
 int FUNC_12 (scalar_t__*,scalar_t__*) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_13 (scalar_t__*,int ,int ) ;

BOOL
FUNC_14()
{
   WCHAR VAR_16[2*VAR_2+7*7], VAR_17[10];
   WINDOW VAR_18;




   WCHAR VAR_19[2*VAR_2];

   INT VAR_20;
   HWND VAR_21;
   INT VAR_22;





   VAR_20 = 1;
   VAR_22 = 0;

   do {
      FUNC_13(VAR_17, VAR_10, VAR_20++);

      FUNC_4(VAR_13, VAR_17, VAR_11, VAR_16, FUNC_1(VAR_16), VAR_15);

      if (*VAR_16) {

         FUNC_5(VAR_16, &VAR_18);





         FUNC_12(VAR_19, VAR_18.szDir);
         FUNC_10(VAR_19);
         FUNC_9(VAR_19);

         if (!FUNC_2(VAR_19))
            continue;

         VAR_9 = VAR_18.dwView;
         VAR_8 = VAR_18.dwSort;
         VAR_7 = VAR_18.dwAttribs;

         VAR_21 = FUNC_3(VAR_18.szDir,
                                 VAR_18.rc.left,
                                 VAR_18.rc.top,
                                 VAR_18.rc.right - VAR_18.rc.left,
                                 VAR_18.rc.bottom - VAR_18.rc.top,
                                 VAR_18.nSplit);

         if (!VAR_21) {
            continue;
         }

         VAR_22++;




         if (FUNC_6(VAR_21))
             FUNC_7(VAR_21, ((void*)0), VAR_18.pt.x, VAR_18.pt.y, 0, 0, VAR_4 | VAR_5 | VAR_3);

         FUNC_8(VAR_21, VAR_18.sw);
      }

   } while (*VAR_16);




   if (!VAR_22) {

      FUNC_12(VAR_16, VAR_12);
      FUNC_0(VAR_16);
      FUNC_11(VAR_16, VAR_14);




      VAR_21 = FUNC_3(VAR_16, VAR_0, 0, VAR_0, 0, -1);

      if (!VAR_21)
         return VAR_1;

      VAR_22++;
   }

   return VAR_6;
}
