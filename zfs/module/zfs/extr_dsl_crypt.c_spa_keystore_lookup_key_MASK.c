
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_9__ {int sk_km_lock; int sk_key_mappings; } ;
struct TYPE_10__ {TYPE_1__ spa_keystore; } ;
typedef TYPE_2__ spa_t ;
struct TYPE_11__ {TYPE_4__* km_key; int km_dsobj; } ;
typedef TYPE_3__ dsl_key_mapping_t ;
struct TYPE_12__ {int dck_holds; } ;
typedef TYPE_4__ dsl_crypto_key_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (int *,TYPE_3__*,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,void*) ;

int
FUNC_6(spa_t *VAR_2, uint64_t VAR_3, void *VAR_4,
    dsl_crypto_key_t **VAR_5)
{
 int VAR_6;
 dsl_key_mapping_t VAR_7;
 dsl_key_mapping_t *VAR_8;

 FUNC_0((VAR_4 != ((void*)0) && VAR_5 != ((void*)0)) ||
     (VAR_4 == ((void*)0) && VAR_5 == ((void*)0)));


 VAR_7.km_dsobj = VAR_3;

 FUNC_3(&VAR_2->spa_keystore.sk_km_lock, VAR_1);


 VAR_8 = FUNC_2(&VAR_2->spa_keystore.sk_key_mappings, &VAR_7,
     ((void*)0));
 if (VAR_8 == ((void*)0)) {
  VAR_6 = FUNC_1(VAR_0);
  goto error_unlock;
 }

 if (VAR_8 && VAR_4)
  FUNC_5(&VAR_8->km_key->dck_holds, VAR_4);

 FUNC_4(&VAR_2->spa_keystore.sk_km_lock);

 if (VAR_5 != ((void*)0))
  *VAR_5 = VAR_8->km_key;
 return (0);

error_unlock:
 FUNC_4(&VAR_2->spa_keystore.sk_km_lock);

 if (VAR_5 != ((void*)0))
  *VAR_5 = ((void*)0);
 return (VAR_6);
}
