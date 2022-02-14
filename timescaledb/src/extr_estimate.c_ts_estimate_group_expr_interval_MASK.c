
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PlannerInfo ;
typedef int Expr ;


 double VAR_0 ;
 int FUNC_0 (double) ;
 double FUNC_1 (double) ;
 double FUNC_2 (int *,int *) ;

double
FUNC_3(PlannerInfo *VAR_1, Expr *VAR_2, double VAR_3)
{
 double VAR_4;

 if (VAR_3 <= 0)
  return VAR_0;

 VAR_4 = FUNC_2(VAR_1, VAR_2);
 if (!FUNC_0(VAR_4))
  return VAR_0;

 return FUNC_1(VAR_4 / VAR_3);
}
