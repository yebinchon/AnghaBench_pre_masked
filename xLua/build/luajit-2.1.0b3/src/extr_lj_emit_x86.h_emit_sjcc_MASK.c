
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ptrdiff_t ;
typedef int int8_t ;
struct TYPE_3__ {scalar_t__* mcp; } ;
typedef scalar_t__ MCode ;
typedef scalar_t__* MCLabel ;
typedef TYPE_1__ ASMState ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(ASMState *VAR_1, int VAR_2, MCLabel VAR_3)
{
  MCode *VAR_4 = VAR_1->mcp;
  ptrdiff_t VAR_5 = VAR_3 - VAR_4;
  FUNC_0(VAR_5 == (int8_t)VAR_5);
  VAR_4[-1] = (MCode)(int8_t)VAR_5;
  VAR_4[-2] = (MCode)(VAR_0+(VAR_2&15));
  VAR_1->mcp = VAR_4 - 2;
}
