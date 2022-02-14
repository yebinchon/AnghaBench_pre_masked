
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_5__ {int loopinv; scalar_t__ realign; int * invmcp; int * mcp; int snapno; int J; } ;
typedef int MCode ;
typedef TYPE_1__ ASMState ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int,int *) ;
 int FUNC_2 (TYPE_1__*,int,int *) ;
 int * FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static void FUNC_5(ASMState *VAR_0, int VAR_1)
{
  MCode *VAR_2 = FUNC_3(VAR_0->J, VAR_0->snapno);
  MCode *VAR_3 = VAR_0->mcp;
  if (FUNC_0(VAR_3 == VAR_0->invmcp)) {
    VAR_0->loopinv = 1;
    *(int32_t *)(VAR_3+1) = FUNC_4(VAR_3+5, VAR_2);
    VAR_2 = VAR_3;
    VAR_1 ^= 1;
    if (VAR_0->realign) {
      FUNC_2(VAR_0, VAR_1, VAR_2);
      return;
    }
  }
  FUNC_1(VAR_0, VAR_1, VAR_2);
}
