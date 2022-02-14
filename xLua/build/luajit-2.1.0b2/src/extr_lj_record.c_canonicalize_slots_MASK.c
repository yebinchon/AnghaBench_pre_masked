
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int baseslot; int maxslot; int * slot; } ;
typedef TYPE_1__ jit_State ;
struct TYPE_6__ {scalar_t__ o; int op2; } ;
typedef int TRef ;
typedef TYPE_2__ IRIns ;
typedef int BCReg ;


 TYPE_2__* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(jit_State *VAR_5)
{
  BCReg VAR_6;
  if (VAR_4) return;
  for (VAR_6 = VAR_5->baseslot+VAR_5->maxslot-1; VAR_6 >= 1; VAR_6--) {
    TRef VAR_7 = VAR_5->slot[VAR_6];
    if (FUNC_3(VAR_7)) {
      IRIns *VAR_8 = FUNC_0(FUNC_4(VAR_7));
      if (!(VAR_8->o == VAR_3 && (VAR_8->op2 & VAR_1)))
 VAR_5->slot[VAR_6] = FUNC_2(FUNC_1(VAR_2), VAR_7, VAR_0);
    }
  }
}
