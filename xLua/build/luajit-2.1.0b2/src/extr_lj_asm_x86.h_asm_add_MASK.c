
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int flags; scalar_t__ flagmcp; scalar_t__ mcp; } ;
struct TYPE_11__ {int t; } ;
typedef TYPE_1__ IRIns ;
typedef TYPE_2__ ASMState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(ASMState *VAR_3, IRIns *VAR_4)
{
  if (FUNC_4(VAR_4->t))
    FUNC_0(VAR_3, VAR_4, VAR_1);
  else if ((VAR_3->flags & VAR_0) || VAR_3->flagmcp == VAR_3->mcp ||
    FUNC_3(VAR_4->t) || !FUNC_2(VAR_3, VAR_4))
    FUNC_1(VAR_3, VAR_4, VAR_2);
}
