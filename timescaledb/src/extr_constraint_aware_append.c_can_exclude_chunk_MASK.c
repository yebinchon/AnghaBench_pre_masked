
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int es_range_table; } ;
struct TYPE_6__ {scalar_t__ rtekind; scalar_t__ relkind; int inh; } ;
typedef TYPE_1__ RangeTblEntry ;
typedef int PlannerInfo ;
typedef int List ;
typedef int Index ;
typedef TYPE_2__ EState ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,TYPE_1__*,int ,int *) ;
 TYPE_1__* FUNC_1 (int ,int ) ;

__attribute__((used)) static bool
FUNC_2(PlannerInfo *VAR_2, EState *VAR_3, Index VAR_4, List *VAR_5)
{
 RangeTblEntry *VAR_6 = FUNC_1(VAR_4, VAR_3->es_range_table);

 return VAR_6->rtekind == VAR_1 && VAR_6->relkind == VAR_0 && !VAR_6->inh &&
     FUNC_0(VAR_2, VAR_6, VAR_4, VAR_5);
}
