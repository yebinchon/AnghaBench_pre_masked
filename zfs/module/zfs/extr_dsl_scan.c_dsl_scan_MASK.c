
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int spa_dsl_pool; int spa_scrub_reopen; int spa_root_vdev; } ;
typedef TYPE_1__ spa_t ;
typedef scalar_t__ pool_scan_func_t ;
struct TYPE_11__ {int scn_dp; } ;
typedef TYPE_2__ dsl_scan_t ;
struct TYPE_12__ {TYPE_2__* dp_scan; TYPE_1__* dp_spa; } ;
typedef TYPE_3__ dsl_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int VAR_8 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ,scalar_t__*,int ,int ) ;
 int FUNC_5 (TYPE_1__*,int *,int *,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*,int *,int ) ;
 int FUNC_9 (int ) ;

int
FUNC_10(dsl_pool_t *VAR_11, pool_scan_func_t VAR_12)
{
 spa_t *VAR_13 = VAR_11->dp_spa;
 dsl_scan_t *VAR_14 = VAR_11->dp_scan;
 FUNC_7(VAR_13, VAR_7);
 VAR_13->spa_scrub_reopen = VAR_1;
 FUNC_9(VAR_13->spa_root_vdev);
 VAR_13->spa_scrub_reopen = VAR_0;
 (void) FUNC_8(VAR_13, ((void*)0), 0);

 if (VAR_12 == VAR_4) {
  FUNC_1(VAR_13->spa_dsl_pool, 0);
  return (0);
 }

 if (VAR_12 == VAR_5 && FUNC_2(VAR_14)) {

  int VAR_15 = FUNC_3(VAR_14->scn_dp,
      VAR_6);
  if (VAR_15 == 0) {
   FUNC_5(VAR_13, ((void*)0), ((void*)0), VAR_3);
   return (VAR_2);
  }

  return (FUNC_0(VAR_15));
 }

 return (FUNC_4(FUNC_6(VAR_13), VAR_9,
     VAR_10, &VAR_12, 0, VAR_8));
}
