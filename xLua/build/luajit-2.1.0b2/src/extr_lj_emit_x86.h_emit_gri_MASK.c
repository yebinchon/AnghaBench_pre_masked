
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int x86Op ;
typedef int x86Group ;
typedef scalar_t__ int32_t ;
struct TYPE_3__ {scalar_t__* mcp; } ;
typedef int Reg ;
typedef scalar_t__ MCode ;
typedef TYPE_1__ ASMState ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__* FUNC_3 (int ,int ,int,int,scalar_t__*,int ) ;

__attribute__((used)) static void FUNC_4(ASMState *VAR_2, x86Group VAR_3, Reg VAR_4, int32_t VAR_5)
{
  MCode *VAR_6 = VAR_2->mcp;
  x86Op VAR_7;
  if (FUNC_2(VAR_5)) {
    *--VAR_6 = (MCode)VAR_5;
    VAR_7 = FUNC_1(VAR_3);
  } else {
    VAR_6 -= 4;
    *(int32_t *)VAR_6 = VAR_5;
    VAR_7 = FUNC_0(VAR_3);
  }
  VAR_2->mcp = FUNC_3(VAR_7, VAR_1, (Reg)(VAR_3 & 7) | (VAR_4 & VAR_0), VAR_4, VAR_6, 0);
}
