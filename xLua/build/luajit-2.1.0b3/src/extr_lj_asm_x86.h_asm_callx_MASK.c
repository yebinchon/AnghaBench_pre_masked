
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_14__ {int flags; scalar_t__ func; } ;
struct TYPE_13__ {scalar_t__ o; int op1; int op2; } ;
typedef int RegSet ;
typedef int Reg ;
typedef int IRRef ;
typedef TYPE_1__ IRIns ;
typedef TYPE_2__ CCallInfo ;
typedef int ASMState ;
typedef scalar_t__ ASMFunction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *,TYPE_1__*,int ) ;
 int FUNC_3 (int *,TYPE_1__*,TYPE_2__*,int *) ;
 int FUNC_4 (int *,TYPE_2__*,int *) ;
 int FUNC_5 (int *,TYPE_2__*,int *) ;
 int FUNC_6 (int *,TYPE_1__*,TYPE_2__*) ;
 int FUNC_7 (int *,int ,int ,int ) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int ,int) ;

__attribute__((used)) static void FUNC_10(ASMState *VAR_9, IRIns *VAR_10)
{
  IRRef VAR_11[VAR_2*2];
  CCallInfo VAR_12;
  IRRef VAR_13;
  IRIns *VAR_14;
  int32_t VAR_15 = 0;
  VAR_12.flags = FUNC_1(VAR_9, VAR_10);
  FUNC_3(VAR_9, VAR_10, &VAR_12, VAR_11);
  FUNC_6(VAR_9, VAR_10, &VAR_12);





  VAR_13 = VAR_10->op2; VAR_14 = FUNC_0(VAR_13);
  if (VAR_14->o == VAR_3) { VAR_13 = VAR_14->op1; VAR_14 = FUNC_0(VAR_13); }
  VAR_12.func = (ASMFunction)FUNC_2(VAR_9, VAR_14, VAR_13);
  if (!(void *)VAR_12.func) {

    RegSet VAR_16 = (VAR_5 & ~VAR_6);
    Reg VAR_17 = FUNC_9(VAR_9, VAR_13, VAR_16);
    if (VAR_4) FUNC_8(VAR_9, VAR_15);
    FUNC_7(VAR_9, VAR_7, VAR_8, VAR_17);
  } else if (VAR_4) {
    FUNC_8(VAR_9, VAR_15);
  }
  FUNC_5(VAR_9, &VAR_12, VAR_11);
}
