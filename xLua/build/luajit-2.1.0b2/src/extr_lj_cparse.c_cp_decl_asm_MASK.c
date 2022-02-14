
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int top; } ;
struct TYPE_10__ {int * redir; } ;
struct TYPE_9__ {scalar_t__ tok; TYPE_3__* L; int * str; } ;
typedef int GCstr ;
typedef TYPE_1__ CPState ;
typedef TYPE_2__ CPDecl ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*,char) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_3__*,char*,int ,int ) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(CPState *VAR_1, CPDecl *VAR_2)
{
  FUNC_0(VAR_2);
  FUNC_2(VAR_1);
  FUNC_1(VAR_1, '(');
  if (VAR_1->tok == VAR_0) {
    GCstr *VAR_3 = VAR_1->str;
    while (FUNC_2(VAR_1) == VAR_0) {
      FUNC_3(VAR_1->L, "%s%s", FUNC_5(VAR_3), FUNC_5(VAR_1->str));
      VAR_1->L->top--;
      VAR_3 = FUNC_4(VAR_1->L->top);
    }
    VAR_2->redir = VAR_3;
  }
  FUNC_1(VAR_1, ')');
}
