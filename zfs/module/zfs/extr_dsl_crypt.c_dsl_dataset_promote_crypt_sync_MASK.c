
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_15__ {TYPE_2__* dp_spa; } ;
typedef TYPE_3__ dsl_pool_t ;
struct TYPE_16__ {scalar_t__ dd_crypto_obj; int dd_object; TYPE_3__* dd_pool; } ;
typedef TYPE_4__ dsl_dir_t ;
typedef int dsl_dataset_t ;
typedef int dmu_tx_t ;
struct TYPE_17__ {int dd_head_dataset_obj; } ;
struct TYPE_13__ {int sk_wkeys_lock; } ;
struct TYPE_14__ {TYPE_1__ spa_keystore; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_3__*,int ,int ,int **) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_4__*,int *) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 TYPE_6__* FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,int ,int,int ,char*,int *,int ) ;
 int FUNC_7 (int *,int ,int ,int,scalar_t__,char*,int *) ;
 char* FUNC_8 (int ,int ) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int ,int ,int *,int ,int *) ;
 scalar_t__ FUNC_13 (char*) ;
 int FUNC_14 (int ) ;

void
FUNC_15(dsl_dir_t *VAR_8, dsl_dir_t *VAR_9,
    dmu_tx_t *VAR_10)
{
 uint64_t VAR_11;
 dsl_pool_t *VAR_12 = VAR_8->dd_pool;
 dsl_dataset_t *VAR_13;
 dsl_dataset_t *VAR_14;
 char *VAR_15;

 if (VAR_9->dd_crypto_obj == 0)
  return;
 if (FUNC_4(VAR_9))
  return;

 FUNC_0(FUNC_3(VAR_9, &VAR_11));

 if (VAR_11 != VAR_9->dd_object)
  return;
 VAR_15 = FUNC_8(VAR_4, VAR_2);

 FUNC_0(FUNC_1(VAR_12,
     FUNC_5(VAR_8)->dd_head_dataset_obj, VAR_1, &VAR_13));
 FUNC_0(FUNC_1(VAR_12,
     FUNC_5(VAR_9)->dd_head_dataset_obj, VAR_1, &VAR_14));

 FUNC_0(FUNC_6(VAR_9, FUNC_14(VAR_5),
     1, VAR_4, VAR_15, ((void*)0), VAR_0));
 FUNC_7(VAR_13, FUNC_14(VAR_5),
     VAR_6, 1, FUNC_13(VAR_15) + 1, VAR_15, VAR_10);
 FUNC_7(VAR_14, FUNC_14(VAR_5),
     VAR_7, 0, 0, ((void*)0), VAR_10);

 FUNC_10(&VAR_12->dp_spa->spa_keystore.sk_wkeys_lock, VAR_3);
 FUNC_12(VAR_11, VAR_9->dd_object,
     VAR_8->dd_object, ((void*)0), VAR_0, VAR_10);
 FUNC_11(&VAR_12->dp_spa->spa_keystore.sk_wkeys_lock);

 FUNC_2(VAR_13, VAR_1);
 FUNC_2(VAR_14, VAR_1);
 FUNC_9(VAR_15, VAR_4);
}
