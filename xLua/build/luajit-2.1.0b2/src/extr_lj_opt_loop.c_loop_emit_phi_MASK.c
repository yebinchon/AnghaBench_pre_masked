
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int nins; size_t nsnap; int * snapmap; TYPE_3__* snap; } ;
struct TYPE_9__ {size_t* chain; size_t baseslot; size_t maxslot; int * slot; TYPE_1__ cur; } ;
typedef TYPE_2__ jit_State ;
struct TYPE_11__ {size_t op1; size_t op2; scalar_t__ o; int t; } ;
struct TYPE_10__ {size_t mapofs; size_t nent; } ;
typedef TYPE_3__ SnapShot ;
typedef size_t SnapNo ;
typedef int SnapEntry ;
typedef size_t MSize ;
typedef size_t IRRef1 ;
typedef size_t IRRef ;
typedef TYPE_4__ IRIns ;


 TYPE_4__* FUNC_0 (size_t) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_2 (int ,size_t,size_t) ;
 scalar_t__ FUNC_3 (size_t) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_2__*,int ) ;
 size_t FUNC_13 (int ) ;
 size_t FUNC_14 (int ) ;

__attribute__((used)) static void FUNC_15(jit_State *VAR_7, IRRef1 *VAR_8, IRRef1 *VAR_9, IRRef VAR_10,
     SnapNo VAR_11)
{
  int VAR_12 = 0;
  IRRef VAR_13, VAR_14, VAR_15;
  IRRef VAR_16 = VAR_7->chain[VAR_2];

  for (VAR_13 = 0, VAR_14 = 0; VAR_13 < VAR_10; VAR_13++) {
    IRRef VAR_17 = VAR_9[VAR_13];
    IRRef VAR_18 = VAR_8[VAR_17];
    if (VAR_17 == VAR_18 || VAR_18 == VAR_6) {
      FUNC_5(FUNC_0(VAR_17)->t);
    } else {
      VAR_9[VAR_14++] = (IRRef1)VAR_17;
      if (!(FUNC_0(VAR_18)->op1 == VAR_17 || FUNC_0(VAR_18)->op2 == VAR_17)) {

 FUNC_9(FUNC_0(VAR_17)->t);
 VAR_12 = 1;
      }
    }
  }
  VAR_10 = VAR_14;

  if (VAR_12) {
    SnapNo VAR_19;
    for (VAR_13 = VAR_7->cur.nins-1; VAR_13 > VAR_16; VAR_13--) {
      IRIns *VAR_20 = FUNC_0(VAR_13);
      if (!FUNC_3(VAR_20->op2)) FUNC_4(FUNC_0(VAR_20->op2)->t);
      if (!FUNC_3(VAR_20->op1)) {
 FUNC_4(FUNC_0(VAR_20->op1)->t);
 if (VAR_20->op1 < VAR_16 &&
     VAR_20->o >= VAR_0 && VAR_20->o <= VAR_1) {
   VAR_20 = FUNC_0(VAR_20->op1);
   while (VAR_20->o == VAR_1) {
     if (!FUNC_3(VAR_20->op2)) FUNC_4(FUNC_0(VAR_20->op2)->t);
     if (FUNC_3(VAR_20->op1)) break;
     VAR_20 = FUNC_0(VAR_20->op1);
     FUNC_4(VAR_20->t);
   }
 }
      }
    }
    for (VAR_19 = VAR_7->cur.nsnap-1; VAR_19 >= VAR_11; VAR_19--) {
      SnapShot *VAR_21 = &VAR_7->cur.snap[VAR_19];
      SnapEntry *VAR_22 = &VAR_7->cur.snapmap[VAR_21->mapofs];
      MSize VAR_23, VAR_24 = VAR_21->nent;
      for (VAR_23 = 0; VAR_23 < VAR_24; VAR_23++) {
 IRRef VAR_25 = FUNC_13(VAR_22[VAR_23]);
 if (!FUNC_3(VAR_25)) FUNC_4(FUNC_0(VAR_25)->t);
      }
    }
  }

  VAR_15 = VAR_7->baseslot+VAR_7->maxslot;
  for (VAR_13 = 1; VAR_13 < VAR_15; VAR_13++) {
    IRRef VAR_26 = FUNC_14(VAR_7->slot[VAR_13]);
    while (!FUNC_3(VAR_26) && VAR_26 != VAR_8[VAR_26]) {
      IRIns *VAR_27 = FUNC_0(VAR_26);
      FUNC_4(VAR_27->t);
      if (FUNC_7(VAR_27->t) || FUNC_8(VAR_27->t))
 break;
      FUNC_10(VAR_27->t);
      if (VAR_10 >= VAR_4)
 FUNC_12(VAR_7, VAR_5);
      VAR_9[VAR_10++] = (IRRef1)VAR_26;
      VAR_26 = VAR_8[VAR_26];
      if (VAR_26 > VAR_16)
 break;
    }
  }

  while (VAR_12) {
    VAR_12 = 0;
    for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++) {
      IRRef VAR_28 = VAR_9[VAR_13];
      IRIns *VAR_29 = FUNC_0(VAR_28);
      if (!FUNC_6(VAR_29->t)) {
 IRIns *VAR_30 = FUNC_0(VAR_8[VAR_28]);
 if (FUNC_6(VAR_30->t)) {
   FUNC_4(VAR_30->t);
   VAR_12 = 1;
 }
      }
    }
  }

  for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++) {
    IRRef VAR_31 = VAR_9[VAR_13];
    IRIns *VAR_32 = FUNC_0(VAR_31);
    if (!FUNC_6(VAR_32->t)) {
      IRRef VAR_33 = VAR_8[VAR_31];
      if (VAR_33 > VAR_16)
 FUNC_10(FUNC_0(VAR_33)->t);
      FUNC_2(FUNC_1(VAR_3, FUNC_11(VAR_32->t)), VAR_31, VAR_33);
    } else {
      FUNC_4(VAR_32->t);
      FUNC_5(VAR_32->t);
    }
  }
}
