
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int args; } ;
typedef TYPE_1__ FuncExpr ;
typedef int Expr ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int ) ;

__attribute__((used)) static Expr *
FUNC_6(FuncExpr *VAR_2)
{





 Expr *VAR_3;

 if (FUNC_3(VAR_2->args) != 2 || !FUNC_0(FUNC_2(VAR_2->args), VAR_0))
  return (Expr *) VAR_2;

 VAR_3 = FUNC_5(FUNC_4(VAR_2->args));

 if (!FUNC_0(VAR_3, VAR_1))
  return (Expr *) VAR_2;

 return (Expr *) FUNC_1(VAR_3);
}
