
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {int dwAttrs; } ;
typedef int RECT ;
typedef int * PDOCBUCKET ;
typedef TYPE_1__* LPXDTA ;
typedef int * LPWSTR ;
typedef scalar_t__ LPTSTR ;
typedef scalar_t__ LPRECT ;
typedef long LPARAM ;
typedef int INT ;
typedef scalar_t__ HWND ;
typedef int HDC ;
typedef int HBRUSH ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (scalar_t__,int *) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_8 (int *,int,int) ;
 int FUNC_9 (int *,int *,int *) ;
 int FUNC_10 (scalar_t__,int *,scalar_t__) ;
 int * FUNC_11 (int *) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int * FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (scalar_t__,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_14 (scalar_t__,int ,int,long) ;
 int FUNC_15 (int,int,int *,int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 scalar_t__ VAR_18 ;
 int FUNC_18 (scalar_t__) ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;

BOOL
FUNC_19(
   HWND VAR_23,
   INT VAR_24,
   BOOL VAR_25,
   BOOL VAR_26)
{
   RECT VAR_27;
   RECT VAR_28;
   HDC VAR_29;
   BOOL VAR_30;
   INT VAR_31;
   HBRUSH VAR_32;
   LPXDTA VAR_33;
   WCHAR VAR_34[VAR_13];
   PDOCBUCKET VAR_35 = ((void*)0);
   LPWSTR VAR_36;




   if (VAR_24 == -1) {
      if (VAR_26 || VAR_20 == VAR_23) {
         FUNC_14(VAR_21,
                     VAR_15,
                     VAR_14|255,
                     (LPARAM)VAR_22);

         FUNC_18(VAR_21);

      } else {

         FUNC_14(FUNC_6(VAR_23),
                     VAR_5,
                     FUNC_0(VAR_34),
                     (LPARAM)VAR_34);

         FUNC_16(VAR_34);

         FUNC_15(VAR_14|255,
                       VAR_17|VAR_16,
                       (LPWSTR)(VAR_19 ?
                          VAR_6 :
                          VAR_8),
                       VAR_34);

         FUNC_18(VAR_21);
      }
      return VAR_4;
   }




   VAR_30 = (BOOL)FUNC_14(VAR_23, VAR_11, VAR_24, 0L);

   if (VAR_30 && (VAR_20 == VAR_23)) {

ClearStatus:

      FUNC_14(VAR_21,
                  VAR_15,
                  VAR_14|255,
                  (LPARAM)VAR_22);

      FUNC_18(VAR_21);
      return VAR_4;
   }




   if (FUNC_14(VAR_23,
                   VAR_12,
                   VAR_24,
                   (LPARAM)(LPTSTR)&VAR_33) == VAR_9 || !VAR_33) {
      return VAR_4;
   }

   if (!(VAR_33->dwAttrs & VAR_0) &&
      !(VAR_35 = FUNC_11(FUNC_12(VAR_33)))) {
      if ((VAR_20 == VAR_23) || VAR_26) {
         goto ClearStatus;
      }





      FUNC_14(FUNC_6(VAR_23), VAR_5, FUNC_0(VAR_34), (LPARAM)VAR_34);
      FUNC_16(VAR_34);

      FUNC_15(VAR_14|255,
                    VAR_16 | VAR_17,
                    (LPWSTR)(VAR_19 ?
                        VAR_6 :
                        VAR_8),
                    VAR_34);

      FUNC_18(VAR_21);
      return VAR_4;
   }
   if (VAR_26 || !(VAR_33->dwAttrs & VAR_1)) {

      VAR_36 = FUNC_12(VAR_33);

   } else {

      FUNC_14(FUNC_6(VAR_23), VAR_5, FUNC_0(VAR_34), (LPARAM)VAR_34);
      FUNC_16(VAR_34);
      FUNC_17(VAR_34);

      VAR_36 = VAR_34;
   }




   if (VAR_25) {

      FUNC_15(VAR_14|255,
                    VAR_16 | VAR_17,
                    (LPWSTR)(VAR_35 ?
                       VAR_7 :
                       (VAR_19 ?
                          VAR_6 :
                          VAR_8)),
                   VAR_36);

      FUNC_18(VAR_21);
   }

   FUNC_14(VAR_23, VAR_10, VAR_24, (LPARAM)(LPRECT)&VAR_27);
   FUNC_4(VAR_23,&VAR_28);
   FUNC_9(&VAR_27,&VAR_27,&VAR_28);

   if (VAR_25) {
      VAR_29 = FUNC_5(VAR_23);
      if (VAR_30) {
         VAR_31 = VAR_2;
         FUNC_8(&VAR_27, -1, -1);
      } else
         VAR_31 = VAR_3;

      if ((VAR_32 = FUNC_1(FUNC_7(VAR_31)))) {
         FUNC_3(VAR_29, &VAR_27, VAR_32);
         FUNC_2(VAR_32);
      }
      FUNC_13(VAR_23, VAR_29);
   } else {
      FUNC_10(VAR_23, &VAR_27, VAR_4);
      FUNC_18(VAR_23);
   }

   return VAR_18;
}
