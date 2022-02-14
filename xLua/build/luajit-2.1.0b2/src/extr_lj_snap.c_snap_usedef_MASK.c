
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_11__ {TYPE_6__* pt; TYPE_1__* L; } ;
typedef TYPE_3__ jit_State ;
struct TYPE_13__ {int sizebc; } ;
struct TYPE_10__ {int nextgc; } ;
struct TYPE_12__ {TYPE_2__ gch; } ;
struct TYPE_9__ {scalar_t__ base; int openupval; } ;
typedef TYPE_4__ GCobj ;
typedef scalar_t__ BCReg ;
typedef int BCOp ;
typedef int const BCIns ;
 int VAR_0 ;
 int VAR_1 ;
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
 int VAR_17 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int const) ;
 scalar_t__ FUNC_3 (int const) ;
 scalar_t__ FUNC_4 (int const) ;
 scalar_t__ FUNC_5 (int const) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int const) ;
 int FUNC_8 (int const) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_4__*) ;
 TYPE_4__* FUNC_13 (int ) ;
 int FUNC_14 (int) ;
 int FUNC_15 (scalar_t__*,int,scalar_t__) ;
 int const* FUNC_16 (TYPE_6__*) ;
 size_t FUNC_17 (int ) ;

__attribute__((used)) static BCReg FUNC_18(jit_State *VAR_21, uint8_t *VAR_22,
    const BCIns *VAR_23, BCReg VAR_24)
{
  BCReg VAR_25;
  GCobj *VAR_26;

  if (VAR_24 == 0) return 0;




  FUNC_15(VAR_22, 1, VAR_24);



  VAR_26 = FUNC_13(VAR_21->L->openupval);
  while (VAR_26) {
    if (FUNC_17(FUNC_12(VAR_26)) < VAR_21->L->base) break;
    VAR_22[FUNC_17(FUNC_12(VAR_26)) - VAR_21->L->base] = 0;
    VAR_26 = FUNC_13(VAR_26->gch.nextgc);
  }





  FUNC_14(VAR_23 >= FUNC_16(VAR_21->pt) && VAR_23 < FUNC_16(VAR_21->pt) + VAR_21->pt->sizebc);
  for (;;) {
    BCIns VAR_27 = *VAR_23++;
    BCOp VAR_28 = FUNC_8(VAR_27);
    switch (FUNC_10(VAR_28)) {
    case 128: VAR_22[(FUNC_3(VAR_27))] &= ~1; break;
    default: break;
    }
    switch (FUNC_11(VAR_28)) {
    case 128: VAR_22[(FUNC_4(VAR_27))] &= ~1; break;
    case 129:
      FUNC_14(VAR_28 == VAR_3);
      for (VAR_25 = FUNC_3(VAR_27); VAR_25 <= FUNC_4(VAR_27); VAR_25++) VAR_22[(VAR_25)] &= ~1;
      for (; VAR_25 < VAR_24; VAR_25++) VAR_22[(VAR_25)] *= 3;
      break;
    case 131:
    handle_jump: {
      BCReg VAR_29 = FUNC_2(VAR_27);
      if (VAR_28 >= VAR_4 && VAR_28 <= VAR_10) VAR_29 += VAR_18;
      else if (VAR_28 >= VAR_8 && VAR_28 <= VAR_11) VAR_29 += FUNC_3(VAR_23[-2])-1;
      else if (VAR_28 == VAR_16) { VAR_23 += FUNC_7(VAR_27); break; }
      for (VAR_25 = VAR_29; VAR_25 < VAR_24; VAR_25++) VAR_22[(VAR_25)] *= 3;
      return VAR_29 < VAR_24 ? VAR_29 : VAR_24;
      }
    case 130:
      if (VAR_28 == VAR_10 || VAR_28 == VAR_11 || VAR_28 == VAR_12) {
 goto handle_jump;
      } else if (FUNC_6(VAR_28)) {
 BCReg VAR_30 = VAR_28 == VAR_14 ? VAR_24 : (FUNC_2(VAR_27) + FUNC_5(VAR_27)-1);
 for (VAR_25 = 0; VAR_25 < FUNC_2(VAR_27); VAR_25++) VAR_22[(VAR_25)] *= 3;
 for (; VAR_25 < VAR_30; VAR_25++) VAR_22[(VAR_25)] &= ~1;
 for (; VAR_25 < VAR_24; VAR_25++) VAR_22[(VAR_25)] *= 3;
 return 0;
      }
      break;
    case 132: return VAR_24;
    default: break;
    }
    switch (FUNC_9(VAR_28)) {
    case 128: VAR_22[(FUNC_2(VAR_27))] &= ~1; break;
    case 133:
       if (!(VAR_28 == VAR_6 || VAR_28 == VAR_5)) VAR_22[(FUNC_2(VAR_27))] *= 3;
       break;
    case 134:
      if (VAR_28 >= VAR_0 && VAR_28 <= VAR_17) {
 BCReg VAR_31 = (VAR_28 == VAR_0 || VAR_28 == VAR_1 || FUNC_4(VAR_27) == 0) ?
      VAR_24 : (FUNC_2(VAR_27) + FUNC_4(VAR_27)+VAR_19);
 if (VAR_19) VAR_22[(FUNC_2(VAR_27)+1)] *= 3;
 VAR_25 = FUNC_2(VAR_27) - ((VAR_28 == VAR_7 || VAR_28 == VAR_9) ? 3 : 0);
 for (; VAR_25 < VAR_31; VAR_25++) VAR_22[(VAR_25)] &= ~1;
 for (; VAR_25 < VAR_24; VAR_25++) VAR_22[(VAR_25)] *= 3;
 if (VAR_28 == VAR_2 || VAR_28 == VAR_1) {
   for (VAR_25 = 0; VAR_25 < FUNC_2(VAR_27); VAR_25++) VAR_22[(VAR_25)] *= 3;
   return 0;
 }
      } else if (VAR_28 == VAR_13) {
 for (VAR_25 = FUNC_2(VAR_27); VAR_25 <= FUNC_5(VAR_27); VAR_25++) VAR_22[(VAR_25)] *= 3;
      } else if (VAR_28 == VAR_15) {
 for (VAR_25 = FUNC_2(VAR_27)-1; VAR_25 < VAR_24; VAR_25++) VAR_22[(VAR_25)] &= ~1;
      }
      break;
    default: break;
    }
    FUNC_14(VAR_23 >= FUNC_16(VAR_21->pt) && VAR_23 < FUNC_16(VAR_21->pt) + VAR_21->pt->sizebc);
  }




  return 0;
}
