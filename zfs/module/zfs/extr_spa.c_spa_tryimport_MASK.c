
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_18__ {scalar_t__ zlp_txg; } ;
typedef TYPE_2__ zpool_load_policy_t ;
typedef int uint64_t ;
struct TYPE_17__ {int ub_timestamp; } ;
struct TYPE_19__ {scalar_t__ spa_load_max_txg; scalar_t__ spa_bootfs; int spa_errata; int spa_load_info; TYPE_1__ spa_uberblock; int * spa_root_vdev; int spa_config_source; int spa_extreme_rewind; int spa_config; } ;
typedef TYPE_3__ spa_t ;
typedef int nvlist_t ;
typedef int longlong_t ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ FUNC_1 (int ,scalar_t__,char*) ;
 char* FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int ,int ) ;
 scalar_t__ FUNC_7 (int *,int ,char*) ;
 scalar_t__ FUNC_8 (int *,int ,int ) ;
 scalar_t__ FUNC_9 (int *,int ,char**) ;
 scalar_t__ FUNC_10 (int *,int ,int *) ;
 int FUNC_11 (char*,int ,char*,char*,char*) ;
 int FUNC_12 (TYPE_3__*,int ) ;
 TYPE_3__* FUNC_13 (int ,int *,int *) ;
 int FUNC_14 (TYPE_3__*,int *) ;
 int FUNC_15 (TYPE_3__*,int *) ;
 int FUNC_16 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_17 (TYPE_3__*,int ,int ) ;
 int * FUNC_18 (TYPE_3__*,int *,unsigned long long,int ) ;
 int FUNC_19 (TYPE_3__*) ;
 int FUNC_20 (TYPE_3__*,int ,int ) ;
 int FUNC_21 (TYPE_3__*) ;
 int VAR_21 ;
 int FUNC_22 (TYPE_3__*) ;
 int FUNC_23 (TYPE_3__*) ;
 char* FUNC_24 (char*,char) ;
 int FUNC_25 (char*,char*,int ) ;
 int FUNC_26 (char*,char*,...) ;
 int FUNC_27 (int ,TYPE_2__*) ;

nvlist_t *
FUNC_28(nvlist_t *VAR_22)
{
 nvlist_t *VAR_23 = ((void*)0);
 char *VAR_24, *VAR_25;
 spa_t *VAR_26;
 uint64_t VAR_27;
 int VAR_28;
 zpool_load_policy_t VAR_29;

 if (FUNC_9(VAR_22, VAR_18, &VAR_24))
  return (((void*)0));

 if (FUNC_10(VAR_22, VAR_19, &VAR_27))
  return (((void*)0));




 FUNC_4(&VAR_21);
 VAR_26 = FUNC_13(VAR_12, VAR_22, ((void*)0));
 FUNC_12(VAR_26, VAR_2);




 FUNC_27(VAR_26->spa_config, &VAR_29);
 if (VAR_29.zlp_txg != VAR_13) {
  VAR_26->spa_load_max_txg = VAR_29.zlp_txg;
  VAR_26->spa_extreme_rewind = VAR_0;
  FUNC_26("spa_tryimport: importing %s, max_txg=%lld",
      VAR_24, (longlong_t)VAR_29.zlp_txg);
 } else {
  FUNC_26("spa_tryimport: importing %s", VAR_24);
 }

 if (FUNC_9(VAR_22, VAR_15, &VAR_25)
     == 0) {
  FUNC_26("spa_tryimport: using cachefile '%s'", VAR_25);
  VAR_26->spa_config_source = VAR_8;
 } else {
  VAR_26->spa_config_source = VAR_9;
 }

 VAR_28 = FUNC_20(VAR_26, VAR_11, VAR_10);




 if (VAR_26->spa_root_vdev != ((void*)0)) {
  VAR_23 = FUNC_18(VAR_26, ((void*)0), -1ULL, VAR_0);
  FUNC_0(FUNC_7(VAR_23, VAR_18,
      VAR_24) == 0);
  FUNC_0(FUNC_8(VAR_23, VAR_19,
      VAR_27) == 0);
  FUNC_0(FUNC_8(VAR_23, VAR_20,
      VAR_26->spa_uberblock.ub_timestamp) == 0);
  FUNC_0(FUNC_6(VAR_23, VAR_17,
      VAR_26->spa_load_info) == 0);
  FUNC_0(FUNC_8(VAR_23, VAR_16,
      VAR_26->spa_errata) == 0);






  if ((!VAR_28 || VAR_28 == VAR_1) && VAR_26->spa_bootfs) {
   char *VAR_30 = FUNC_2(VAR_5, VAR_4);





   if (FUNC_1(FUNC_21(VAR_26),
       VAR_26->spa_bootfs, VAR_30) == 0) {
    char *VAR_31;
    char *VAR_32;

    VAR_32 = FUNC_2(VAR_5, VAR_4);

    VAR_31 = FUNC_24(VAR_30, '/');
    if (VAR_31 == ((void*)0)) {
     (void) FUNC_25(VAR_32, VAR_30,
         VAR_5);
    } else {
     (void) FUNC_11(VAR_32, VAR_5,
         "%s/%s", VAR_24, ++VAR_31);
    }
    FUNC_0(FUNC_7(VAR_23,
        VAR_14, VAR_32) == 0);
    FUNC_3(VAR_32, VAR_5);
   }
   FUNC_3(VAR_30, VAR_5);
  }




  FUNC_16(VAR_26, VAR_7, VAR_3, VAR_6);
  FUNC_15(VAR_26, VAR_23);
  FUNC_14(VAR_26, VAR_23);
  FUNC_17(VAR_26, VAR_7, VAR_3);
 }

 FUNC_23(VAR_26);
 FUNC_19(VAR_26);
 FUNC_22(VAR_26);
 FUNC_5(&VAR_21);

 return (VAR_23);
}
