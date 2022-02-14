
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef scalar_t__ TCHAR ;
typedef scalar_t__* LPTSTR ;


 scalar_t__ VAR_0 ;
 scalar_t__* FUNC_0 (scalar_t__*) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (scalar_t__*,scalar_t__*) ;
 scalar_t__* VAR_2 ;

VOID
FUNC_3(LPTSTR VAR_3)
{
   LPTSTR VAR_4;
   TCHAR VAR_5[VAR_1];


   FUNC_1(VAR_3);

   FUNC_2(VAR_5, VAR_3);

   VAR_4=FUNC_0(VAR_5);

   if (*VAR_4) {
      VAR_3[0] = VAR_0;
      FUNC_2(VAR_3+1, VAR_4-1);
   } else {
      FUNC_2(VAR_3, VAR_2);
   }
}
