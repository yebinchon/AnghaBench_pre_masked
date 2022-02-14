
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Var ;
typedef int PlannerInfo ;
typedef int OpExpr ;
typedef int Expr ;


 double VAR_0 ;


 double FUNC_0 (int *,int *) ;
 double FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static double
FUNC_3(PlannerInfo *VAR_1, Expr *VAR_2)
{
 switch (FUNC_2(VAR_2))
 {
  case 128:
   return FUNC_1(VAR_1, (Var *) VAR_2);
  case 129:
   return FUNC_0(VAR_1, (OpExpr *) VAR_2);
  default:
   return VAR_0;
 }
}
