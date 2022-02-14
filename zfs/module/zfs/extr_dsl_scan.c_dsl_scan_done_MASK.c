
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;


typedef int u_longlong_t ;
struct TYPE_28__ {scalar_t__ spa_errata; int spa_root_vdev; void* spa_scrub_active; void* spa_scrub_started; } ;
typedef TYPE_2__ spa_t ;
struct TYPE_27__ {scalar_t__ scn_queue_obj; int scn_end_time; scalar_t__ scn_min_txg; int scn_max_txg; int scn_state; int scn_flags; } ;
struct TYPE_29__ {TYPE_1__ scn_phys; int * scn_taskq; void* scn_is_sorted; TYPE_4__* scn_dp; } ;
typedef TYPE_3__ dsl_scan_t ;
struct TYPE_30__ {int dp_meta_objset; TYPE_2__* dp_spa; } ;
typedef TYPE_4__ dsl_pool_t ;
struct TYPE_31__ {int tx_txg; } ;
typedef TYPE_5__ dmu_tx_t ;
typedef scalar_t__ boolean_t ;


 int FUNC_0 (int) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_12 ;
 int FUNC_3 (int ,scalar_t__,TYPE_5__*) ;
 scalar_t__ FUNC_4 (int ,TYPE_5__*) ;
 int FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_2__*,int ) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*,int *,int *,int ) ;
 int FUNC_14 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_15 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (TYPE_2__*,char*,TYPE_5__*,char*,int ) ;
 int FUNC_18 (TYPE_2__*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int ,int ,int ,int ) ;
 int FUNC_21 (int ,int ,char const*,TYPE_5__*) ;

__attribute__((used)) static void
FUNC_22(dsl_scan_t *VAR_13, boolean_t VAR_14, dmu_tx_t *VAR_15)
{
 static const char *VAR_16[] = {
  "scrub_bookmark",
  "scrub_ddt_bookmark",
  "scrub_ddt_class_max",
  "scrub_queue",
  "scrub_min_txg",
  "scrub_max_txg",
  "scrub_func",
  "scrub_errors",
  ((void*)0)
 };

 dsl_pool_t *VAR_17 = VAR_13->scn_dp;
 spa_t *VAR_18 = VAR_17->dp_spa;
 int VAR_19;


 for (VAR_19 = 0; VAR_16[VAR_19]; VAR_19++) {
  (void) FUNC_21(VAR_17->dp_meta_objset,
      VAR_2, VAR_16[VAR_19], VAR_15);
 }

 if (VAR_13->scn_phys.scn_queue_obj != 0) {
  FUNC_2(FUNC_3(VAR_17->dp_meta_objset,
      VAR_13->scn_phys.scn_queue_obj, VAR_15));
  VAR_13->scn_phys.scn_queue_obj = 0;
 }
 FUNC_9(VAR_13);
 FUNC_8(VAR_13);

 VAR_13->scn_phys.scn_flags &= ~VAR_3;





 if (!FUNC_5(VAR_13)) {
  FUNC_0(!VAR_13->scn_is_sorted);
  return;
 }

 if (VAR_13->scn_is_sorted) {
  FUNC_10(VAR_13);
  VAR_13->scn_is_sorted = VAR_0;

  if (VAR_13->scn_taskq != ((void*)0)) {
   FUNC_19(VAR_13->scn_taskq);
   VAR_13->scn_taskq = ((void*)0);
  }
 }

 VAR_13->scn_phys.scn_state = VAR_14 ? VAR_5 : VAR_4;

 FUNC_18(VAR_18);

 if (FUNC_6(VAR_13, VAR_15))
  FUNC_17(VAR_18, "scan aborted, restarting", VAR_15,
      "errors=%llu", (u_longlong_t)FUNC_16(VAR_18));
 else if (!VAR_14)
  FUNC_17(VAR_18, "scan cancelled", VAR_15,
      "errors=%llu", (u_longlong_t)FUNC_16(VAR_18));
 else
  FUNC_17(VAR_18, "scan done", VAR_15,
      "errors=%llu", (u_longlong_t)FUNC_16(VAR_18));

 if (FUNC_1(VAR_13)) {
  VAR_18->spa_scrub_started = VAR_0;
  VAR_18->spa_scrub_active = VAR_0;
  if (VAR_14 &&
      !FUNC_14(VAR_18, VAR_10)) {
   FUNC_20(VAR_18->spa_root_vdev, VAR_15->tx_txg,
       VAR_13->scn_phys.scn_max_txg, VAR_1);

   FUNC_13(VAR_18, ((void*)0), ((void*)0),
       VAR_13->scn_phys.scn_min_txg ?
       VAR_6 : VAR_7);
  } else {
   FUNC_20(VAR_18->spa_root_vdev, VAR_15->tx_txg,
       0, VAR_1);
  }
  FUNC_12(VAR_18);





  FUNC_11(VAR_18, VAR_9);
  if (FUNC_15(VAR_18, VAR_11)) {
   boolean_t VAR_20 =
       FUNC_4(VAR_18->spa_root_vdev, VAR_15);
   if (VAR_20) {
    FUNC_17(VAR_18,
        "starting deferred resilver", VAR_15,
        "errors=%llu",
        (u_longlong_t)FUNC_16(VAR_18));
    FUNC_11(VAR_18, VAR_8);
   }
  }
 }

 VAR_13->scn_phys.scn_end_time = FUNC_7();

 if (VAR_18->spa_errata == VAR_12)
  VAR_18->spa_errata = 0;

 FUNC_0(!FUNC_5(VAR_13));
}
