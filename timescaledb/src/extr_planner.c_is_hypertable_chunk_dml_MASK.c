
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ parent_reloid; } ;
struct TYPE_11__ {TYPE_1__* parse; } ;
struct TYPE_10__ {scalar_t__ relid; } ;
struct TYPE_9__ {scalar_t__ commandType; } ;
typedef int RelOptInfo ;
typedef TYPE_2__ RangeTblEntry ;
typedef TYPE_3__ PlannerInfo ;
typedef scalar_t__ Oid ;
typedef int Index ;
typedef int Hypertable ;
typedef int Cache ;
typedef TYPE_4__ AppendRelInfo ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 TYPE_4__* FUNC_1 (TYPE_3__*,int ,int) ;
 int * FUNC_2 (int *,scalar_t__) ;
 int * FUNC_3 () ;

__attribute__((used)) static bool
FUNC_4(PlannerInfo *VAR_3, RelOptInfo *VAR_4, Index VAR_5, RangeTblEntry *VAR_6)
{
 if (VAR_3->parse->commandType == VAR_1 || VAR_3->parse->commandType == VAR_0)
 {
  Oid VAR_7;
  AppendRelInfo *VAR_8 = FUNC_1(VAR_3, VAR_5, 1);
  if (!VAR_8)
   return 0;
  VAR_7 = VAR_8->parent_reloid;
  if (VAR_7 != VAR_2 && VAR_6->relid != VAR_7)
  {
   Cache *VAR_9 = FUNC_3();
   Hypertable *VAR_10 = FUNC_2(VAR_9, VAR_7);
   FUNC_0(VAR_9);
   if (VAR_10)
    return 1;
  }
 }
 return 0;
}
