
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int spa_root_vdev; int spa_label_features; } ;
typedef TYPE_1__ spa_t ;
struct TYPE_6__ {scalar_t__ tx_txg; } ;
typedef TYPE_2__ dmu_tx_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char const*) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (int ) ;

void
FUNC_3(spa_t *VAR_1, const char *VAR_2, dmu_tx_t *VAR_3)
{
 if (!FUNC_1(VAR_1->spa_label_features, VAR_2)) {
  FUNC_0(VAR_1->spa_label_features, VAR_2);







  if (VAR_3->tx_txg != VAR_0)
   FUNC_2(VAR_1->spa_root_vdev);
 }
}
