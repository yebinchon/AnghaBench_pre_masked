
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_14__ {int t; } ;
struct TYPE_13__ {scalar_t__ topslot; } ;
struct TYPE_12__ {int op2; } ;
typedef int Reg ;
typedef TYPE_1__ IRIns ;
typedef scalar_t__ BCReg ;
typedef int BCIns ;
typedef TYPE_2__ ASMState ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_3 (int const) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 int FUNC_5 (TYPE_2__*,int ,int ,int,int ) ;
 int FUNC_6 (TYPE_2__*,int ,int ) ;
 void* FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (int ) ;
 int VAR_5 ;
 int FUNC_9 (void*) ;
 int FUNC_10 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static void FUNC_11(ASMState *VAR_6, IRIns *VAR_7)
{
  Reg VAR_8 = FUNC_10(VAR_6, VAR_2, VAR_3);
  void *VAR_9 = FUNC_7(FUNC_0(VAR_7->op2));
  int32_t VAR_10 = 1+VAR_1+FUNC_3(*((const BCIns *)VAR_9 - 1));
  VAR_6->topslot -= (BCReg)VAR_10;
  if ((int32_t)VAR_6->topslot < 0) VAR_6->topslot = 0;
  FUNC_8(FUNC_0(VAR_2)->t);
  FUNC_6(VAR_6, VAR_8, VAR_5);
  FUNC_4(VAR_6, VAR_8, -8*VAR_10);
  FUNC_2(VAR_6, VAR_0);
  FUNC_5(VAR_6, FUNC_1(VAR_4), VAR_8, -4, FUNC_9(VAR_9));
}
