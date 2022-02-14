
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int zs_mirrors; int zs_splits; } ;
typedef TYPE_1__ ztest_shared_t ;
typedef int ztest_ds_t ;
struct TYPE_13__ {int vdev_children; int * vdev_ops; scalar_t__ vdev_islog; struct TYPE_13__** vdev_child; } ;
typedef TYPE_2__ vdev_t ;
typedef size_t uint_t ;
typedef int uint64_t ;
struct TYPE_14__ {int spa_props_lock; int spa_config; TYPE_2__* spa_root_vdev; } ;
typedef TYPE_3__ spa_t ;
typedef int nvlist_t ;
struct TYPE_15__ {int zo_raidz; scalar_t__ zo_mmp_test; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int **) ;
 int ** FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int ,int *) ;
 scalar_t__ FUNC_6 (int *,int ,int **,size_t) ;
 scalar_t__ FUNC_7 (int *,int ,int ) ;
 scalar_t__ FUNC_8 (int *,int ,int) ;
 scalar_t__ FUNC_9 (int **,int ,int ) ;
 scalar_t__ FUNC_10 (int *,int **,int ) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int ,int ,int **) ;
 scalar_t__ FUNC_13 (int *,int ,int ***,size_t*) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (TYPE_3__*) ;
 int FUNC_18 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_19 (TYPE_3__*,int ,int ) ;
 int FUNC_20 (char*) ;
 TYPE_3__* FUNC_21 (char*) ;
 int VAR_11 ;
 int FUNC_22 (TYPE_3__*,char*,int *,int *,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_6__ VAR_14 ;
 TYPE_1__* VAR_15 ;
 TYPE_3__* VAR_16 ;
 int VAR_17 ;

void
FUNC_23(ztest_ds_t *VAR_18, uint64_t VAR_19)
{
 ztest_shared_t *VAR_20 = VAR_15;
 spa_t *VAR_21 = VAR_16;
 vdev_t *VAR_22 = VAR_21->spa_root_vdev;
 nvlist_t *VAR_23, **VAR_24, *VAR_25, *VAR_26, **VAR_27;
 uint_t VAR_28, VAR_29, VAR_30 = 0, VAR_31 = 0;
 int VAR_32 = 0;

 if (VAR_14.zo_mmp_test)
  return;

 FUNC_3(&VAR_17);


 if (VAR_20->zs_mirrors < 3 || VAR_14.zo_raidz > 1) {
  FUNC_4(&VAR_17);
  return;
 }


 (void) FUNC_20("splitp");

 FUNC_18(VAR_21, VAR_4, VAR_1, VAR_3);


 FUNC_3(&VAR_21->spa_props_lock);
 FUNC_0(FUNC_12(VAR_21->spa_config, VAR_10,
     &VAR_23) == 0);
 FUNC_4(&VAR_21->spa_props_lock);

 FUNC_0(FUNC_13(VAR_23, VAR_7, &VAR_24,
     &VAR_29) == 0);

 VAR_27 = FUNC_2(VAR_22->vdev_children * sizeof (nvlist_t *));
 for (VAR_28 = 0; VAR_28 < VAR_29; VAR_28++) {
  vdev_t *VAR_33 = VAR_22->vdev_child[VAR_28];
  nvlist_t **VAR_34;
  uint_t VAR_35;

  if (VAR_33->vdev_islog || VAR_33->vdev_ops == &VAR_12) {
   FUNC_0(FUNC_9(&VAR_27[VAR_30], VAR_2,
       0) == 0);
   FUNC_0(FUNC_7(VAR_27[VAR_30],
       VAR_9, VAR_5) == 0);
   FUNC_0(FUNC_8(VAR_27[VAR_30],
       VAR_8, 1) == 0);
   if (VAR_31 == 0)
    VAR_31 = VAR_30;
   ++VAR_30;
   continue;
  }
  VAR_31 = 0;
  FUNC_0(FUNC_13(VAR_24[VAR_28],
      VAR_7, &VAR_34, &VAR_35) == 0);
  FUNC_0(FUNC_10(VAR_34[0], &VAR_27[VAR_30++], 0) == 0);
 }


 FUNC_0(FUNC_9(&VAR_26, VAR_2, 0) == 0);
 FUNC_0(FUNC_7(VAR_26, VAR_9,
     VAR_6) == 0);
 FUNC_0(FUNC_6(VAR_26, VAR_7, VAR_27,
     VAR_31 != 0 ? VAR_31 : VAR_30) == 0);

 FUNC_0(FUNC_9(&VAR_25, VAR_2, 0) == 0);
 FUNC_0(FUNC_5(VAR_25, VAR_10, VAR_26) == 0);

 for (VAR_28 = 0; VAR_28 < VAR_30; VAR_28++)
  FUNC_11(VAR_27[VAR_28]);
 FUNC_1(VAR_27);
 FUNC_11(VAR_26);

 FUNC_19(VAR_21, VAR_4, VAR_1);

 (void) FUNC_16(&VAR_13);
 VAR_32 = FUNC_22(VAR_21, "splitp", VAR_25, ((void*)0), VAR_0);
 (void) FUNC_15(&VAR_13);

 FUNC_11(VAR_25);

 if (VAR_32 == 0) {
  (void) FUNC_14("successful split - results:\n");
  FUNC_3(&VAR_11);
  FUNC_17(VAR_21);
  FUNC_17(FUNC_21("splitp"));
  FUNC_4(&VAR_11);
  ++VAR_20->zs_splits;
  --VAR_20->zs_mirrors;
 }
 FUNC_4(&VAR_17);
}
