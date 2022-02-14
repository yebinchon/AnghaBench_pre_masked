
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sk_dk_lock; int sk_km_lock; int sk_wkeys_lock; int sk_dsl_keys; int sk_key_mappings; int sk_wkeys; } ;
typedef TYPE_1__ spa_keystore_t ;
typedef int dsl_wrapping_key_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,void**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void
FUNC_6(spa_keystore_t *VAR_0)
{
 dsl_wrapping_key_t *VAR_1;
 void *VAR_2 = ((void*)0);

 FUNC_0(FUNC_3(&VAR_0->sk_dsl_keys));
 FUNC_0(FUNC_3(&VAR_0->sk_key_mappings));

 while ((VAR_1 = FUNC_2(&VAR_0->sk_wkeys, &VAR_2)) != ((void*)0))
  FUNC_4(VAR_1);

 FUNC_1(&VAR_0->sk_wkeys);
 FUNC_1(&VAR_0->sk_key_mappings);
 FUNC_1(&VAR_0->sk_dsl_keys);
 FUNC_5(&VAR_0->sk_wkeys_lock);
 FUNC_5(&VAR_0->sk_km_lock);
 FUNC_5(&VAR_0->sk_dk_lock);
}
