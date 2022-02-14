
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_11__ ;
typedef struct TYPE_18__ TYPE_10__ ;


struct TYPE_21__ {int zs_mirrors; int zs_splits; } ;
typedef TYPE_2__ ztest_shared_t ;
typedef int ztest_ds_t ;
struct TYPE_22__ {scalar_t__ vdev_resilver_txg; int vdev_guid; int vdev_path; void* vdev_cant_write; void* vdev_cant_read; scalar_t__ vdev_id; TYPE_4__* vdev_tsd; TYPE_11__* vdev_top; } ;
typedef TYPE_3__ vdev_t ;
typedef int vdev_label_t ;
struct TYPE_23__ {TYPE_1__* vf_vnode; } ;
typedef TYPE_4__ vdev_file_t ;
typedef int uint64_t ;
typedef int u_longlong_t ;
struct TYPE_25__ {unsigned long long sav_count; TYPE_3__** sav_vdevs; } ;
struct TYPE_24__ {TYPE_6__ spa_l2cache; int spa_root_vdev; } ;
typedef TYPE_5__ spa_t ;
typedef TYPE_6__ spa_aux_vdev_t ;
typedef void* boolean_t ;
typedef int bad ;
struct TYPE_20__ {int v_fd; } ;
struct TYPE_19__ {scalar_t__ vdev_islog; } ;
struct TYPE_18__ {int zo_raidz; int zo_verbose; int zo_pool; int zo_dir; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (size_t,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (int) ;
 int VAR_14 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,char*,int,char*) ;
 size_t FUNC_7 (int,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (char*,char*,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int,int*,int,int) ;
 int FUNC_16 (char*,int ,char*,int ,int ,int) ;
 int FUNC_17 (TYPE_5__*,int ,int ,int ) ;
 int FUNC_18 (TYPE_5__*,int ,int ) ;
 int FUNC_19 (char*,int ) ;
 char* FUNC_20 (int ,int ) ;
 int FUNC_21 (char*,int ) ;
 TYPE_3__* FUNC_22 (int ,char*) ;
 scalar_t__ FUNC_23 (TYPE_5__*,int,int) ;
 int FUNC_24 (TYPE_5__*,int,int ,int *) ;
 int FUNC_25 (TYPE_11__*,int *,int *) ;
 int FUNC_26 (char*,long long,int) ;
 char* VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 TYPE_10__ VAR_18 ;
 scalar_t__ VAR_19 ;
 unsigned long long FUNC_27 (unsigned long long) ;
 int FUNC_28 (TYPE_5__*,void*) ;
 TYPE_2__* VAR_20 ;
 TYPE_5__* VAR_21 ;
 int VAR_22 ;

void
FUNC_29(ztest_ds_t *VAR_23, uint64_t VAR_24)
{
 ztest_shared_t *VAR_25 = VAR_20;
 spa_t *VAR_26 = VAR_21;
 int VAR_27;
 uint64_t VAR_28;
 uint64_t VAR_29;
 uint64_t VAR_30 = 0x1990c0ffeedecadeull;
 uint64_t VAR_31, VAR_32;
 char *VAR_33;
 char *VAR_34;
 size_t VAR_35;
 int VAR_36 = VAR_10 + 2;
 int VAR_37 = 1000;
 int VAR_38;
 int VAR_39;
 vdev_t *VAR_40 = ((void*)0);
 uint64_t VAR_41 = 0;
 boolean_t VAR_42 = VAR_0;

 VAR_33 = FUNC_20(VAR_5, VAR_11);
 VAR_34 = FUNC_20(VAR_5, VAR_11);

 FUNC_8(&VAR_22);







 if (VAR_16) {
  FUNC_9(&VAR_22);
  goto out;
 }

 VAR_38 = FUNC_2(VAR_25);
 VAR_29 = FUNC_1(VAR_25->zs_mirrors, 1) * VAR_18.zo_raidz;
 VAR_39 = VAR_25->zs_mirrors;
 FUNC_9(&VAR_22);

 FUNC_0(VAR_29 >= 1);
 if (VAR_19 == VAR_0)
  goto out;







 (void) FUNC_12(&VAR_17);




 FUNC_17(VAR_26, VAR_8, VAR_3, VAR_7);

 if (FUNC_27(2) == 0) {



  VAR_31 = FUNC_28(VAR_26, VAR_1);
  VAR_32 = FUNC_27(VAR_29) + VAR_25->zs_splits;







  (void) FUNC_16(VAR_33, VAR_5, VAR_15,
      VAR_18.zo_dir, VAR_18.zo_pool,
      VAR_31 * VAR_29 + VAR_25->zs_splits);
  (void) FUNC_16(VAR_34, VAR_5, VAR_15,
      VAR_18.zo_dir, VAR_18.zo_pool,
      VAR_31 * VAR_29 + VAR_32);

  VAR_40 = FUNC_22(VAR_26->spa_root_vdev, VAR_33);
  if (VAR_40 != ((void*)0) && VAR_40->vdev_top->vdev_islog)
   VAR_42 = VAR_1;






  if (VAR_40 != ((void*)0) && VAR_38 != 1 &&
      (!FUNC_25(VAR_40->vdev_top, ((void*)0), ((void*)0)) ||
      VAR_40->vdev_resilver_txg != 0)) {
   vdev_file_t *VAR_43 = VAR_40->vdev_tsd;

   FUNC_26("injecting fault to vdev %llu; maxfaults=%d",
       (long long)VAR_40->vdev_id, (int)VAR_38);

   if (VAR_43 != ((void*)0) && FUNC_27(3) == 0) {
    (void) FUNC_5(VAR_43->vf_vnode->v_fd);
    VAR_43->vf_vnode->v_fd = -1;
   } else if (FUNC_27(2) == 0) {
    VAR_40->vdev_cant_read = VAR_1;
   } else {
    VAR_40->vdev_cant_write = VAR_1;
   }
   VAR_41 = VAR_40->vdev_guid;
  }
 } else {



  spa_aux_vdev_t *VAR_44 = &VAR_26->spa_l2cache;

  if (VAR_44->sav_count == 0) {
   FUNC_18(VAR_26, VAR_8, VAR_3);
   (void) FUNC_13(&VAR_17);
   goto out;
  }
  VAR_40 = VAR_44->sav_vdevs[FUNC_27(VAR_44->sav_count)];
  VAR_41 = VAR_40->vdev_guid;
  (void) FUNC_19(VAR_33, VAR_40->vdev_path);
  (void) FUNC_19(VAR_34, VAR_40->vdev_path);

  VAR_32 = 0;
  VAR_29 = 1;
  VAR_38 = VAR_4;
 }

 FUNC_18(VAR_26, VAR_8, VAR_3);
 (void) FUNC_13(&VAR_17);





 if ((VAR_38 >= 2 || VAR_42) && VAR_41 != 0) {
  if (FUNC_27(10) < 6) {
   int VAR_45 = (FUNC_27(2) == 0 ?
       VAR_14 : 0);
   if (VAR_42)
    (void) FUNC_14(&VAR_17);

   FUNC_4(FUNC_23(VAR_26, VAR_41, VAR_45) != VAR_2);

   if (VAR_42)
    (void) FUNC_13(&VAR_17);
  } else {
   FUNC_8(&VAR_22);
   (void) FUNC_24(VAR_26, VAR_41, 0, ((void*)0));
   FUNC_9(&VAR_22);
  }
 }

 if (VAR_38 == 0)
  goto out;




 VAR_27 = FUNC_10(VAR_34, VAR_6);

 if (VAR_27 == -1)
  goto out;

 VAR_35 = FUNC_7(VAR_27, 0, VAR_9);

 while (--VAR_37 != 0) {
  VAR_28 = FUNC_27(VAR_35 / (VAR_29 << VAR_36)) *
      (VAR_29 << VAR_36) + (VAR_32 << VAR_36) +
      (FUNC_27(1ULL << (VAR_36 - 1)) & -8ULL);
  if ((VAR_32 & 1) == 0 && VAR_28 < VAR_13)
   continue;






  uint64_t VAR_46 = FUNC_3(VAR_35, sizeof (vdev_label_t));
  if ((VAR_32 & 1) == 1 &&
      VAR_28 + sizeof (VAR_30) > VAR_46 - VAR_12)
   continue;

  FUNC_8(&VAR_22);
  if (VAR_39 != VAR_25->zs_mirrors) {
   FUNC_9(&VAR_22);
   (void) FUNC_5(VAR_27);
   goto out;
  }

  if (FUNC_15(VAR_27, &VAR_30, sizeof (VAR_30), VAR_28) != sizeof (VAR_30))
   FUNC_6(1, "can't inject bad word at 0x%llx in %s",
       VAR_28, VAR_34);

  FUNC_9(&VAR_22);

  if (VAR_18.zo_verbose >= 7)
   (void) FUNC_11("injected bad word into %s,"
       " offset 0x%llx\n", VAR_34, (u_longlong_t)VAR_28);
 }

 (void) FUNC_5(VAR_27);
out:
 FUNC_21(VAR_33, VAR_5);
 FUNC_21(VAR_34, VAR_5);
}
