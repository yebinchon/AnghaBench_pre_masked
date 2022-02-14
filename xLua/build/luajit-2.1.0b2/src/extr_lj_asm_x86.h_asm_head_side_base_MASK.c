
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int freeset; int modset; } ;
struct TYPE_9__ {scalar_t__ r; int t; } ;
typedef int RegSet ;
typedef scalar_t__ Reg ;
typedef TYPE_1__ IRIns ;
typedef TYPE_2__ ASMState ;


 TYPE_1__* FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,scalar_t__,int ) ;
 int FUNC_2 (TYPE_2__*,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,scalar_t__) ;
 scalar_t__ FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static RegSet FUNC_8(ASMState *VAR_4, IRIns *VAR_5, RegSet VAR_6)
{
  IRIns *VAR_7 = FUNC_0(VAR_0);
  Reg VAR_8 = VAR_7->r;
  if (FUNC_5(VAR_8)) {
    FUNC_4(VAR_4, VAR_8);
    if (FUNC_7(VAR_4->modset, VAR_8) || FUNC_3(VAR_7->t))
      VAR_7->r = VAR_1;
    if (VAR_5->r == VAR_8) {
      FUNC_6(VAR_6, VAR_8);
    } else if (FUNC_5(VAR_5->r) && FUNC_7(VAR_4->freeset, VAR_5->r)) {
      FUNC_6(VAR_6, VAR_5->r);
      FUNC_2(VAR_4, VAR_2, VAR_8, VAR_5->r);
    } else {
      FUNC_1(VAR_4, VAR_8, VAR_3);
    }
  }
  return VAR_6;
}
