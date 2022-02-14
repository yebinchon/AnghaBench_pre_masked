
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ nactvar; int breaklist; scalar_t__ upval; int isbreakable; struct TYPE_7__* previous; } ;
struct TYPE_6__ {scalar_t__ nactvar; scalar_t__ freereg; int ls; TYPE_2__* bl; } ;
typedef TYPE_1__ FuncState ;
typedef TYPE_2__ BlockCnt ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,scalar_t__,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4 (FuncState *VAR_1) {
  BlockCnt *VAR_2 = VAR_1->bl;
  VAR_1->bl = VAR_2->previous;
  FUNC_3(VAR_1->ls, VAR_2->nactvar);
  if (VAR_2->upval)
    FUNC_0(VAR_1, VAR_0, VAR_2->nactvar, 0, 0);

  FUNC_2(!VAR_2->isbreakable || !VAR_2->upval);
  FUNC_2(VAR_2->nactvar == VAR_1->nactvar);
  VAR_1->freereg = VAR_1->nactvar;
  FUNC_1(VAR_1, VAR_2->breaklist);
}
