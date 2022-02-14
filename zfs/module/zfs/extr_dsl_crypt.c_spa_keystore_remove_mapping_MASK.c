
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_9__ {int sk_km_lock; int sk_key_mappings; } ;
struct TYPE_10__ {TYPE_1__ spa_keystore; } ;
typedef TYPE_2__ spa_t ;
struct TYPE_11__ {int km_dsobj; } ;
typedef TYPE_3__ dsl_key_mapping_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (int *,TYPE_3__*,int *) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*,void*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;

int
FUNC_5(spa_t *VAR_2, uint64_t VAR_3, void *VAR_4)
{
 int VAR_5;
 dsl_key_mapping_t VAR_6;
 dsl_key_mapping_t *VAR_7;


 VAR_6.km_dsobj = VAR_3;

 FUNC_3(&VAR_2->spa_keystore.sk_km_lock, VAR_1);


 VAR_7 = FUNC_1(&VAR_2->spa_keystore.sk_key_mappings,
     &VAR_6, ((void*)0));
 if (VAR_7 == ((void*)0)) {
  VAR_5 = FUNC_0(VAR_0);
  goto error_unlock;
 }

 FUNC_4(&VAR_2->spa_keystore.sk_km_lock);

 FUNC_2(VAR_2, VAR_7, VAR_4);

 return (0);

error_unlock:
 FUNC_4(&VAR_2->spa_keystore.sk_km_lock);
 return (VAR_5);
}
