
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ nins; } ;
struct TYPE_12__ {TYPE_1__ cur; } ;
typedef TYPE_2__ jit_State ;
struct TYPE_13__ {int o; int t; scalar_t__ op2; scalar_t__ op1; int prev; } ;
typedef TYPE_3__ IRIns ;


 TYPE_3__* FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;






 int VAR_1 ;



 int VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 TYPE_3__* FUNC_5 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_6 (TYPE_2__*,TYPE_3__*,scalar_t__) ;

__attribute__((used)) static void FUNC_7(jit_State *VAR_8)
{
  IRIns *VAR_9, *VAR_10 = FUNC_0(VAR_8->cur.nins-1);
  for (VAR_9 = VAR_10 ; ; VAR_9--) {
    switch (VAR_9->o) {
    case 141:
      return;
    case 140:
    case 143: case 134: case 129: case 131:
      FUNC_4(FUNC_0(VAR_9->op1)->t);
      break;
    case 136:
      if (FUNC_2(VAR_9->t) || VAR_9->op2 == VAR_0)
 FUNC_4(FUNC_0(VAR_9->op1)->t);
      break;
    case 142: case 133: case 135: case 128: {
      IRIns *VAR_11 = FUNC_5(VAR_8, VAR_9);
      if (!VAR_11 || (FUNC_3(VAR_11->t) && !FUNC_6(VAR_8, VAR_11, VAR_9->op2)))
 FUNC_4(FUNC_0(VAR_9->op1)->t);
      FUNC_4(FUNC_0(VAR_9->op2)->t);
      break;
      }
    case 130:
      FUNC_4(FUNC_0(VAR_9->op2)->t);
      break;



    case 139:
      FUNC_4(FUNC_0(VAR_9->op1)->t);
      break;
    case 132: {
      IRIns *VAR_12 = FUNC_0(VAR_9->op1), *VAR_13 = FUNC_0(VAR_9->op2);
      VAR_12->prev = VAR_13->prev = 0;
      if (VAR_12->o == VAR_13->o &&
   (VAR_12->o == VAR_4 || VAR_12->o == VAR_3 ||
    (VAR_6 && (VAR_12->o == VAR_1 || VAR_12->o == 137))))
 break;
      FUNC_4(VAR_12->t);
      FUNC_4(VAR_13->t);
      break;
      }
    default:
      if (FUNC_2(VAR_9->t) || FUNC_1(VAR_9->t)) {
 if (VAR_9->op1 >= VAR_7) FUNC_4(FUNC_0(VAR_9->op1)->t);
 if (VAR_9->op2 >= VAR_7) FUNC_4(FUNC_0(VAR_9->op2)->t);
      }
      break;
    }
  }
}
