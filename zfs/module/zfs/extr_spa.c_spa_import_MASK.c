
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_20__ ;
typedef struct TYPE_26__ TYPE_1__ ;


struct TYPE_26__ {int zlp_rewind; scalar_t__ zlp_txg; } ;
typedef TYPE_1__ zpool_load_policy_t ;
typedef int uint_t ;
typedef int uint64_t ;
struct TYPE_27__ {void* sav_sync; int * sav_config; } ;
struct TYPE_28__ {int spa_import_flags; TYPE_20__ spa_l2cache; TYPE_20__ spa_spares; scalar_t__ spa_autoreplace; int spa_load_info; scalar_t__ spa_load_txg; scalar_t__ spa_last_ubsync_txg; int spa_config_source; } ;
typedef TYPE_2__ spa_t ;
typedef scalar_t__ spa_load_state_t ;
typedef int nvlist_t ;
typedef int longlong_t ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_1 (int) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ,int ) ;
 scalar_t__ FUNC_5 (int *,int ,int **,int ) ;
 scalar_t__ FUNC_6 (int **,int ,int ) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int ,int **) ;
 scalar_t__ FUNC_9 (int *,int ,int ***,int *) ;
 int FUNC_10 (int *,int ,char**) ;
 int FUNC_11 (int *,int ,int*) ;
 scalar_t__ FUNC_12 (int *,int ,int ) ;
 int FUNC_13 (TYPE_2__*,int) ;
 TYPE_2__* FUNC_14 (char*,int *,char*) ;
 int FUNC_15 (TYPE_2__*,int ) ;
 int FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (TYPE_20__*) ;
 int FUNC_19 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_20 (TYPE_2__*,int ,int ) ;
 int FUNC_21 (TYPE_2__*,int ) ;
 int FUNC_22 (TYPE_2__*,int *,int) ;
 int FUNC_23 (TYPE_2__*) ;
 int FUNC_24 (TYPE_2__*,int *,int *,int ) ;
 int FUNC_25 (TYPE_2__*,char*,int *) ;
 int FUNC_26 (TYPE_2__*,scalar_t__,scalar_t__,int) ;
 int FUNC_27 (TYPE_2__*) ;
 int FUNC_28 (TYPE_2__*) ;
 int * FUNC_29 (char*) ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_30 (TYPE_2__*,int *) ;
 int FUNC_31 (TYPE_2__*) ;
 int FUNC_32 (TYPE_2__*) ;
 int FUNC_33 (TYPE_2__*,int,void*) ;
 scalar_t__ FUNC_34 (TYPE_2__*) ;
 int FUNC_35 (char*,char*,...) ;
 int FUNC_36 (int *,TYPE_1__*) ;
 int FUNC_37 (int ) ;
 int FUNC_38 (TYPE_2__*,char*,void*) ;

int
FUNC_39(char *VAR_26, nvlist_t *VAR_27, nvlist_t *VAR_28, uint64_t VAR_29)
{
 spa_t *VAR_30;
 char *VAR_31 = ((void*)0);
 spa_load_state_t VAR_32 = VAR_14;
 zpool_load_policy_t VAR_33;
 uint64_t VAR_34 = VAR_24;
 uint64_t VAR_35 = VAR_0;
 int VAR_36;
 nvlist_t *VAR_37;
 nvlist_t **VAR_38, **VAR_39;
 uint_t VAR_40, VAR_41;




 FUNC_2(&VAR_25);
 if (FUNC_29(VAR_26) != ((void*)0)) {
  FUNC_3(&VAR_25);
  return (FUNC_0(VAR_3));
 }




 (void) FUNC_10(VAR_28,
     FUNC_37(VAR_22), &VAR_31);
 (void) FUNC_11(VAR_28,
     FUNC_37(VAR_23), &VAR_35);
 if (VAR_35)
  VAR_34 = VAR_5;
 VAR_30 = FUNC_14(VAR_26, VAR_27, VAR_31);
 VAR_30->spa_import_flags = VAR_29;





 if (VAR_30->spa_import_flags & VAR_16) {
  if (VAR_28 != ((void*)0))
   FUNC_22(VAR_30, VAR_28, VAR_0);

  FUNC_33(VAR_30, VAR_0, VAR_1);
  FUNC_24(VAR_30, ((void*)0), ((void*)0), VAR_4);
  FUNC_35("spa_import: verbatim import of %s", VAR_26);
  FUNC_3(&VAR_25);
  return (0);
 }

 FUNC_13(VAR_30, VAR_34);




 FUNC_17(VAR_30);

 FUNC_36(VAR_27, &VAR_33);
 if (VAR_33.zlp_rewind & VAR_21)
  VAR_32 = VAR_15;

 VAR_30->spa_config_source = VAR_12;

 if (VAR_32 != VAR_15) {
  VAR_30->spa_last_ubsync_txg = VAR_30->spa_load_txg = 0;
  FUNC_35("spa_import: importing %s", VAR_26);
 } else {
  FUNC_35("spa_import: importing %s, max_txg=%lld "
      "(RECOVERY MODE)", VAR_26, (longlong_t)VAR_33.zlp_txg);
 }
 VAR_36 = FUNC_26(VAR_30, VAR_32, VAR_33.zlp_txg, VAR_33.zlp_rewind);





 FUNC_1(FUNC_4(VAR_27, VAR_18,
     VAR_30->spa_load_info) == 0);

 FUNC_19(VAR_30, VAR_10, VAR_6, VAR_9);




 if (VAR_30->spa_spares.sav_config) {
  FUNC_7(VAR_30->spa_spares.sav_config);
  VAR_30->spa_spares.sav_config = ((void*)0);
  FUNC_28(VAR_30);
 }
 if (VAR_30->spa_l2cache.sav_config) {
  FUNC_7(VAR_30->spa_l2cache.sav_config);
  VAR_30->spa_l2cache.sav_config = ((void*)0);
  FUNC_27(VAR_30);
 }

 FUNC_1(FUNC_8(VAR_27, VAR_20,
     &VAR_37) == 0);
 FUNC_20(VAR_30, VAR_10, VAR_6);

 if (VAR_28 != ((void*)0))
  FUNC_22(VAR_30, VAR_28, VAR_0);

 if (VAR_36 != 0 || (VAR_28 && FUNC_34(VAR_30) &&
     (VAR_36 = FUNC_30(VAR_30, VAR_28)))) {
  FUNC_32(VAR_30);
  FUNC_23(VAR_30);
  FUNC_31(VAR_30);
  FUNC_3(&VAR_25);
  return (VAR_36);
 }

 FUNC_16(VAR_30);





 if (FUNC_9(VAR_37, VAR_19,
     &VAR_38, &VAR_40) == 0) {
  if (VAR_30->spa_spares.sav_config)
   FUNC_1(FUNC_12(VAR_30->spa_spares.sav_config,
       VAR_19, VAR_2) == 0);
  else
   FUNC_1(FUNC_6(&VAR_30->spa_spares.sav_config,
       VAR_8, VAR_7) == 0);
  FUNC_1(FUNC_5(VAR_30->spa_spares.sav_config,
      VAR_19, VAR_38, VAR_40) == 0);
  FUNC_19(VAR_30, VAR_10, VAR_6, VAR_9);
  FUNC_28(VAR_30);
  FUNC_20(VAR_30, VAR_10, VAR_6);
  VAR_30->spa_spares.sav_sync = VAR_1;
 }
 if (FUNC_9(VAR_37, VAR_17,
     &VAR_39, &VAR_41) == 0) {
  if (VAR_30->spa_l2cache.sav_config)
   FUNC_1(FUNC_12(VAR_30->spa_l2cache.sav_config,
       VAR_17, VAR_2) == 0);
  else
   FUNC_1(FUNC_6(&VAR_30->spa_l2cache.sav_config,
       VAR_8, VAR_7) == 0);
  FUNC_1(FUNC_5(VAR_30->spa_l2cache.sav_config,
      VAR_17, VAR_39, VAR_41) == 0);
  FUNC_19(VAR_30, VAR_10, VAR_6, VAR_9);
  FUNC_27(VAR_30);
  FUNC_20(VAR_30, VAR_10, VAR_6);
  VAR_30->spa_l2cache.sav_sync = VAR_1;
 }




 if (VAR_30->spa_autoreplace) {
  FUNC_18(&VAR_30->spa_spares);
  FUNC_18(&VAR_30->spa_l2cache);
 }

 if (FUNC_34(VAR_30)) {



  FUNC_21(VAR_30, VAR_13);
 }





 FUNC_15(VAR_30, VAR_11);

 FUNC_25(VAR_30, "import", ((void*)0));

 FUNC_24(VAR_30, ((void*)0), ((void*)0), VAR_4);

 FUNC_3(&VAR_25);

 FUNC_38(VAR_30, VAR_26, VAR_1);

 return (0);
}
