
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int zs_mirrors; int zs_vdev_next_leaf; scalar_t__ zs_splits; } ;
typedef TYPE_1__ ztest_shared_t ;
struct TYPE_10__ {int zd_name; } ;
typedef TYPE_2__ ztest_ds_t ;
typedef int uint64_t ;
typedef int spa_t ;
typedef int nvlist_t ;
struct TYPE_11__ {int mc_groups; } ;
typedef TYPE_3__ metaslab_class_t ;
struct TYPE_12__ {scalar_t__ zo_special_vdevs; int zo_raidz; int zo_verbose; int zo_vdev_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (int ,char*,int) ;
 int * FUNC_2 (int *,int *,int *,int ,int ,char const*,int,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int *,int ,int ,int ) ;
 int FUNC_8 (int *,int ,int ) ;
 TYPE_3__* FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *) ;
 TYPE_3__* FUNC_12 (int *) ;
 int FUNC_13 (int *,int *) ;
 scalar_t__ FUNC_14 (char const*,char*) ;
 int FUNC_15 (int ,int ,int,int ) ;
 TYPE_6__ VAR_11 ;
 scalar_t__ FUNC_16 (int) ;
 int FUNC_17 (char*) ;
 TYPE_1__* VAR_12 ;
 int * VAR_13 ;
 int VAR_14 ;

void
FUNC_18(ztest_ds_t *VAR_15, uint64_t VAR_16)
{
 ztest_shared_t *VAR_17 = VAR_12;
 spa_t *VAR_18 = VAR_13;
 uint64_t VAR_19;
 nvlist_t *VAR_20;
 const char *VAR_21 = (FUNC_16(2) == 0) ?
     VAR_7 : VAR_6;
 int VAR_22;




 if ((VAR_11.zo_special_vdevs == VAR_9) ||
     (VAR_11.zo_special_vdevs == VAR_10 &&
     FUNC_16(2) == 0)) {
  return;
 }

 FUNC_3(&VAR_14);


 if (VAR_17->zs_mirrors < 2) {
  FUNC_4(&VAR_14);
  return;
 }


 if (!FUNC_10(VAR_18, VAR_5)) {
  FUNC_4(&VAR_14);
  return;
 }

 VAR_19 = FUNC_0(VAR_17->zs_mirrors + VAR_17->zs_splits, 1) * VAR_11.zo_raidz;

 FUNC_7(VAR_18, VAR_4, VAR_2, VAR_3);
 VAR_12->zs_vdev_next_leaf = FUNC_11(VAR_18) * VAR_19;
 FUNC_8(VAR_18, VAR_4, VAR_2);

 VAR_20 = FUNC_2(((void*)0), ((void*)0), ((void*)0), VAR_11.zo_vdev_size, 0,
     VAR_21, VAR_11.zo_raidz, VAR_17->zs_mirrors, 1);

 VAR_22 = FUNC_13(VAR_18, VAR_20);
 FUNC_5(VAR_20);

 if (VAR_22 == VAR_1)
  FUNC_17("spa_vdev_add");
 else if (VAR_22 != 0)
  FUNC_1(0, "spa_vdev_add() = %d", VAR_22);




 if (VAR_22 == 0 &&
     FUNC_12(VAR_18)->mc_groups == 1 && FUNC_16(2) == 0) {
  if (VAR_11.zo_verbose >= 3)
   (void) FUNC_6("Enabling special VDEV small blocks\n");
  (void) FUNC_15(VAR_15->zd_name,
      VAR_8, 32768, VAR_0);
 }

 FUNC_4(&VAR_14);

 if (VAR_11.zo_verbose >= 3) {
  metaslab_class_t *VAR_23;

  if (FUNC_14(VAR_21, VAR_7) == 0)
   VAR_23 = FUNC_12(VAR_18);
  else
   VAR_23 = FUNC_9(VAR_18);
  (void) FUNC_6("Added a %s mirrored vdev (of %d)\n",
      VAR_21, (int)VAR_23->mc_groups);
 }
}
