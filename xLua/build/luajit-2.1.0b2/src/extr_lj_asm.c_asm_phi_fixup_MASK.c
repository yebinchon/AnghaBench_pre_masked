
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_8__ {TYPE_1__* T; int ir; int J; int loopsnapno; int * phireg; scalar_t__ phiset; } ;
struct TYPE_7__ {int s; scalar_t__ r; int t; } ;
struct TYPE_6__ {int ir; } ;
typedef scalar_t__ RegSet ;
typedef size_t Reg ;
typedef int IRRef ;
typedef TYPE_2__ IRIns ;
typedef TYPE_3__ ASMState ;


 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__,size_t) ;
 size_t FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(ASMState *VAR_3)
{
  RegSet VAR_4 = VAR_3->phiset;
  while (VAR_4) {
    Reg VAR_5 = FUNC_8(VAR_4);
    IRRef VAR_6 = VAR_3->phireg[VAR_5];
    IRIns *VAR_7 = FUNC_0(VAR_6);
    if (FUNC_3(VAR_7->t)) {
      FUNC_2(VAR_7->t);

      if (FUNC_6(VAR_7->s)) {
 IRRef VAR_8;
 FUNC_5(VAR_3->J, FUNC_1(VAR_1, VAR_0), VAR_6, VAR_3->loopsnapno);
 VAR_8 = FUNC_9(FUNC_4(VAR_3->J));
 VAR_3->ir = VAR_3->T->ir;
 FUNC_0(VAR_8)->r = (uint8_t)VAR_5;
 FUNC_0(VAR_8)->s = VAR_2;
      }
    }
    FUNC_7(VAR_4, VAR_5);
  }
}
