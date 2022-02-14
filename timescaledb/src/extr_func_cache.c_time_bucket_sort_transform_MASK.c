
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int args; } ;
typedef TYPE_1__ FuncExpr ;
typedef int Expr ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int * FUNC_6 (int ) ;

__attribute__((used)) static Expr *
FUNC_7(FuncExpr *VAR_1)
{






 Expr *VAR_2;

 FUNC_0(FUNC_3(VAR_1->args) >= 2);




 if (!FUNC_5(VAR_1))
  return (Expr *) VAR_1;

 VAR_2 = FUNC_6(FUNC_4(VAR_1->args));

 if (!FUNC_1(VAR_2, VAR_0))
  return (Expr *) VAR_1;

 return (Expr *) FUNC_2(VAR_2);
}
