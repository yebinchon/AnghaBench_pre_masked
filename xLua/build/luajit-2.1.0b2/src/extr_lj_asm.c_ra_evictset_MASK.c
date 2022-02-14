
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int modset; int freeset; int * cost; } ;
typedef int RegSet ;
typedef size_t Reg ;
typedef TYPE_1__ ASMState ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,size_t) ;
 size_t FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(ASMState *VAR_1, RegSet VAR_2)
{
  RegSet VAR_3;
  VAR_1->modset |= VAR_2;

  VAR_3 = (VAR_2 & ~VAR_1->freeset) & VAR_0;
  while (VAR_3) {
    Reg VAR_4 = FUNC_4(VAR_3);
    FUNC_1(VAR_1, FUNC_2(VAR_1->cost[VAR_4]));
    FUNC_3(VAR_3, VAR_4);
    FUNC_0(VAR_1);
  }

  VAR_3 = (VAR_2 & ~VAR_1->freeset);
  while (VAR_3) {
    Reg VAR_5 = FUNC_4(VAR_3);
    FUNC_1(VAR_1, FUNC_2(VAR_1->cost[VAR_5]));
    FUNC_3(VAR_3, VAR_5);
    FUNC_0(VAR_1);
  }
}
