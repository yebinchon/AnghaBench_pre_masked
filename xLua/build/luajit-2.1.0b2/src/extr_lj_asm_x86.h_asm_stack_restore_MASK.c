
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_18__ {int* snapmap; } ;
struct TYPE_17__ {TYPE_4__* T; } ;
struct TYPE_16__ {int i; int t; } ;
struct TYPE_15__ {size_t mapofs; size_t nent; } ;
typedef TYPE_1__ SnapShot ;
typedef int SnapEntry ;
typedef int Reg ;
typedef size_t MSize ;
typedef int IRRef ;
typedef TYPE_2__ IRIns ;
typedef scalar_t__ BCReg ;
typedef TYPE_3__ ASMState ;


 TYPE_2__* FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int ,int,int) ;
 int FUNC_4 (TYPE_3__*,int ,int ,int) ;
 int FUNC_5 (TYPE_3__*,int ,int ,int ,int) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int) ;
 int FUNC_14 (TYPE_3__*,int ,int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (TYPE_4__*,TYPE_1__*) ;
 int FUNC_17 (int) ;
 scalar_t__ FUNC_18 (int) ;

__attribute__((used)) static void FUNC_19(ASMState *VAR_9, SnapShot *VAR_10)
{
  SnapEntry *VAR_11 = &VAR_9->T->snapmap[VAR_10->mapofs];
  SnapEntry *VAR_12 = &VAR_9->T->snapmap[FUNC_16(VAR_9->T, VAR_10)-1];
  MSize VAR_13, VAR_14 = VAR_10->nent;

  for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {
    SnapEntry VAR_15 = VAR_11[VAR_13];
    BCReg VAR_16 = FUNC_18(VAR_15);
    int32_t VAR_17 = 8*((int32_t)VAR_16-1);
    IRRef VAR_18 = FUNC_17(VAR_15);
    IRIns *VAR_19 = FUNC_0(VAR_18);
    if ((VAR_15 & VAR_7))
      continue;
    if (FUNC_10(VAR_19->t)) {
      Reg VAR_20 = FUNC_14(VAR_9, VAR_18, VAR_3);
      FUNC_5(VAR_9, VAR_8, VAR_20, VAR_2, VAR_17);
    } else {
      FUNC_13(FUNC_11(VAR_19->t) || FUNC_7(VAR_19->t) ||
   (VAR_1 && FUNC_8(VAR_19->t)));
      if (!FUNC_6(VAR_18)) {
 Reg VAR_21 = FUNC_14(VAR_9, VAR_18, FUNC_15(VAR_4, VAR_2));
 FUNC_4(VAR_9, FUNC_1(VAR_19, VAR_21), VAR_2, VAR_17);
      } else if (!FUNC_11(VAR_19->t)) {
 FUNC_3(VAR_9, VAR_2, VAR_17, VAR_19->i);
      }
      if ((VAR_15 & (VAR_5|VAR_6))) {
 if (VAR_16 != 0)
   FUNC_3(VAR_9, VAR_2, VAR_17+4, (int32_t)(*VAR_12--));
      } else {
 if (!(VAR_0 && FUNC_9(VAR_19->t)))
   FUNC_3(VAR_9, VAR_2, VAR_17+4, FUNC_12(VAR_19->t));
      }
    }
    FUNC_2(VAR_9);
  }
  FUNC_13(VAR_11 + VAR_14 == VAR_12);
}
