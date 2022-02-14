
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_17__ {int zcs_bytes; } ;
struct TYPE_16__ {scalar_t__ ub_version; } ;
struct TYPE_15__ {scalar_t__ ub_version; } ;
struct TYPE_18__ {int spa_minref; TYPE_3__ spa_cksum_salt; int spa_meta_objset; TYPE_2__ spa_uberblock; TYPE_1__ spa_ubsync; TYPE_5__* spa_dsl_pool; } ;
typedef TYPE_4__ spa_t ;
struct TYPE_19__ {int dp_config_rwlock; } ;
typedef TYPE_5__ dsl_pool_t ;
typedef int dmu_tx_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_5__*,int *) ;
 int FUNC_2 (TYPE_5__*,int *) ;
 int FUNC_3 (TYPE_5__*,int *) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (TYPE_4__*,int *) ;
 int FUNC_7 (TYPE_4__*,int ,int *) ;
 scalar_t__ FUNC_8 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_9 (TYPE_4__*,int ) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (int ,int ,int ,int,int,int ,int *) ;
 scalar_t__ FUNC_12 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_13(spa_t *VAR_10, dmu_tx_t *VAR_11)
{
 if (FUNC_10(VAR_10) != 1)
  return;

 dsl_pool_t *VAR_12 = VAR_10->spa_dsl_pool;
 FUNC_4(&VAR_12->dp_config_rwlock, VAR_4, VAR_3);

 if (VAR_10->spa_ubsync.ub_version < VAR_9 &&
     VAR_10->spa_uberblock.ub_version >= VAR_9) {
  FUNC_1(VAR_12, VAR_11);


  VAR_10->spa_minref += 3;
 }

 if (VAR_10->spa_ubsync.ub_version < VAR_8 &&
     VAR_10->spa_uberblock.ub_version >= VAR_8) {
  FUNC_2(VAR_12, VAR_11);
 }

 if (VAR_10->spa_ubsync.ub_version < VAR_6 &&
     VAR_10->spa_uberblock.ub_version >= VAR_6) {
  FUNC_3(VAR_12, VAR_11);


  VAR_10->spa_minref += 3;
 }

 if (VAR_10->spa_ubsync.ub_version < VAR_7 &&
     VAR_10->spa_uberblock.ub_version >= VAR_7) {
  FUNC_6(VAR_10, VAR_11);
 }







 if (VAR_10->spa_uberblock.ub_version >= VAR_7) {
  boolean_t VAR_13 = FUNC_9(VAR_10,
      VAR_5);
  boolean_t VAR_14 = FUNC_8(VAR_10,
      VAR_5);

  if (VAR_13 && !VAR_14)
   FUNC_7(VAR_10, VAR_5, VAR_11);
 }






 if (FUNC_12(VAR_10->spa_meta_objset, VAR_1,
     VAR_0) == VAR_2) {
  FUNC_0(FUNC_11(VAR_10->spa_meta_objset,
      VAR_1, VAR_0, 1,
      sizeof (VAR_10->spa_cksum_salt.zcs_bytes),
      VAR_10->spa_cksum_salt.zcs_bytes, VAR_11));
 }

 FUNC_5(&VAR_12->dp_config_rwlock, VAR_3);
}
