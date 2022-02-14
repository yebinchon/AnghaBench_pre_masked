
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UpperRelationKind ;
struct TYPE_7__ {int pathlist; } ;
typedef TYPE_1__ RelOptInfo ;
typedef int PlannerInfo ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,TYPE_1__*) ;

void
FUNC_4(PlannerInfo *VAR_3, UpperRelationKind VAR_4, RelOptInfo *VAR_5,
       RelOptInfo *VAR_6)
{
 if (VAR_1 == VAR_4)
  FUNC_3(VAR_3, VAR_6);
 if (VAR_2 == VAR_4)
 {
  if (FUNC_0(FUNC_2(VAR_5->pathlist), VAR_0))
   FUNC_1(VAR_3, VAR_5, VAR_6);
 }
}
