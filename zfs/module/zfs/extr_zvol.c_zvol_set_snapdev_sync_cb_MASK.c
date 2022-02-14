
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zvol_task_t ;
typedef int uint64_t ;
struct TYPE_5__ {TYPE_1__* dp_spa; } ;
typedef TYPE_2__ dsl_pool_t ;
typedef int dsl_dataset_t ;
struct TYPE_4__ {int spa_zvol_taskq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int *,char*,int *) ;
 int FUNC_2 (int ,int ,int *,int ) ;
 int * FUNC_3 (int ,char*,int *,int ) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_4(dsl_pool_t *VAR_4, dsl_dataset_t *VAR_5, void *VAR_6)
{
 char VAR_7[VAR_0];
 zvol_task_t *VAR_8;
 uint64_t VAR_9;

 FUNC_0(VAR_5, VAR_7);
 if (FUNC_1(VAR_5, "snapdev", &VAR_9) != 0)
  return (0);
 VAR_8 = FUNC_3(VAR_2, VAR_7, ((void*)0), VAR_9);
 if (VAR_8 == ((void*)0))
  return (0);

 (void) FUNC_2(VAR_4->dp_spa->spa_zvol_taskq, VAR_3,
     VAR_8, VAR_1);
 return (0);
}
