
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_14__ ;


struct TYPE_20__ {scalar_t__* chain; int L; } ;
typedef TYPE_1__ jit_State ;
struct TYPE_21__ {int u64; } ;
typedef TYPE_2__ cTValue ;
struct TYPE_22__ {scalar_t__ op1; scalar_t__ op2; scalar_t__ prev; scalar_t__ o; int t; } ;
struct TYPE_19__ {size_t o; int t; } ;
typedef int TValue ;
typedef scalar_t__ TRef ;
typedef scalar_t__ IRRef ;
typedef TYPE_3__ IRIns ;





 TYPE_3__* FUNC_0 (scalar_t__) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*,TYPE_3__*,TYPE_3__*) ;
 TYPE_14__* VAR_8 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (TYPE_2__*) ;
 scalar_t__ FUNC_13 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_14 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_15 (TYPE_1__*,int ) ;
 int FUNC_16 (int ,int *,TYPE_3__*) ;
 TYPE_2__* FUNC_17 (int ,int ,int *) ;
 int FUNC_18 (int) ;
 int FUNC_19 (TYPE_2__*) ;

__attribute__((used)) static TRef FUNC_20(jit_State *VAR_9, IRRef VAR_10)
{
  IRIns *VAR_11 = FUNC_0(VAR_10);
  IRRef VAR_12 = VAR_10;
  IRRef VAR_13;


  VAR_13 = VAR_9->chain[VAR_8->o+VAR_0];
  while (VAR_13 > VAR_10) {
    IRIns *VAR_14 = FUNC_0(VAR_13);
    switch (FUNC_2(VAR_9, VAR_11, FUNC_0(VAR_14->op1))) {
    case 128: break;
    case 130: VAR_12 = VAR_13; goto cselim;
    case 129: return VAR_14->op2;
    }
    VAR_13 = VAR_14->prev;
  }


  {
    IRIns *VAR_15 = (VAR_11->o == VAR_2 || VAR_11->o == VAR_1) ? FUNC_0(VAR_11->op1) : VAR_11;
    IRRef VAR_16 = VAR_15->op1;
    VAR_15 = FUNC_0(VAR_16);
    if (VAR_15->o == VAR_6 || (VAR_15->o == VAR_5 && FUNC_5(VAR_11->op2))) {




      if (VAR_11->o == VAR_1) {
 IRRef VAR_17 = VAR_9->chain[VAR_4];
 while (VAR_17 > VAR_16) {
   IRIns *VAR_18 = FUNC_0(VAR_17);
   if (FUNC_8(FUNC_0(VAR_18->op2)->t))
     goto cselim;
   VAR_17 = VAR_18->prev;
 }
      }





      while (VAR_13 > VAR_16) {
 IRIns *VAR_19 = FUNC_0(VAR_13);
 switch (FUNC_2(VAR_9, VAR_11, FUNC_0(VAR_19->op1))) {
 case 128: break;
 case 130: goto cselim;
 case 129: return VAR_19->op2;
 }
 VAR_13 = VAR_19->prev;
      }
      FUNC_18(VAR_15->o != VAR_6 || FUNC_7(VAR_8->t));
      if (FUNC_9(VAR_8->t)) {
 return FUNC_1(FUNC_11(VAR_8->t));
      } else if (FUNC_8(VAR_8->t) || (VAR_7 && FUNC_6(VAR_8->t)) ||
   FUNC_10(VAR_8->t)) {
 TValue VAR_20;
 cTValue *VAR_21;
 IRIns *VAR_22 = FUNC_0(VAR_11->op2);
 if (VAR_22->o == VAR_3) VAR_22 = FUNC_0(VAR_22->op1);
 FUNC_16(VAR_9->L, &VAR_20, VAR_22);
 VAR_21 = FUNC_17(VAR_9->L, FUNC_4(FUNC_0(VAR_15->op1)), &VAR_20);
 FUNC_18(FUNC_12(VAR_21) == FUNC_11(VAR_8->t));
 if (FUNC_8(VAR_8->t))
   return FUNC_14(VAR_9, VAR_21->u64);
 else if (VAR_7 && FUNC_6(VAR_8->t))
   return FUNC_13(VAR_9, FUNC_3(VAR_21));
 else
   return FUNC_15(VAR_9, FUNC_19(VAR_21));
      }

    }
  }

cselim:

  VAR_13 = VAR_9->chain[VAR_8->o];
  while (VAR_13 > VAR_12) {
    IRIns *VAR_23 = FUNC_0(VAR_13);
    if (VAR_23->op1 == VAR_10)
      return VAR_13;
    VAR_13 = VAR_23->prev;
  }
  return 0;
}
