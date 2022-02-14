
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef scalar_t__* LPTSTR ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

VOID
FUNC_0(LPTSTR VAR_5, LPTSTR *VAR_6, LPTSTR *VAR_7, LPTSTR *VAR_8)
{

   BOOL VAR_9=VAR_4;



   for (*VAR_6 = VAR_5; **VAR_6 == VAR_3; (*VAR_6)++)
      ;




   for (*VAR_8 = *VAR_6; **VAR_8 && (**VAR_8 != VAR_3 || VAR_9) ; (*VAR_8)++)
      if ( VAR_2 == **VAR_8 ) VAR_9 = !VAR_9;



   for (*VAR_7 = *VAR_8; *VAR_7 > *VAR_6; --(*VAR_7)) {
      if (((*VAR_7)[-1] == VAR_1) || ((*VAR_7)[-1] == VAR_0))
         break;
   }
}
