
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WORD ;
typedef int WCHAR ;
struct TYPE_6__ {scalar_t__ dwControlData; scalar_t__ hwndSource; scalar_t__ wFmt; scalar_t__ dwData; } ;
struct TYPE_5__ {scalar_t__ dwAttrs; } ;
typedef scalar_t__ LPXDTALINK ;
typedef TYPE_1__* LPXDTA ;
typedef int * LPWSTR ;
typedef TYPE_2__* LPDROPSTRUCT ;
typedef long LPARAM ;
typedef scalar_t__ HWND ;
typedef int HANDLE ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (scalar_t__,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (int *,int *,int *,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__* FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (scalar_t__,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_8 (int *) ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_9 (int ,int ,int *,int) ;
 int FUNC_10 (int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int * FUNC_11 (TYPE_1__*) ;
 scalar_t__ FUNC_12 (int ,int ,int *,int) ;
 int FUNC_13 (int ,int ,int ,int) ;
 int VAR_22 ;
 int * VAR_23 ;
 int * VAR_24 ;
 scalar_t__ FUNC_14 (scalar_t__,int ,int,long) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 scalar_t__ VAR_25 ;
 int FUNC_18 (scalar_t__) ;
 int VAR_26 ;
 int VAR_27 ;
 scalar_t__ VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 int VAR_35 ;
 int FUNC_19 (int *,int *) ;
 int FUNC_20 (int *,int *) ;
 int FUNC_21 (int *) ;
 int VAR_36 ;
 int * VAR_37 ;
 int * VAR_38 ;
 int FUNC_22 (int ,int *,int *,int *) ;

BOOL
FUNC_23(
   HWND VAR_39,
   HWND VAR_40,
   LPDROPSTRUCT VAR_41,
   BOOL VAR_42)
{
   DWORD VAR_43;
   LPWSTR VAR_44;
   DWORD VAR_45 = 0;
   DWORD VAR_46;
   LPWSTR VAR_47;
   LPWSTR VAR_48;
   LPXDTA VAR_49;
   LPXDTALINK VAR_50;

   WCHAR VAR_51[VAR_17*2];
   WCHAR VAR_52[VAR_17+2];
   WCHAR VAR_53[VAR_17+2];




   FUNC_14(VAR_34, VAR_22, 0, 0L);
   FUNC_18(VAR_34);




   VAR_46 = VAR_41->dwControlData;






   if (VAR_39 == VAR_41->hwndSource) {
      if ((VAR_46 == (DWORD)-1) || FUNC_14(VAR_40, VAR_15, VAR_46, 0L))
         return VAR_25;
   }




   FUNC_14(VAR_39, VAR_6, FUNC_1(VAR_51), (LPARAM)VAR_51);




   if (VAR_46 == (DWORD)-1) {
      goto NormalMoveCopy;
   }




   VAR_50 = (LPXDTALINK)FUNC_7(VAR_39, VAR_8);




   if (!VAR_50)
      goto NormalMoveCopy;

   if (FUNC_14(VAR_40,
                   VAR_16,
                   VAR_46,
                   (LPARAM)&VAR_49) == VAR_14 || !VAR_49) {
      goto NormalMoveCopy;
   }

   FUNC_20(VAR_52, FUNC_11(VAR_49));
   VAR_45 = VAR_49->dwAttrs;

   if (VAR_45 & VAR_0) {

      if (VAR_42) {

         FUNC_20(VAR_51, VAR_52);

      } else {




         if (VAR_45 & VAR_1) {
            FUNC_16(VAR_51);
            FUNC_17(VAR_51);
         } else {
            FUNC_19(VAR_51, VAR_52);
         }
      }
      goto DirMoveCopy;
   }




   if (!FUNC_8(VAR_52))
      goto NormalMoveCopy;




   if (VAR_41->wFmt == VAR_3) {
      FUNC_4(VAR_40, VAR_35, VAR_4, VAR_4);
      return VAR_4;
   }







   FUNC_14(VAR_39, VAR_6, FUNC_1(VAR_51), (LPARAM)VAR_51);
   FUNC_16(VAR_51);

   FUNC_15(VAR_51);





   FUNC_20(VAR_53, VAR_51);
   FUNC_19(VAR_53, VAR_23);
   FUNC_19(VAR_53, VAR_52);




   VAR_47 = (LPWSTR)FUNC_14(VAR_41->hwndSource, VAR_7, 1, 0L);
   VAR_48 = (LPWSTR)FUNC_14(VAR_41->hwndSource, VAR_7, 1|16, 0L);
   if (!VAR_47 || !VAR_48)
   {
      goto DODone;
   }

   if (FUNC_21(VAR_47) > VAR_17)
      goto DODone;




   FUNC_2(VAR_52);

   if (VAR_28) {

      FUNC_9(VAR_30, VAR_12, VAR_38, FUNC_1(VAR_38));
      FUNC_9(VAR_30, VAR_11, VAR_51, FUNC_1(VAR_51));

      FUNC_22(VAR_36, VAR_51, VAR_52, VAR_47);
      if (FUNC_12(VAR_31, VAR_36, VAR_38, VAR_21 | VAR_18) != VAR_13)
         goto DODone;
   }






   if (VAR_41->hwndSource == VAR_33) {
      VAR_51[0] = VAR_2;
   } else {
      FUNC_14(VAR_41->hwndSource, VAR_6, FUNC_1(VAR_51), (LPARAM)VAR_51);
   }

   FUNC_19(VAR_51, VAR_48);




   if (*FUNC_6(VAR_51) == 0)
      FUNC_19(VAR_51, VAR_24);




   FUNC_2(VAR_51);

   VAR_43 = FUNC_5(VAR_53, VAR_51, ((void*)0), VAR_4, VAR_4);

   if (VAR_43)
      FUNC_13(VAR_31, VAR_10, (WORD)VAR_43, VAR_19 | VAR_18 | VAR_20);

DODone:
   FUNC_4(VAR_40, VAR_35, VAR_4, VAR_4);
   if (VAR_47)
   {
      FUNC_10((HANDLE)VAR_47);
   }
   if (VAR_48)
   {
      FUNC_10((HANDLE)VAR_48);
   }
   return VAR_25;



NormalMoveCopy:



   if (FUNC_7(VAR_39,
                     VAR_9) == FUNC_14(VAR_32,
                                                   VAR_27,
                                                   0,
                                                   0L)) {
      return VAR_25;
   }

DirMoveCopy:




   VAR_44 = (LPWSTR)VAR_41->dwData;

   FUNC_0(VAR_51);
   FUNC_19(VAR_51, VAR_37);




   FUNC_2(VAR_51);

   VAR_43 = FUNC_3(VAR_44, VAR_51, VAR_29);

   FUNC_4(VAR_40, VAR_35, VAR_4, VAR_4);

   if (VAR_43)
      return VAR_25;
   return VAR_25;
}
