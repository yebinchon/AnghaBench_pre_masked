
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_9__ {int v; } ;
struct TYPE_13__ {TYPE_1__ uv; } ;
struct TYPE_10__ {int * uvptr; } ;
struct TYPE_12__ {TYPE_2__ l; } ;
struct TYPE_11__ {int op2; scalar_t__ o; int op1; } ;
typedef int Reg ;
typedef int MRef ;
typedef TYPE_3__ IRIns ;
typedef TYPE_4__ GCfunc ;
typedef int ASMState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,int ) ;
 int VAR_9 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ,int ,int *) ;
 int FUNC_4 (int *,int ,int ,int ,int) ;
 TYPE_7__* FUNC_5 (int ) ;
 TYPE_4__* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (int *,TYPE_3__*,int ) ;
 int FUNC_11 (int *,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static void FUNC_12(ASMState *VAR_13, IRIns *VAR_14)
{

  Reg VAR_15 = FUNC_10(VAR_13, VAR_14, VAR_4);
  if (FUNC_7(VAR_14->op1)) {
    GCfunc *VAR_16 = FUNC_6(FUNC_0(VAR_14->op1));
    MRef *VAR_17 = &FUNC_5(VAR_16->l.uvptr[(VAR_14->op2 >> 8)])->uv.v;
    FUNC_3(VAR_13, VAR_7, VAR_15, VAR_17);
  } else {
    Reg VAR_18 = FUNC_11(VAR_13, VAR_4);
    Reg VAR_19 = FUNC_9(VAR_13, VAR_14->op1, VAR_4);
    if (VAR_14->o == VAR_3) {
      FUNC_4(VAR_13, VAR_6, VAR_15, VAR_18, FUNC_8(VAR_2, VAR_10));
      FUNC_1(VAR_13, VAR_0);
      FUNC_2(VAR_13, 1);
      FUNC_4(VAR_13, VAR_5, VAR_8, VAR_18, FUNC_8(VAR_2, VAR_9));
    } else {
      FUNC_4(VAR_13, VAR_7, VAR_15, VAR_18, FUNC_8(VAR_2, VAR_12));
    }
    FUNC_4(VAR_13, VAR_7, VAR_18, VAR_19,
       (int32_t)FUNC_8(VAR_1, VAR_11) + 4*(int32_t)(VAR_14->op2 >> 8));
  }
}
