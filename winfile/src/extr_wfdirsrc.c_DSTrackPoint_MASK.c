
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int WPARAM ;
typedef int ULONG_PTR ;
typedef scalar_t__ UINT ;
struct TYPE_11__ {int dwAttrs; } ;
struct TYPE_10__ {scalar_t__ message; long lParam; } ;
struct TYPE_9__ {scalar_t__ y; scalar_t__ x; } ;
typedef int RECT ;
typedef TYPE_1__ POINT ;
typedef TYPE_2__ MSG ;
typedef TYPE_3__* LPXDTA ;
typedef scalar_t__ LPWSTR ;
typedef scalar_t__ LPTSTR ;
typedef int LPPOINT ;
typedef long LPARAM ;
typedef int INT ;
typedef scalar_t__ HWND ;
typedef int HANDLE ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,scalar_t__,int ,int *) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_12 (int ) ;
 long FUNC_13 (int,scalar_t__) ;
 int VAR_19 ;
 scalar_t__ FUNC_14 (TYPE_3__*) ;
 int VAR_20 ;
 int FUNC_15 (TYPE_1__,long) ;
 scalar_t__ FUNC_16 (TYPE_2__*,int *,int ,int ,int ) ;
 int FUNC_17 (int *,TYPE_1__) ;
 int FUNC_18 () ;
 int VAR_21 ;
 int FUNC_19 (scalar_t__,int ) ;
 int FUNC_20 (scalar_t__,int,int) ;
 scalar_t__ FUNC_21 (scalar_t__,int ,int,...) ;
 int FUNC_22 (scalar_t__) ;
 int FUNC_23 (int *,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_24 () ;
 int FUNC_25 (scalar_t__,int) ;
 int VAR_22 ;
 int FUNC_26 (int ) ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_27 (scalar_t__) ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 int * VAR_31 ;
 int * VAR_32 ;
 int VAR_33 ;

INT
FUNC_28(
   HWND VAR_34,
   HWND VAR_35,
   WPARAM VAR_36,
   LPARAM VAR_37,
   BOOL VAR_38)
{
   UINT VAR_39;
   MSG VAR_40;
   RECT VAR_41;
   DWORD VAR_42;
   DWORD VAR_43;
   LPWSTR VAR_44;
   BOOL VAR_45;
   BOOL VAR_46;
   BOOL VAR_47;
   BOOL VAR_48;
   LPWSTR VAR_49;
   POINT VAR_50;

   VAR_47 = VAR_8;
   VAR_48 = VAR_8;

   VAR_46 = (BOOL)FUNC_21(VAR_35, VAR_13, VAR_36, 0L);

   if (FUNC_7(VAR_24) < 0) {


      VAR_42 = FUNC_21(VAR_35, VAR_12, 0, 0L);
      VAR_46 = (BOOL)FUNC_21(VAR_35, VAR_13, VAR_42, 0L);



      if (!(FUNC_7(VAR_23) < 0))
         FUNC_21(VAR_35, VAR_18, VAR_8, -1L);


      FUNC_21(VAR_35, VAR_16, VAR_46, FUNC_13(VAR_36, VAR_42));


      FUNC_21(VAR_35, VAR_17, VAR_36, 0L);

   } else if (FUNC_7(VAR_23) < 0) {
      if (VAR_46)
         VAR_48 = VAR_22;
      else
         FUNC_20(VAR_35, VAR_36, VAR_22);

   } else {
      if (VAR_46)
         VAR_47 = VAR_22;
      else {

         FUNC_21(VAR_35, VAR_18, VAR_8, -1L);


         FUNC_20(VAR_35, VAR_36, VAR_22);
      }
   }

   if (!VAR_38)
      FUNC_26(FUNC_8(VAR_34));

   FUNC_15(VAR_50, VAR_37);
   FUNC_0(VAR_35, (LPPOINT)&VAR_50);
   FUNC_19(VAR_34, (LPPOINT)&VAR_50);



   FUNC_23(&VAR_41, VAR_50.x - VAR_29, VAR_50.y - VAR_30,
      VAR_50.x + VAR_29, VAR_50.y + VAR_30);

   FUNC_22(VAR_34);

   for (;;) {

      if (FUNC_5() != VAR_34) {
          VAR_40.message = VAR_27;
          break;
      }

      if (FUNC_16(&VAR_40, ((void*)0), 0, 0, VAR_20)) {
          FUNC_1(&VAR_40);
      if (VAR_40.message == VAR_25 || FUNC_5() != VAR_34) {
              VAR_40.message = VAR_27;

              break;
          }

          if (VAR_40.message == VAR_27)
              break;

          FUNC_15(VAR_50, VAR_40.lParam);
          if ((VAR_40.message == VAR_28) && !(FUNC_17(&VAR_41, VAR_50)))
              break;
      }
    }
    FUNC_18();


    if (VAR_40.message == VAR_27) {
       if (VAR_47) {

          FUNC_21(VAR_35, VAR_18, VAR_8, -1L);


          FUNC_20(VAR_35, VAR_36, VAR_22);
       }

      if (VAR_48)
         FUNC_20(VAR_35, VAR_36, VAR_8);



      FUNC_21(VAR_34, VAR_26,
         FUNC_4(0, VAR_35, VAR_10));

      return 1;
   }




   if (FUNC_21(VAR_35, VAR_14, 0, 0L) == 1) {

      LPXDTA VAR_51;
      if (FUNC_21(VAR_35,
                      VAR_15,
                      VAR_36,
                      (LPARAM)&VAR_51) == VAR_11 || !VAR_51) {
         return 1;
      }

      VAR_49 = FUNC_14(VAR_51);

      VAR_45 = VAR_51->dwAttrs & VAR_0;




      if (VAR_51->dwAttrs & VAR_1) {
         return 1;
      }

      if (VAR_45) {
         VAR_39 = VAR_2;
      } else if (FUNC_10(VAR_49)) {
         VAR_39 = VAR_4;
      } else if (FUNC_9(VAR_49)) {
         VAR_39 = VAR_3;
      } else
         VAR_39 = VAR_3;

      VAR_33 = VAR_21;
   } else {


      VAR_39 = VAR_5;
      VAR_33 = VAR_19;
   }



   VAR_44 = (LPTSTR)FUNC_21(VAR_34, VAR_9, VAR_8, 0L);


   VAR_32 = VAR_35;

   VAR_43 = FUNC_2(FUNC_6(), VAR_34, (UINT)VAR_39, (ULONG_PTR)VAR_44, ((void*)0));

   FUNC_24();

   if (VAR_43 == VAR_7) {

      VAR_31 = ((void*)0);
      FUNC_27(VAR_44);
   } else if (VAR_43 == VAR_6) {

      FUNC_3(VAR_44);
   }

   FUNC_12((HANDLE)VAR_44);

   if (FUNC_11(VAR_34))
      FUNC_25(VAR_35, VAR_22);

   VAR_32 = ((void*)0);

   if (!VAR_38 && FUNC_11(VAR_34))
      FUNC_26(FUNC_8(VAR_34));

   return 2;
}
