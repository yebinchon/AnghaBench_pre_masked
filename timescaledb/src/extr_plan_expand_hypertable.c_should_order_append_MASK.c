
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* parse; } ;
struct TYPE_5__ {scalar_t__ sortClause; } ;
typedef int RelOptInfo ;
typedef TYPE_2__ PlannerInfo ;
typedef int List ;
typedef int Hypertable ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int *,int *,int *,int*,int*) ;

__attribute__((used)) static bool
FUNC_1(PlannerInfo *VAR_4, RelOptInfo *VAR_5, Hypertable *VAR_6, List *VAR_7,
     int *VAR_8, bool *VAR_9)
{

 if (VAR_1 || !VAR_3 ||
  !VAR_2)
  return 0;





 if (VAR_4->parse->sortClause == VAR_0)
  return 0;

 return FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
}
