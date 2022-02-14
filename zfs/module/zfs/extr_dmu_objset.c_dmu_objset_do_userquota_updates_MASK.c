
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_18__ ;
typedef struct TYPE_21__ TYPE_16__ ;
typedef struct TYPE_20__ TYPE_11__ ;


struct TYPE_24__ {int uua_sublist_idx; TYPE_4__* uua_tx; TYPE_3__* uua_os; } ;
typedef TYPE_2__ userquota_updates_arg_t ;
struct TYPE_25__ {int os_synced_dnodes; TYPE_1__* os_spa; scalar_t__ os_encrypted; } ;
typedef TYPE_3__ objset_t ;
struct TYPE_26__ {scalar_t__ tx_txg; } ;
typedef TYPE_4__ dmu_tx_t ;
struct TYPE_23__ {scalar_t__ spa_claim_max_txg; } ;
struct TYPE_22__ {scalar_t__ dn_type; } ;
struct TYPE_21__ {scalar_t__ dn_type; } ;
struct TYPE_20__ {int dp_sync_taskq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_18__* FUNC_0 (TYPE_3__*) ;
 int VAR_3 ;
 TYPE_16__* FUNC_1 (TYPE_3__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 TYPE_11__* FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 TYPE_2__* FUNC_7 (int,int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int ,TYPE_2__*,int ) ;
 int VAR_6 ;
 int FUNC_11 (TYPE_3__*,int ,int ,scalar_t__,int ,TYPE_4__*) ;

void
FUNC_12(objset_t *VAR_7, dmu_tx_t *VAR_8)
{
 int VAR_9;

 if (!FUNC_6(VAR_7))
  return;
 if (VAR_7->os_encrypted && FUNC_3(VAR_7))
  return;

 if (VAR_8->tx_txg <= VAR_7->os_spa->spa_claim_max_txg)
  return;


 if (FUNC_1(VAR_7)->dn_type == VAR_1) {
  FUNC_2(FUNC_11(VAR_7,
      VAR_4,
      VAR_2, VAR_1, 0, VAR_8));
  FUNC_2(FUNC_11(VAR_7,
      VAR_0,
      VAR_2, VAR_1, 0, VAR_8));
 }

 if (FUNC_5(VAR_7) &&
     FUNC_0(VAR_7)->dn_type == VAR_1) {
  FUNC_2(FUNC_11(VAR_7, VAR_3,
      VAR_2, VAR_1, 0, VAR_8));
 }

 VAR_9 = FUNC_8(VAR_7->os_synced_dnodes);
 for (int VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
  if (FUNC_9(VAR_7->os_synced_dnodes, VAR_10))
   continue;
  userquota_updates_arg_t *VAR_11 =
      FUNC_7(sizeof (*VAR_11), VAR_5);
  VAR_11->uua_os = VAR_7;
  VAR_11->uua_sublist_idx = VAR_10;
  VAR_11->uua_tx = VAR_8;

  (void) FUNC_10(FUNC_4(VAR_7)->dp_sync_taskq,
      VAR_6, VAR_11, 0);

 }
}
