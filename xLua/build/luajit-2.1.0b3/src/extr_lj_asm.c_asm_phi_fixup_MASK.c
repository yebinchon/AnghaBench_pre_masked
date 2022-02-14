
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int loopsnapno; int * phireg; scalar_t__ phiset; } ;
struct TYPE_6__ {int s; int t; } ;
typedef scalar_t__ RegSet ;
typedef size_t Reg ;
typedef int IRRef ;
typedef TYPE_1__ IRIns ;
typedef TYPE_2__ ASMState ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,size_t,int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,size_t) ;
 size_t FUNC_6 (scalar_t__) ;

__attribute__((used)) static void FUNC_7(ASMState *VAR_0)
{
  RegSet VAR_1 = VAR_0->phiset;
  while (VAR_1) {
    Reg VAR_2 = FUNC_6(VAR_1);
    IRRef VAR_3 = VAR_0->phireg[VAR_2];
    IRIns *VAR_4 = FUNC_0(VAR_3);
    if (FUNC_2(VAR_4->t)) {
      FUNC_1(VAR_4->t);

      if (FUNC_4(VAR_4->s)) {
 FUNC_3(VAR_0, VAR_2, VAR_3, VAR_0->loopsnapno);
      }
    }
    FUNC_5(VAR_1, VAR_2);
  }
}
