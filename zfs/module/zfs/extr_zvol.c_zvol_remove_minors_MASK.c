
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zvol_task_t ;
typedef scalar_t__ taskqid_t ;
struct TYPE_3__ {int spa_zvol_taskq; } ;
typedef TYPE_1__ spa_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,int *,int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int * FUNC_2 (int ,char const*,int *,unsigned long long) ;
 int VAR_4 ;

void
FUNC_3(spa_t *VAR_5, const char *VAR_6, boolean_t VAR_7)
{
 zvol_task_t *VAR_8;
 taskqid_t VAR_9;

 VAR_8 = FUNC_2(VAR_3, VAR_6, ((void*)0), ~0ULL);
 if (VAR_8 == ((void*)0))
  return;

 VAR_9 = FUNC_0(VAR_5->spa_zvol_taskq, VAR_4, VAR_8, VAR_2);
 if ((VAR_7 == VAR_0) && (VAR_9 != VAR_1))
  FUNC_1(VAR_5->spa_zvol_taskq, VAR_9);
}
