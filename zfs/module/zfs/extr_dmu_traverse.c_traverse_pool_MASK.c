
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int spa_t ;
typedef int objset_t ;
struct TYPE_9__ {int * dp_meta_objset; } ;
typedef TYPE_1__ dsl_pool_t ;
typedef int dsl_dataset_t ;
struct TYPE_10__ {scalar_t__ doi_bonus_type; } ;
typedef TYPE_2__ dmu_object_info_t ;
typedef int boolean_t ;
typedef int blkptr_cb_t ;
struct TYPE_11__ {scalar_t__ ds_prev_snap_txg; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,scalar_t__,TYPE_2__*) ;
 int FUNC_1 (int *,scalar_t__*,int ,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,scalar_t__,int ,int **) ;
 TYPE_6__* FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,scalar_t__,int,int ,void*) ;
 int FUNC_10 (int *,int *,int ,int ,scalar_t__,int *,int,int ,void*) ;

int
FUNC_11(spa_t *VAR_5, uint64_t VAR_6, int VAR_7,
    blkptr_cb_t VAR_8, void *VAR_9)
{
 int VAR_10;
 dsl_pool_t *VAR_11 = FUNC_7(VAR_5);
 objset_t *VAR_12 = VAR_11->dp_meta_objset;
 boolean_t VAR_13 = (VAR_7 & VAR_4);


 VAR_10 = FUNC_10(VAR_5, ((void*)0), 0, FUNC_8(VAR_5),
     VAR_6, ((void*)0), VAR_7, VAR_8, VAR_9);
 if (VAR_10 != 0)
  return (VAR_10);


 for (uint64_t VAR_14 = 1; VAR_10 == 0;
     VAR_10 = FUNC_1(VAR_12, &VAR_14, VAR_0, VAR_6)) {
  dmu_object_info_t VAR_15;

  VAR_10 = FUNC_0(VAR_12, VAR_14, &VAR_15);
  if (VAR_10 != 0) {
   if (VAR_13)
    continue;
   break;
  }

  if (VAR_15.doi_bonus_type == VAR_1) {
   dsl_dataset_t *VAR_16;
   uint64_t VAR_17 = VAR_6;

   FUNC_5(VAR_11, VAR_3);
   VAR_10 = FUNC_2(VAR_11, VAR_14, VAR_3, &VAR_16);
   FUNC_6(VAR_11, VAR_3);
   if (VAR_10 != 0) {
    if (VAR_13)
     continue;
    break;
   }
   if (FUNC_3(VAR_16)->ds_prev_snap_txg > VAR_17)
    VAR_17 = FUNC_3(VAR_16)->ds_prev_snap_txg;
   VAR_10 = FUNC_9(VAR_16, VAR_17, VAR_7, VAR_8, VAR_9);
   FUNC_4(VAR_16, VAR_3);
   if (VAR_10 != 0)
    break;
  }
 }
 if (VAR_10 == VAR_2)
  VAR_10 = 0;
 return (VAR_10);
}
