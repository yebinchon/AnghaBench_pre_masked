
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ub_software_version; } ;
typedef TYPE_1__ uberblock_t ;
struct TYPE_7__ {int spa_verify_min_txg; int spa_first_txg; int spa_last_ubsync_txg; int spa_claim_max_txg; int spa_prev_software_version; scalar_t__ spa_extreme_rewind; int spa_uberblock; int spa_ubsync; int spa_state; } ;
typedef TYPE_2__ spa_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_1(spa_t *VAR_3, uberblock_t *VAR_4)
{
 VAR_3->spa_state = VAR_0;
 VAR_3->spa_ubsync = VAR_3->spa_uberblock;
 VAR_3->spa_verify_min_txg = VAR_3->spa_extreme_rewind ?
     VAR_2 - 1 : FUNC_0(VAR_3) - VAR_1 - 1;
 VAR_3->spa_first_txg = VAR_3->spa_last_ubsync_txg ?
     VAR_3->spa_last_ubsync_txg : FUNC_0(VAR_3) + 1;
 VAR_3->spa_claim_max_txg = VAR_3->spa_first_txg;
 VAR_3->spa_prev_software_version = VAR_4->ub_software_version;
}
