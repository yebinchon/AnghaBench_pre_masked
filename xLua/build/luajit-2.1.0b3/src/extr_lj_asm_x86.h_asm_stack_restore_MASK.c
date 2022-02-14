
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_29__ {int* snapmap; } ;
struct TYPE_28__ {TYPE_1__* J; TYPE_8__* T; } ;
struct TYPE_27__ {int i; int t; } ;
struct TYPE_26__ {size_t mapofs; size_t nent; } ;
struct TYPE_24__ {int hi; int lo; } ;
struct TYPE_25__ {TYPE_2__ u32; } ;
struct TYPE_23__ {int L; } ;
typedef TYPE_3__ TValue ;
typedef TYPE_4__ SnapShot ;
typedef int SnapEntry ;
typedef int Reg ;
typedef size_t MSize ;
typedef int IRRef ;
typedef TYPE_5__ IRIns ;
typedef scalar_t__ BCReg ;
typedef TYPE_6__ ASMState ;


 TYPE_5__* FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_5__*,int ) ;
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
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (TYPE_6__*,int) ;
 int FUNC_4 (TYPE_6__*,int ,int,int) ;
 int FUNC_5 (TYPE_6__*,int ,int ,int) ;
 int FUNC_6 (TYPE_6__*,int ,int ,int ,int) ;
 int FUNC_7 (TYPE_6__*,int) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,TYPE_3__*,TYPE_5__*) ;
 int FUNC_17 (int) ;
 int FUNC_18 (TYPE_6__*,int ,int ) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (TYPE_8__*,TYPE_4__*) ;
 int FUNC_21 (int) ;
 scalar_t__ FUNC_22 (int) ;
 scalar_t__ FUNC_23 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_24(ASMState *VAR_15, SnapShot *VAR_16)
{
  SnapEntry *VAR_17 = &VAR_15->T->snapmap[VAR_16->mapofs];

  SnapEntry *VAR_18 = &VAR_15->T->snapmap[FUNC_20(VAR_15->T, VAR_16)-1-VAR_2];

  MSize VAR_19, VAR_20 = VAR_16->nent;

  for (VAR_19 = 0; VAR_19 < VAR_20; VAR_19++) {
    SnapEntry VAR_21 = VAR_17[VAR_19];
    BCReg VAR_22 = FUNC_22(VAR_21);
    int32_t VAR_23 = 8*((int32_t)VAR_22-1-VAR_2);
    IRRef VAR_24 = FUNC_21(VAR_21);
    IRIns *VAR_25 = FUNC_0(VAR_24);
    if ((VAR_21 & VAR_10))
      continue;
    if (FUNC_13(VAR_25->t)) {
      Reg VAR_26 = FUNC_18(VAR_15, VAR_24, VAR_6);
      FUNC_6(VAR_15, VAR_12, VAR_26, VAR_5, VAR_23);
    } else {
      FUNC_17(FUNC_14(VAR_25->t) || FUNC_10(VAR_25->t) ||
   (VAR_1 && FUNC_11(VAR_25->t)));
      if (!FUNC_8(VAR_24)) {
 Reg VAR_27 = FUNC_18(VAR_15, VAR_24, FUNC_19(VAR_7, VAR_5));
 FUNC_5(VAR_15, FUNC_1(VAR_25, VAR_27), VAR_5, VAR_23);
      } else if (!FUNC_14(VAR_25->t)) {
 FUNC_4(VAR_15, VAR_5, VAR_23, VAR_25->i);

      }
      if ((VAR_21 & (VAR_8|VAR_9))) {

 if (VAR_22 != 0)
   FUNC_4(VAR_15, VAR_5, VAR_23+4, (int32_t)(*VAR_18--));


      } else {
 if (!(VAR_0 && FUNC_12(VAR_25->t)))
   FUNC_4(VAR_15, VAR_5, VAR_23+4, FUNC_15(VAR_25->t));

      }
    }
    FUNC_2(VAR_15);
  }
  FUNC_17(VAR_17 + VAR_20 == VAR_18);
}
