
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_24__ {scalar_t__ o; int r; } ;
struct TYPE_23__ {int J; } ;
struct TYPE_20__ {int marked; } ;
struct TYPE_22__ {TYPE_1__ gch; } ;
struct TYPE_21__ {int op2; int op1; } ;
typedef int Reg ;
typedef int MCLabel ;
typedef int IRRef ;
typedef TYPE_2__ IRIns ;
typedef TYPE_3__ GCobj ;
typedef int CCallInfo ;
typedef TYPE_4__ ASMState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_9__* FUNC_0 (int ) ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (TYPE_4__*,int const*,int *) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,int ,int ) ;
 int FUNC_6 (TYPE_4__*,int ,int ,int *) ;
 int FUNC_7 (TYPE_4__*,int ,int ,int ,scalar_t__) ;
 int FUNC_8 (TYPE_4__*,int ,int ) ;
 TYPE_3__* FUNC_9 (TYPE_9__*) ;
 scalar_t__ FUNC_10 (int ) ;
 int * VAR_12 ;
 int FUNC_11 (int) ;
 int VAR_13 ;
 scalar_t__ FUNC_12 (int ,int ) ;
 int FUNC_13 (TYPE_4__*,int ,int ) ;
 int FUNC_14 (TYPE_4__*,int) ;
 int FUNC_15 (TYPE_4__*,int ) ;
 int FUNC_16 (int,int ) ;
 int VAR_14 ;

__attribute__((used)) static void FUNC_17(ASMState *VAR_15, IRIns *VAR_16)
{
  const CCallInfo *VAR_17 = &VAR_12[VAR_4];
  IRRef VAR_18[2];
  MCLabel VAR_19;
  Reg VAR_20;

  FUNC_11(FUNC_0(VAR_16->op1)->o == VAR_5);
  FUNC_14(VAR_15, VAR_9);
  VAR_19 = FUNC_4(VAR_15);
  VAR_18[0] = VAR_0;
  VAR_18[1] = VAR_16->op1;
  FUNC_2(VAR_15, VAR_17, VAR_18);
  FUNC_5(VAR_15, FUNC_15(VAR_15, VAR_0), FUNC_1(VAR_15->J));
  VAR_20 = FUNC_0(VAR_16->op1)->r;
  FUNC_8(VAR_15, VAR_1, VAR_19);
  FUNC_3(VAR_15, VAR_7);
  if (FUNC_10(VAR_16->op2)) {
    GCobj *VAR_21 = FUNC_9(FUNC_0(VAR_16->op2));
    FUNC_6(VAR_15, VAR_10, VAR_11, &VAR_21->gch.marked);
  } else {
    Reg VAR_22 = FUNC_13(VAR_15, VAR_16->op2, FUNC_16(VAR_9&VAR_8, VAR_20));
    FUNC_7(VAR_15, VAR_10, VAR_11, VAR_22, (int32_t)FUNC_12(VAR_2, VAR_13));
  }
  FUNC_8(VAR_15, VAR_1, VAR_19);
  FUNC_3(VAR_15, VAR_6);
  FUNC_7(VAR_15, VAR_10, VAR_11, VAR_20,
     (int32_t)FUNC_12(VAR_3, VAR_13)-(int32_t)FUNC_12(VAR_3, VAR_14));
}
