
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_15__ ;
typedef struct TYPE_16__ TYPE_12__ ;


typedef size_t uint32_t ;
struct TYPE_21__ {scalar_t__ baseslot; int needsnap; scalar_t__ maxslot; scalar_t__* base; TYPE_3__* L; TYPE_12__* fn; TYPE_2__* pt; } ;
typedef TYPE_4__ jit_State ;
typedef size_t int32_t ;
struct TYPE_22__ {int closed; scalar_t__ dhash; } ;
struct TYPE_20__ {scalar_t__ base; int maxstack; int stack; } ;
struct TYPE_19__ {scalar_t__ flags; } ;
struct TYPE_18__ {int * uvptr; } ;
struct TYPE_17__ {TYPE_5__ uv; } ;
struct TYPE_16__ {TYPE_1__ l; } ;
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
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,scalar_t__,scalar_t__) ;
 TYPE_15__* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (TYPE_4__*) ;
 scalar_t__ FUNC_7 (TYPE_4__*,size_t) ;
 int FUNC_8 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (TYPE_4__*,TYPE_12__*) ;
 scalar_t__ FUNC_12 (TYPE_4__*,scalar_t__) ;
 int FUNC_13 (int) ;
 scalar_t__ FUNC_14 (TYPE_4__*,TYPE_5__*) ;
 scalar_t__ FUNC_15 (scalar_t__) ;
 scalar_t__ FUNC_16 (scalar_t__) ;
 int FUNC_17 (scalar_t__) ;
 scalar_t__ FUNC_18 (scalar_t__) ;
 int FUNC_19 (scalar_t__) ;
 scalar_t__ FUNC_20 (int ) ;
 scalar_t__ FUNC_21 (TYPE_5__*) ;

__attribute__((used)) static TRef FUNC_22(jit_State *VAR_15, uint32_t VAR_16, TRef VAR_17)
{
  GCupval *VAR_18 = &FUNC_5(VAR_15->fn->l.uvptr[VAR_16])->uv;
  TRef VAR_19 = FUNC_6(VAR_15);
  IRRef VAR_20;
  int VAR_21 = 0;
  if (FUNC_14(VAR_15, VAR_18)) {
    TRef VAR_22, VAR_23;
    FUNC_13(VAR_17 == 0);
    if (!FUNC_17(VAR_19)) {
      if (VAR_15->pt->flags >= VAR_13)
 goto noconstify;
      VAR_23 = FUNC_11(VAR_15, VAR_15->fn);
      FUNC_4(FUNC_1(VAR_6, VAR_2), VAR_19, VAR_23);
      VAR_15->base[-1] = VAR_14 | VAR_23;
      VAR_19 = VAR_23;
    }
    VAR_22 = FUNC_12(VAR_15, FUNC_21(VAR_18));
    if (VAR_22)
      return VAR_22;
  }
noconstify:

  VAR_16 = (VAR_16 << 8) | (FUNC_8(VAR_18->dhash, VAR_18->dhash + VAR_0) & 0xff);
  if (!VAR_18->closed) {

    if (FUNC_21(VAR_18) >= FUNC_20(VAR_15->L->stack) &&
 FUNC_21(VAR_18) < FUNC_20(VAR_15->L->maxstack)) {
      int32_t VAR_24 = (int32_t)(FUNC_21(VAR_18) - (VAR_15->L->base - VAR_15->baseslot));
      if (VAR_24 >= 0) {
 VAR_24 -= (int32_t)VAR_15->baseslot;

 if (VAR_17 == 0) {
   return FUNC_7(VAR_15, VAR_24);
 } else {
   VAR_15->base[VAR_24] = VAR_17;
   if (VAR_24 >= (int32_t)VAR_15->maxslot) VAR_15->maxslot = (BCReg)(VAR_24+1);
   return 0;
 }
      }
    }
    VAR_20 = FUNC_18(FUNC_4(FUNC_1(VAR_10, VAR_4), VAR_19, VAR_16));
  } else {
    VAR_21 = 1;
    VAR_20 = FUNC_18(FUNC_4(FUNC_1(VAR_9, VAR_4), VAR_19, VAR_16));
  }
  if (VAR_17 == 0) {
    IRType VAR_25 = FUNC_10(FUNC_21(VAR_18));
    TRef VAR_26 = FUNC_4(FUNC_1(VAR_8, VAR_25), VAR_20, 0);
    if (FUNC_9(VAR_25)) VAR_26 = FUNC_3(VAR_25);
    return VAR_26;
  } else {

    if (!VAR_12 && FUNC_16(VAR_17))
      VAR_17 = FUNC_4(FUNC_2(VAR_5), VAR_17, VAR_1);
    FUNC_4(FUNC_0(VAR_11, FUNC_19(VAR_17)), VAR_20, VAR_17);
    if (VAR_21 && FUNC_15(VAR_17))
      FUNC_4(FUNC_0(VAR_7, VAR_3), VAR_20, VAR_17);
    VAR_15->needsnap = 1;
    return 0;
  }
}
