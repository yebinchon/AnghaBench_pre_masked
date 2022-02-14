
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; int * invmcp; int * mcp; scalar_t__ loopref; scalar_t__ loopinv; int * mctop; scalar_t__ realign; } ;
typedef int MCode ;
typedef TYPE_1__ ASMState ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(ASMState *VAR_3)
{
  MCode *VAR_4 = VAR_3->mctop;

  if (VAR_3->realign) {
    int VAR_5 = ((int)(intptr_t)VAR_3->realign) & 15;

    while (VAR_5-- > 0)
      *--VAR_4 = VAR_2;
    VAR_3->mctop = VAR_4;
    VAR_4 -= (VAR_3->loopinv ? 5 : 2);
  } else {
    VAR_4 -= 5;
  }
  if (VAR_3->loopref) {
    VAR_3->invmcp = VAR_3->mcp = VAR_4;
  } else {

    VAR_3->mcp = VAR_4 - (((VAR_3->flags & VAR_0) ? 7 : 6) + (VAR_1 ? 1 : 0));
    VAR_3->invmcp = ((void*)0);
  }
}
