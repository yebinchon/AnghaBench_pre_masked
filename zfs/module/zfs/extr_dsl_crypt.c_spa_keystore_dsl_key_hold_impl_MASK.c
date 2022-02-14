
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_8__ {int sk_dsl_keys; int sk_dk_lock; } ;
struct TYPE_9__ {TYPE_1__ spa_keystore; } ;
typedef TYPE_2__ spa_t ;
struct TYPE_10__ {int dck_holds; int dck_obj; } ;
typedef TYPE_3__ dsl_crypto_key_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (int *,TYPE_3__*,int *) ;
 int FUNC_4 (int *,void*) ;

__attribute__((used)) static int
FUNC_5(spa_t *VAR_1, uint64_t VAR_2, void *VAR_3,
    dsl_crypto_key_t **VAR_4)
{
 int VAR_5;
 dsl_crypto_key_t VAR_6;
 dsl_crypto_key_t *VAR_7;

 FUNC_0(FUNC_1(&VAR_1->spa_keystore.sk_dk_lock));


 VAR_6.dck_obj = VAR_2;


 VAR_7 = FUNC_3(&VAR_1->spa_keystore.sk_dsl_keys, &VAR_6, ((void*)0));
 if (!VAR_7) {
  VAR_5 = FUNC_2(VAR_0);
  goto error;
 }


 FUNC_4(&VAR_7->dck_holds, VAR_3);

 *VAR_4 = VAR_7;
 return (0);

error:
 *VAR_4 = ((void*)0);
 return (VAR_5);
}
