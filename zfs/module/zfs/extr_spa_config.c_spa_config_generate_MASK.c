
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_21__ {unsigned long long vdev_guid; struct TYPE_21__* vdev_top; scalar_t__ vdev_islog; scalar_t__ vdev_isspare; } ;
typedef TYPE_1__ vdev_t ;
typedef unsigned long long uint64_t ;
struct TYPE_22__ {unsigned long long spa_config_txg; int spa_import_flags; unsigned long long spa_errata; char* spa_comment; int * spa_label_features; int * spa_config_splitting; int spa_config; TYPE_1__* spa_root_vdev; } ;
typedef TYPE_2__ spa_t ;
typedef int nvlist_t ;
typedef int ddt_stat_t ;
typedef int ddt_object_t ;
typedef int ddt_histogram_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_23__ {char* nodename; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ,int *) ;
 int FUNC_7 (int *,int ,char*) ;
 int FUNC_8 (int *,int ,unsigned long long) ;
 int FUNC_9 (int *,int ,unsigned long long*,int) ;
 int * FUNC_10 () ;
 int FUNC_11 (int *,int) ;
 int * FUNC_12 (int,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,int ,char**) ;
 scalar_t__ FUNC_15 (int *,int ,unsigned long long*) ;
 int FUNC_16 (TYPE_2__*,int,int ,int ) ;
 int FUNC_17 (TYPE_2__*,int,int ) ;
 int FUNC_18 (TYPE_2__*,int,int ) ;
 unsigned long FUNC_19 (TYPE_2__*) ;
 unsigned long long FUNC_20 (TYPE_2__*) ;
 scalar_t__ FUNC_21 (TYPE_2__*) ;
 char* FUNC_22 (TYPE_2__*) ;
 unsigned long long FUNC_23 (TYPE_2__*) ;
 unsigned long long FUNC_24 (TYPE_2__*) ;
 TYPE_6__* FUNC_25 () ;
 int * FUNC_26 (TYPE_2__*,TYPE_1__*,int,int) ;
 int FUNC_27 (TYPE_2__*,int *) ;

nvlist_t *
FUNC_28(spa_t *VAR_31, vdev_t *VAR_32, uint64_t VAR_33, int VAR_34)
{
 nvlist_t *VAR_35, *VAR_36;
 vdev_t *VAR_37 = VAR_31->spa_root_vdev;
 unsigned long VAR_38 = 0;
 boolean_t VAR_39 = VAR_0;
 uint64_t VAR_40;
 char *VAR_41;

 if (VAR_32 == ((void*)0)) {
  VAR_32 = VAR_37;
  VAR_39 = VAR_1;
  FUNC_16(VAR_31, VAR_5 | VAR_6, VAR_2, VAR_4);
 }

 FUNC_0(FUNC_18(VAR_31, VAR_5 | VAR_6, VAR_4) ==
     (VAR_5 | VAR_6));




 if (VAR_33 == -1ULL)
  VAR_33 = VAR_31->spa_config_txg;
 if (VAR_31->spa_import_flags & VAR_9) {
  FUNC_1(FUNC_14(VAR_31->spa_config,
      VAR_23, &VAR_41));
 } else
  VAR_41 = FUNC_22(VAR_31);

 VAR_35 = FUNC_10();

 FUNC_8(VAR_35, VAR_30, FUNC_24(VAR_31));
 FUNC_7(VAR_35, VAR_23, VAR_41);
 FUNC_8(VAR_35, VAR_24, FUNC_23(VAR_31));
 FUNC_8(VAR_35, VAR_25, VAR_33);
 FUNC_8(VAR_35, VAR_22, FUNC_20(VAR_31));
 FUNC_8(VAR_35, VAR_14, VAR_31->spa_errata);
 if (VAR_31->spa_comment != ((void*)0))
  FUNC_7(VAR_35, VAR_10,
      VAR_31->spa_comment);

 VAR_38 = FUNC_19(VAR_31);
 if (VAR_38 != 0)
  FUNC_8(VAR_35, VAR_18, VAR_38);
 FUNC_7(VAR_35, VAR_19, FUNC_25()->nodename);

 int VAR_42 = 0;
 if (VAR_32 != VAR_37) {
  FUNC_8(VAR_35, VAR_28,
      VAR_32->vdev_top->vdev_guid);
  FUNC_8(VAR_35, VAR_16,
      VAR_32->vdev_guid);
  if (VAR_32->vdev_isspare)
   FUNC_8(VAR_35,
       VAR_21, 1ULL);
  if (VAR_32->vdev_islog)
   FUNC_8(VAR_35,
       VAR_20, 1ULL);
  VAR_32 = VAR_32->vdev_top;
 } else {




  if (VAR_31->spa_config_splitting != ((void*)0))
   FUNC_6(VAR_35, VAR_26,
       VAR_31->spa_config_splitting);

  FUNC_5(VAR_35, VAR_17);

  VAR_42 |= VAR_8;
 }





 FUNC_27(VAR_31, VAR_35);




 if (VAR_31->spa_config_splitting != ((void*)0) &&
     FUNC_15(VAR_31->spa_config_splitting,
     VAR_27, &VAR_40) == 0) {
  FUNC_8(VAR_35, VAR_27, VAR_40);
 }

 VAR_36 = FUNC_26(VAR_31, VAR_32, VAR_34, VAR_42);
 FUNC_6(VAR_35, VAR_29, VAR_36);
 FUNC_13(VAR_36);




 FUNC_6(VAR_35, VAR_15,
     VAR_31->spa_label_features);

 if (VAR_34 && FUNC_21(VAR_31) == VAR_7) {
  ddt_histogram_t *VAR_43;
  ddt_stat_t *VAR_44;
  ddt_object_t *VAR_45;

  VAR_43 = FUNC_12(sizeof (ddt_histogram_t), VAR_3);
  FUNC_2(VAR_31, VAR_43);
  FUNC_9(VAR_35,
      VAR_11,
      (uint64_t *)VAR_43, sizeof (*VAR_43) / sizeof (uint64_t));
  FUNC_11(VAR_43, sizeof (ddt_histogram_t));

  VAR_45 = FUNC_12(sizeof (ddt_object_t), VAR_3);
  FUNC_3(VAR_31, VAR_45);
  FUNC_9(VAR_35,
      VAR_12,
      (uint64_t *)VAR_45, sizeof (*VAR_45) / sizeof (uint64_t));
  FUNC_11(VAR_45, sizeof (ddt_object_t));

  VAR_44 = FUNC_12(sizeof (ddt_stat_t), VAR_3);
  FUNC_4(VAR_31, VAR_44);
  FUNC_9(VAR_35,
      VAR_13,
      (uint64_t *)VAR_44, sizeof (*VAR_44) / sizeof (uint64_t));
  FUNC_11(VAR_44, sizeof (ddt_stat_t));
 }

 if (VAR_39)
  FUNC_17(VAR_31, VAR_5 | VAR_6, VAR_2);

 return (VAR_35);
}
