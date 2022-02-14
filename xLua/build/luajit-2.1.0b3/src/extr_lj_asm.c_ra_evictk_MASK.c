
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int freeset; int * cost; } ;
typedef int RegSet ;
typedef size_t Reg ;
typedef int IRRef ;
typedef TYPE_1__ ASMState ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,size_t) ;
 size_t FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(ASMState *VAR_2)
{
  RegSet VAR_3;

  VAR_3 = ~VAR_2->freeset & VAR_0;
  while (VAR_3) {
    Reg VAR_4 = FUNC_6(VAR_3);
    IRRef VAR_5 = FUNC_4(VAR_2->cost[VAR_4]);
    if (FUNC_1(VAR_5) && FUNC_2(VAR_5)) {
      FUNC_3(VAR_2, VAR_5);
      FUNC_0(VAR_2);
    }
    FUNC_5(VAR_3, VAR_4);
  }

  VAR_3 = ~VAR_2->freeset & VAR_1;
  while (VAR_3) {
    Reg VAR_6 = FUNC_6(VAR_3);
    IRRef VAR_7 = FUNC_4(VAR_2->cost[VAR_6]);
    if (FUNC_1(VAR_7) && FUNC_2(VAR_7)) {
      FUNC_3(VAR_2, VAR_7);
      FUNC_0(VAR_2);
    }
    FUNC_5(VAR_3, VAR_6);
  }
}
