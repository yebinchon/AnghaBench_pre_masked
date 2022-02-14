
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ spa_feature_t ;
struct TYPE_8__ {int ds_bp_rwlock; int ds_longholds; int ds_remap_deadlist_lock; int ds_sendstream_lock; int ds_opening_lock; int ds_lock; int ds_prop_cbs; int ds_synced_link; scalar_t__ ds_dir; int ds_remap_deadlist; int ds_deadlist; int ds_pending_deadlist; int * ds_prev; int * ds_objset; int * ds_dbuf; int * ds_owner; } ;
typedef TYPE_1__ dsl_dataset_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,scalar_t__) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (scalar_t__,TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (TYPE_1__*,scalar_t__) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static void
FUNC_16(void *VAR_1)
{
 dsl_dataset_t *VAR_2 = VAR_1;

 FUNC_0(VAR_2->ds_owner == ((void*)0));

 VAR_2->ds_dbuf = ((void*)0);

 if (VAR_2->ds_objset != ((void*)0))
  FUNC_2(VAR_2->ds_objset);

 if (VAR_2->ds_prev) {
  FUNC_5(VAR_2->ds_prev, VAR_2);
  VAR_2->ds_prev = ((void*)0);
 }

 FUNC_3(VAR_2);

 FUNC_1(&VAR_2->ds_pending_deadlist);
 if (FUNC_7(&VAR_2->ds_deadlist))
  FUNC_6(&VAR_2->ds_deadlist);
 if (FUNC_7(&VAR_2->ds_remap_deadlist))
  FUNC_6(&VAR_2->ds_remap_deadlist);
 if (VAR_2->ds_dir)
  FUNC_8(VAR_2->ds_dir, VAR_2);

 FUNC_0(!FUNC_11(&VAR_2->ds_synced_link));

 for (spa_feature_t VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (FUNC_4(VAR_2, VAR_3))
   FUNC_14(VAR_2, VAR_3);
 }

 FUNC_10(&VAR_2->ds_prop_cbs);
 FUNC_12(&VAR_2->ds_lock);
 FUNC_12(&VAR_2->ds_opening_lock);
 FUNC_12(&VAR_2->ds_sendstream_lock);
 FUNC_12(&VAR_2->ds_remap_deadlist_lock);
 FUNC_15(&VAR_2->ds_longholds);
 FUNC_13(&VAR_2->ds_bp_rwlock);

 FUNC_9(VAR_2, sizeof (dsl_dataset_t));
}
