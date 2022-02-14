
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * baserestrictinfo; int reloptkind; int relid; int type; } ;
typedef TYPE_1__ RelOptInfo ;
typedef int RangeTblEntry ;
typedef int PlannerInfo ;
typedef int List ;
typedef int Index ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_1__*,int *) ;

__attribute__((used)) static bool
FUNC_1(PlannerInfo *VAR_2, RangeTblEntry *VAR_3, Index VAR_4, List *VAR_5)
{
 RelOptInfo VAR_6 = {
  .type = VAR_1,
  .relid = VAR_4,
  .reloptkind = VAR_0,
  .baserestrictinfo = VAR_5,
 };

 return FUNC_0(VAR_2, &VAR_6, VAR_3);
}
