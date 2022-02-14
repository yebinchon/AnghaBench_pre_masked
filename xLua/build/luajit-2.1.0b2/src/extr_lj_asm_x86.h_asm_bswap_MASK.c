
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int mcp; } ;
struct TYPE_9__ {int op1; } ;
typedef int Reg ;
typedef TYPE_1__ IRIns ;
typedef TYPE_2__ ASMState ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__,int ,int,int ,int ,int) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_2__*,int,int ) ;

__attribute__((used)) static void FUNC_4(ASMState *VAR_2, IRIns *VAR_3)
{
  Reg VAR_4 = FUNC_2(VAR_2, VAR_3, VAR_0);
  VAR_2->mcp = FUNC_1(VAR_1 + ((VAR_4&7) << 24),
      FUNC_0(VAR_3, 0), VAR_4, 0, VAR_2->mcp, 1);
  FUNC_3(VAR_2, VAR_4, VAR_3->op1);
}
