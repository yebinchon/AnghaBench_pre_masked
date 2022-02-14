
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TCHAR ;
typedef scalar_t__* LPTSTR ;
typedef int * HWND ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *,int ) ;
 int * FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int FUNC_5 (int *) ;
 int * VAR_4 ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,scalar_t__*) ;
 int FUNC_8 (scalar_t__*) ;

HWND
FUNC_9(
    LPTSTR VAR_5,
    BOOL VAR_6,
    BOOL VAR_7)
{
   register HWND VAR_8;
   HWND VAR_9;
   LPTSTR VAR_10;
   TCHAR VAR_11[VAR_3];
   TCHAR VAR_12[VAR_3];

   VAR_10 = VAR_5;




   if ((FUNC_8(VAR_10) < 3) || (VAR_10[1] != VAR_0))
   {
      return (((void*)0));
   }




   FUNC_7(VAR_12, VAR_10);

   if (!VAR_6)
   {
      FUNC_5(VAR_12);
   }




   for (VAR_8 = FUNC_2(VAR_4, VAR_1);
        VAR_8;
        VAR_8 = FUNC_2(VAR_8, VAR_2))
   {
      if ((VAR_9 = FUNC_3(VAR_8)))
      {



         FUNC_1(VAR_8, VAR_11, FUNC_0(VAR_11));
         FUNC_5(VAR_11);




         if (!FUNC_6(VAR_11, VAR_12) &&
            (!VAR_7 || !FUNC_4(VAR_8)))
         {
            break;
         }
      }
   }

   return (VAR_8);
}
