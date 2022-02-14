
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_13__ {int phiset; int freeset; int J; scalar_t__* phireg; } ;
struct TYPE_12__ {scalar_t__ r; int s; int t; scalar_t__ op1; scalar_t__ op2; } ;
typedef int RegSet ;
typedef size_t Reg ;
typedef scalar_t__ IRRef1 ;
typedef TYPE_1__ IRIns ;
typedef TYPE_2__ ASMState ;


 TYPE_1__* FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,size_t,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 size_t FUNC_5 (TYPE_2__*,scalar_t__,int) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 size_t FUNC_9 (TYPE_2__*,int) ;
 int FUNC_10 (scalar_t__,size_t) ;
 int FUNC_11 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_12 (int,size_t) ;

__attribute__((used)) static void FUNC_13(ASMState *VAR_5, IRIns *VAR_6)
{
  RegSet VAR_7 = ((!VAR_0 && FUNC_2(VAR_6->t)) ? VAR_3 : VAR_4) &
   ~VAR_5->phiset;
  RegSet VAR_8 = (VAR_5->freeset & VAR_7);
  IRIns *VAR_9 = FUNC_0(VAR_6->op1);
  IRIns *VAR_10 = FUNC_0(VAR_6->op2);
  if (VAR_6->r == VAR_2)
    return;

  if (FUNC_7(VAR_9->s) || FUNC_7(VAR_10->s))
    FUNC_4(VAR_5->J, VAR_1);

  if ((VAR_8 & (VAR_8-1))) {
    Reg VAR_11;
    if (FUNC_8(VAR_10->r)) {
      VAR_11 = FUNC_5(VAR_5, VAR_6->op2, VAR_7);
    } else {
      VAR_11 = FUNC_9(VAR_5, VAR_7);
      FUNC_1(VAR_5, VAR_10, VAR_11, VAR_10->r);
    }
    VAR_6->r = (uint8_t)VAR_11;
    FUNC_12(VAR_5->phiset, VAR_11);
    VAR_5->phireg[VAR_11] = (IRRef1)VAR_6->op1;
    FUNC_3(VAR_9->t);
    if (FUNC_8(VAR_9->r))
      FUNC_10(VAR_9->r, VAR_11);
  } else {

    if (FUNC_6(VAR_9->r) || FUNC_6(VAR_10->r))
      FUNC_4(VAR_5->J, VAR_1);
    FUNC_11(VAR_5, VAR_6);
    VAR_10->s = VAR_6->s;
  }
}
