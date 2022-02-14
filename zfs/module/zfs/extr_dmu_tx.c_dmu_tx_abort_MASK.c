
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ tx_txg; int tx_callbacks; } ;
typedef TYPE_1__ dmu_tx_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;

void
FUNC_4(dmu_tx_t *VAR_1)
{
 FUNC_0(VAR_1->tx_txg == 0);




 if (!FUNC_3(&VAR_1->tx_callbacks))
  FUNC_2(&VAR_1->tx_callbacks, VAR_0);

 FUNC_1(VAR_1);
}
