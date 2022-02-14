
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int jit_State ;
typedef int int64_t ;
typedef scalar_t__ int32_t ;
struct TYPE_7__ {scalar_t__ i; } ;
struct TYPE_6__ {scalar_t__ ot; int op2; int t; } ;
struct TYPE_5__ {int* stack; int* sp; int t; int mode; } ;
typedef int NarrowIns ;
typedef TYPE_1__ NarrowConv ;
typedef int IRRef1 ;
typedef int IRRef ;
typedef scalar_t__ IROpT ;


 TYPE_4__* FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_3 (scalar_t__,int,int) ;
 int FUNC_4 (scalar_t__,int,int ) ;
 TYPE_3__* VAR_13 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int *,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static IRRef FUNC_13(jit_State *VAR_14, NarrowConv *VAR_15)
{

  IROpT VAR_16 = FUNC_6(VAR_13->t) ? FUNC_2(VAR_7-VAR_6, 0) : 0;
  IROpT VAR_17 = VAR_13->ot;
  IRRef1 VAR_18 = VAR_13->op2;
  NarrowIns *VAR_19 = VAR_15->stack;
  NarrowIns *VAR_20 = VAR_15->sp;
  NarrowIns *VAR_21 = VAR_15->stack;
  while (VAR_19 < VAR_20) {
    NarrowIns VAR_22 = *VAR_19++;
    IROpT VAR_23 = FUNC_11(VAR_22);
    if (VAR_23 == VAR_11) {
      *VAR_21++ = VAR_22;
    } else if (VAR_23 == VAR_9) {
      *VAR_21++ = FUNC_4(VAR_17, VAR_22, VAR_18);
    } else if (VAR_23 == VAR_12) {
      FUNC_9(VAR_21 >= VAR_15->stack+1);
      VAR_21[-1] = FUNC_3(FUNC_1(VAR_8, VAR_4), VAR_21[-1],
        (VAR_4<<5)|VAR_5|VAR_3);
    } else if (VAR_23 == VAR_10) {
      FUNC_9(VAR_19 < VAR_20);
      *VAR_21++ = VAR_15->t == VAR_4 ?
       FUNC_8(VAR_14, (int64_t)(int32_t)*VAR_19++) :
       FUNC_7(VAR_14, *VAR_19++);
    } else {
      IRRef VAR_24 = VAR_15->mode;
      FUNC_9(VAR_21 >= VAR_15->stack+2);
      VAR_21--;

      if ((VAR_24 & VAR_1) == VAR_2) {
 if (VAR_19 == VAR_20 && FUNC_5(FUNC_12(VAR_21[0])) &&
   (uint32_t)FUNC_0(FUNC_12(VAR_21[0]))->i + 0x40000000u < 0x80000000u)
   VAR_16 = 0;
 else
   VAR_24 += VAR_0-VAR_2;
      }
      VAR_21[-1] = FUNC_3(VAR_23+VAR_16, VAR_21[-1], VAR_21[0]);

      if (FUNC_12(VAR_22))
 FUNC_10(VAR_14, FUNC_12(VAR_22), FUNC_12(VAR_21[-1]), VAR_24);
    }
  }
  FUNC_9(VAR_21 == VAR_15->stack+1);
  return VAR_15->stack[0];
}
