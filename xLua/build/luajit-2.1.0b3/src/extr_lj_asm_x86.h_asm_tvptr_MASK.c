
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_19__ ;
typedef struct TYPE_21__ TYPE_18__ ;


struct TYPE_26__ {TYPE_19__* J; } ;
struct TYPE_25__ {int i; int t; } ;
struct TYPE_23__ {int hi; int lo; } ;
struct TYPE_24__ {TYPE_1__ u32; } ;
struct TYPE_22__ {int L; } ;
struct TYPE_21__ {int tmptv; } ;
typedef TYPE_2__ TValue ;
typedef int Reg ;
typedef int IRRef ;
typedef TYPE_3__ IRIns ;
typedef TYPE_4__ ASMState ;


 TYPE_3__* FUNC_0 (int ) ;
 TYPE_18__* FUNC_1 (TYPE_19__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_3__*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (TYPE_4__*,int,int *) ;
 int FUNC_4 (TYPE_4__*,int,int,int) ;
 int FUNC_5 (TYPE_4__*,int ,int,int ) ;
 int FUNC_6 (TYPE_4__*,int ,int,int,int) ;
 int FUNC_7 (TYPE_4__*,int) ;
 int * FUNC_8 (TYPE_3__*) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,TYPE_2__*,TYPE_3__*) ;
 int FUNC_16 (TYPE_4__*,int ,int ) ;
 int FUNC_17 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_18 (int ,int) ;

__attribute__((used)) static void FUNC_19(ASMState *VAR_7, Reg VAR_8, IRRef VAR_9)
{
  IRIns *VAR_10 = FUNC_0(VAR_9);
  if (FUNC_12(VAR_10->t)) {

    if (FUNC_9(VAR_9))
      FUNC_3(VAR_7, VAR_8, FUNC_8(VAR_10));
    else
      FUNC_6(VAR_7, VAR_5, VAR_8|VAR_1, VAR_2, FUNC_17(VAR_7, VAR_10));
  } else {
    if (!FUNC_9(VAR_9)) {
      Reg VAR_11 = FUNC_16(VAR_7, VAR_9, FUNC_18(VAR_3, VAR_8));
      FUNC_5(VAR_7, FUNC_2(VAR_10, VAR_11), VAR_8, 0);
    } else if (!FUNC_13(VAR_10->t)) {
      FUNC_4(VAR_7, VAR_8, 0, VAR_10->i);
    }
    if (!(VAR_0 && FUNC_11(VAR_10->t)))
      FUNC_4(VAR_7, VAR_8, 4, FUNC_14(VAR_10->t));

    FUNC_3(VAR_7, VAR_8, &FUNC_1(VAR_7->J)->tmptv);
  }
}
