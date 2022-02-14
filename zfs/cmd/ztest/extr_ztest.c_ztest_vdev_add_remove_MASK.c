
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int zs_vdev_next_leaf; scalar_t__ zs_mirrors; scalar_t__ zs_splits; } ;
typedef TYPE_2__ ztest_shared_t ;
typedef int ztest_ds_t ;
typedef int uint64_t ;
typedef int spa_t ;
typedef int nvlist_t ;
struct TYPE_9__ {TYPE_1__* mg_vd; struct TYPE_9__* mg_next; } ;
typedef TYPE_3__ metaslab_group_t ;
struct TYPE_11__ {TYPE_3__* mc_rotor; } ;
struct TYPE_10__ {int zo_raidz; int zo_vdev_size; scalar_t__ zo_mmp_test; } ;
struct TYPE_7__ {int vdev_guid; int vdev_islog; } ;


 int VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (scalar_t__,int) ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_1 (int ,char*,int) ;
 int * FUNC_2 (int *,int *,int *,int ,int ,char*,int,scalar_t__,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int ,int ) ;
 int FUNC_9 (int *,int ,int ) ;
 scalar_t__ FUNC_10 (int *) ;
 TYPE_6__* FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *,int,int ) ;
 int VAR_4 ;
 TYPE_5__ VAR_5 ;
 scalar_t__ FUNC_15 (int) ;
 int FUNC_16 (char*) ;
 TYPE_2__* VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;

void
FUNC_17(ztest_ds_t *VAR_9, uint64_t VAR_10)
{
 ztest_shared_t *VAR_11 = VAR_6;
 spa_t *VAR_12 = VAR_7;
 uint64_t VAR_13;
 uint64_t VAR_14;
 nvlist_t *VAR_15;
 int VAR_16;

 if (VAR_5.zo_mmp_test)
  return;

 FUNC_3(&VAR_8);
 VAR_13 = FUNC_0(VAR_11->zs_mirrors + VAR_11->zs_splits, 1) * VAR_5.zo_raidz;

 FUNC_8(VAR_12, VAR_3, VAR_1, VAR_2);

 VAR_6->zs_vdev_next_leaf = FUNC_12(VAR_12) * VAR_13;




 if (FUNC_10(VAR_12) && FUNC_15(4) == 0) {
  metaslab_group_t *VAR_17;




  VAR_17 = FUNC_11(VAR_12)->mc_rotor;
  while (!VAR_17->mg_vd->vdev_islog)
   VAR_17 = VAR_17->mg_next;

  VAR_14 = VAR_17->mg_vd->vdev_guid;

  FUNC_9(VAR_12, VAR_3, VAR_1);
  FUNC_7(&VAR_4);
  VAR_16 = FUNC_14(VAR_12, VAR_14, VAR_0);
  FUNC_6(&VAR_4);

  switch (VAR_16) {
  case 0:
  case 131:
  case 132:
  case 133:
  case 129:
  case 128:
   break;
  default:
   FUNC_1(0, "spa_vdev_remove() = %d", VAR_16);
  }
 } else {
  FUNC_9(VAR_12, VAR_3, VAR_1);




  VAR_15 = FUNC_2(((void*)0), ((void*)0), ((void*)0),
      VAR_5.zo_vdev_size, 0, (FUNC_15(4) == 0) ?
      "log" : ((void*)0), VAR_5.zo_raidz, VAR_11->zs_mirrors, 1);

  VAR_16 = FUNC_13(VAR_12, VAR_15);
  FUNC_5(VAR_15);

  switch (VAR_16) {
  case 0:
   break;
  case 130:
   FUNC_16("spa_vdev_add");
   break;
  default:
   FUNC_1(0, "spa_vdev_add() = %d", VAR_16);
  }
 }

 FUNC_4(&VAR_8);
}
