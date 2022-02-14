
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_18__ {int appends_ordered; int order_attno; int * nested_oids; } ;
typedef TYPE_2__ TimescaleDBPrivate ;
struct TYPE_21__ {int join_conditions; int restrictions; int * chunk_exclusion_func; } ;
struct TYPE_20__ {TYPE_1__* space; } ;
struct TYPE_19__ {int * fdw_private; } ;
struct TYPE_17__ {int num_dimensions; } ;
typedef TYPE_3__ RelOptInfo ;
typedef int PlannerInfo ;
typedef int List ;
typedef int HypertableRestrictInfo ;
typedef TYPE_4__ Hypertable ;
typedef TYPE_5__ CollectQualCtx ;


 int VAR_0 ;
 int * FUNC_0 (int *,TYPE_4__*,int ) ;
 int * FUNC_1 (TYPE_5__*,TYPE_4__*) ;
 scalar_t__ FUNC_2 (int *,TYPE_3__*,TYPE_4__*,int ,int*,int*) ;
 int FUNC_3 (int *,int *,int ) ;
 int * FUNC_4 (TYPE_3__*,TYPE_4__*) ;
 int * FUNC_5 (int *,TYPE_4__*,int ,int **,int) ;

__attribute__((used)) static List *
FUNC_6(CollectQualCtx *VAR_1, PlannerInfo *VAR_2, RelOptInfo *VAR_3, Hypertable *VAR_4)
{
 bool VAR_5;
 int VAR_6;

 if (VAR_1->chunk_exclusion_func == ((void*)0))
 {
  HypertableRestrictInfo *VAR_7 = FUNC_4(VAR_3, VAR_4);






  FUNC_3(VAR_7, VAR_2, VAR_1->restrictions);







  if (VAR_3->fdw_private != ((void*)0) &&
   FUNC_2(VAR_2, VAR_3, VAR_4, VAR_1->join_conditions, &VAR_6, &VAR_5))
  {
   TimescaleDBPrivate *VAR_8 = (TimescaleDBPrivate *) VAR_3->fdw_private;
   List **VAR_9 = ((void*)0);

    VAR_8
   ->appends_ordered = 1;
    VAR_8
   ->order_attno = VAR_6;





   if (VAR_4->space->num_dimensions > 1)
    VAR_9 = &VAR_8->nested_oids;

   return FUNC_5(VAR_7,
                   VAR_4,
                   VAR_0,
                   VAR_9,
                   VAR_5);
  }
  return FUNC_0(VAR_7, VAR_4, VAR_0);
 }
 else
  return FUNC_1(VAR_1, VAR_4);
}
