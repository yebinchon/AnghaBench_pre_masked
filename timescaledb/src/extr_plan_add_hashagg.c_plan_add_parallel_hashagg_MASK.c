
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;


struct TYPE_32__ {double rows; double parallel_workers; } ;
struct TYPE_31__ {scalar_t__ exprs; } ;
struct TYPE_30__ {TYPE_4__** upper_targets; TYPE_2__* parse; } ;
struct TYPE_29__ {int * havingQual; int groupClause; scalar_t__ hasAggs; } ;
struct TYPE_28__ {int partial_pathlist; } ;
typedef int Size ;
typedef TYPE_1__ RelOptInfo ;
typedef TYPE_2__ Query ;
typedef TYPE_3__ PlannerInfo ;
typedef TYPE_4__ PathTarget ;
typedef TYPE_5__ Path ;
typedef int Node ;
typedef int List ;
typedef int AggClauseCosts ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (double) ;
 int FUNC_1 (int *,int ,int) ;
 int * VAR_3 ;
 int FUNC_2 (int) ;
 size_t VAR_4 ;
 int FUNC_3 (TYPE_1__*,TYPE_5__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_5__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*,TYPE_1__*,TYPE_5__*,TYPE_4__*,int ,int ,int ,int *,int *,double) ;
 scalar_t__ FUNC_6 (TYPE_3__*,TYPE_1__*,TYPE_5__*,TYPE_4__*,int *,double*) ;
 int FUNC_7 (TYPE_3__*,int *,int ,int *) ;
 TYPE_5__* FUNC_8 (int ) ;
 double FUNC_9 (TYPE_3__*,double) ;
 int FUNC_10 (TYPE_5__*,int *,double) ;
 TYPE_4__* FUNC_11 (TYPE_3__*,TYPE_4__*) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_12(PlannerInfo *VAR_6, RelOptInfo *VAR_7, RelOptInfo *VAR_8,
        double VAR_9)
{
 Query *VAR_10 = VAR_6->parse;
 Path *VAR_11 = FUNC_8(VAR_7->partial_pathlist);
 PathTarget *VAR_12 = VAR_6->upper_targets[VAR_4];
 PathTarget *VAR_13 = FUNC_11(VAR_6, VAR_12);
 AggClauseCosts VAR_14;
 AggClauseCosts VAR_15;
 Size VAR_16;
 double VAR_17;
 Path *VAR_18;
 double VAR_19 = FUNC_9(VAR_6, VAR_11->rows);


 if (!FUNC_0(VAR_19))
  return;

 FUNC_1(&VAR_14, 0, sizeof(AggClauseCosts));
 FUNC_1(&VAR_15, 0, sizeof(AggClauseCosts));

 if (VAR_10->hasAggs)
 {

  FUNC_7(VAR_6,
        (Node *) VAR_13->exprs,
        VAR_1,
        &VAR_14);


  FUNC_7(VAR_6,
        (Node *) VAR_12->exprs,
        VAR_0,
        &VAR_15);
  FUNC_7(VAR_6, VAR_10->havingQual, VAR_0, &VAR_15);
 }

 VAR_16 = FUNC_10(VAR_11,
                &VAR_14,
                VAR_19);





 if (VAR_16 >= VAR_5 * FUNC_2(1024))
  return;

 FUNC_3(VAR_8,
      (Path *) FUNC_5(VAR_6,
             VAR_8,
             VAR_11,
             VAR_13,
             VAR_2,
             VAR_1,
             VAR_10->groupClause,
             VAR_3,
             &VAR_14,
             VAR_19));

 if (!VAR_8->partial_pathlist)
  return;

 VAR_18 = (Path *) FUNC_8(VAR_8->partial_pathlist);

 VAR_17 = VAR_18->rows * VAR_18->parallel_workers;

 VAR_18 = (Path *) FUNC_6(VAR_6,
              VAR_8,
              VAR_18,
              VAR_13,
              ((void*)0),
              &VAR_17);
 FUNC_4(VAR_8,
    (Path *) FUNC_5(VAR_6,
           VAR_8,
           VAR_18,
           VAR_12,
           VAR_2,
           VAR_0,
           VAR_10->groupClause,
           (List *) VAR_10->havingQual,
           &VAR_15,
           VAR_9));
}
