
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_6__ {scalar_t__ base; int ofs; } ;
struct TYPE_7__ {int loopinv; TYPE_1__ mrm; scalar_t__ realign; int * invmcp; int * mcp; int snapno; int J; } ;
typedef int MCode ;
typedef TYPE_2__ ASMState ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_2__*,int,int *) ;
 int FUNC_2 (TYPE_2__*,int,int *) ;
 int * FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static void FUNC_5(ASMState *VAR_2, int VAR_3)
{
  MCode *VAR_4 = FUNC_3(VAR_2->J, VAR_2->snapno);
  MCode *VAR_5 = VAR_2->mcp;
  if (FUNC_0(VAR_5 == VAR_2->invmcp)) {
    VAR_2->loopinv = 1;
    *(int32_t *)(VAR_5+1) = FUNC_4(VAR_5+5, VAR_4);
    VAR_4 = VAR_5;
    VAR_3 ^= 1;
    if (VAR_2->realign) {
      if (VAR_0 && FUNC_0(VAR_2->mrm.base == VAR_1))
 VAR_2->mrm.ofs += 2;
      FUNC_2(VAR_2, VAR_3, VAR_4);
      return;
    }
  }
  if (VAR_0 && FUNC_0(VAR_2->mrm.base == VAR_1))
    VAR_2->mrm.ofs += 6;
  FUNC_1(VAR_2, VAR_3, VAR_4);
}
