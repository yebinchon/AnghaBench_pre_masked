
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ zo_mmp_test; } ;
typedef TYPE_1__ ztest_shared_opts_t ;
typedef int ztest_ds_t ;
typedef int uint64_t ;
struct TYPE_13__ {int spa_props_lock; int spa_multihost; } ;
typedef TYPE_2__ spa_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_6 (TYPE_2__*,int ,int ) ;
 int FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;
 scalar_t__ FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int ,int ) ;
 scalar_t__ VAR_5 ;
 TYPE_1__ VAR_6 ;
 TYPE_2__* VAR_7 ;

void
FUNC_11(ztest_ds_t *VAR_8, uint64_t VAR_9)
{
 ztest_shared_opts_t *VAR_10 = &VAR_6;
 spa_t *VAR_11 = VAR_7;

 if (VAR_10->zo_mmp_test)
  return;





 if (FUNC_9(VAR_11))
  return;

 FUNC_5(VAR_11, VAR_4, VAR_2, VAR_3);
 FUNC_3(&VAR_11->spa_props_lock);

 VAR_5 = 0;

 if (!FUNC_8(VAR_11)) {
  VAR_11->spa_multihost = VAR_1;
  FUNC_1(VAR_11);
 }

 FUNC_4(&VAR_11->spa_props_lock);
 FUNC_6(VAR_11, VAR_4, VAR_2);

 FUNC_10(FUNC_7(VAR_11), 0);
 FUNC_0();
 FUNC_10(FUNC_7(VAR_11), 0);

 FUNC_5(VAR_11, VAR_4, VAR_2, VAR_3);
 FUNC_3(&VAR_11->spa_props_lock);

 if (FUNC_8(VAR_11)) {
  FUNC_2(VAR_11);
  VAR_11->spa_multihost = VAR_0;
 }

 FUNC_4(&VAR_11->spa_props_lock);
 FUNC_6(VAR_11, VAR_4, VAR_2);
}
