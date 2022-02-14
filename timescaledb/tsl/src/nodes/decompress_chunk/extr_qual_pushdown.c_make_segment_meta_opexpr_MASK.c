
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int varcollid; int vartype; } ;
typedef TYPE_2__ Var ;
struct TYPE_9__ {TYPE_1__* compressed_rel; } ;
struct TYPE_7__ {int relid; } ;
typedef int StrategyNumber ;
typedef TYPE_3__ QualPushdownContext ;
typedef int OpExpr ;
typedef int Oid ;
typedef int Expr ;
typedef int AttrNumber ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int ,int ,int ,int,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int,int *,int ,int ,int ) ;

__attribute__((used)) static OpExpr *
FUNC_3(QualPushdownContext *VAR_2, Oid VAR_3, AttrNumber VAR_4,
       Var *VAR_5, Expr *VAR_6, StrategyNumber VAR_7)
{
 Var *VAR_8 = FUNC_1(VAR_2->compressed_rel->relid,
       VAR_4,
       VAR_5->vartype,
       -1,
       VAR_1,
       0);

 return (OpExpr *) FUNC_2(VAR_3,
         VAR_0,
         0,
         (Expr *) VAR_8,
         FUNC_0(VAR_6),
         VAR_1,
         VAR_5->varcollid);
}
