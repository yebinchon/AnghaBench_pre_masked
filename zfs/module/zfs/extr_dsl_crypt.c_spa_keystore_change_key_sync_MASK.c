
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_9__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_24__ {int sk_wkeys_lock; int sk_wkeys; } ;
struct TYPE_25__ {TYPE_1__ spa_keystore; } ;
typedef TYPE_2__ spa_t ;
struct TYPE_26__ {int skcka_dsname; TYPE_7__* skcka_cp; } ;
typedef TYPE_3__ spa_keystore_change_key_args_t ;
struct TYPE_27__ {int wk_refcnt; int wk_ddobj; } ;
typedef TYPE_4__ dsl_wrapping_key_t ;
struct TYPE_28__ {TYPE_2__* dp_spa; } ;
typedef TYPE_5__ dsl_pool_t ;
struct TYPE_29__ {TYPE_9__* ds_dir; int ds_is_snapshot; } ;
typedef TYPE_6__ dsl_dataset_t ;
struct TYPE_30__ {char* cp_keylocation; scalar_t__ cp_cmd; TYPE_4__* cp_wkey; } ;
typedef TYPE_7__ dsl_crypto_params_t ;
typedef int dmu_tx_t ;
typedef int avl_index_t ;
struct TYPE_31__ {int dd_object; struct TYPE_31__* dd_parent; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_4__* FUNC_3 (int *,TYPE_4__*,int *) ;
 int FUNC_4 (int *,TYPE_4__*,int ) ;
 int FUNC_5 (int *,TYPE_4__*) ;
 TYPE_5__* FUNC_6 (int *) ;
 int FUNC_7 (TYPE_5__*,int ,int ,TYPE_6__**) ;
 int FUNC_8 (TYPE_6__*,int ) ;
 int FUNC_9 (TYPE_9__*,int *) ;
 int FUNC_10 (TYPE_6__*,int ,int ,int,scalar_t__,char*,int *) ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (TYPE_4__*,int ) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,int ,int ,TYPE_4__*,int ,int *) ;
 int FUNC_16 (TYPE_2__*,TYPE_9__*,int ,TYPE_4__**) ;
 scalar_t__ FUNC_17 (char*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int *) ;

__attribute__((used)) static void
FUNC_20(void *VAR_10, dmu_tx_t *VAR_11)
{
 dsl_dataset_t *VAR_12;
 avl_index_t VAR_13;
 dsl_pool_t *VAR_14 = FUNC_6(VAR_11);
 spa_t *VAR_15 = VAR_14->dp_spa;
 spa_keystore_change_key_args_t *VAR_16 = VAR_10;
 dsl_crypto_params_t *VAR_17 = VAR_16->skcka_cp;
 dsl_wrapping_key_t *VAR_18 = ((void*)0), *VAR_19;
 dsl_wrapping_key_t VAR_20;
 char *VAR_21 = VAR_17->cp_keylocation;
 uint64_t VAR_22, VAR_23;


 FUNC_2(FUNC_7(VAR_14, VAR_16->skcka_dsname, VAR_5, &VAR_12));
 FUNC_0(!VAR_12->ds_is_snapshot);

 if (VAR_17->cp_cmd == VAR_4 ||
     VAR_17->cp_cmd == VAR_2) {






  if (VAR_17->cp_cmd == VAR_4) {
   VAR_18 = VAR_17->cp_wkey;
   VAR_18->wk_ddobj = VAR_12->ds_dir->dd_object;
  } else {
   VAR_21 = "prompt";
  }

  if (VAR_21 != ((void*)0)) {
   FUNC_10(VAR_12,
       FUNC_18(VAR_7),
       VAR_8, 1, FUNC_17(VAR_21) + 1,
       VAR_21, VAR_11);
  }

  FUNC_2(FUNC_9(VAR_12->ds_dir, &VAR_22));
  VAR_23 = VAR_12->ds_dir->dd_object;
 } else {




  if (VAR_17->cp_cmd == VAR_3) {
   FUNC_2(FUNC_16(VAR_15,
       VAR_12->ds_dir->dd_parent, VAR_5, &VAR_18));
  }

  FUNC_10(VAR_12,
      FUNC_18(VAR_7), VAR_9,
      0, 0, ((void*)0), VAR_11);

  VAR_22 = VAR_12->ds_dir->dd_object;
  FUNC_2(FUNC_9(VAR_12->ds_dir->dd_parent,
      &VAR_23));
 }

 if (VAR_18 == ((void*)0)) {
  FUNC_0(VAR_17->cp_cmd == VAR_1 ||
      VAR_17->cp_cmd == VAR_2);
 }

 FUNC_13(&VAR_15->spa_keystore.sk_wkeys_lock, VAR_6);


 FUNC_15(VAR_22, VAR_12->ds_dir->dd_object,
     VAR_23, VAR_18, VAR_0, VAR_11);





 VAR_20.wk_ddobj = VAR_12->ds_dir->dd_object;
 VAR_19 = FUNC_3(&VAR_15->spa_keystore.sk_wkeys, &VAR_20, ((void*)0));
 if (VAR_19 != ((void*)0)) {
  FUNC_1(FUNC_19(&VAR_19->wk_refcnt));
  FUNC_5(&VAR_15->spa_keystore.sk_wkeys, VAR_19);
  FUNC_11(VAR_19);
 }

 if (VAR_17->cp_cmd == VAR_4) {
  FUNC_3(&VAR_15->spa_keystore.sk_wkeys, VAR_18, &VAR_13);
  FUNC_4(&VAR_15->spa_keystore.sk_wkeys, VAR_18, VAR_13);
 } else if (VAR_18 != ((void*)0)) {
  FUNC_12(VAR_18, VAR_5);
 }

 FUNC_14(&VAR_15->spa_keystore.sk_wkeys_lock);

 FUNC_8(VAR_12, VAR_5);
}
