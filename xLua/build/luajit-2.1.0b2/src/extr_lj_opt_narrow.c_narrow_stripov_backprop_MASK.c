
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int jit_State ;
struct TYPE_9__ {int val; } ;
struct TYPE_8__ {scalar_t__ o; int op2; int op1; } ;
struct TYPE_7__ {int mode; int * sp; int * maxsp; int * J; } ;
typedef int NarrowIns ;
typedef TYPE_1__ NarrowConv ;
typedef int IRRef ;
typedef TYPE_2__ IRIns ;
typedef TYPE_3__ BPropEntry ;


 TYPE_2__* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 void* FUNC_2 (int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_3__* FUNC_3 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_4(NarrowConv *VAR_10, IRRef VAR_11, int VAR_12)
{
  jit_State *VAR_13 = VAR_10->J;
  IRIns *VAR_14 = FUNC_0(VAR_11);
  if (VAR_14->o == VAR_5 || VAR_14->o == VAR_7 ||
      (VAR_14->o == VAR_6 && (VAR_10->mode & VAR_1) == VAR_0)) {
    BPropEntry *VAR_15 = FUNC_3(VAR_10->J, VAR_11, VAR_2);
    if (VAR_15) {
      VAR_11 = VAR_15->val;
    } else if (++VAR_12 < VAR_8 && VAR_10->sp < VAR_10->maxsp) {
      NarrowIns *VAR_16 = VAR_10->sp;
      FUNC_4(VAR_10, VAR_14->op1, VAR_12);
      if (VAR_10->sp < VAR_10->maxsp) {
 FUNC_4(VAR_10, VAR_14->op2, VAR_12);
 if (VAR_10->sp < VAR_10->maxsp) {
   *VAR_10->sp++ = FUNC_2(FUNC_1(VAR_14->o - VAR_5 + VAR_4, VAR_3), VAR_11);
   return;
 }
      }
      VAR_10->sp = VAR_16;
    }
  }
  *VAR_10->sp++ = FUNC_2(VAR_9, VAR_11);
}
