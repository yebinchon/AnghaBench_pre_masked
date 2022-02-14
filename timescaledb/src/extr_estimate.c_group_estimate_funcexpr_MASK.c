
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int funcid; } ;
struct TYPE_6__ {double (* group_estimate ) (int *,TYPE_2__*,double) ;} ;
typedef int PlannerInfo ;
typedef TYPE_1__ FuncInfo ;
typedef TYPE_2__ FuncExpr ;


 double VAR_0 ;
 double FUNC_0 (int *,TYPE_2__*,double) ;
 TYPE_1__* FUNC_1 (int ) ;

__attribute__((used)) static double
FUNC_2(PlannerInfo *VAR_1, FuncExpr *VAR_2, double VAR_3)
{
 FuncInfo *VAR_4 = FUNC_1(VAR_2->funcid);

 if (((void*)0) != VAR_4)
  return VAR_4->group_estimate(VAR_1, VAR_2, VAR_3);
 return VAR_0;
}
