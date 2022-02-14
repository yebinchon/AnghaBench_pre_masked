
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int len; } ;
struct TYPE_9__ {scalar_t__ op1; scalar_t__ op2; scalar_t__ o; int t; int r; } ;
typedef int Reg ;
typedef scalar_t__ IRRef ;
typedef TYPE_1__ IRIns ;
typedef TYPE_2__ GCstr ;
typedef int CCallInfo ;
typedef int ASMState ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (scalar_t__) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (int *,int const*,scalar_t__*) ;
 int FUNC_2 (int *,TYPE_1__*,int const*) ;
 int FUNC_3 (int *,int ,scalar_t__) ;
 TYPE_2__* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int * VAR_11 ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int *,scalar_t__) ;
 int FUNC_9 (int *,int,int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int *,scalar_t__) ;
 int* FUNC_12 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_13(ASMState *VAR_12, IRIns *VAR_13)
{
  const CCallInfo *VAR_14 = &VAR_11[VAR_3];
  IRRef VAR_15[3];
  IRIns *VAR_16;
  int VAR_17 = -1;
  VAR_15[0] = VAR_13->op1;
  VAR_15[1] = VAR_13->op2;
  VAR_16 = FUNC_0(VAR_13->op2);
  FUNC_7(FUNC_6(VAR_16->t));
  if (VAR_16->o == VAR_8) {
    GCstr *VAR_18 = FUNC_4(VAR_16);
    if (VAR_18->len == 1) {
      VAR_17 = FUNC_12(VAR_18)[0];
      VAR_15[1] = VAR_0;
      VAR_14 = &VAR_11[VAR_1];
    }
  } else if (FUNC_8(VAR_12, VAR_13->op2) && FUNC_10(VAR_16->r)) {
    if (VAR_16->o == VAR_10) {
      if (VAR_16->op2 == VAR_7) {
 VAR_15[1] = VAR_0;
 VAR_14 = &VAR_11[VAR_5];
      } else {
 FUNC_7(FUNC_5(FUNC_0(VAR_16->op1)->t));
 VAR_15[1] = VAR_16->op1;
 if (VAR_16->op2 == VAR_6)
   VAR_14 = &VAR_11[VAR_4];
 else
   VAR_14 = &VAR_11[VAR_1];
      }
    } else if (VAR_16->o == VAR_9) {
      VAR_15[1] = VAR_16->op1;
      VAR_15[2] = VAR_16->op2;
      VAR_14 = &VAR_11[VAR_2];
    }
  }
  FUNC_2(VAR_12, VAR_13, VAR_14);
  FUNC_1(VAR_12, VAR_14, VAR_15);
  if (VAR_15[1] == VAR_0) {
    Reg VAR_19 = FUNC_11(VAR_12, VAR_0);
    if (VAR_17 == -1)
      FUNC_3(VAR_12, VAR_19, VAR_16->op1);
    else
      FUNC_9(VAR_12, VAR_17, VAR_19);
  }
}
