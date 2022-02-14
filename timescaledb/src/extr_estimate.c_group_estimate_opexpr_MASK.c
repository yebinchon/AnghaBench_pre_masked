
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int opno; int args; } ;
typedef int PlannerInfo ;
typedef TYPE_1__ OpExpr ;
typedef int Node ;


 int VAR_0 ;
 double VAR_1 ;
 scalar_t__ FUNC_0 (double) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int * FUNC_2 (int *,int ) ;
 double FUNC_3 (int *,int *,double) ;
 double FUNC_4 (int *,int ,int *,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static double
FUNC_8(PlannerInfo *VAR_2, OpExpr *VAR_3, double VAR_4)
{
 Node *VAR_5;
 Node *VAR_6;
 double VAR_7;

 if (FUNC_6(VAR_3->args) != 2)
  return VAR_1;

 VAR_5 = FUNC_2(VAR_2, FUNC_5(VAR_3->args));
 VAR_6 = FUNC_2(VAR_2, FUNC_7(VAR_3->args));

 VAR_7 = FUNC_4(VAR_2, VAR_3->opno, VAR_5, VAR_6);
 if (FUNC_0(VAR_7))
  return VAR_7;

 if (FUNC_1(VAR_5, VAR_0))
  return FUNC_3(VAR_2, VAR_6, VAR_4);
 if (FUNC_1(VAR_6, VAR_0))
  return FUNC_3(VAR_2, VAR_5, VAR_4);
 return VAR_1;
}
