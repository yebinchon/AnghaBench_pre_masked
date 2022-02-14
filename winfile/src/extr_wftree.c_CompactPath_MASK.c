
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ cx; } ;
typedef scalar_t__ TCHAR ;
typedef TYPE_1__ SIZE ;
typedef scalar_t__* LPTSTR ;
typedef scalar_t__ INT ;
typedef int HDC ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__*,int,TYPE_1__*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (scalar_t__*,scalar_t__*) ;
 int FUNC_2 (scalar_t__*,scalar_t__*) ;
 int FUNC_3 (scalar_t__*) ;
 scalar_t__* VAR_4 ;

BOOL
FUNC_4(HDC VAR_5, LPTSTR VAR_6, DWORD VAR_7)
{
   register INT VAR_8;
   SIZE VAR_9, VAR_10;
   LPTSTR VAR_11;
   LPTSTR VAR_12;
   BOOL VAR_13;
   TCHAR VAR_14[VAR_2];
   DWORD VAR_15;




   FUNC_0(VAR_5, VAR_6, FUNC_3(VAR_6), &VAR_9);
   if (VAR_9.cx <= (INT)VAR_7)
      return(VAR_3);




   VAR_12 = VAR_6 + FUNC_3(VAR_6) - 1;
   while (*VAR_12 != VAR_0)
      VAR_12--;


   FUNC_2(VAR_14, VAR_12);

   VAR_11 = VAR_12;
   VAR_13 = VAR_1;

   FUNC_0(VAR_5, VAR_4, 3, &VAR_9);
   VAR_15 = VAR_9.cx;

   FUNC_0(VAR_5, VAR_12, FUNC_3(VAR_12), &VAR_9);

   while (VAR_3) {
      FUNC_0(VAR_5, VAR_6, VAR_11 - VAR_6, &VAR_10);
      VAR_8 = VAR_9.cx + VAR_10.cx;

      if (VAR_13)
         VAR_8 += VAR_15;

      if (VAR_8 <= (INT)VAR_7)
         break;

      VAR_13 = VAR_3;

      if (VAR_11 <= VAR_6) {



         FUNC_2(VAR_6, VAR_4);
         FUNC_1(VAR_6, VAR_14);
         return(VAR_1);
      }


      --VAR_11;
   }

   if (VAR_13) {
      FUNC_2(VAR_11, VAR_4);
      FUNC_1(VAR_11, VAR_14);
   }

   return(VAR_3);
}
