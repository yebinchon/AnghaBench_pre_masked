
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {scalar_t__ tx_txg; int tx_objset; } ;
typedef TYPE_1__ dmu_tx_t ;
typedef int dmu_tx_hold_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (TYPE_1__*,int ,int ,int ,int ,int ) ;

void
FUNC_3(dmu_tx_t *VAR_1, uint64_t VAR_2)
{
 dmu_tx_hold_t *VAR_3;

 FUNC_0(VAR_1->tx_txg == 0);

 VAR_3 = FUNC_2(VAR_1, VAR_1->tx_objset,
     VAR_2, VAR_0, 0, 0);
 if (VAR_3)
  FUNC_1(VAR_3);
}
