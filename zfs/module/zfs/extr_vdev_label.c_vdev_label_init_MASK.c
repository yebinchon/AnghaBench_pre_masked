
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_18__ ;


typedef int zio_t ;
struct TYPE_21__ {int vdev_children; unsigned long long vdev_crtxg; unsigned long long vdev_guid; scalar_t__ vdev_isl2cache; scalar_t__ vdev_isspare; int vdev_guid_sum; struct TYPE_21__* vdev_parent; TYPE_1__* vdev_ops; struct TYPE_21__** vdev_child; TYPE_5__* vdev_spa; } ;
typedef TYPE_2__ vdev_t ;
struct TYPE_22__ {char* vp_nvlist; } ;
typedef TYPE_3__ vdev_phys_t ;
typedef scalar_t__ vdev_labeltype_t ;
typedef unsigned long long uint64_t ;
struct TYPE_23__ {scalar_t__ ub_txg; } ;
typedef TYPE_4__ uberblock_t ;
struct TYPE_19__ {unsigned long long ub_txg; } ;
struct TYPE_24__ {TYPE_18__ spa_uberblock; } ;
typedef TYPE_5__ spa_t ;
typedef int nvlist_t ;
typedef int abd_t ;
struct TYPE_20__ {int vdev_op_leaf; } ;


 int FUNC_0 (int) ;
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
 unsigned long long VAR_10 ;
 unsigned long long VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_1 (int ) ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_2 (int) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int * FUNC_3 (int,int ) ;
 int * FUNC_4 (int,int ) ;
 int FUNC_5 (int *,TYPE_18__*,int) ;
 int FUNC_6 (int *) ;
 void* FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 scalar_t__ FUNC_9 (int *,int ,unsigned long long) ;
 scalar_t__ FUNC_10 (int **,int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,char**,size_t*,int ,int ) ;
 int FUNC_13 (int ,int ) ;
 int * FUNC_14 (TYPE_5__*,TYPE_2__*,unsigned long long,int ) ;
 scalar_t__ FUNC_15 (TYPE_5__*,scalar_t__,int ) ;
 int FUNC_16 (TYPE_2__*) ;
 scalar_t__ FUNC_17 (unsigned long long,int *) ;
 int FUNC_18 (TYPE_2__*) ;
 scalar_t__ FUNC_19 (unsigned long long,int *,int *) ;
 unsigned long long FUNC_20 (TYPE_5__*) ;
 int FUNC_21 (TYPE_5__*) ;
 scalar_t__ FUNC_22 (TYPE_2__*,unsigned long long,scalar_t__,unsigned long long*,unsigned long long*) ;
 scalar_t__ FUNC_23 (TYPE_2__*) ;
 int VAR_29 ;
 int FUNC_24 (int *,TYPE_2__*,int,int *,int ,int,int *,int *,int) ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int * FUNC_25 (TYPE_5__*,int *,int *,int) ;
 int FUNC_26 (int *) ;

int
FUNC_27(vdev_t *VAR_33, uint64_t VAR_34, vdev_labeltype_t VAR_35)
{
 spa_t *VAR_36 = VAR_33->vdev_spa;
 nvlist_t *VAR_37;
 vdev_phys_t *VAR_38;
 abd_t *VAR_39;
 abd_t *VAR_40;
 uberblock_t *VAR_41;
 abd_t *VAR_42;
 zio_t *VAR_43;
 char *VAR_44;
 size_t VAR_45;
 int VAR_46;
 uint64_t VAR_47 = 0, VAR_48 = 0;
 int VAR_49 = VAR_23 | VAR_22;

 FUNC_0(FUNC_15(VAR_36, VAR_13, VAR_12) == VAR_13);

 for (int VAR_50 = 0; VAR_50 < VAR_33->vdev_children; VAR_50++)
  if ((VAR_46 = FUNC_27(VAR_33->vdev_child[VAR_50],
      VAR_34, VAR_35)) != 0)
   return (VAR_46);


 VAR_33->vdev_crtxg = VAR_34;

 if (!VAR_33->vdev_ops->vdev_op_leaf || !FUNC_21(VAR_36))
  return (0);




 if (FUNC_23(VAR_33))
  return (FUNC_1(VAR_5));




 if (VAR_35 != VAR_16 && VAR_35 != VAR_19 &&
     FUNC_22(VAR_33, VAR_34, VAR_35, &VAR_47, &VAR_48))
  return (FUNC_1(VAR_2));







 if (VAR_35 != VAR_16 && VAR_35 != VAR_15 &&
     VAR_47 != 0ULL) {
  uint64_t VAR_51 = VAR_47 - VAR_33->vdev_guid;

  VAR_33->vdev_guid += VAR_51;

  for (vdev_t *VAR_52 = VAR_33; VAR_52 != ((void*)0); VAR_52 = VAR_52->vdev_parent)
   VAR_52->vdev_guid_sum += VAR_51;






  if (VAR_35 == VAR_18)
   return (0);
  FUNC_0(VAR_35 == VAR_17 ||
      VAR_35 == VAR_19);
 }

 if (VAR_35 != VAR_16 && VAR_35 != VAR_18 &&
     VAR_48 != 0ULL) {
  uint64_t VAR_53 = VAR_48 - VAR_33->vdev_guid;

  VAR_33->vdev_guid += VAR_53;

  for (vdev_t *VAR_54 = VAR_33; VAR_54 != ((void*)0); VAR_54 = VAR_54->vdev_parent)
   VAR_54->vdev_guid_sum += VAR_53;






  if (VAR_35 == VAR_15)
   return (0);
  FUNC_0(VAR_35 == VAR_17);
 }




 VAR_39 = FUNC_4(sizeof (vdev_phys_t), VAR_1);
 FUNC_8(VAR_39, sizeof (vdev_phys_t));
 VAR_38 = FUNC_7(VAR_39);







 if (VAR_35 == VAR_18 ||
     (VAR_35 == VAR_16 && VAR_33->vdev_isspare)) {







  FUNC_2(FUNC_10(&VAR_37, VAR_9, VAR_7) == 0);

  FUNC_2(FUNC_9(VAR_37, VAR_28,
      FUNC_20(VAR_36)) == 0);
  FUNC_2(FUNC_9(VAR_37, VAR_27,
      VAR_11) == 0);
  FUNC_2(FUNC_9(VAR_37, VAR_26,
      VAR_33->vdev_guid) == 0);
 } else if (VAR_35 == VAR_15 ||
     (VAR_35 == VAR_16 && VAR_33->vdev_isl2cache)) {



  FUNC_2(FUNC_10(&VAR_37, VAR_9, VAR_7) == 0);

  FUNC_2(FUNC_9(VAR_37, VAR_28,
      FUNC_20(VAR_36)) == 0);
  FUNC_2(FUNC_9(VAR_37, VAR_27,
      VAR_10) == 0);
  FUNC_2(FUNC_9(VAR_37, VAR_26,
      VAR_33->vdev_guid) == 0);
 } else {
  uint64_t VAR_55 = 0ULL;

  if (VAR_35 == VAR_19)
   VAR_55 = VAR_36->spa_uberblock.ub_txg;
  VAR_37 = FUNC_14(VAR_36, VAR_33, VAR_55, VAR_0);






  FUNC_2(FUNC_9(VAR_37, VAR_25,
      VAR_34) == 0);
 }

 VAR_44 = VAR_38->vp_nvlist;
 VAR_45 = sizeof (VAR_38->vp_nvlist);

 VAR_46 = FUNC_12(VAR_37, &VAR_44, &VAR_45, VAR_8, VAR_7);
 if (VAR_46 != 0) {
  FUNC_11(VAR_37);
  FUNC_6(VAR_39);

  return (FUNC_1(VAR_46 == VAR_3 ? VAR_6 : VAR_4));
 }




 VAR_42 = FUNC_4(VAR_21, VAR_1);
 FUNC_8(VAR_42, VAR_21);
 FUNC_5(VAR_42, &VAR_36->spa_uberblock, sizeof (uberblock_t));
 VAR_41 = FUNC_7(VAR_42);
 VAR_41->ub_txg = 0;


 VAR_40 = FUNC_3(VAR_20, VAR_1);
 FUNC_8(VAR_40, VAR_20);




retry:
 VAR_43 = FUNC_25(VAR_36, ((void*)0), ((void*)0), VAR_49);

 for (int VAR_56 = 0; VAR_56 < VAR_14; VAR_56++) {

  FUNC_24(VAR_43, VAR_33, VAR_56, VAR_39,
      FUNC_13(VAR_29, VAR_32),
      sizeof (vdev_phys_t), ((void*)0), ((void*)0), VAR_49);






  FUNC_24(VAR_43, VAR_33, VAR_56, VAR_40,
      FUNC_13(VAR_29, VAR_30),
      VAR_20, ((void*)0), ((void*)0), VAR_49);

  FUNC_24(VAR_43, VAR_33, VAR_56, VAR_42,
      FUNC_13(VAR_29, VAR_31),
      VAR_21, ((void*)0), ((void*)0), VAR_49);
 }

 VAR_46 = FUNC_26(VAR_43);

 if (VAR_46 != 0 && !(VAR_49 & VAR_24)) {
  VAR_49 |= VAR_24;
  goto retry;
 }

 FUNC_11(VAR_37);
 FUNC_6(VAR_40);
 FUNC_6(VAR_42);
 FUNC_6(VAR_39);







 if (VAR_46 == 0 && !VAR_33->vdev_isspare &&
     (VAR_35 == VAR_18 ||
     FUNC_19(VAR_33->vdev_guid, ((void*)0), ((void*)0))))
  FUNC_18(VAR_33);

 if (VAR_46 == 0 && !VAR_33->vdev_isl2cache &&
     (VAR_35 == VAR_15 ||
     FUNC_17(VAR_33->vdev_guid, ((void*)0))))
  FUNC_16(VAR_33);

 return (VAR_46);
}
