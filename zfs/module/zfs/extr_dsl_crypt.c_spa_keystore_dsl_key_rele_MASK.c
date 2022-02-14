
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int sk_dk_lock; int sk_dsl_keys; } ;
struct TYPE_9__ {TYPE_1__ spa_keystore; } ;
typedef TYPE_2__ spa_t ;
struct TYPE_10__ {int dck_holds; } ;
typedef TYPE_3__ dsl_crypto_key_t ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,void*) ;

void
FUNC_5(spa_t *VAR_1, dsl_crypto_key_t *VAR_2, void *VAR_3)
{
 FUNC_2(&VAR_1->spa_keystore.sk_dk_lock, VAR_0);

 if (FUNC_4(&VAR_2->dck_holds, VAR_3) == 0) {
  FUNC_0(&VAR_1->spa_keystore.sk_dsl_keys, VAR_2);
  FUNC_1(VAR_2);
 }

 FUNC_3(&VAR_1->spa_keystore.sk_dk_lock);
}
