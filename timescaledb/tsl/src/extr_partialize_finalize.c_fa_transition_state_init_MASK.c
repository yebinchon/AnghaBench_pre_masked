
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int trans_value_isnull; int trans_value_initialized; } ;
struct TYPE_4__ {TYPE_2__* per_group_state; int * per_query_state; } ;
typedef int MemoryContext ;
typedef TYPE_1__ FATransitionState ;
typedef int FAPerQueryState ;
typedef TYPE_2__ FAPerGroupState ;
typedef int AggState ;


 scalar_t__ FUNC_0 (int ,int) ;

__attribute__((used)) static FATransitionState *
FUNC_1(MemoryContext *VAR_0, FAPerQueryState *VAR_1, AggState *VAR_2)
{
 FATransitionState *VAR_3 = ((void*)0);
 VAR_3 = (FATransitionState *) FUNC_0(*VAR_0, sizeof(*VAR_3));
 VAR_3->per_query_state = VAR_1;
 VAR_3->per_group_state =
  (FAPerGroupState *) FUNC_0(*VAR_0, sizeof(*VAR_3->per_group_state));


 VAR_3->per_group_state->trans_value_isnull = 1;
 VAR_3->per_group_state->trans_value_initialized = 0;
 return VAR_3;
}
