
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int x86Op ;
typedef int x86Group ;
typedef int int32_t ;
typedef int Reg ;
typedef int ASMState ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_6(ASMState *VAR_0, x86Group VAR_1, Reg VAR_2, int32_t VAR_3,
         int32_t VAR_4)
{
  x86Op VAR_5;
  if (FUNC_2(VAR_4)) {
    FUNC_4(VAR_0, VAR_4);
    VAR_5 = FUNC_1(VAR_1);
  } else {
    FUNC_3(VAR_0, VAR_4);
    VAR_5 = FUNC_0(VAR_1);
  }
  FUNC_5(VAR_0, VAR_5, (Reg)(VAR_1 & 7), VAR_2, VAR_3);
}
