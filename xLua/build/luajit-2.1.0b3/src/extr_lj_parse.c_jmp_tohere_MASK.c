
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int jpc; int pc; int lasttarget; } ;
typedef TYPE_1__ FuncState ;
typedef int BCPos ;


 int FUNC_0 (TYPE_1__*,int *,int ) ;

__attribute__((used)) static void FUNC_1(FuncState *VAR_0, BCPos VAR_1)
{
  VAR_0->lasttarget = VAR_0->pc;
  FUNC_0(VAR_0, &VAR_0->jpc, VAR_1);
}
