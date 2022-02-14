
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
typedef int spacemap_zap ;
struct TYPE_8__ {int spa_sm_logs_by_txg; } ;
typedef TYPE_1__ spa_t ;
struct TYPE_9__ {int sls_sm_obj; } ;
typedef TYPE_2__ spa_log_sm_t ;


 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (int *,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,int ,int ,int,int,int *) ;

__attribute__((used)) static void
FUNC_6(spa_t *VAR_3)
{
 uint64_t VAR_4;
 int VAR_5 = FUNC_5(FUNC_4(VAR_3),
     VAR_0, VAR_1,
     sizeof (VAR_4), 1, &VAR_4);
 if (VAR_5 == VAR_2)
  return;
 FUNC_0(VAR_5);

 FUNC_3(VAR_4);
 for (spa_log_sm_t *VAR_6 = FUNC_2(&VAR_3->spa_sm_logs_by_txg);
     VAR_6; VAR_6 = FUNC_1(&VAR_3->spa_sm_logs_by_txg, VAR_6))
  FUNC_3(VAR_6->sls_sm_obj);
}
