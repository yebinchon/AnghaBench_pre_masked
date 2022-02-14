
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int * LPXDTALINK ;
typedef long LPARAM ;
typedef long INT ;
typedef scalar_t__ HWND ;
typedef int EDIRABORT ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,int *,int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (scalar_t__,int *,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__,int ,long,long) ;
 int FUNC_9 (scalar_t__,int ,long) ;
 int FUNC_10 (int *) ;
 int VAR_12 ;

LPXDTALINK
FUNC_11(
   HWND VAR_13,
   LPXDTALINK VAR_14,
   INT VAR_15)
{
   HWND VAR_16 = FUNC_2(VAR_13, VAR_9);
   HWND VAR_17 = FUNC_4(VAR_13);
   WCHAR VAR_18[VAR_11];
   HWND VAR_19;


   EDIRABORT VAR_20;

   VAR_20 = (EDIRABORT)FUNC_5(VAR_13, VAR_6);




   if ((VAR_20 & (VAR_0|VAR_1)) ||
      FUNC_5(VAR_13, VAR_5)) {




      return ((void*)0);
   }

   FUNC_3(VAR_17, VAR_18, FUNC_0(VAR_18));
   FUNC_10(VAR_18);

   FUNC_6(VAR_17,
                   VAR_18,
                   VAR_2);

   FUNC_9(VAR_13, VAR_7, VAR_15);
   FUNC_9(VAR_13, VAR_5, (LPARAM)VAR_14);




   FUNC_8(VAR_16, VAR_10, 0, 0);

   FUNC_1(VAR_13, VAR_14);

   FUNC_9(VAR_13, VAR_4, 0);

   VAR_19 = (HWND)FUNC_5(VAR_13, VAR_8);
   if (VAR_19)
   {
       FUNC_8(VAR_13, VAR_3, 0L, (LPARAM)VAR_19);
   }
   FUNC_9(VAR_13, VAR_8, 0L);




   FUNC_7(VAR_12);

   return VAR_14;
}
