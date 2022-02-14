
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_24__ {int parallel_aware; } ;
struct TYPE_23__ {int * query_pathkeys; } ;
struct TYPE_22__ {scalar_t__ consider_parallel; } ;
struct TYPE_21__ {int * compressed_pathkeys; scalar_t__ can_pushdown_sort; } ;
typedef TYPE_1__ SortInfo ;
typedef TYPE_2__ RelOptInfo ;
typedef TYPE_3__ PlannerInfo ;
typedef TYPE_4__ Path ;
typedef int List ;
typedef int CompressionInfo ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,TYPE_4__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_4__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_3__*,int *,int *) ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_5 (TYPE_3__*,TYPE_2__*) ;
 TYPE_4__* FUNC_6 (TYPE_3__*,TYPE_2__*,int *,int) ;

__attribute__((used)) static void
FUNC_7(PlannerInfo *VAR_0, RelOptInfo *VAR_1, int VAR_2,
        CompressionInfo *VAR_3, SortInfo *VAR_4)
{
 Path *VAR_5;


 VAR_5 = FUNC_6(VAR_0, VAR_1, ((void*)0), 0);
 FUNC_2(VAR_1, VAR_5);


 if (VAR_1->consider_parallel && VAR_2 > 0)
 {
  VAR_5 = FUNC_6(VAR_0, VAR_1, ((void*)0), VAR_2);
  FUNC_0(VAR_5->parallel_aware);
  FUNC_1(VAR_1, VAR_5);
 }

 if (VAR_4->can_pushdown_sort)
 {





  List *VAR_6 = VAR_0->query_pathkeys;
  FUNC_3(VAR_4, VAR_0, VAR_0->query_pathkeys, VAR_3);
  VAR_0->query_pathkeys = VAR_4->compressed_pathkeys;
  FUNC_4(VAR_0, VAR_1);
  FUNC_5(VAR_0, VAR_1);
  VAR_0->query_pathkeys = VAR_6;
 }
 else
 {
  FUNC_4(VAR_0, VAR_1);
  FUNC_5(VAR_0, VAR_1);
 }
}
