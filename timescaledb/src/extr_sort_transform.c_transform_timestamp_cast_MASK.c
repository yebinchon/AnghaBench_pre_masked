
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int args; } ;
typedef TYPE_1__ FuncExpr ;
typedef int Expr ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int ) ;

__attribute__((used)) static Expr *
FUNC_5(FuncExpr *VAR_1)
{
 Expr *VAR_2;

 if (FUNC_3(VAR_1->args) != 1)
  return (Expr *) VAR_1;

 VAR_2 = FUNC_4(FUNC_2(VAR_1->args));
 if (!FUNC_0(VAR_2, VAR_0))
  return (Expr *) VAR_1;

 return (Expr *) FUNC_1(VAR_2);
}
