
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int spa_meta_objset; void* spa_feat_desc_obj; void* spa_feat_for_write_obj; void* spa_feat_for_read_obj; int spa_sync_on; } ;
typedef TYPE_1__ spa_t ;
struct TYPE_8__ {scalar_t__ tx_txg; } ;
typedef TYPE_2__ dmu_tx_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 void* FUNC_3 (int ,int ,int ,int ,TYPE_2__*) ;

void
FUNC_4(spa_t *VAR_6, dmu_tx_t *VAR_7)
{




 FUNC_0((!VAR_6->spa_sync_on && VAR_7->tx_txg == VAR_5) ||
     FUNC_1(FUNC_2(VAR_6)));

 VAR_6->spa_feat_for_read_obj = FUNC_3(VAR_6->spa_meta_objset,
     VAR_0, VAR_1,
     VAR_2, VAR_7);
 VAR_6->spa_feat_for_write_obj = FUNC_3(VAR_6->spa_meta_objset,
     VAR_0, VAR_1,
     VAR_3, VAR_7);
 VAR_6->spa_feat_desc_obj = FUNC_3(VAR_6->spa_meta_objset,
     VAR_0, VAR_1,
     VAR_4, VAR_7);
}
