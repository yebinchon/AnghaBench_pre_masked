
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int32_t ;
struct TYPE_6__ {int evenspill; int oddspill; int J; TYPE_1__* ir; } ;
struct TYPE_5__ {int s; int t; } ;
typedef TYPE_1__ IRIns ;
typedef TYPE_2__ ASMState ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int32_t FUNC_5(ASMState *VAR_2, IRIns *VAR_3)
{
  int32_t VAR_4 = VAR_3->s;
  FUNC_2(VAR_3 >= VAR_2->ir + VAR_1);
  if (!FUNC_3(VAR_4)) {
    if (FUNC_0(VAR_3->t)) {
      VAR_4 = VAR_2->evenspill;
      VAR_2->evenspill += 2;
    } else if (VAR_2->oddspill) {
      VAR_4 = VAR_2->oddspill;
      VAR_2->oddspill = 0;
    } else {
      VAR_4 = VAR_2->evenspill;
      VAR_2->oddspill = VAR_4+1;
      VAR_2->evenspill += 2;
    }
    if (VAR_2->evenspill > 256)
      FUNC_1(VAR_2->J, VAR_0);
    VAR_3->s = (uint8_t)VAR_4;
  }
  return FUNC_4(VAR_4);
}
