
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_16__ ;
typedef struct TYPE_17__ TYPE_13__ ;


typedef size_t uint32_t ;
struct TYPE_22__ {scalar_t__ baseslot; int needsnap; scalar_t__ maxslot; scalar_t__* base; TYPE_3__* L; TYPE_13__* fn; TYPE_2__* pt; } ;
typedef TYPE_4__ jit_State ;
typedef int int32_t ;
struct TYPE_23__ {int closed; scalar_t__ dhash; } ;
struct TYPE_21__ {scalar_t__ base; int maxstack; int stack; } ;
struct TYPE_20__ {scalar_t__ flags; } ;
struct TYPE_19__ {int * uvptr; } ;
struct TYPE_18__ {TYPE_5__ uv; } ;
struct TYPE_17__ {TYPE_1__ l; } ;
typedef scalar_t__ TRef ;
typedef int IRType ;
typedef scalar_t__ IRRef ;
typedef TYPE_5__ GCupval ;
typedef scalar_t__ BCReg ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
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
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,scalar_t__,scalar_t__) ;
 TYPE_16__* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (TYPE_4__*) ;
 scalar_t__ FUNC_7 (TYPE_4__*,int) ;
 int FUNC_8 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (TYPE_4__*,TYPE_13__*) ;
 scalar_t__ FUNC_12 (TYPE_4__*,int) ;
 scalar_t__ FUNC_13 (TYPE_4__*,scalar_t__) ;
 int FUNC_14 (int) ;
 scalar_t__ FUNC_15 (TYPE_4__*,TYPE_5__*) ;
 scalar_t__ FUNC_16 (scalar_t__) ;
 scalar_t__ FUNC_17 (scalar_t__) ;
 int FUNC_18 (scalar_t__) ;
 scalar_t__ FUNC_19 (scalar_t__) ;
 int FUNC_20 (scalar_t__) ;
 scalar_t__ FUNC_21 (int ) ;
 scalar_t__ FUNC_22 (TYPE_5__*) ;

__attribute__((used)) static TRef FUNC_23(jit_State *VAR_20, uint32_t VAR_21, TRef VAR_22)
{
  GCupval *VAR_23 = &FUNC_5(VAR_20->fn->l.uvptr[VAR_21])->uv;
  TRef VAR_24 = FUNC_6(VAR_20);
  IRRef VAR_25;
  int VAR_26 = 0;
  if (FUNC_15(VAR_20, VAR_23)) {
    TRef VAR_27, VAR_28;
    FUNC_14(VAR_22 == 0);
    if (!FUNC_18(VAR_24)) {
      if (VAR_20->pt->flags >= VAR_17)
 goto noconstify;
      VAR_28 = FUNC_11(VAR_20, VAR_20->fn);
      FUNC_4(FUNC_1(VAR_7, VAR_2), VAR_24, VAR_28);



      VAR_20->base[-1] = VAR_28 | VAR_19;

      VAR_24 = VAR_28;
    }
    VAR_27 = FUNC_13(VAR_20, FUNC_22(VAR_23));
    if (VAR_27)
      return VAR_27;
  }
noconstify:

  VAR_21 = (VAR_21 << 8) | (FUNC_8(VAR_23->dhash, VAR_23->dhash + VAR_0) & 0xff);
  if (!VAR_23->closed) {
    VAR_25 = FUNC_19(FUNC_4(FUNC_1(VAR_13, VAR_4), VAR_24, VAR_21));

    if (FUNC_22(VAR_23) >= FUNC_21(VAR_20->L->stack) &&
 FUNC_22(VAR_23) < FUNC_21(VAR_20->L->maxstack)) {
      int32_t VAR_29 = (int32_t)(FUNC_22(VAR_23) - (VAR_20->L->base - VAR_20->baseslot));
      if (VAR_29 >= 0) {
 FUNC_4(FUNC_1(VAR_7, VAR_4),
        VAR_18,
        FUNC_4(FUNC_0(VAR_5, VAR_4), VAR_25,
        FUNC_12(VAR_20, (VAR_29 - 1 - VAR_16) * -8)));
 VAR_29 -= (int32_t)VAR_20->baseslot;
 if (VAR_22 == 0) {
   return FUNC_7(VAR_20, VAR_29);
 } else {
   VAR_20->base[VAR_29] = VAR_22;
   if (VAR_29 >= (int32_t)VAR_20->maxslot) VAR_20->maxslot = (BCReg)(VAR_29+1);
   return 0;
 }
      }
    }
    FUNC_4(FUNC_1(VAR_10, VAR_4),
    FUNC_4(FUNC_0(VAR_9, VAR_4), VAR_25, VAR_18),
    FUNC_12(VAR_20, (VAR_20->baseslot + VAR_20->maxslot) * 8));
  } else {
    VAR_26 = 1;
    VAR_25 = FUNC_19(FUNC_4(FUNC_1(VAR_12, VAR_4), VAR_24, VAR_21));
  }
  if (VAR_22 == 0) {
    IRType VAR_30 = FUNC_10(FUNC_22(VAR_23));
    TRef VAR_31 = FUNC_4(FUNC_1(VAR_11, VAR_30), VAR_25, 0);
    if (FUNC_9(VAR_30)) VAR_31 = FUNC_3(VAR_30);
    return VAR_31;
  } else {

    if (!VAR_15 && FUNC_17(VAR_22))
      VAR_22 = FUNC_4(FUNC_2(VAR_6), VAR_22, VAR_1);
    FUNC_4(FUNC_0(VAR_14, FUNC_20(VAR_22)), VAR_25, VAR_22);
    if (VAR_26 && FUNC_16(VAR_22))
      FUNC_4(FUNC_0(VAR_8, VAR_3), VAR_25, VAR_22);
    VAR_20->needsnap = 1;
    return 0;
  }
}
