
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int zdb_log_sm_cb_t ;
struct TYPE_13__ {void* uic_arg; int uic_cb; int uic_txg; TYPE_2__* uic_spa; } ;
typedef TYPE_1__ unflushed_iter_cb_arg_t ;
typedef int space_map_t ;
struct TYPE_14__ {int spa_sm_logs_by_txg; } ;
typedef TYPE_2__ spa_t ;
struct TYPE_15__ {int sls_txg; int sls_sm_obj; } ;
typedef TYPE_3__ spa_log_sm_t ;


 TYPE_3__* FUNC_0 (int *,TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (int *) ;
 int VAR_6 ;
 int FUNC_3 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_4 (TYPE_2__*,int ,int ) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int ,TYPE_1__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int **,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_11(spa_t *VAR_7, zdb_log_sm_cb_t VAR_8, void *VAR_9)
{
 if (!FUNC_5(VAR_7, VAR_3))
  return;

 FUNC_3(VAR_7, VAR_2, VAR_0, VAR_1);
 for (spa_log_sm_t *VAR_10 = FUNC_2(&VAR_7->spa_sm_logs_by_txg);
     VAR_10; VAR_10 = FUNC_0(&VAR_7->spa_sm_logs_by_txg, VAR_10)) {
  space_map_t *VAR_11 = ((void*)0);
  FUNC_1(FUNC_10(&VAR_11, FUNC_6(VAR_7),
      VAR_10->sls_sm_obj, 0, VAR_5, VAR_4));

  unflushed_iter_cb_arg_t VAR_12 = {
   .uic_spa = VAR_7,
   .uic_txg = VAR_10->sls_txg,
   .uic_arg = VAR_9,
   .uic_cb = VAR_8
  };

  FUNC_1(FUNC_8(VAR_11, FUNC_9(VAR_11),
      VAR_6, &VAR_12));
  FUNC_7(VAR_11);
 }
 FUNC_4(VAR_7, VAR_2, VAR_0);
}
