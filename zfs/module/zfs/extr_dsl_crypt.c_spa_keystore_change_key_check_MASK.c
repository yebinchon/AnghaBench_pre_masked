
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_14__ {int skcka_dsname; TYPE_5__* skcka_cp; } ;
typedef TYPE_2__ spa_keystore_change_key_args_t ;
struct TYPE_15__ {int dp_spa; } ;
typedef TYPE_3__ dsl_pool_t ;
struct TYPE_16__ {scalar_t__ dd_crypto_obj; scalar_t__ dd_object; struct TYPE_16__* dd_parent; } ;
typedef TYPE_4__ dsl_dir_t ;
struct TYPE_17__ {scalar_t__ cp_cmd; scalar_t__ cp_crypt; TYPE_1__* cp_wkey; int * cp_keylocation; } ;
typedef TYPE_5__ dsl_crypto_params_t ;
typedef int dmu_tx_t ;
struct TYPE_13__ {scalar_t__ wk_keyformat; scalar_t__ wk_salt; scalar_t__ wk_iters; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_1 (TYPE_4__*) ;
 TYPE_3__* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_4__*,scalar_t__*) ;
 int FUNC_4 (TYPE_3__*,int ,int ,TYPE_4__**,int *) ;
 scalar_t__ FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static int
FUNC_9(void *VAR_14, dmu_tx_t *VAR_15)
{
 int VAR_16;
 dsl_dir_t *VAR_17 = ((void*)0);
 dsl_pool_t *VAR_18 = FUNC_2(VAR_15);
 spa_keystore_change_key_args_t *VAR_19 = VAR_14;
 dsl_crypto_params_t *VAR_20 = VAR_19->skcka_cp;
 uint64_t VAR_21;


 if (!FUNC_7(VAR_18->dp_spa, VAR_9)) {
  VAR_16 = FUNC_0(VAR_6);
  goto error;
 }


 if (VAR_20->cp_cmd != VAR_4 &&
     VAR_20->cp_cmd != VAR_3 &&
     VAR_20->cp_cmd != VAR_2 &&
     VAR_20->cp_cmd != VAR_1) {
  VAR_16 = FUNC_0(VAR_5);
  goto error;
 }


 VAR_16 = FUNC_4(VAR_18, VAR_19->skcka_dsname, VAR_7, &VAR_17, ((void*)0));
 if (VAR_16 != 0) {
  VAR_17 = ((void*)0);
  goto error;
 }


 if (VAR_17->dd_crypto_obj == 0) {
  VAR_16 = FUNC_0(VAR_5);
  goto error;
 }


 if (FUNC_5(VAR_17)) {
  VAR_16 = FUNC_0(VAR_5);
  goto error;
 }


 VAR_16 = FUNC_3(VAR_17, &VAR_21);
 if (VAR_16 != 0)
  goto error;


 if (VAR_20->cp_cmd == VAR_3 ||
     VAR_20->cp_cmd == VAR_1) {

  if (VAR_20->cp_crypt != VAR_13 ||
      VAR_20->cp_keylocation != ((void*)0) ||
      VAR_20->cp_wkey != ((void*)0)) {
   VAR_16 = FUNC_0(VAR_5);
   goto error;
  }


  if (VAR_17->dd_object != VAR_21) {
   VAR_16 = FUNC_0(VAR_5);
   goto error;
  }


  if (VAR_17->dd_parent->dd_crypto_obj == 0) {
   VAR_16 = FUNC_0(VAR_5);
   goto error;
  }


  if (VAR_20->cp_cmd == VAR_3) {
   VAR_16 = FUNC_1(VAR_17);
   if (VAR_16 != 0)
    goto error;

   VAR_16 = FUNC_1(VAR_17->dd_parent);
   if (VAR_16 != 0)
    goto error;
  }

  FUNC_6(VAR_17, VAR_7);
  return (0);
 }


 if (VAR_20->cp_cmd == VAR_2) {

  if (VAR_20->cp_crypt != VAR_13 ||
      VAR_20->cp_keylocation != ((void*)0) ||
      VAR_20->cp_wkey != ((void*)0)) {
   VAR_16 = FUNC_0(VAR_5);
   goto error;
  }


  if (VAR_17->dd_object == VAR_21) {
   VAR_16 = FUNC_0(VAR_5);
   goto error;
  }

  FUNC_6(VAR_17, VAR_7);
  return (0);
 }


 if (VAR_20->cp_crypt != VAR_13) {
  VAR_16 = FUNC_0(VAR_5);
  goto error;
 }


 if (VAR_20->cp_wkey == ((void*)0)) {
  VAR_16 = FUNC_0(VAR_5);
  goto error;
 }


 if (VAR_20->cp_wkey->wk_keyformat >= VAR_10 ||
     VAR_20->cp_wkey->wk_keyformat == VAR_11) {
  VAR_16 = FUNC_0(VAR_5);
  goto error;
 }






 if (VAR_17->dd_object != VAR_21 && VAR_20->cp_keylocation == ((void*)0)) {
  VAR_16 = FUNC_0(VAR_5);
  goto error;
 }


 if (VAR_20->cp_keylocation != ((void*)0) &&
     !FUNC_8(VAR_20->cp_keylocation, VAR_0)) {
  VAR_16 = FUNC_0(VAR_5);
  goto error;
 }


 if (VAR_20->cp_wkey->wk_keyformat == VAR_12) {
  if (VAR_20->cp_wkey->wk_salt == 0 ||
      VAR_20->cp_wkey->wk_iters < VAR_8) {
   VAR_16 = FUNC_0(VAR_5);
   goto error;
  }
 } else {
  if (VAR_20->cp_wkey->wk_salt != 0 || VAR_20->cp_wkey->wk_iters != 0) {
   VAR_16 = FUNC_0(VAR_5);
   goto error;
  }
 }


 VAR_16 = FUNC_1(VAR_17);
 if (VAR_16 != 0)
  goto error;

 FUNC_6(VAR_17, VAR_7);

 return (0);

error:
 if (VAR_17 != ((void*)0))
  FUNC_6(VAR_17, VAR_7);

 return (VAR_16);
}
