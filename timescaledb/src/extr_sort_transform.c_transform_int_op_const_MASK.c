
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
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int VAR_4 ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 char* FUNC_3 (int ) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (int ) ;
 int * FUNC_7 (int *) ;

__attribute__((used)) static inline Expr *
FUNC_8(OpExpr *VAR_5)
{
 if (FUNC_5(VAR_5->args) == 2 &&
  (FUNC_0(FUNC_6(VAR_5->args), VAR_0) || FUNC_0(FUNC_4(VAR_5->args), VAR_0)))
 {
  Oid VAR_6 = FUNC_2((Node *) FUNC_4(VAR_5->args));
  Oid VAR_7 = FUNC_2((Node *) FUNC_6(VAR_5->args));

  if ((VAR_6 == VAR_3 && VAR_7 == VAR_3) || (VAR_6 == VAR_2 && VAR_7 == VAR_2) ||
   (VAR_6 == VAR_1 && VAR_7 == VAR_1))
  {
   char *VAR_8 = FUNC_3(VAR_5->opno);

   if (VAR_8[1] == '\0')
   {
    switch (VAR_8[0])
    {
     case '-':
     case '+':
     case '*':

      if (FUNC_0(FUNC_4(VAR_5->args), VAR_0))
      {
       Expr *VAR_9 = FUNC_7((Expr *) FUNC_6(VAR_5->args));

       if (FUNC_0(VAR_9, VAR_4))
        return FUNC_1(VAR_9);
      }
      else
      {
       Expr *VAR_10 = FUNC_7((Expr *) FUNC_4(VAR_5->args));

       if (FUNC_0(VAR_10, VAR_4))
        return FUNC_1(VAR_10);
      }
      break;
     case '/':

      if (FUNC_0(FUNC_6(VAR_5->args), VAR_0))
      {
       Expr *VAR_11 = FUNC_7((Expr *) FUNC_4(VAR_5->args));

       if (FUNC_0(VAR_11, VAR_4))
        return FUNC_1(VAR_11);
      }
      break;
    }
   }
  }
 }
 return (Expr *) VAR_5;
}
