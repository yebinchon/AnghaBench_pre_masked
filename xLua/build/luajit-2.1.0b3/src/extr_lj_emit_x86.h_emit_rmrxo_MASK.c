
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int x86Op ;
typedef int x86Mode ;
typedef scalar_t__ int32_t ;
struct TYPE_3__ {scalar_t__* mcp; } ;
typedef int Reg ;
typedef scalar_t__ MCode ;
typedef TYPE_1__ ASMState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__* FUNC_1 (int ,int ,int ,int,int,int,scalar_t__*) ;

__attribute__((used)) static void FUNC_2(ASMState *VAR_4, x86Op VAR_5, Reg VAR_6, Reg VAR_7, Reg VAR_8,
         x86Mode VAR_9, int32_t VAR_10)
{
  MCode *VAR_11 = VAR_4->mcp;
  x86Mode VAR_12;
  if (VAR_10 == 0 && (VAR_7&7) != VAR_0) {
    VAR_12 = VAR_1;
  } else if (FUNC_0(VAR_10)) {
    VAR_12 = VAR_3;
    *--VAR_11 = (MCode)VAR_10;
  } else {
    VAR_12 = VAR_2;
    VAR_11 -= 4;
    *(int32_t *)VAR_11 = VAR_10;
  }
  VAR_4->mcp = FUNC_1(VAR_5, VAR_12, VAR_9, VAR_6, VAR_7, VAR_8, VAR_11);
}
