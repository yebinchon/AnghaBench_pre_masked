
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int vdev_t ;
struct TYPE_21__ {scalar_t__ ub_checkpoint_txg; scalar_t__ ub_txg; scalar_t__ ub_mmp_magic; scalar_t__ ub_version; scalar_t__ ub_mmp_delay; } ;
typedef TYPE_1__ uberblock_t ;
typedef int u_longlong_t ;
struct TYPE_22__ {scalar_t__ spa_load_max_txg; int * spa_config_splitting; int spa_config; int spa_load_info; int * spa_label_features; TYPE_1__ spa_uberblock; int * spa_root_vdev; } ;
typedef TYPE_2__ spa_t ;
typedef scalar_t__ spa_import_type_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_3 (int) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_6 (int ,int ,int *) ;
 scalar_t__ FUNC_7 (int *,int ,char*) ;
 scalar_t__ FUNC_8 (int **,int ,int ) ;
 scalar_t__ FUNC_9 (int *,int **,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *,int ,int **) ;
 int * FUNC_13 (int *,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (TYPE_2__*,TYPE_1__*,int ) ;
 scalar_t__ FUNC_16 (TYPE_2__*,TYPE_1__*,int *,int ) ;
 int FUNC_17 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_18 (TYPE_2__*,int ,int ) ;
 scalar_t__ FUNC_19 (TYPE_2__*) ;
 int FUNC_20 (TYPE_2__*) ;
 int FUNC_21 (int ,int ) ;
 scalar_t__ FUNC_22 (TYPE_2__*) ;
 int FUNC_23 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_24 (TYPE_2__*,char*,...) ;
 int FUNC_25 (TYPE_2__*,char*,int ) ;
 int FUNC_26 (TYPE_2__*,int ) ;
 int FUNC_27 (int *,int ,int ) ;
 int FUNC_28 (int *,TYPE_1__*,int **) ;
 int FUNC_29 (int ) ;

__attribute__((used)) static int
FUNC_30(spa_t *VAR_24, spa_import_type_t VAR_25)
{
 vdev_t *VAR_26 = VAR_24->spa_root_vdev;
 nvlist_t *VAR_27;
 uberblock_t *VAR_28 = &VAR_24->spa_uberblock;
 boolean_t VAR_29 = VAR_0;
 if (VAR_28->ub_checkpoint_txg != 0 &&
     FUNC_22(VAR_24)) {
  FUNC_23(VAR_24, VAR_28);
  return (0);
 }




 FUNC_28(VAR_26, VAR_28, &VAR_27);




 if (VAR_28->ub_txg == 0) {
  FUNC_11(VAR_27);
  FUNC_24(VAR_24, "no valid uberblock found");
  return (FUNC_27(VAR_26, VAR_16, VAR_2));
 }

 if (VAR_24->spa_load_max_txg != VAR_14) {
  (void) FUNC_21(FUNC_20(VAR_24),
      (u_longlong_t)VAR_24->spa_load_max_txg);
 }
 FUNC_25(VAR_24, "using uberblock with txg=%llu",
     (u_longlong_t)VAR_28->ub_txg);







 VAR_29 = FUNC_16(VAR_24, VAR_28, VAR_27,
     VAR_24->spa_config);
 if (VAR_29) {
  if (VAR_28->ub_mmp_magic == VAR_6 && VAR_28->ub_mmp_delay &&
      FUNC_19(VAR_24) == 0) {
   FUNC_11(VAR_27);
   FUNC_5(VAR_24->spa_load_info,
       VAR_21, VAR_8);
   return (FUNC_27(VAR_26, VAR_15, VAR_3));
  }

  int VAR_30 = FUNC_15(VAR_24, VAR_28, VAR_24->spa_config);
  if (VAR_30) {
   FUNC_11(VAR_27);
   return (VAR_30);
  }

  FUNC_5(VAR_24->spa_load_info,
      VAR_21, VAR_7);
  FUNC_5(VAR_24->spa_load_info,
      VAR_22, VAR_28->ub_txg);
  FUNC_4(VAR_24->spa_load_info,
      VAR_20,
      (FUNC_1(VAR_28) ? FUNC_0(VAR_28) : 0));
 }




 if (!FUNC_2(VAR_28->ub_version)) {
  FUNC_11(VAR_27);
  FUNC_24(VAR_24, "version %llu is not supported",
      (u_longlong_t)VAR_28->ub_version);
  return (FUNC_27(VAR_26, VAR_18, VAR_1));
 }

 if (VAR_28->ub_version >= VAR_13) {
  nvlist_t *VAR_31;





  if (VAR_27 == ((void*)0)) {
   FUNC_24(VAR_24, "label config unavailable");
   return (FUNC_27(VAR_26, VAR_16,
       VAR_2));
  }

  if (FUNC_12(VAR_27, VAR_19,
      &VAR_31) != 0) {
   FUNC_11(VAR_27);
   FUNC_24(VAR_24, "invalid label: '%s' missing",
       VAR_19);
   return (FUNC_27(VAR_26, VAR_16,
       VAR_2));
  }





  FUNC_11(VAR_24->spa_label_features);
  FUNC_3(FUNC_9(VAR_31, &VAR_24->spa_label_features, 0) == 0);
 }

 FUNC_11(VAR_27);






 if (VAR_28->ub_version >= VAR_13) {
  nvlist_t *VAR_32;

  FUNC_3(FUNC_8(&VAR_32, VAR_9, VAR_5) ==
      0);

  for (nvpair_t *VAR_33 = FUNC_13(VAR_24->spa_label_features,
      ((void*)0)); VAR_33 != ((void*)0);
      VAR_33 = FUNC_13(VAR_24->spa_label_features, VAR_33)) {
   if (!FUNC_29(FUNC_14(VAR_33))) {
    FUNC_3(FUNC_7(VAR_32,
        FUNC_14(VAR_33), "") == 0);
   }
  }

  if (!FUNC_10(VAR_32)) {
   FUNC_3(FUNC_6(VAR_24->spa_load_info,
       VAR_23, VAR_32) == 0);
   FUNC_11(VAR_32);
   FUNC_24(VAR_24, "some features are unsupported");
   return (FUNC_27(VAR_26, VAR_17,
       VAR_1));
  }

  FUNC_11(VAR_32);
 }

 if (VAR_25 != VAR_12 && VAR_24->spa_config_splitting) {
  FUNC_17(VAR_24, VAR_11, VAR_4, VAR_10);
  FUNC_26(VAR_24, VAR_24->spa_config);
  FUNC_18(VAR_24, VAR_11, VAR_4);
  FUNC_11(VAR_24->spa_config_splitting);
  VAR_24->spa_config_splitting = ((void*)0);
 }




 FUNC_23(VAR_24, VAR_28);

 return (0);
}
