
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int szName; struct TYPE_4__* pParent; } ;
typedef int TCHAR ;
typedef TYPE_1__* PDNODE ;
typedef scalar_t__ INT ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int ,int ,int ,scalar_t__) ;

INT
FUNC_4(PDNODE VAR_0, PDNODE VAR_1)
{
   INT VAR_2;

   if ((VAR_0 == VAR_1) || (!VAR_0) || (!VAR_1)) {

      return 0;

   } else {

      VAR_2 = FUNC_4(VAR_0->pParent, VAR_1->pParent);

      if (VAR_2 == 0) {


         VAR_2 = FUNC_2(VAR_0->szName, VAR_1->szName);
      }


      return VAR_2;
   }
}
