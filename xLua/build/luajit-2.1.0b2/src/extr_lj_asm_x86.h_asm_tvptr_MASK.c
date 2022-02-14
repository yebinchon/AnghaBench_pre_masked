
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_13__ ;


struct TYPE_17__ {int J; } ;
struct TYPE_16__ {int t; int i; } ;
struct TYPE_15__ {int tmptv; } ;
typedef int Reg ;
typedef int IRRef ;
typedef TYPE_1__ IRIns ;
typedef TYPE_2__ ASMState ;


 TYPE_1__* FUNC_0 (int ) ;
 TYPE_13__* FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (TYPE_2__*,int,int *) ;
 int FUNC_4 (TYPE_2__*,int,int,int ) ;
 int FUNC_5 (TYPE_2__*,int ,int,int ) ;
 int FUNC_6 (TYPE_2__*,int ,int,int ,int ) ;
 int * FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (TYPE_2__*,int ,int ) ;
 int FUNC_14 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_15 (int ,int) ;

__attribute__((used)) static void FUNC_16(ASMState *VAR_5, Reg VAR_6, IRRef VAR_7)
{
  IRIns *VAR_8 = FUNC_0(VAR_7);
  if (FUNC_10(VAR_8->t)) {

    if (FUNC_8(VAR_7))
      FUNC_3(VAR_5, VAR_6, FUNC_7(VAR_8));
    else
      FUNC_6(VAR_5, VAR_4, VAR_6|VAR_1, VAR_2, FUNC_14(VAR_5, VAR_8));
  } else {

    if (!FUNC_8(VAR_7)) {
      Reg VAR_9 = FUNC_13(VAR_5, VAR_7, FUNC_15(VAR_3, VAR_6));
      FUNC_5(VAR_5, FUNC_2(VAR_8, VAR_9), VAR_6, 0);
    } else if (!FUNC_11(VAR_8->t)) {
      FUNC_4(VAR_5, VAR_6, 0, VAR_8->i);
    }
    if (!(VAR_0 && FUNC_9(VAR_8->t)))
      FUNC_4(VAR_5, VAR_6, 4, FUNC_12(VAR_8->t));
    FUNC_3(VAR_5, VAR_6, &FUNC_1(VAR_5->J)->tmptv);
  }
}
