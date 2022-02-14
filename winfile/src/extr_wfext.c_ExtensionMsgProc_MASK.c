
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WPARAM ;
typedef int UINT ;
typedef long LRESULT ;
typedef int LPARAM ;
typedef scalar_t__ HWND ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 long VAR_4 ;
 int FUNC_1 () ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 long FUNC_2 (scalar_t__,int,int ) ;
 long FUNC_3 (scalar_t__,int,int ,int,int,int ,int) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (scalar_t__,int *,int ) ;
 int FUNC_9 (scalar_t__,int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (scalar_t__,int ,int ,long) ;
 int VAR_8 ;
 int FUNC_13 () ;
 int FUNC_14 (scalar_t__) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;

LRESULT
FUNC_15(UINT VAR_18, WPARAM VAR_19, LPARAM VAR_20)
{
   HWND VAR_21;
   HWND VAR_22, VAR_23, VAR_24;

   VAR_21 = (HWND)FUNC_12(VAR_14, VAR_10, 0, 0L);
   FUNC_5(VAR_21, &VAR_22, &VAR_23);

   switch (VAR_18) {

   case 128:
      FUNC_12(VAR_13, VAR_9, 0, 0L);

      FUNC_11(VAR_8);
      FUNC_12(VAR_16, VAR_11, VAR_0, 0L);

      FUNC_1();

      FUNC_7();
      FUNC_11(VAR_0);

      FUNC_12(VAR_16, VAR_11, VAR_8, 0L);
      FUNC_8(VAR_16, ((void*)0), VAR_8);

      FUNC_0(VAR_13);
      break;

   case 132:




      if (VAR_21 == VAR_15)
         return VAR_3;

      VAR_24 = FUNC_4(VAR_21);

      if (VAR_24 == VAR_22)
         return VAR_4;
      else if (VAR_24 == VAR_23)
         return VAR_1;
      else if (VAR_24 == VAR_12)
         return VAR_2;
      break;

   case 138:
   case 137:




      return FUNC_2(VAR_21, VAR_18, VAR_20);
      break;

   case 129:
      FUNC_13();

      if (VAR_19 == 0) {
         FUNC_9(VAR_21, VAR_0, VAR_8);
      } else {
         HWND VAR_25, VAR_26;

         VAR_25 = FUNC_6(VAR_14, VAR_5);
         while (VAR_25) {
            VAR_26 = FUNC_6(VAR_25, VAR_6);

            if (!FUNC_6(VAR_25, VAR_7)) {

               FUNC_9(VAR_25, VAR_0, VAR_8);
            }
            VAR_25 = VAR_26;
         }
      }

      FUNC_10(VAR_17);
      FUNC_14(VAR_21);
      break;

   case 131:
   case 130:




   case 136:
   case 133:
   case 135:
   case 134:




      if (VAR_21 != VAR_15 && !VAR_23)
         return 0L;



      return FUNC_3(VAR_21, (UINT)VAR_19, VAR_20,
         VAR_21 == VAR_15, (VAR_18 & ~1) == 131,
         (BOOL)(VAR_18 & 1),
         (VAR_18 == 133 || VAR_18 == 134));
   }

   return 0;
}
