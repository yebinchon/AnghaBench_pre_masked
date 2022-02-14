
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_43__ TYPE_8__ ;
typedef struct TYPE_42__ TYPE_7__ ;
typedef struct TYPE_41__ TYPE_6__ ;
typedef struct TYPE_40__ TYPE_5__ ;
typedef struct TYPE_39__ TYPE_3__ ;
typedef struct TYPE_38__ TYPE_2__ ;
typedef struct TYPE_37__ TYPE_24__ ;
typedef struct TYPE_36__ TYPE_1__ ;
typedef struct TYPE_35__ TYPE_14__ ;


struct TYPE_39__ {scalar_t__ za_first_integer; } ;
typedef TYPE_3__ zap_cursor_t ;
typedef TYPE_3__ zap_attribute_t ;
typedef scalar_t__ uint64_t ;
typedef int dsl_wrapping_key_t ;
struct TYPE_40__ {int dp_meta_objset; TYPE_14__* dp_spa; } ;
typedef TYPE_5__ dsl_pool_t ;
struct TYPE_41__ {char* dd_myname; int dd_crypto_obj; } ;
typedef TYPE_6__ dsl_dir_t ;
struct TYPE_42__ {TYPE_2__* ds_dir; } ;
typedef TYPE_7__ dsl_dataset_t ;
struct TYPE_43__ {int * dck_wkey; } ;
typedef TYPE_8__ dsl_crypto_key_t ;
typedef int dmu_tx_t ;
typedef int boolean_t ;
struct TYPE_38__ {scalar_t__ dd_object; } ;
struct TYPE_37__ {int dd_clones; int dd_child_dir_zapobj; } ;
struct TYPE_36__ {int sk_wkeys_lock; } ;
struct TYPE_35__ {TYPE_1__ spa_keystore; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 TYPE_5__* FUNC_4 (int *) ;
 int FUNC_5 (TYPE_8__*,int *) ;
 int FUNC_6 (TYPE_5__*,scalar_t__,int ,TYPE_7__**) ;
 int FUNC_7 (TYPE_7__*,int ) ;
 int FUNC_8 (TYPE_6__*,scalar_t__*) ;
 int FUNC_9 (TYPE_5__*,scalar_t__,int *,int ,TYPE_6__**) ;
 scalar_t__ FUNC_10 (TYPE_6__*) ;
 TYPE_24__* FUNC_11 (TYPE_6__*) ;
 int FUNC_12 (TYPE_6__*,int ) ;
 int FUNC_13 (int *,TYPE_8__*) ;
 int FUNC_14 (int *,TYPE_8__*) ;
 TYPE_3__* FUNC_15 (int,int ) ;
 int FUNC_16 (TYPE_3__*,int) ;
 int FUNC_17 (TYPE_14__*,TYPE_6__*,int ,TYPE_8__**) ;
 int FUNC_18 (TYPE_14__*,TYPE_8__*,int ) ;
 int FUNC_19 (TYPE_3__*) ;
 int FUNC_20 (TYPE_3__*) ;
 int FUNC_21 (TYPE_3__*,int ,int ) ;
 scalar_t__ FUNC_22 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_23 (int ,int ,int ,int,int,scalar_t__*,int *) ;

__attribute__((used)) static void
FUNC_24(uint64_t VAR_6, uint64_t VAR_7,
    uint64_t VAR_8, dsl_wrapping_key_t *VAR_9, boolean_t VAR_10,
    dmu_tx_t *VAR_11)
{
 int VAR_12;
 zap_cursor_t *VAR_13;
 zap_attribute_t *VAR_14;
 dsl_pool_t *VAR_15 = FUNC_4(VAR_11);
 dsl_dir_t *VAR_16 = ((void*)0);
 dsl_crypto_key_t *VAR_17 = ((void*)0);
 uint64_t VAR_18;

 FUNC_0(FUNC_1(&VAR_15->dp_spa->spa_keystore.sk_wkeys_lock));


 FUNC_3(FUNC_9(VAR_15, VAR_7, ((void*)0), VAR_4, &VAR_16));


 if (VAR_16->dd_myname[0] == '$' || VAR_16->dd_myname[0] == '%') {
  FUNC_12(VAR_16, VAR_4);
  return;
 }

 VAR_12 = FUNC_8(VAR_16, &VAR_18);
 FUNC_2(VAR_12 == 0 || VAR_12 == VAR_3);





 if (VAR_12 == VAR_3 ||
     (!VAR_10 && (VAR_18 != VAR_6 || FUNC_10(VAR_16)))) {
  FUNC_12(VAR_16, VAR_4);
  return;
 }






 if (!VAR_10) {
  if (VAR_9 == ((void*)0)) {
   FUNC_3(FUNC_23(VAR_15->dp_meta_objset,
       VAR_16->dd_crypto_obj,
       VAR_2, 8, 1,
       &VAR_8, VAR_11));
  } else {
   FUNC_3(FUNC_17(VAR_15->dp_spa, VAR_16,
       VAR_4, &VAR_17));
   FUNC_13(VAR_9, VAR_17);
   FUNC_14(VAR_17->dck_wkey, VAR_17);
   VAR_17->dck_wkey = VAR_9;
   FUNC_5(VAR_17, VAR_11);
   FUNC_18(VAR_15->dp_spa, VAR_17, VAR_4);
  }
 }

 VAR_13 = FUNC_15(sizeof (zap_cursor_t), VAR_5);
 VAR_14 = FUNC_15(sizeof (zap_attribute_t), VAR_5);


 for (FUNC_21(VAR_13, VAR_15->dp_meta_objset,
     FUNC_11(VAR_16)->dd_child_dir_zapobj);
     FUNC_22(VAR_13, VAR_14) == 0;
     FUNC_19(VAR_13)) {
  FUNC_24(VAR_6,
      VAR_14->za_first_integer, VAR_8, VAR_9, VAR_0, VAR_11);
 }
 FUNC_20(VAR_13);







 for (FUNC_21(VAR_13, VAR_15->dp_meta_objset,
     FUNC_11(VAR_16)->dd_clones);
     FUNC_22(VAR_13, VAR_14) == 0;
     FUNC_19(VAR_13)) {
  dsl_dataset_t *VAR_19;

  FUNC_3(FUNC_6(VAR_15, VAR_14->za_first_integer,
      VAR_4, &VAR_19));
  FUNC_24(VAR_6,
      VAR_19->ds_dir->dd_object, VAR_8, VAR_9, VAR_1, VAR_11);
  FUNC_7(VAR_19, VAR_4);
 }
 FUNC_20(VAR_13);

 FUNC_16(VAR_14, sizeof (zap_attribute_t));
 FUNC_16(VAR_13, sizeof (zap_cursor_t));

 FUNC_12(VAR_16, VAR_4);
}
