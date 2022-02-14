
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int reloptkind; int relids; int relid; } ;
typedef TYPE_1__ RelOptInfo ;
typedef int RangeTblEntry ;
typedef int PlannerInfo ;





 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int * FUNC_4 (int ,int *) ;

__attribute__((used)) static bool
FUNC_5(PlannerInfo *VAR_0, RelOptInfo *VAR_1)
{
 RangeTblEntry *VAR_2;

 switch (VAR_1->reloptkind)
 {
  case 130:
  case 128:

   VAR_2 = FUNC_4(VAR_1->relid, VAR_0);
   if (!(FUNC_3(VAR_1, VAR_2) || FUNC_2(VAR_1, VAR_2)))
    return 0;

   return FUNC_1(VAR_0, VAR_1->relid);
  case 129:
   return FUNC_0(VAR_0, VAR_1->relids);
  default:
   return 0;
 }
}
