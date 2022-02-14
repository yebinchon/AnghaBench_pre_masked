
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int freeset; int modset; } ;
struct TYPE_9__ {int r; int t; } ;
typedef int RegSet ;
typedef int Reg ;
typedef TYPE_1__ IRIns ;
typedef TYPE_2__ ASMState ;


 TYPE_1__* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,int,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (TYPE_2__*,int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int ,int) ;
 scalar_t__ FUNC_7 (int ,int) ;

__attribute__((used)) static RegSet FUNC_8(ASMState *VAR_5, IRIns *VAR_6, RegSet VAR_7)
{
  IRIns *VAR_8 = FUNC_0(VAR_0);
  Reg VAR_9 = VAR_8->r;
  if (FUNC_5(VAR_9)) {
    FUNC_4(VAR_5, VAR_9);
    if (FUNC_7(VAR_5->modset, VAR_9) || FUNC_3(VAR_8->t))
      VAR_8->r = VAR_2;
    if (VAR_6->r == VAR_9) {
      FUNC_6(VAR_7, VAR_9);
    } else if (FUNC_5(VAR_6->r) && FUNC_7(VAR_5->freeset, VAR_6->r)) {

      FUNC_6(VAR_7, VAR_6->r);
      FUNC_2(VAR_5, VAR_3, VAR_9|VAR_1, VAR_6->r);
    } else {
      FUNC_1(VAR_5, VAR_9, VAR_4);
    }
  }
  return VAR_7;
}
