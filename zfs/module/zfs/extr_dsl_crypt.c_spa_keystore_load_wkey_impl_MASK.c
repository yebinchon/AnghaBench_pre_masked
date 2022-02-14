
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sk_wkeys_lock; int sk_wkeys; } ;
struct TYPE_5__ {TYPE_1__ spa_keystore; } ;
typedef TYPE_2__ spa_t ;
typedef int dsl_wrapping_key_t ;
typedef int avl_index_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;

int
FUNC_5(spa_t *VAR_2, dsl_wrapping_key_t *VAR_3)
{
 int VAR_4;
 avl_index_t VAR_5;
 dsl_wrapping_key_t *VAR_6;

 FUNC_3(&VAR_2->spa_keystore.sk_wkeys_lock, VAR_1);


 VAR_6 = FUNC_1(&VAR_2->spa_keystore.sk_wkeys, VAR_3, &VAR_5);
 if (VAR_6 != ((void*)0)) {
  VAR_4 = FUNC_0(VAR_0);
  goto error_unlock;
 }
 FUNC_2(&VAR_2->spa_keystore.sk_wkeys, VAR_3, VAR_5);

 FUNC_4(&VAR_2->spa_keystore.sk_wkeys_lock);

 return (0);

error_unlock:
 FUNC_4(&VAR_2->spa_keystore.sk_wkeys_lock);
 return (VAR_4);
}
