
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int num_base_restrictions; } ;
struct TYPE_10__ {int opno; int args; } ;
struct TYPE_9__ {int * clause; } ;
struct TYPE_8__ {int useOr; int opno; int args; } ;
typedef TYPE_1__ ScalarArrayOpExpr ;
typedef TYPE_2__ RestrictInfo ;
typedef int PlannerInfo ;
typedef TYPE_3__ OpExpr ;
typedef int Node ;
typedef TYPE_4__ HypertableRestrictInfo ;
typedef int Expr ;




 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_4__*,int *,int ,int ,int ,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(HypertableRestrictInfo *VAR_2, PlannerInfo *VAR_3,
             RestrictInfo *VAR_4)
{
 bool VAR_5 = 0;

 Expr *VAR_6 = VAR_4->clause;


 if (FUNC_0((Node *) VAR_6))
  return;

 switch (FUNC_2(VAR_6))
 {
  case 129:
  {
   OpExpr *VAR_7 = (OpExpr *) VAR_6;

   VAR_5 = FUNC_1(VAR_2,
               VAR_3,
               VAR_7->args,
               VAR_7->opno,
               VAR_1,
               0);
   break;
  }

  case 128:
  {
   ScalarArrayOpExpr *VAR_8 = (ScalarArrayOpExpr *) VAR_6;

   VAR_5 = FUNC_1(VAR_2,
               VAR_3,
               VAR_8->args,
               VAR_8->opno,
               VAR_0,
               VAR_8->useOr);
   break;
  }
  default:

   break;
 }

 if (VAR_5)
  VAR_2->num_base_restrictions++;
}
