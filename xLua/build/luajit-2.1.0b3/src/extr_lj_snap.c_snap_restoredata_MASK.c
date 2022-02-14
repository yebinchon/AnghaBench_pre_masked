
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ lua_Number ;
typedef scalar_t__ int8_t ;
typedef int int64_t ;
typedef scalar_t__ int32_t ;
typedef scalar_t__ int16_t ;
struct TYPE_9__ {int * fpr; int * gpr; scalar_t__* spill; } ;
struct TYPE_8__ {TYPE_1__* ir; } ;
struct TYPE_7__ {scalar_t__ o; scalar_t__ op2; size_t op1; int t; scalar_t__ i; int prev; } ;
typedef int SnapNo ;
typedef int RegSP ;
typedef size_t Reg ;
typedef size_t IRRef ;
typedef TYPE_1__ IRIns ;
typedef TYPE_2__ GCtrace ;
typedef TYPE_3__ ExitState ;
typedef int CTSize ;
typedef int BloomFilter ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_1 (int ,size_t) ;
 scalar_t__ FUNC_2 (size_t) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (size_t) ;
 scalar_t__ FUNC_6 (size_t) ;
 size_t FUNC_7 (int ) ;
 size_t FUNC_8 (int ) ;
 int FUNC_9 (TYPE_2__*,int ,size_t,int ) ;

__attribute__((used)) static void FUNC_10(GCtrace *VAR_9, ExitState *VAR_10,
        SnapNo VAR_11, BloomFilter VAR_12,
        IRRef VAR_13, void *VAR_14, CTSize VAR_15)
{
  IRIns *VAR_16 = &VAR_9->ir[VAR_13];
  RegSP VAR_17 = VAR_16->prev;
  int32_t *VAR_18;
  uint64_t VAR_19;
  if (FUNC_2(VAR_13)) {
    if (VAR_16->o == VAR_3 || VAR_16->o == VAR_2) {
      VAR_18 = (int32_t *)&VAR_16[1];
    } else if (VAR_15 == 8) {
      VAR_19 = (uint64_t)(uint32_t)VAR_16->i;
      VAR_18 = (int32_t *)&VAR_19;
    } else {
      VAR_18 = &VAR_16->i;
    }
  } else {
    if (FUNC_0(FUNC_1(VAR_12, VAR_13)))
      VAR_17 = FUNC_9(VAR_9, VAR_11, VAR_13, VAR_17);
    if (FUNC_5(FUNC_8(VAR_17))) {
      VAR_18 = &VAR_10->spill[FUNC_8(VAR_17)];
      if (VAR_15 == 8 && !FUNC_3(VAR_16->t)) {
 VAR_19 = (uint64_t)(uint32_t)*VAR_18;
 VAR_18 = (int32_t *)&VAR_19;
      }
    } else {
      Reg VAR_20 = FUNC_7(VAR_17);
      if (FUNC_6(VAR_20)) {

 FUNC_4(VAR_15 == 8 && VAR_16->o == VAR_1 && VAR_16->op2 == VAR_0);
 FUNC_10(VAR_9, VAR_10, VAR_11, VAR_12, VAR_16->op1, VAR_14, 4);
 *(lua_Number *)VAR_14 = (lua_Number)*(int32_t *)VAR_14;
 return;
      }
      VAR_18 = (int32_t *)&VAR_10->gpr[VAR_20-VAR_8];

      if (VAR_20 >= VAR_6) {
 VAR_18 = (int32_t *)&VAR_10->fpr[VAR_20-VAR_7];






 if (VAR_5 && VAR_15 == 4) VAR_18++;

      } else

      if (VAR_4 && VAR_5 && VAR_15 == 4) VAR_18++;
    }
  }
  FUNC_4(VAR_15 == 1 || VAR_15 == 2 || VAR_15 == 4 || VAR_15 == 8);
  if (VAR_15 == 4) *(int32_t *)VAR_14 = *VAR_18;
  else if (VAR_15 == 8) *(int64_t *)VAR_14 = *(int64_t *)VAR_18;
  else if (VAR_15 == 1) *(int8_t *)VAR_14 = (int8_t)*VAR_18;
  else *(int16_t *)VAR_14 = (int16_t)*VAR_18;
}
