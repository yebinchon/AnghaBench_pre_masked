
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int jit_State ;
struct TYPE_4__ {int irt; } ;
struct TYPE_5__ {scalar_t__ prev; scalar_t__ op12; int o; TYPE_1__ t; } ;
typedef int TRef ;
typedef int IRRef ;
typedef TYPE_2__ IRIns ;


 TYPE_2__* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int) ;

TRef FUNC_5(jit_State *VAR_5)
{
  IRRef VAR_6 = FUNC_2(VAR_5);
  IRIns *VAR_7 = FUNC_0(VAR_6);
  FUNC_4(FUNC_3(VAR_0) == VAR_4);
  VAR_7->t.irt = VAR_0;
  VAR_7->o = VAR_3 ? VAR_2 : VAR_1;
  VAR_7->op12 = 0;
  VAR_7->prev = 0;
  return FUNC_1(VAR_6, VAR_0);
}
