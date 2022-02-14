
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int args; int opno; } ;
typedef TYPE_1__ OpExpr ;
typedef scalar_t__ Oid ;
typedef int Node ;
typedef int Expr ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 char* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (char*,char*,int ) ;
 int * FUNC_8 (int *) ;

__attribute__((used)) static inline Expr *
FUNC_9(OpExpr *VAR_7)
{





 if (FUNC_5(VAR_7->args) == 2 && FUNC_0(FUNC_6(VAR_7->args), VAR_0))
 {
  Oid VAR_8 = FUNC_2((Node *) FUNC_4(VAR_7->args));
  Oid VAR_9 = FUNC_2((Node *) FUNC_6(VAR_7->args));

  if ((VAR_8 == VAR_4 && VAR_9 == VAR_2) ||
   (VAR_8 == VAR_5 && VAR_9 == VAR_2) ||
   (VAR_8 == VAR_1 && VAR_9 == VAR_2))
  {
   char *VAR_10 = FUNC_3(VAR_7->opno);

   if (FUNC_7(VAR_10, "-", VAR_3) == 0 || FUNC_7(VAR_10, "+", VAR_3) == 0)
   {
    Expr *VAR_11 = FUNC_8((Expr *) FUNC_4(VAR_7->args));

    if (FUNC_0(VAR_11, VAR_6))
     return FUNC_1(VAR_11);
   }
  }
 }
 return (Expr *) VAR_7;
}
