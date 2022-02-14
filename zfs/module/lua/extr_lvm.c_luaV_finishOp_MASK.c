
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int top; TYPE_4__* ci; } ;
typedef TYPE_3__ lua_State ;
struct TYPE_10__ {int base; int * savedpc; } ;
struct TYPE_11__ {TYPE_1__ l; } ;
struct TYPE_13__ {int top; TYPE_2__ u; } ;
typedef int StkId ;
typedef int OpCode ;
typedef int Instruction ;
typedef TYPE_4__ CallInfo ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;







 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_3__*,int,int ) ;
 int FUNC_8 (TYPE_3__*,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (TYPE_3__*,int,int) ;
 int FUNC_11 (TYPE_3__*,int,int ) ;
 int FUNC_12 (int ) ;

void FUNC_13 (lua_State *VAR_3) {
  CallInfo *VAR_4 = VAR_3->ci;
  StkId VAR_5 = VAR_4->u.l.base;
  Instruction VAR_6 = *(VAR_4->u.l.savedpc - 1);
  OpCode VAR_7 = FUNC_3(VAR_6);
  switch (VAR_7) {
    case 147: case 131: case 136: case 144:
    case 137: case 135: case 128: case 139:
    case 141: case 142: case 134: {
      FUNC_11(VAR_3, VAR_5 + FUNC_0(VAR_6), --VAR_3->top);
      break;
    }
    case 140: case 138: case 143: {
      int VAR_8 = !FUNC_6(VAR_3->top - 1);
      VAR_3->top--;

      FUNC_9(!FUNC_4(FUNC_1(VAR_6)));
      if (VAR_7 == 140 &&
          FUNC_12(FUNC_7(VAR_3, VAR_5 + FUNC_1(VAR_6), VAR_2)))
        VAR_8 = !VAR_8;
      FUNC_9(FUNC_3(*VAR_4->u.l.savedpc) == VAR_0);
      if (VAR_8 != FUNC_0(VAR_6))
        VAR_4->u.l.savedpc++;
      break;
    }
    case 145: {
      StkId VAR_9 = VAR_3->top - 1;
      int VAR_10 = FUNC_1(VAR_6);
      int VAR_11 = FUNC_5(VAR_9 - 1 - (VAR_5 + VAR_10));
      FUNC_10(VAR_3, VAR_9 - 2, VAR_9);
      if (VAR_11 > 1) {
        VAR_3->top = VAR_9 - 1;
        FUNC_8(VAR_3, VAR_11);
      }

      FUNC_10(VAR_3, VAR_4->u.l.base + FUNC_0(VAR_6), VAR_3->top - 1);
      VAR_3->top = VAR_4->top;
      break;
    }
    case 129: {
      FUNC_9(FUNC_3(*VAR_4->u.l.savedpc) == VAR_1);
      VAR_3->top = VAR_4->top;
      break;
    }
    case 146: {
      if (FUNC_2(VAR_6) - 1 >= 0)
        VAR_3->top = VAR_4->top;
      break;
    }
    case 130: case 132: case 133:
      break;
    default: FUNC_9(0);
  }
}
