
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int sinktags; scalar_t__ nins; scalar_t__ nk; } ;
struct TYPE_12__ {TYPE_1__ cur; } ;
typedef TYPE_2__ jit_State ;
struct TYPE_14__ {int irt; } ;
struct TYPE_13__ {int o; void* prev; TYPE_8__ t; scalar_t__ op2; scalar_t__ op1; } ;
typedef TYPE_3__ IRIns ;


 TYPE_3__* FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int ,int) ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_8__) ;
 int FUNC_3 (TYPE_8__) ;
 TYPE_3__* FUNC_4 (TYPE_2__*,TYPE_3__*) ;

__attribute__((used)) static void FUNC_5(jit_State *VAR_4)
{
  IRIns *VAR_5, *VAR_6 = FUNC_0(VAR_4->cur.nk);
  for (VAR_5 = FUNC_0(VAR_4->cur.nins-1) ; VAR_5 >= VAR_6; VAR_5--) {
    switch (VAR_5->o) {
    case 137: case 133: case 134: case 128: {
      IRIns *VAR_7 = FUNC_4(VAR_4, VAR_5);
      if (VAR_7 && !FUNC_3(VAR_7->t)) {
 int VAR_8 = (int)(VAR_5 - VAR_7);
 VAR_5->prev = FUNC_1(VAR_3, VAR_8 > 255 ? 255 : VAR_8);
      } else {
 VAR_5->prev = VAR_2;
      }
      break;
      }
    case 132:
      if (!FUNC_3(FUNC_0(VAR_5->op1)->t)) {
 VAR_5->prev = FUNC_1(VAR_3, 0);
      } else {
 FUNC_2(VAR_5->t);
 VAR_5->prev = VAR_2;
      }
      break;



    case 129: case 130:
      if (!FUNC_3(VAR_5->t)) {
 VAR_5->t.irt &= ~VAR_0;
 VAR_5->prev = FUNC_1(VAR_3, 0);
 VAR_4->cur.sinktags = 1;
      } else {
 FUNC_2(VAR_5->t);
 VAR_5->prev = VAR_2;
      }
      break;
    case 131: {
      IRIns *VAR_9 = FUNC_0(VAR_5->op2);
      if (!FUNC_3(VAR_9->t) &&
   (VAR_9->o == 129 || VAR_9->o == 130 ||
    (VAR_1 && (VAR_9->o == 136 || VAR_9->o == 135)))) {
 VAR_5->prev = FUNC_1(VAR_3, 0);
      } else {
 VAR_5->prev = VAR_2;
      }
      break;
      }
    default:
      FUNC_2(VAR_5->t);
      VAR_5->prev = VAR_2;
      break;
    }
  }
}
