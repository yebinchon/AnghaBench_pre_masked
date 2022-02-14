
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ nactvar; int flags; struct TYPE_14__* prev; } ;
struct TYPE_13__ {scalar_t__ freereg; scalar_t__ nactvar; int pc; TYPE_3__* bl; TYPE_1__* ls; } ;
struct TYPE_12__ {int vtop; } ;
typedef int MSize ;
typedef TYPE_1__ LexState ;
typedef TYPE_2__ FuncState ;
typedef TYPE_3__ FuncScope ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_2__*,int ,scalar_t__,int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_3 (TYPE_1__*,TYPE_3__*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static void FUNC_6(FuncState *VAR_8)
{
  FuncScope *VAR_9 = VAR_8->bl;
  LexState *VAR_10 = VAR_8->ls;
  VAR_8->bl = VAR_9->prev;
  FUNC_5(VAR_10, VAR_9->nactvar);
  VAR_8->freereg = VAR_8->nactvar;
  FUNC_4(VAR_9->nactvar == VAR_8->nactvar);
  if ((VAR_9->flags & (VAR_5|VAR_4)) == VAR_5)
    FUNC_0(VAR_8, VAR_0, VAR_9->nactvar, 0);
  if ((VAR_9->flags & VAR_1)) {
    if ((VAR_9->flags & VAR_3)) {
      MSize VAR_11 = FUNC_2(VAR_10, VAR_6, VAR_7, VAR_8->pc);
      VAR_10->vtop = VAR_11;
      FUNC_3(VAR_10, VAR_9, VAR_11);
    } else {
      FUNC_1(VAR_10, VAR_9);
      return;
    }
  }
  if ((VAR_9->flags & VAR_2)) {
    FUNC_1(VAR_10, VAR_9);
  }
}
