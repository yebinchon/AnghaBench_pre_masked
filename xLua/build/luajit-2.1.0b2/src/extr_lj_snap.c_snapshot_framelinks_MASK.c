
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ framedepth; int pc; TYPE_1__* L; int * baseslot; } ;
typedef TYPE_2__ jit_State ;
typedef int cTValue ;
struct TYPE_7__ {int framesize; } ;
struct TYPE_5__ {int * top; int * base; } ;
typedef int SnapEntry ;
typedef scalar_t__ MSize ;
typedef int GCfunc ;
typedef int BCReg ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;
 TYPE_4__* FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (int) ;

__attribute__((used)) static BCReg FUNC_14(jit_State *VAR_1, SnapEntry *VAR_2)
{
  cTValue *VAR_3 = VAR_1->L->base - 1;
  cTValue *VAR_4 = VAR_1->L->base - VAR_1->baseslot;
  GCfunc *VAR_5 = FUNC_4(VAR_3);
  cTValue *VAR_6 = FUNC_12(VAR_5) ? (VAR_3+FUNC_11(VAR_5)->framesize) : VAR_1->L->top;
  MSize VAR_7 = 0;
  FUNC_13(!VAR_0);
  VAR_2[VAR_7++] = FUNC_1(VAR_1->pc);
  while (VAR_3 > VAR_4) {
    if (FUNC_7(VAR_3)) {
      VAR_2[VAR_7++] = FUNC_1(FUNC_8(VAR_3));
      VAR_3 = FUNC_10(VAR_3);
    } else if (FUNC_6(VAR_3)) {
      VAR_2[VAR_7++] = FUNC_0(FUNC_3(VAR_3));
      VAR_2[VAR_7++] = FUNC_1(FUNC_2(VAR_3));
      VAR_3 = FUNC_9(VAR_3);
    } else {
      FUNC_13(!FUNC_5(VAR_3));
      VAR_2[VAR_7++] = FUNC_0(FUNC_3(VAR_3));
      VAR_3 = FUNC_9(VAR_3);
      continue;
    }
    if (VAR_3 + FUNC_11(FUNC_4(VAR_3))->framesize > VAR_6)
      VAR_6 = VAR_3 + FUNC_11(FUNC_4(VAR_3))->framesize;
  }
  FUNC_13(VAR_7 == (MSize)(1 + VAR_1->framedepth));
  return (BCReg)(VAR_6 - VAR_4);
}
