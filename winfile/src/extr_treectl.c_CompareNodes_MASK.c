
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ nLevels; struct TYPE_6__* pParent; } ;
typedef TYPE_1__* PDNODE ;
typedef scalar_t__ INT ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,TYPE_1__*) ;

INT
FUNC_2(PDNODE VAR_0, PDNODE VAR_1)
{
   PDNODE VAR_2, VAR_3;
   INT VAR_4;

   FUNC_0(VAR_0 && VAR_1);

   VAR_2 = VAR_0;
   VAR_3 = VAR_1;



   while (VAR_0->nLevels > VAR_1->nLevels)
      VAR_0 = VAR_0->pParent;

   while (VAR_1->nLevels > VAR_0->nLevels)
      VAR_1 = VAR_1->pParent;



   FUNC_0(VAR_0 && VAR_1);

   VAR_4 = FUNC_1(VAR_0, VAR_1);

   if (VAR_4 == 0)
      VAR_4 = (INT)VAR_2->nLevels - (INT)VAR_3->nLevels;

   return VAR_4;
}
