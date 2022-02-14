
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_10__ ;


struct TYPE_21__ {int zs_mirrors; } ;
typedef TYPE_2__ ztest_shared_t ;
typedef int ztest_ds_t ;
struct TYPE_22__ {int vdev_children; size_t vdev_guid; TYPE_1__* vdev_top; int * vdev_ops; int vdev_path; struct TYPE_22__* vdev_parent; struct TYPE_22__** vdev_child; } ;
typedef TYPE_3__ vdev_t ;
typedef size_t uint64_t ;
struct TYPE_24__ {int sav_count; TYPE_3__** sav_vdevs; } ;
struct TYPE_23__ {TYPE_3__* spa_root_vdev; TYPE_5__ spa_spares; } ;
typedef TYPE_4__ spa_t ;
typedef TYPE_5__ spa_aux_vdev_t ;
typedef int nvlist_t ;
struct TYPE_20__ {int vdev_islog; size_t vdev_ashift; } ;
struct TYPE_19__ {size_t zo_raidz; int zo_pool; int zo_dir; scalar_t__ zo_mmp_test; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t FUNC_1 (int,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int ,char*,char*,size_t,...) ;
 int * FUNC_3 (char*,int *,int *,size_t,size_t,int *,int ,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,int ,char*,int ,int ,size_t) ;
 int FUNC_8 (TYPE_4__*,int ,int ,int ) ;
 int FUNC_9 (TYPE_4__*,int ,int ) ;
 int FUNC_10 (TYPE_4__*,size_t,int *,int) ;
 int FUNC_11 (TYPE_4__*,size_t,size_t,int) ;
 int FUNC_12 (char*,int ) ;
 int FUNC_13 (char*) ;
 char* FUNC_14 (int ,int ) ;
 int FUNC_15 (char*,int ) ;
 size_t FUNC_16 (TYPE_3__*) ;
 TYPE_3__* FUNC_17 (TYPE_3__*,char*) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_18 (TYPE_3__*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 char* VAR_19 ;
 scalar_t__ VAR_20 ;
 size_t FUNC_19 () ;
 TYPE_10__ VAR_21 ;
 int FUNC_20 (int) ;
 size_t FUNC_21 (TYPE_4__*,int) ;
 int FUNC_22 (TYPE_4__*) ;
 TYPE_2__* VAR_22 ;
 TYPE_4__* VAR_23 ;
 int VAR_24 ;

void
FUNC_23(ztest_ds_t *VAR_25, uint64_t VAR_26)
{
 ztest_shared_t *VAR_27 = VAR_22;
 spa_t *VAR_28 = VAR_23;
 spa_aux_vdev_t *VAR_29 = &VAR_28->spa_spares;
 vdev_t *VAR_30 = VAR_28->spa_root_vdev;
 vdev_t *VAR_31, *VAR_32, *VAR_33;
 nvlist_t *VAR_34;
 uint64_t VAR_35;
 uint64_t VAR_36, VAR_37;
 uint64_t VAR_38 = FUNC_19();
 uint64_t VAR_39, VAR_40;
 uint64_t VAR_41, VAR_42;
 char *VAR_43, *VAR_44;
 int VAR_45;
 int VAR_46 = VAR_0;
 int VAR_47 = VAR_0;
 int VAR_48;
 int VAR_49, VAR_50;

 if (VAR_21.zo_mmp_test)
  return;

 VAR_43 = FUNC_14(VAR_8, VAR_11);
 VAR_44 = FUNC_14(VAR_8, VAR_11);

 FUNC_4(&VAR_24);
 VAR_35 = FUNC_1(VAR_27->zs_mirrors, 1) * VAR_21.zo_raidz;

 FUNC_8(VAR_28, VAR_10, VAR_7, VAR_9);







 if (VAR_20) {
  FUNC_9(VAR_28, VAR_10, VAR_7);
  FUNC_5(&VAR_24);
  return;
 }




 VAR_45 = FUNC_20(2);




 VAR_37 = FUNC_21(VAR_28, VAR_1);




 VAR_36 = FUNC_20(VAR_35);




 VAR_31 = VAR_30->vdev_child[VAR_37];


 if (VAR_27->zs_mirrors >= 1) {
  FUNC_0(VAR_31->vdev_ops == &VAR_14);
  FUNC_0(VAR_31->vdev_children >= VAR_27->zs_mirrors);
  VAR_31 = VAR_31->vdev_child[VAR_36 / VAR_21.zo_raidz];
 }


 if (VAR_21.zo_raidz > 1) {
  FUNC_0(VAR_31->vdev_ops == &VAR_15);
  FUNC_0(VAR_31->vdev_children == VAR_21.zo_raidz);
  VAR_31 = VAR_31->vdev_child[VAR_36 % VAR_21.zo_raidz];
 }





 while (VAR_31->vdev_children != 0) {
  VAR_46 = VAR_1;
  FUNC_0(VAR_31->vdev_children >= 2);
  VAR_31 = VAR_31->vdev_child[FUNC_20(VAR_31->vdev_children)];
 }

 VAR_39 = VAR_31->vdev_guid;
 VAR_41 = FUNC_16(VAR_31);
 VAR_48 = VAR_31->vdev_top->vdev_islog;
 (void) FUNC_12(VAR_43, VAR_31->vdev_path);
 VAR_33 = VAR_31->vdev_parent;
 VAR_40 = VAR_33->vdev_guid;






 if (VAR_46 && FUNC_20(2) == 0) {
  FUNC_9(VAR_28, VAR_10, VAR_7);

  VAR_49 = FUNC_22(VAR_28);
  if (VAR_49)
   goto out;

  VAR_49 = FUNC_11(VAR_28, VAR_39, VAR_40, VAR_0);
  if (VAR_49 != 0 && VAR_49 != VAR_4 && VAR_49 != VAR_2 &&
      VAR_49 != VAR_5 && VAR_49 != VAR_12 &&
      VAR_49 != VAR_13)
   FUNC_2(0, "detach (%s) returned %d", VAR_43, VAR_49);
  goto out;
 }





 if (VAR_29->sav_count != 0 && FUNC_20(3) == 0) {
  VAR_32 = VAR_29->sav_vdevs[FUNC_20(VAR_29->sav_count)];
  VAR_47 = VAR_1;
  (void) FUNC_12(VAR_44, VAR_32->vdev_path);
 } else {
  (void) FUNC_7(VAR_44, VAR_8, VAR_19,
      VAR_21.zo_dir, VAR_21.zo_pool,
      VAR_37 * VAR_35 + VAR_36);
  if (FUNC_20(2) == 0)
   VAR_44[FUNC_13(VAR_44) - 1] = 'b';
  VAR_32 = FUNC_17(VAR_30, VAR_44);
 }

 if (VAR_32) {



  FUNC_18(VAR_32);
  VAR_42 = FUNC_16(VAR_32);
 } else {






  VAR_42 = 10 * VAR_41 / (9 + FUNC_20(3));
 }
 if (VAR_33->vdev_ops != &VAR_14 &&
     VAR_33->vdev_ops != &VAR_17 && (!VAR_45 ||
     VAR_33->vdev_ops == &VAR_16 ||
     VAR_33->vdev_ops == &VAR_18))
  VAR_50 = VAR_5;
 else if (VAR_47 && (!VAR_45 || VAR_48))
  VAR_50 = VAR_5;
 else if (VAR_32 == VAR_31)
  VAR_50 = VAR_45 ? 0 : VAR_2;
 else if (FUNC_17(VAR_30, VAR_44) != ((void*)0))
  VAR_50 = VAR_2;
 else if (VAR_42 < VAR_41)
  VAR_50 = VAR_6;
 else if (VAR_38 > VAR_31->vdev_top->vdev_ashift)
  VAR_50 = VAR_3;
 else
  VAR_50 = 0;

 FUNC_9(VAR_28, VAR_10, VAR_7);




 VAR_34 = FUNC_3(VAR_44, ((void*)0), ((void*)0), VAR_32 == ((void*)0) ? VAR_42 : 0,
     VAR_38, ((void*)0), 0, 0, 1);

 VAR_49 = FUNC_10(VAR_28, VAR_39, VAR_34, VAR_45);

 FUNC_6(VAR_34);






 if (VAR_50 == VAR_5 &&
     (VAR_49 == 0 || VAR_49 == VAR_4 || VAR_49 == VAR_6))
  VAR_50 = VAR_49;




 if (VAR_49 == VAR_6 || VAR_49 == VAR_2)
  VAR_50 = VAR_49;

 if (VAR_49 == VAR_12 ||
     VAR_49 == VAR_13)
  VAR_50 = VAR_49;


 if (VAR_49 != VAR_50 && VAR_50 != VAR_2) {
  FUNC_2(0, "attach (%s %llu, %s %llu, %d) "
      "returned %d, expected %d",
      VAR_43, VAR_41, VAR_44,
      VAR_42, VAR_45, VAR_49, VAR_50);
 }
out:
 FUNC_5(&VAR_24);

 FUNC_15(VAR_43, VAR_8);
 FUNC_15(VAR_44, VAR_8);
}
