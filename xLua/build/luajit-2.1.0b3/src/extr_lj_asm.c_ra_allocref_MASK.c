
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_10__ {int freeset; scalar_t__ loopref; int modset; int * cost; } ;
struct TYPE_9__ {int t; scalar_t__ r; } ;
typedef int RegSet ;
typedef size_t Reg ;
typedef scalar_t__ IRRef ;
typedef TYPE_1__ IRIns ;
typedef TYPE_2__ ASMState ;


 TYPE_1__* FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 size_t FUNC_7 (TYPE_2__*,int) ;
 size_t FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (TYPE_2__*,size_t) ;
 int FUNC_12 (TYPE_2__*,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int,size_t) ;
 size_t FUNC_15 (int) ;
 size_t FUNC_16 (int) ;
 scalar_t__ FUNC_17 (int,size_t) ;

__attribute__((used)) static Reg FUNC_18(ASMState *VAR_2, IRRef VAR_3, RegSet VAR_4)
{
  IRIns *VAR_5 = FUNC_0(VAR_3);
  RegSet VAR_6 = VAR_2->freeset & VAR_4;
  Reg VAR_7;
  FUNC_6(FUNC_10(VAR_5->r));
  if (VAR_6) {

    if (FUNC_9(VAR_5->r)) {
      VAR_7 = FUNC_8(VAR_5->r);
      if (FUNC_17(VAR_6, VAR_7))
 goto found;

      if (FUNC_17(VAR_4, VAR_7) && FUNC_3(FUNC_13(VAR_2->cost[VAR_7]))) {
 FUNC_12(VAR_2, FUNC_13(VAR_2->cost[VAR_7]));
 goto found;
      }
      FUNC_1((VAR_2, "hintmiss  $f $r", VAR_3, VAR_7));
    }

    if (VAR_3 < VAR_2->loopref && !FUNC_4(VAR_5->t)) {
      if ((VAR_6 & ~VAR_2->modset))
 VAR_6 &= ~VAR_2->modset;
      VAR_7 = FUNC_15(VAR_6);
    } else {

      if (VAR_0 > 8 && (VAR_6 & ~VAR_1))
 VAR_6 &= ~VAR_1;
      VAR_7 = FUNC_16(VAR_6);
    }
  } else {
    VAR_7 = FUNC_7(VAR_2, VAR_4);
  }
found:
  FUNC_1((VAR_2, "alloc     $f $r", VAR_3, VAR_7));
  VAR_5->r = (uint8_t)VAR_7;
  FUNC_14(VAR_2->freeset, VAR_7);
  FUNC_11(VAR_2, VAR_7);
  VAR_2->cost[VAR_7] = FUNC_2(VAR_3, FUNC_5(VAR_5->t));
  return VAR_7;
}
