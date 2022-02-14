
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {int ofs; } ;
struct TYPE_18__ {TYPE_1__ mrm; } ;
struct TYPE_17__ {int t; int op1; } ;
typedef int RegSet ;
typedef int Reg ;
typedef TYPE_2__ IRIns ;
typedef TYPE_3__ ASMState ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (TYPE_3__*,int ,int ) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*,int) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_3__*,int ,int,int ) ;
 int FUNC_5 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int) ;
 int FUNC_15 (TYPE_3__*,TYPE_2__*,int ) ;
 scalar_t__ FUNC_16 (int) ;
 scalar_t__ FUNC_17 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_18(ASMState *VAR_16, IRIns *VAR_17)
{
  FUNC_14(FUNC_10(VAR_17->t) || FUNC_11(VAR_17->t) || FUNC_6(VAR_17->t) ||
      (VAR_4 && FUNC_7(VAR_17->t)));
  if (FUNC_17(VAR_17)) {
    RegSet VAR_18 = FUNC_10(VAR_17->t) ? VAR_9 : VAR_10;
    Reg VAR_19 = FUNC_15(VAR_16, VAR_17, VAR_18);
    FUNC_0(VAR_16, VAR_17->op1, VAR_10);
    FUNC_4(VAR_16, VAR_19 < VAR_7 ? VAR_13 : VAR_14, VAR_19, VAR_8);
  } else {
    FUNC_0(VAR_16, VAR_17->op1, VAR_10);
  }

  VAR_16->mrm.ofs += 4;
  FUNC_1(VAR_16, FUNC_10(VAR_17->t) ? VAR_0 : VAR_1);
  if (VAR_3 && FUNC_13(VAR_17->t) >= VAR_2) {
    FUNC_14(FUNC_8(VAR_17->t) || FUNC_10(VAR_17->t));
    FUNC_5(VAR_16, VAR_5);
    FUNC_4(VAR_16, VAR_11, VAR_15, VAR_8);
  } else {
    FUNC_3(VAR_16, FUNC_12(VAR_17->t));
    FUNC_4(VAR_16, VAR_12, VAR_15, VAR_8);
  }
}
