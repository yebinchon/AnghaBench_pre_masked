
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* mcp; } ;
typedef scalar_t__ MCode ;
typedef scalar_t__* MCLabel ;
typedef TYPE_1__ ASMState ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static MCLabel FUNC_0(ASMState *VAR_1, int VAR_2)
{
  MCode *VAR_3 = VAR_1->mcp;
  VAR_3[-1] = 0;
  VAR_3[-2] = (MCode)(VAR_0+(VAR_2&15));
  VAR_1->mcp = VAR_3 - 2;
  return VAR_3;
}
