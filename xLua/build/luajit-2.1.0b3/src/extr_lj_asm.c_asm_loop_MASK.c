
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int * mcp; int realign; int * mcloop; scalar_t__ fuseref; scalar_t__ sectref; int * invmcp; int flagmcp; scalar_t__ gcsteps; int snapno; int loopsnapno; } ;
typedef int MCode ;
typedef TYPE_1__ ASMState ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_8(ASMState *VAR_0)
{
  MCode *VAR_1;

  VAR_0->loopsnapno = VAR_0->snapno;
  if (VAR_0->gcsteps)
    FUNC_2(VAR_0);

  VAR_0->flagmcp = *(VAR_0->invmcp = ((void*)0));
  VAR_0->sectref = 0;
  if (!FUNC_7(VAR_0)) VAR_0->fuseref = 0;
  FUNC_5(VAR_0);
  VAR_1 = VAR_0->mcp;
  FUNC_4(VAR_0);
  FUNC_3(VAR_0);
  VAR_0->mcloop = VAR_0->mcp;
  FUNC_0((VAR_0, "===== LOOP ====="));
  if (!VAR_0->realign) FUNC_1();
  if (VAR_0->mcp != VAR_1)
    FUNC_6(VAR_0, VAR_1);
}
