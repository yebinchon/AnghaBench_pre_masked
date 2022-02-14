
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_longlong_t ;
typedef int space_map_t ;
struct TYPE_9__ {int spa_meta_objset; int spa_sm_logs_by_txg; } ;
typedef TYPE_1__ spa_t ;
struct TYPE_10__ {scalar_t__ sls_txg; scalar_t__ sls_sm_obj; } ;
typedef TYPE_2__ spa_log_sm_t ;


 TYPE_2__* FUNC_0 (int *,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int ,scalar_t__,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_9(spa_t *VAR_3)
{
 if (!FUNC_5(VAR_3, VAR_0))
  return;

 (void) FUNC_4("\nLog Space Maps in Pool:\n");
 for (spa_log_sm_t *VAR_4 = FUNC_2(&VAR_3->spa_sm_logs_by_txg);
     VAR_4; VAR_4 = FUNC_0(&VAR_3->spa_sm_logs_by_txg, VAR_4)) {
  space_map_t *VAR_5 = ((void*)0);
  FUNC_1(FUNC_8(&VAR_5, FUNC_6(VAR_3),
      VAR_4->sls_sm_obj, 0, VAR_2, VAR_1));

  (void) FUNC_4("Log Spacemap object %llu txg %llu\n",
      (u_longlong_t)VAR_4->sls_sm_obj, (u_longlong_t)VAR_4->sls_txg);
  FUNC_3(VAR_3->spa_meta_objset, VAR_5);
  FUNC_7(VAR_5);
 }
 (void) FUNC_4("\n");
}
