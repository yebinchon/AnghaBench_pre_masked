
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int args; int opno; } ;
typedef int PlannerInfo ;
typedef TYPE_1__ OpExpr ;
typedef int Expr ;


 int VAR_0 ;
 double VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 double FUNC_1 (int *,int *) ;
 char* FUNC_2 (int ) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static double
FUNC_7(PlannerInfo *VAR_2, OpExpr *VAR_3)
{
 char *VAR_4 = FUNC_2(VAR_3->opno);
 Expr *VAR_5;
 Expr *VAR_6;
 Expr *VAR_7;

 if (FUNC_4(VAR_3->args) != 2 || FUNC_6(VAR_4) != 1)
  return VAR_1;

 VAR_5 = FUNC_3(VAR_3->args);
 VAR_6 = FUNC_5(VAR_3->args);

 if (FUNC_0(VAR_5, VAR_0))
  VAR_7 = VAR_6;
 else if (FUNC_0(VAR_6, VAR_0))
  VAR_7 = VAR_5;
 else
  return VAR_1;


 if (VAR_4[0] == '-' || VAR_4[0] == '+')
  return FUNC_1(VAR_2, VAR_7);

 return VAR_1;
}
