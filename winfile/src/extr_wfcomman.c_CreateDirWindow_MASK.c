
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LPWSTR ;
typedef long LPARAM ;
typedef size_t INT ;
typedef int HWND ;
typedef scalar_t__ DRIVE ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (scalar_t__,int ,int ,int ,int ,size_t) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,int ,int ) ;
 size_t FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (scalar_t__,int ,scalar_t__) ;
 size_t FUNC_10 (int ,int ) ;
 int FUNC_11 (scalar_t__,int ) ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_12 (size_t) ;
 size_t FUNC_13 (int ,int ,size_t,...) ;
 int FUNC_14 (scalar_t__) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_15 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_16 (scalar_t__,int ) ;
 scalar_t__ FUNC_17 (scalar_t__) ;
 scalar_t__* VAR_16 ;
 int VAR_17 ;

HWND
FUNC_18(
   register LPWSTR VAR_18,
   BOOL VAR_19,
   HWND VAR_20)
{
   register HWND VAR_21;
   INT VAR_22;

   if (VAR_20 == VAR_15) {
    VAR_19 = VAR_3;
    VAR_22 = -1;
   } else {
    VAR_22 = FUNC_5(VAR_20);
   }




   if (!VAR_19 && (VAR_21 = FUNC_9(VAR_18, VAR_9, VAR_3))) {

      FUNC_13(VAR_14, VAR_10, FUNC_4(0, 0, VAR_21));
      if (FUNC_8(VAR_21))
         FUNC_13(VAR_21, VAR_11, VAR_7, 0L);
      return VAR_21;
   }




   if (VAR_19) {
    FUNC_1(VAR_18, 1);

    DRIVE VAR_23 = FUNC_3(VAR_18);
    for (INT VAR_24 = 0; VAR_24<VAR_12; VAR_24++)
    {
     if (VAR_23 == VAR_16[VAR_24])
     {

      if (VAR_24 != FUNC_13(VAR_13, VAR_0, VAR_24, 0L))
      {
       FUNC_12(VAR_24);
      }
      break;
     }
    }

    if ((VAR_21 = FUNC_6(VAR_20)))
    {
     FUNC_0(VAR_18);
     FUNC_13(VAR_21, VAR_5, VAR_6, (LPARAM)(VAR_18 + FUNC_17(VAR_18)));
     FUNC_13(VAR_21, VAR_4, VAR_1, (LPARAM)VAR_18);
     FUNC_14(VAR_18);
    }




    ;
    if ((VAR_21 = FUNC_7(VAR_20)))
    {
     FUNC_13(VAR_21, VAR_8, 0, (LPARAM)(VAR_18));
    }




    FUNC_15(VAR_20);

    return VAR_20;
   }

   FUNC_0(VAR_18);
   FUNC_16(VAR_18, VAR_17);




   VAR_20 = FUNC_2(VAR_18, VAR_2, 0, VAR_2, 0, VAR_22);


   if (VAR_20 && (VAR_21 = FUNC_7(VAR_20)))
    FUNC_13(VAR_21,
     VAR_8,
     FUNC_10(FUNC_11(VAR_3, 0), VAR_9),
     0L);

   return VAR_20;
}
