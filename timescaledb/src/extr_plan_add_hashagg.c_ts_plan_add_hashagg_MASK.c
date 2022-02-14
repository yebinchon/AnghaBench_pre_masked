
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


struct TYPE_28__ {scalar_t__ numOrderedAggs; scalar_t__ hasNonSerial; scalar_t__ hasNonPartial; } ;
struct TYPE_27__ {int rows; } ;
struct TYPE_26__ {scalar_t__ processed_tlist; int ** upper_targets; TYPE_2__* parse; } ;
struct TYPE_25__ {scalar_t__ groupClause; int * havingQual; int hasAggs; scalar_t__ groupingSets; } ;
struct TYPE_24__ {scalar_t__ partial_pathlist; int consider_parallel; TYPE_4__* cheapest_total_path; } ;
typedef int Size ;
typedef TYPE_1__ RelOptInfo ;
typedef TYPE_2__ Query ;
typedef TYPE_3__ PlannerInfo ;
typedef int PathTarget ;
typedef TYPE_4__ Path ;
typedef int Node ;
typedef int List ;
typedef TYPE_5__ AggClauseCosts ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (double) ;
 int FUNC_1 (TYPE_5__*,int ,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int) ;
 size_t VAR_3 ;
 int FUNC_3 (TYPE_1__*,TYPE_4__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*,TYPE_1__*,TYPE_4__*,int *,int ,int ,scalar_t__,int *,TYPE_5__*,double) ;
 int FUNC_5 (TYPE_3__*,int *,int ,TYPE_5__*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (TYPE_3__*,TYPE_1__*,TYPE_1__*,double) ;
 double FUNC_8 (TYPE_3__*,int ) ;
 int FUNC_9 (TYPE_4__*,TYPE_5__*,double) ;
 int VAR_4 ;

void
FUNC_10(PlannerInfo *VAR_5, RelOptInfo *VAR_6, RelOptInfo *VAR_7)
{
 Query *VAR_8 = VAR_5->parse;
 Path *VAR_9 = VAR_6->cheapest_total_path;
 AggClauseCosts VAR_10;
 bool VAR_11;
 double VAR_12;
 Size VAR_13;
 PathTarget *VAR_14 = VAR_5->upper_targets[VAR_3];
 bool VAR_15;

 if (VAR_8->groupingSets || !VAR_8->hasAggs || VAR_8->groupClause == VAR_2)
  return;

 FUNC_1(&VAR_10, 0, sizeof(AggClauseCosts));
 FUNC_5(VAR_5, (Node *) VAR_5->processed_tlist, VAR_0, &VAR_10);
 FUNC_5(VAR_5, VAR_8->havingQual, VAR_0, &VAR_10);

 VAR_11 = (VAR_8->groupClause != VAR_2 && VAR_10.numOrderedAggs == 0 &&
    FUNC_6(VAR_8->groupClause));

 if (!VAR_11)
  return;

 VAR_12 = FUNC_8(VAR_5, VAR_9->rows);


 if (!FUNC_0(VAR_12))
  return;

 VAR_13 = FUNC_9(VAR_9, &VAR_10, VAR_12);

 if (VAR_13 >= VAR_4 * FUNC_2(1024))
  return;

 if (!VAR_7->consider_parallel)
 {

  VAR_15 = 0;
 }
 else if (VAR_7->partial_pathlist == VAR_2)
 {

  VAR_15 = 0;
 }
 else if (VAR_10.hasNonPartial || VAR_10.hasNonSerial)
 {

  VAR_15 = 0;
 }
 else
 {

  VAR_15 = 1;
 }

 if (VAR_15)
  FUNC_7(VAR_5, VAR_6, VAR_7, VAR_12);





 FUNC_3(VAR_7,
    (Path *) FUNC_4(VAR_5,
           VAR_7,
           VAR_9,
           VAR_14,
           VAR_1,
           VAR_0,
           VAR_8->groupClause,
           (List *) VAR_8->havingQual,
           &VAR_10,
           VAR_12));
}
