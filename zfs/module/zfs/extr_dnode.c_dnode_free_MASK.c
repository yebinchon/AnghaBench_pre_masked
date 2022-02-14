
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ dn_type; int dn_mtx; scalar_t__ dn_free_txg; } ;
typedef TYPE_1__ dnode_t ;
struct TYPE_8__ {scalar_t__ tx_txg; } ;
typedef TYPE_2__ dmu_tx_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(dnode_t *VAR_1, dmu_tx_t *VAR_2)
{
 FUNC_1(&VAR_1->dn_mtx);
 if (VAR_1->dn_type == VAR_0 || VAR_1->dn_free_txg) {
  FUNC_2(&VAR_1->dn_mtx);
  return;
 }
 VAR_1->dn_free_txg = VAR_2->tx_txg;
 FUNC_2(&VAR_1->dn_mtx);

 FUNC_0(VAR_1, VAR_2);
}
