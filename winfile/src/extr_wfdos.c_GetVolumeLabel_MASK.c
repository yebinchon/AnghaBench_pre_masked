
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t dwVolNameMax; int * szVolNameMinusFour; } ;
typedef int * LPTSTR ;
typedef scalar_t__ DWORD ;
typedef size_t DRIVE ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,size_t) ;
 int VAR_3 ;
 int FUNC_1 (size_t) ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_2 (int *,int ) ;

DWORD
FUNC_3(DRIVE VAR_6, LPTSTR* VAR_7, BOOL VAR_8)
{
   FUNC_1(VAR_6);

   *VAR_7 = VAR_5[VAR_6].szVolNameMinusFour+4;

   if (FUNC_0(VAR_4,VAR_6) || !**VAR_7) {

      return FUNC_0(VAR_4,VAR_6);
   }

   (*VAR_7)[VAR_5[VAR_6].dwVolNameMax] = VAR_0;

   if (VAR_8) {

      (*VAR_7)--;
      (*VAR_7)[0] = VAR_1;

      FUNC_2(*VAR_7, VAR_3);
   }
   return VAR_2;
}
