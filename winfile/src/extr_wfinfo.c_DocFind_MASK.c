
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int szExt; struct TYPE_6__* next; } ;
typedef int TCHAR ;
typedef TYPE_1__** PPDOCBUCKET ;
typedef TYPE_1__* PDOCBUCKET ;
typedef int LPTSTR ;


 int FUNC_0 (int *) ;
 size_t FUNC_1 (int *) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ) ;

PDOCBUCKET
FUNC_6(PPDOCBUCKET VAR_2, LPTSTR VAR_3)
{
   PDOCBUCKET VAR_4;
   TCHAR VAR_5[VAR_0];




   if (FUNC_5(VAR_3) >= VAR_0 || !VAR_2)
      return VAR_1;

   FUNC_4(VAR_5, VAR_3);

   FUNC_0(VAR_5);
   FUNC_2(VAR_5);

   for (VAR_4=VAR_2[FUNC_1(VAR_5)]; VAR_4; VAR_4 = VAR_4->next) {

      if (!FUNC_3(VAR_4->szExt, VAR_5)) {

         return VAR_4;
      }
   }

   return ((void*)0);
}
