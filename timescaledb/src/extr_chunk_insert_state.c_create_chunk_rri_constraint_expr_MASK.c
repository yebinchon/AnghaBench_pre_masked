
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int ccbin; } ;
struct TYPE_11__ {TYPE_2__* rd_att; } ;
struct TYPE_10__ {int ** ri_ConstraintExprs; } ;
struct TYPE_9__ {TYPE_1__* constr; } ;
struct TYPE_8__ {int num_check; TYPE_5__* check; } ;
typedef TYPE_3__ ResultRelInfo ;
typedef TYPE_4__* Relation ;
typedef int List ;
typedef int ExprState ;
typedef int Expr ;
typedef TYPE_5__ ConstrCheck ;


 int FUNC_0 (int) ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int ) ;

__attribute__((used)) static inline void
FUNC_5(ResultRelInfo *VAR_0, Relation VAR_1)
{
 int VAR_2, VAR_3;
 ConstrCheck *VAR_4;

 FUNC_0(VAR_1->rd_att->constr != ((void*)0) && VAR_0->ri_ConstraintExprs == ((void*)0));

 VAR_2 = VAR_1->rd_att->constr->num_check;
 VAR_4 = VAR_1->rd_att->constr->check;
 VAR_0->ri_ConstraintExprs = (ExprState **) FUNC_2(VAR_2 * sizeof(ExprState *));

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
 {
  Expr *VAR_5 = FUNC_4(VAR_4[VAR_3].ccbin);

  VAR_0->ri_ConstraintExprs[VAR_3] = FUNC_3(VAR_5);
 }

}
