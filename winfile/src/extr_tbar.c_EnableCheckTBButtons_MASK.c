
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef scalar_t__ INT ;
typedef scalar_t__ HWND ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ,int ,scalar_t__,int) ;
 int FUNC_4 (scalar_t__,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;


 scalar_t__ VAR_11 ;
 int VAR_12 ;

VOID
FUNC_7(HWND VAR_13)
{
   DWORD VAR_14;
   BOOL VAR_15;
   INT VAR_16;




   if (VAR_13 == VAR_11) {

      FUNC_4(VAR_11, VAR_10);
      FUNC_5(VAR_11);
   }




   switch (FUNC_1(VAR_13, VAR_2) & 129) {
   case 128:
      FUNC_0(VAR_7);
      break;

   case 129:
      FUNC_0(VAR_6);
      break;

   default:
      FUNC_0(VAR_8);
      break;
   }





   VAR_14 = FUNC_1(VAR_13, VAR_0) - VAR_3 + VAR_5;

   VAR_15 = ((int)FUNC_1(VAR_13, VAR_1) >= 0 &&
      FUNC_2(VAR_13));

   FUNC_0(VAR_14);
   for (VAR_16=VAR_5; VAR_16<=VAR_4; ++VAR_16) {
      FUNC_3(VAR_12, VAR_9, VAR_16, VAR_15);
   }

   FUNC_6(VAR_12);
}
