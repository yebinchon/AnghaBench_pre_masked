
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_7__ {TYPE_1__* spa_dsl_pool; } ;
typedef TYPE_2__ spa_t ;
struct TYPE_9__ {scalar_t__ bpo_object; } ;
struct TYPE_8__ {TYPE_5__ dle_bpobj; } ;
typedef TYPE_3__ dsl_deadlist_entry_t ;
struct TYPE_6__ {scalar_t__ dp_empty_bpobj; } ;


 int FUNC_0 (TYPE_5__*) ;

__attribute__((used)) static int
FUNC_1(void *VAR_0, dsl_deadlist_entry_t *VAR_1)
{
 spa_t *VAR_2 = VAR_0;
 uint64_t VAR_3 = VAR_2->spa_dsl_pool->dp_empty_bpobj;
 if (VAR_1->dle_bpobj.bpo_object != VAR_3)
  FUNC_0(&VAR_1->dle_bpobj);
 return (0);
}
