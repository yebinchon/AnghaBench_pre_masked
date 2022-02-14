
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int u_longlong_t ;
struct TYPE_24__ {int sav_count; int * sav_vdevs; } ;
struct TYPE_23__ {int sav_count; int * sav_vdevs; } ;
struct TYPE_25__ {int spa_async_tasks; int spa_async_lock; int spa_async_cv; int * spa_async_thread; int spa_root_vdev; TYPE_2__ spa_spares; TYPE_1__ spa_l2cache; int spa_sync_on; TYPE_4__* spa_dsl_pool; } ;
typedef TYPE_3__ spa_t ;
struct TYPE_26__ {int dp_spa; } ;
typedef TYPE_4__ dsl_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_3__*,int ) ;
 int FUNC_8 (TYPE_3__*,int ) ;
 int FUNC_9 (TYPE_3__*,int ) ;
 int FUNC_10 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_11 (TYPE_3__*,int ,int ) ;
 int FUNC_12 (TYPE_3__*,int ) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (TYPE_3__*,char*,int *,char*,int ,int ,int ) ;
 int FUNC_16 (TYPE_3__*) ;
 int VAR_15 ;
 int FUNC_17 (TYPE_3__*) ;
 int FUNC_18 (TYPE_3__*) ;
 int FUNC_19 (TYPE_3__*) ;
 int FUNC_20 (TYPE_3__*) ;
 int FUNC_21 (TYPE_3__*,int ) ;
 int FUNC_22 (TYPE_3__*,int *,int ) ;
 int FUNC_23 () ;
 int FUNC_24 (TYPE_3__*) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (int ) ;

__attribute__((used)) static void
FUNC_27(void *VAR_16)
{
 spa_t *VAR_17 = (spa_t *)VAR_16;
 dsl_pool_t *VAR_18 = VAR_17->spa_dsl_pool;
 int VAR_19;

 FUNC_0(VAR_17->spa_sync_on);

 FUNC_5(&VAR_17->spa_async_lock);
 VAR_19 = VAR_17->spa_async_tasks;
 VAR_17->spa_async_tasks = 0;
 FUNC_6(&VAR_17->spa_async_lock);




 if (VAR_19 & VAR_6) {
  uint64_t VAR_20, VAR_21;

  FUNC_5(&VAR_15);
  VAR_20 = FUNC_4(FUNC_17(VAR_17));
  VAR_20 += FUNC_4(FUNC_18(VAR_17));
  VAR_20 += FUNC_4(FUNC_13(VAR_17));

  FUNC_12(VAR_17, VAR_13);

  VAR_21 = FUNC_4(FUNC_17(VAR_17));
  VAR_21 += FUNC_4(FUNC_18(VAR_17));
  VAR_21 += FUNC_4(FUNC_13(VAR_17));
  FUNC_6(&VAR_15);





  if (VAR_21 != VAR_20) {
   FUNC_15(VAR_17, "vdev online", ((void*)0),
       "pool '%s' size: %llu(+%llu)",
       FUNC_16(VAR_17), (u_longlong_t)VAR_21,
       (u_longlong_t)(VAR_21 - VAR_20));
  }
 }




 if (VAR_19 & VAR_9) {
  FUNC_21(VAR_17, VAR_3);
  FUNC_9(VAR_17, VAR_17->spa_root_vdev);
  for (int VAR_22 = 0; VAR_22 < VAR_17->spa_l2cache.sav_count; VAR_22++)
   FUNC_9(VAR_17, VAR_17->spa_l2cache.sav_vdevs[VAR_22]);
  for (int VAR_23 = 0; VAR_23 < VAR_17->spa_spares.sav_count; VAR_23++)
   FUNC_9(VAR_17, VAR_17->spa_spares.sav_vdevs[VAR_23]);
  (void) FUNC_22(VAR_17, ((void*)0), 0);
 }

 if ((VAR_19 & VAR_4) && !FUNC_19(VAR_17)) {
  FUNC_10(VAR_17, VAR_2, VAR_0, VAR_1);
  FUNC_7(VAR_17, VAR_17->spa_root_vdev);
  FUNC_11(VAR_17, VAR_2, VAR_0);
 }




 if (VAR_19 & VAR_8) {
  FUNC_21(VAR_17, VAR_3);
  FUNC_8(VAR_17, VAR_17->spa_root_vdev);
  (void) FUNC_22(VAR_17, ((void*)0), 0);
 }




 if (VAR_19 & VAR_11)
  FUNC_20(VAR_17);




 if (VAR_19 & VAR_10 &&
     (!FUNC_3(VAR_18) ||
     !FUNC_14(VAR_18->dp_spa, VAR_14)))
  FUNC_2(VAR_18, 0);

 if (VAR_19 & VAR_7) {
  FUNC_5(&VAR_15);
  FUNC_10(VAR_17, VAR_2, VAR_0, VAR_1);
  FUNC_25(VAR_17->spa_root_vdev);
  FUNC_11(VAR_17, VAR_2, VAR_0);
  FUNC_6(&VAR_15);
 }

 if (VAR_19 & VAR_12) {
  FUNC_5(&VAR_15);
  FUNC_10(VAR_17, VAR_2, VAR_0, VAR_1);
  FUNC_26(VAR_17->spa_root_vdev);
  FUNC_11(VAR_17, VAR_2, VAR_0);
  FUNC_6(&VAR_15);
 }

 if (VAR_19 & VAR_5) {
  FUNC_5(&VAR_15);
  FUNC_10(VAR_17, VAR_2, VAR_0, VAR_1);
  FUNC_24(VAR_17);
  FUNC_11(VAR_17, VAR_2, VAR_0);
  FUNC_6(&VAR_15);
 }




 FUNC_5(&VAR_17->spa_async_lock);
 VAR_17->spa_async_thread = ((void*)0);
 FUNC_1(&VAR_17->spa_async_cv);
 FUNC_6(&VAR_17->spa_async_lock);
 FUNC_23();
}
