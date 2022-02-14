
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_9__ {int sk_dk_lock; int sk_dsl_keys; } ;
struct TYPE_10__ {TYPE_1__ spa_keystore; int spa_meta_objset; } ;
typedef TYPE_2__ spa_t ;
typedef int dsl_wrapping_key_t ;
struct TYPE_11__ {int dd_crypto_obj; } ;
typedef TYPE_3__ dsl_dir_t ;
typedef int dsl_crypto_key_t ;
typedef int avl_index_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *,int ,void*,int **) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_2__*,int ,void*,int **) ;
 int FUNC_9 (TYPE_2__*,TYPE_3__*,int ,int **) ;

__attribute__((used)) static int
FUNC_10(spa_t *VAR_4, dsl_dir_t *VAR_5, void *VAR_6,
    dsl_crypto_key_t **VAR_7)
{
 int VAR_8;
 avl_index_t VAR_9;
 dsl_crypto_key_t *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);
 dsl_wrapping_key_t *VAR_12 = ((void*)0);
 uint64_t VAR_13 = VAR_5->dd_crypto_obj;


 FUNC_6(&VAR_4->spa_keystore.sk_dk_lock, VAR_2);
 VAR_8 = FUNC_8(VAR_4, VAR_13, VAR_6, &VAR_11);
 FUNC_7(&VAR_4->spa_keystore.sk_dk_lock);
 if (VAR_8 == 0) {
  *VAR_7 = VAR_11;
  return (0);
 }


 VAR_8 = FUNC_9(VAR_4, VAR_5, VAR_1, &VAR_12);
 if (VAR_8 != 0) {
  *VAR_7 = ((void*)0);
  return (FUNC_0(VAR_0));
 }


 VAR_8 = FUNC_4(VAR_4->spa_meta_objset, VAR_12, VAR_13,
     VAR_6, &VAR_10);
 if (VAR_8 != 0) {
  FUNC_5(VAR_12, VAR_1);
  *VAR_7 = ((void*)0);
  return (VAR_8);
 }






 FUNC_6(&VAR_4->spa_keystore.sk_dk_lock, VAR_3);
 VAR_8 = FUNC_8(VAR_4, VAR_13, VAR_6, &VAR_11);
 if (VAR_8 != 0) {
  FUNC_1(&VAR_4->spa_keystore.sk_dsl_keys, VAR_10, &VAR_9);
  FUNC_2(&VAR_4->spa_keystore.sk_dsl_keys, VAR_10, VAR_9);
  *VAR_7 = VAR_10;
 } else {
  FUNC_3(VAR_10);
  *VAR_7 = VAR_11;
 }


 FUNC_5(VAR_12, VAR_1);
 FUNC_7(&VAR_4->spa_keystore.sk_dk_lock);

 return (0);
}
