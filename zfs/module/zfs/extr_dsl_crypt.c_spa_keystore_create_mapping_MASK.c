
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {int sk_km_lock; int sk_key_mappings; } ;
struct TYPE_18__ {TYPE_1__ spa_keystore; } ;
typedef TYPE_2__ spa_t ;
struct TYPE_19__ {int km_refcnt; int km_key; int km_dsobj; } ;
typedef TYPE_3__ dsl_key_mapping_t ;
struct TYPE_20__ {int ds_object; int ds_dir; } ;
typedef TYPE_4__ dsl_dataset_t ;
typedef scalar_t__ boolean_t ;
typedef int avl_index_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_0 (int *,TYPE_3__*,int *) ;
 int FUNC_1 (int *,TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_3__*,int) ;
 TYPE_3__* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*,int ,TYPE_3__*,int *) ;
 int FUNC_7 (TYPE_2__*,int ,TYPE_3__*) ;
 int FUNC_8 (int *,void*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

int
FUNC_11(spa_t *VAR_4, dsl_dataset_t *VAR_5, void *VAR_6,
    dsl_key_mapping_t **VAR_7)
{
 int VAR_8;
 avl_index_t VAR_9;
 dsl_key_mapping_t *VAR_10, *VAR_11;
 boolean_t VAR_12 = VAR_0;


 VAR_10 = FUNC_3(sizeof (dsl_key_mapping_t), VAR_2);
 FUNC_9(&VAR_10->km_refcnt);

 VAR_8 = FUNC_6(VAR_4, VAR_5->ds_dir, VAR_10, &VAR_10->km_key);
 if (VAR_8 != 0) {
  FUNC_10(&VAR_10->km_refcnt);
  FUNC_2(VAR_10, sizeof (dsl_key_mapping_t));

  if (VAR_7 != ((void*)0))
   *VAR_7 = ((void*)0);
  return (VAR_8);
 }

 VAR_10->km_dsobj = VAR_5->ds_object;

 FUNC_4(&VAR_4->spa_keystore.sk_km_lock, VAR_3);
 VAR_11 = FUNC_0(&VAR_4->spa_keystore.sk_key_mappings, VAR_10, &VAR_9);
 if (VAR_11 != ((void*)0)) {
  VAR_12 = VAR_1;
  FUNC_8(&VAR_11->km_refcnt, VAR_6);
  if (VAR_7 != ((void*)0))
   *VAR_7 = VAR_11;
 } else {
  FUNC_8(&VAR_10->km_refcnt, VAR_6);
  FUNC_1(&VAR_4->spa_keystore.sk_key_mappings, VAR_10, VAR_9);
  if (VAR_7 != ((void*)0))
   *VAR_7 = VAR_10;
 }

 FUNC_5(&VAR_4->spa_keystore.sk_km_lock);

 if (VAR_12) {
  FUNC_7(VAR_4, VAR_10->km_key, VAR_10);
  FUNC_10(&VAR_10->km_refcnt);
  FUNC_2(VAR_10, sizeof (dsl_key_mapping_t));
 }

 return (0);
}
