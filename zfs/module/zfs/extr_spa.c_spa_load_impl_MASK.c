
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_2__ ;
typedef struct TYPE_33__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u_longlong_t ;
struct TYPE_33__ {scalar_t__ ub_checkpoint_txg; } ;
struct TYPE_34__ {int spa_import_flags; scalar_t__ spa_config_source; scalar_t__ spa_load_state; scalar_t__ spa_load_max_txg; int spa_root_vdev; int spa_dsl_pool; int spa_claim_max_txg; void* spa_sync_on; TYPE_1__ spa_uberblock; int spa_config_txg; } ;
typedef TYPE_2__ spa_t ;
typedef int spa_import_type_t ;
typedef int boolean_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int ,int ,int *,int ) ;
 int VAR_14 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_8 (TYPE_2__*,int ,int ) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,char*,int *,char*,int ) ;
 int FUNC_11 (TYPE_2__*,char*,int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (TYPE_2__*,int*) ;
 int FUNC_14 (TYPE_2__*,int ,int) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (TYPE_2__*) ;
 int FUNC_19 (TYPE_2__*) ;
 int FUNC_20 (TYPE_2__*) ;
 int FUNC_21 (TYPE_2__*,int ,int*) ;
 int FUNC_22 (TYPE_2__*,int ) ;
 int FUNC_23 (TYPE_2__*) ;
 int FUNC_24 (TYPE_2__*) ;
 int FUNC_25 (TYPE_2__*) ;
 int FUNC_26 (TYPE_2__*,int ,char**) ;
 int FUNC_27 (TYPE_2__*) ;
 int FUNC_28 (TYPE_2__*,char*) ;
 int FUNC_29 (TYPE_2__*) ;
 int VAR_15 ;
 int FUNC_30 (TYPE_2__*) ;
 int FUNC_31 (TYPE_2__*) ;
 int FUNC_32 (TYPE_2__*) ;
 int FUNC_33 (int ,int ,int ) ;
 scalar_t__ FUNC_34 (TYPE_2__*) ;
 int FUNC_35 (int ) ;
 int FUNC_36 (int ,int ) ;
 int FUNC_37 (TYPE_2__*) ;
 int FUNC_38 (int ) ;
 scalar_t__ FUNC_39 (int ,int *,int *) ;
 int FUNC_40 (int ) ;

__attribute__((used)) static int
FUNC_41(spa_t *VAR_16, spa_import_type_t VAR_17, char **VAR_18)
{
 int VAR_19 = 0;
 boolean_t VAR_20 = VAR_0;
 boolean_t VAR_21 =
     (VAR_16->spa_import_flags & VAR_13);
 boolean_t VAR_22 = VAR_0;

 FUNC_0(FUNC_1(&VAR_15));
 FUNC_0(VAR_16->spa_config_source != VAR_8);

 FUNC_28(VAR_16, "LOADING");

 VAR_19 = FUNC_21(VAR_16, VAR_17, &VAR_22);
 if (VAR_19 != 0)
  return (VAR_19);







 if (VAR_21) {




  VAR_22 = VAR_1;







  VAR_19 = FUNC_15(VAR_16);
  if (VAR_19 != 0)
   return (VAR_19);





  FUNC_24(VAR_16);
  FUNC_28(VAR_16, "LOADING checkpointed uberblock");
  VAR_19 = FUNC_21(VAR_16, VAR_17, ((void*)0));
  if (VAR_19 != 0)
   return (VAR_19);
 }




 VAR_19 = FUNC_25(VAR_16);
 if (VAR_19 != 0)
  return (VAR_19);
 VAR_19 = FUNC_23(VAR_16);
 if (VAR_19 != 0)
  return (VAR_19);





 VAR_19 = FUNC_13(VAR_16, &VAR_20);
 if (VAR_19 != 0)
  return (VAR_19);





 VAR_19 = FUNC_19(VAR_16);
 if (VAR_19 != 0)
  return (VAR_19);




 VAR_19 = FUNC_17(VAR_16);
 if (VAR_19 != 0)
  return (VAR_19);





 VAR_19 = FUNC_22(VAR_16, VAR_17);
 if (VAR_19 != 0)
  return (VAR_19);





 VAR_19 = FUNC_20(VAR_16);
 if (VAR_19 != 0)
  return (VAR_19);

 VAR_19 = FUNC_18(VAR_16);
 if (VAR_19 != 0)
  return (VAR_19);





 VAR_19 = FUNC_26(VAR_16, VAR_17, VAR_18);
 if (VAR_19 != 0)
  return (VAR_19);

 if (VAR_20) {
  FUNC_0(VAR_16->spa_load_state == VAR_10);






  return (FUNC_33(VAR_16->spa_root_vdev, VAR_12,
      VAR_3));
 }






 VAR_19 = FUNC_27(VAR_16);
 if (VAR_19 != 0)
  return (VAR_19);






 FUNC_32(VAR_16);






 if (FUNC_34(VAR_16) && (VAR_16->spa_load_state == VAR_9 ||
     VAR_16->spa_load_max_txg == VAR_11)) {
  uint64_t VAR_23 = VAR_16->spa_config_txg;

  FUNC_0(VAR_16->spa_load_state != VAR_10);





  if (VAR_21) {
   FUNC_10(VAR_16, "checkpoint rewind",
       ((void*)0), "rewound state to txg=%llu",
       (u_longlong_t)VAR_16->spa_uberblock.ub_checkpoint_txg);
  }




  FUNC_16(VAR_16);




  VAR_16->spa_sync_on = VAR_1;
  FUNC_35(VAR_16->spa_dsl_pool);
  FUNC_5(VAR_16);
  FUNC_36(VAR_16->spa_dsl_pool, VAR_16->spa_claim_max_txg);






  FUNC_14(VAR_16, VAR_23,
      VAR_22);




  if (!FUNC_4(VAR_16->spa_dsl_pool) &&
      FUNC_39(VAR_16->spa_root_vdev, ((void*)0), ((void*)0)))
   FUNC_6(VAR_16, VAR_7);





  FUNC_11(VAR_16, "open", ((void*)0));

  FUNC_30(VAR_16);
  FUNC_31(VAR_16);
  (void) FUNC_2(FUNC_29(VAR_16),
      VAR_14, ((void*)0), VAR_2);




  FUNC_3(VAR_16->spa_dsl_pool);

  FUNC_7(VAR_16, VAR_6, VAR_4, VAR_5);
  FUNC_38(VAR_16->spa_root_vdev);
  FUNC_40(VAR_16->spa_root_vdev);
  FUNC_37(VAR_16);
  FUNC_8(VAR_16, VAR_6, VAR_4);
 }

 FUNC_12(FUNC_9(VAR_16));
 FUNC_28(VAR_16, "LOADED");

 return (0);
}
