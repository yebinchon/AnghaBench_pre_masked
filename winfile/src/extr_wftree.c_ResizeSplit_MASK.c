
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int right; } ;
typedef TYPE_1__ RECT ;
typedef int PVOID ;
typedef scalar_t__ LPTSTR ;
typedef long LPARAM ;
typedef int INT ;
typedef scalar_t__ HWND ;
typedef int HMENU ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (long,int ,int *,int,int ,int ,int ,int ,scalar_t__,int ,int ,int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (scalar_t__,TYPE_1__*) ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_7 (scalar_t__,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_8 (scalar_t__,int *,int ) ;
 int VAR_7 ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (scalar_t__,int ,int ,long) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (scalar_t__,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_13 (scalar_t__) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

BOOL
FUNC_14(HWND VAR_19, INT VAR_20)
{
   RECT VAR_21;
   HWND VAR_22, VAR_23, VAR_24;

   FUNC_6(VAR_19, &VAR_22, &VAR_23);

   if (VAR_22 && FUNC_7(VAR_22, VAR_1))
      return VAR_0;

   FUNC_3(VAR_19, &VAR_21);

   if (VAR_20 > VAR_14 * 2) {

      if (!VAR_22) {

         VAR_22 = FUNC_0(0L,
                                   VAR_18,
                                   ((void*)0),
                                   VAR_11 | VAR_13 | VAR_12,
                                   0, 0, 0, 0,
                                   VAR_19,
                                   (HMENU)VAR_6,
                                   VAR_15, ((void*)0));

         if (!VAR_22)
            return VAR_0;






         if (VAR_23)
            FUNC_10(VAR_22, VAR_8, FUNC_9(VAR_0, 0), 0L);
      }
   } else {




      if (VAR_22) {





         if (VAR_23) {
            VAR_24 = FUNC_4 (VAR_23,VAR_5);
            if (VAR_24) {
               PVOID VAR_25;
               FUNC_10 (VAR_24,VAR_7,0,(LPARAM)(LPTSTR) &VAR_25);
               if (!VAR_25)
                  FUNC_11(VAR_16);
            }
         }
         FUNC_1(VAR_22);
      }
      VAR_20 = 0;
   }

   if ((VAR_21.right - VAR_20) > VAR_14 * 2) {

      if (!VAR_23) {
         VAR_23 = FUNC_0(0L,
                                  VAR_17,
                                  ((void*)0),
                                  VAR_11 | VAR_13 | VAR_12,
                                  0, 0, 0, 0,
                                  VAR_19,
                                  (HMENU)VAR_4,
                                  VAR_15,
                                  ((void*)0));
         if (!VAR_23)
            return VAR_0;

      } else {




         FUNC_8(VAR_23, ((void*)0), VAR_9);
      }
   } else {




      if (VAR_23) {
         FUNC_1(VAR_23);
      }
      VAR_20 = VAR_21.right;
   }


   FUNC_12(VAR_19, VAR_2, VAR_20);

   FUNC_10(VAR_19, VAR_10, VAR_3, (LPARAM)FUNC_5(VAR_19));

   FUNC_13(VAR_19);
   FUNC_2(VAR_19);

   return VAR_9;
}
