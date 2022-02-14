
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_9__ {int sk_wkeys_lock; int sk_wkeys; } ;
struct TYPE_10__ {TYPE_1__ spa_keystore; } ;
typedef TYPE_2__ spa_t ;
struct TYPE_11__ {int wk_refcnt; int wk_ddobj; } ;
typedef TYPE_3__ dsl_wrapping_key_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (int *,TYPE_3__*,int *) ;
 int FUNC_2 (int *,TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;

int
FUNC_7(spa_t *VAR_3, uint64_t VAR_4)
{
 int VAR_5;
 dsl_wrapping_key_t VAR_6;
 dsl_wrapping_key_t *VAR_7;


 VAR_6.wk_ddobj = VAR_4;

 FUNC_4(&VAR_3->spa_keystore.sk_wkeys_lock, VAR_2);


 VAR_7 = FUNC_1(&VAR_3->spa_keystore.sk_wkeys,
     &VAR_6, ((void*)0));
 if (!VAR_7) {
  VAR_5 = FUNC_0(VAR_0);
  goto error_unlock;
 } else if (FUNC_6(&VAR_7->wk_refcnt) != 0) {
  VAR_5 = FUNC_0(VAR_1);
  goto error_unlock;
 }
 FUNC_2(&VAR_3->spa_keystore.sk_wkeys, VAR_7);

 FUNC_5(&VAR_3->spa_keystore.sk_wkeys_lock);


 FUNC_3(VAR_7);

 return (0);

error_unlock:
 FUNC_5(&VAR_3->spa_keystore.sk_wkeys_lock);
 return (VAR_5);
}
