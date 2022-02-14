
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef void* uint64_t ;
typedef int lua_Number ;
struct TYPE_18__ {int L; } ;
typedef TYPE_1__ jit_State ;
typedef int int32_t ;
struct TYPE_22__ {void** gpr; int * fpr; int * spill; } ;
struct TYPE_21__ {TYPE_3__* ir; } ;
struct TYPE_20__ {scalar_t__ o; scalar_t__ op2; size_t op1; int prev; int t; } ;
struct TYPE_19__ {void* u64; } ;
typedef TYPE_2__ TValue ;
typedef int SnapNo ;
typedef int RegSP ;
typedef size_t Reg ;
typedef int IRType1 ;
typedef size_t IRRef ;
typedef TYPE_3__ IRIns ;
typedef TYPE_4__ GCtrace ;
typedef int GCobj ;
typedef scalar_t__ GCSize ;
typedef TYPE_5__ ExitState ;
typedef int BloomFilter ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (int ,size_t) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (size_t) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,TYPE_2__*,TYPE_3__*) ;
 int FUNC_11 (int) ;
 scalar_t__ FUNC_12 (size_t) ;
 scalar_t__ FUNC_13 (size_t) ;
 size_t FUNC_14 (int ) ;
 size_t FUNC_15 (int ) ;
 int FUNC_16 (int ,TYPE_2__*,int *,int ) ;
 int FUNC_17 (TYPE_2__*,int ) ;
 int FUNC_18 (TYPE_2__*,int ) ;
 int FUNC_19 (TYPE_2__*,int ) ;
 int FUNC_20 (TYPE_4__*,int ,size_t,int ) ;

__attribute__((used)) static void FUNC_21(jit_State *VAR_5, GCtrace *VAR_6, ExitState *VAR_7,
       SnapNo VAR_8, BloomFilter VAR_9,
       IRRef VAR_10, TValue *VAR_11)
{
  IRIns *VAR_12 = &VAR_6->ir[VAR_10];
  IRType1 VAR_13 = VAR_12->t;
  RegSP VAR_14 = VAR_12->prev;
  if (FUNC_3(VAR_10)) {
    FUNC_10(VAR_5->L, VAR_11, VAR_12);
    return;
  }
  if (FUNC_0(FUNC_1(VAR_9, VAR_10)))
    VAR_14 = FUNC_20(VAR_6, VAR_8, VAR_10, VAR_14);
  if (FUNC_12(FUNC_15(VAR_14))) {
    int32_t *VAR_15 = &VAR_7->spill[FUNC_15(VAR_14)];
    if (FUNC_5(VAR_13)) {
      FUNC_17(VAR_11, *VAR_15);

    } else if (FUNC_7(VAR_13)) {
      VAR_11->u64 = *(uint64_t *)VAR_15;






    } else {
      FUNC_11(!FUNC_8(VAR_13));
      FUNC_16(VAR_5->L, VAR_11, (GCobj *)(uintptr_t)*(GCSize *)VAR_15, FUNC_9(VAR_13));
    }
  } else {
    Reg VAR_16 = FUNC_14(VAR_14);
    if (FUNC_13(VAR_16)) {
      FUNC_11(VAR_12->o == VAR_1 && VAR_12->op2 == VAR_0);
      FUNC_21(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_12->op1, VAR_11);
      if (VAR_2) FUNC_18(VAR_11, (lua_Number)FUNC_2(VAR_11));
      return;
    } else if (FUNC_5(VAR_13)) {
      FUNC_17(VAR_11, (int32_t)VAR_7->gpr[VAR_16-VAR_4]);

    } else if (FUNC_7(VAR_13)) {
      FUNC_18(VAR_11, VAR_7->fpr[VAR_16-VAR_3]);






    } else if (FUNC_8(VAR_13)) {
      FUNC_19(VAR_11, FUNC_9(VAR_13));
    } else {
      FUNC_16(VAR_5->L, VAR_11, (GCobj *)VAR_7->gpr[VAR_16-VAR_4], FUNC_9(VAR_13));
    }
  }
}
