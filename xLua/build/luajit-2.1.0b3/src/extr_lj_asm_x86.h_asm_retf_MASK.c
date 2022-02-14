
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_17__ {int t; } ;
struct TYPE_16__ {scalar_t__ topslot; } ;
struct TYPE_15__ {int op2; } ;
typedef int Reg ;
typedef TYPE_1__ IRIns ;
typedef scalar_t__ BCReg ;
typedef int BCIns ;
typedef TYPE_2__ ASMState ;


 int VAR_0 ;
 TYPE_5__* FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_3 (int const) ;
 int FUNC_4 (TYPE_2__*,int,int) ;
 int FUNC_5 (TYPE_2__*,int ,int,int,int ) ;
 int FUNC_6 (TYPE_2__*,int,int ) ;
 int FUNC_7 (TYPE_2__*,int ,int,int,int) ;
 int FUNC_8 (TYPE_2__*,int,int ) ;
 void* FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (int ) ;
 int VAR_7 ;
 int FUNC_11 (void*) ;
 int FUNC_12 (TYPE_2__*,int ,int ) ;
 int FUNC_13 (TYPE_2__*,int ) ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (void*) ;

__attribute__((used)) static void FUNC_16(ASMState *VAR_8, IRIns *VAR_9)
{
  Reg VAR_10 = FUNC_12(VAR_8, VAR_2, VAR_4);



  void *VAR_11 = FUNC_9(FUNC_0(VAR_9->op2));
  int32_t VAR_12 = 1+VAR_1+FUNC_3(*((const BCIns *)VAR_11 - 1));
  VAR_8->topslot -= (BCReg)VAR_12;
  if ((int32_t)VAR_8->topslot < 0) VAR_8->topslot = 0;
  FUNC_10(FUNC_0(VAR_2)->t);
  FUNC_8(VAR_8, VAR_10, VAR_7);
  FUNC_4(VAR_8, VAR_10, -8*VAR_12);
  FUNC_2(VAR_8, VAR_0);




  FUNC_5(VAR_8, FUNC_1(VAR_6), VAR_10, -4, FUNC_11(VAR_11));

}
