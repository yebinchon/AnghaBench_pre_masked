
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int sinktags; scalar_t__ nk; scalar_t__ nins; } ;
struct TYPE_13__ {TYPE_1__ cur; } ;
typedef TYPE_2__ jit_State ;
struct TYPE_15__ {int irt; } ;
struct TYPE_14__ {int o; TYPE_8__ t; void* prev; scalar_t__ op2; scalar_t__ op1; } ;
typedef TYPE_3__ IRIns ;


 TYPE_3__* FUNC_0 (scalar_t__) ;
 int VAR_0 ;





 int const VAR_1 ;





 int VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_1 (int ,int) ;
 void* VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_8__) ;
 scalar_t__ FUNC_3 (TYPE_8__) ;
 int FUNC_4 (TYPE_8__) ;
 TYPE_3__* FUNC_5 (TYPE_2__*,TYPE_3__*) ;

__attribute__((used)) static void FUNC_6(jit_State *VAR_6)
{
  IRIns *VAR_7, *VAR_8 = FUNC_0(VAR_3);
  for (VAR_7 = FUNC_0(VAR_6->cur.nins-1) ; VAR_7 >= VAR_8; VAR_7--) {
    switch (VAR_7->o) {
    case 137: case 133: case 134: case 128: {
      IRIns *VAR_9 = FUNC_5(VAR_6, VAR_7);
      if (VAR_9 && !FUNC_4(VAR_9->t)) {
 int VAR_10 = (int)(VAR_7 - VAR_9);
 VAR_7->prev = FUNC_1(VAR_5, VAR_10 > 255 ? 255 : VAR_10);
      } else {
 VAR_7->prev = VAR_4;
      }
      break;
      }
    case 132:
      if (!FUNC_4(FUNC_0(VAR_7->op1)->t)) {
 VAR_7->prev = FUNC_1(VAR_5, 0);
      } else {
 FUNC_2(VAR_7->t);
 VAR_7->prev = VAR_4;
      }
      break;



    case 129: case 130:
      if (!FUNC_4(VAR_7->t)) {
 VAR_7->t.irt &= ~VAR_0;
 VAR_7->prev = FUNC_1(VAR_5, 0);
 VAR_6->cur.sinktags = 1;
      } else {
 FUNC_2(VAR_7->t);
 VAR_7->prev = VAR_4;
      }
      break;
    case 131: {
      IRIns *VAR_11 = FUNC_0(VAR_7->op2);
      if (!FUNC_4(VAR_11->t) &&
   (VAR_11->o == 129 || VAR_11->o == 130 ||
    (VAR_2 && (VAR_11->o == 136 || VAR_11->o == 135)))) {
 VAR_7->prev = FUNC_1(VAR_5, 0);
      } else {
 VAR_7->prev = VAR_4;
      }
      break;
      }
    default:
      FUNC_2(VAR_7->t);
      VAR_7->prev = VAR_4;
      break;
    }
  }
  for (VAR_7 = FUNC_0(VAR_6->cur.nk); VAR_7 < VAR_8; VAR_7++) {
    FUNC_2(VAR_7->t);
    VAR_7->prev = VAR_4;
    if (FUNC_3(VAR_7->t) && VAR_7->o != VAR_1)
      VAR_7++;
  }
}
