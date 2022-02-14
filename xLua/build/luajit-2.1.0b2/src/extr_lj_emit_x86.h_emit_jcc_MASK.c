
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_3__ {int* mcp; } ;
typedef int MCode ;
typedef TYPE_1__ ASMState ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int*,int*) ;

__attribute__((used)) static void FUNC_1(ASMState *VAR_1, int VAR_2, MCode *VAR_3)
{
  MCode *VAR_4 = VAR_1->mcp;
  *(int32_t *)(VAR_4-4) = FUNC_0(VAR_4, VAR_3);
  VAR_4[-5] = (MCode)(VAR_0+(VAR_2&15));
  VAR_4[-6] = 0x0f;
  VAR_1->mcp = VAR_4 - 6;
}
