
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
 int VAR_9 ;
 int FUNC_1 (int *,int ) ;
 int VAR_10 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ,int,int *) ;
 int FUNC_4 (int *,int ,int,int,int) ;
 TYPE_7__* FUNC_5 (int ) ;
 TYPE_4__* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (int *,TYPE_3__*,int ) ;
 int FUNC_11 (int *,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static void FUNC_12(ASMState *VAR_14, IRIns *VAR_15)
{
  Reg VAR_16 = FUNC_10(VAR_14, VAR_15, VAR_5);
  if (FUNC_7(VAR_15->op1)) {
    GCfunc *VAR_17 = FUNC_6(FUNC_0(VAR_15->op1));
    MRef *VAR_18 = &FUNC_5(VAR_17->l.uvptr[(VAR_15->op2 >> 8)])->uv.v;
    FUNC_3(VAR_14, VAR_8, VAR_16|VAR_4, VAR_18);
  } else {
    Reg VAR_19 = FUNC_11(VAR_14, VAR_5);
    Reg VAR_20 = FUNC_9(VAR_14, VAR_15->op1, VAR_5);
    if (VAR_15->o == VAR_3) {
      FUNC_4(VAR_14, VAR_7, VAR_16|VAR_4, VAR_19, FUNC_8(VAR_2, VAR_11));
      FUNC_1(VAR_14, VAR_0);
      FUNC_2(VAR_14, 1);
      FUNC_4(VAR_14, VAR_6, VAR_9, VAR_19, FUNC_8(VAR_2, VAR_10));
    } else {
      FUNC_4(VAR_14, VAR_8, VAR_16|VAR_4, VAR_19, FUNC_8(VAR_2, VAR_13));
    }
    FUNC_4(VAR_14, VAR_8, VAR_19|VAR_4, VAR_20,
       (int32_t)FUNC_8(VAR_1, VAR_12) +
       (int32_t)sizeof(MRef) * (int32_t)(VAR_15->op2 >> 8));
  }
}
