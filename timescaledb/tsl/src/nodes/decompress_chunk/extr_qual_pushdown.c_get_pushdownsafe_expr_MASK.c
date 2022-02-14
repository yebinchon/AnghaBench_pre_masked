
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int test_context ;
struct TYPE_6__ {int can_pushdown; } ;
typedef TYPE_1__ QualPushdownContext ;
typedef int Node ;
typedef int Expr ;


 int FUNC_0 (TYPE_1__*,TYPE_1__ const*,int) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*) ;

__attribute__((used)) static Expr *
FUNC_2(const QualPushdownContext *VAR_0, Expr *VAR_1)
{

 QualPushdownContext VAR_2;
 Expr *VAR_3;

 FUNC_0(&VAR_2, VAR_0, sizeof(VAR_2));
 VAR_2.can_pushdown = 1;
 VAR_3 = (Expr *) FUNC_1((Node *) VAR_1, &VAR_2);
 if (VAR_2.can_pushdown)
  return VAR_3;
 return ((void*)0);
}
