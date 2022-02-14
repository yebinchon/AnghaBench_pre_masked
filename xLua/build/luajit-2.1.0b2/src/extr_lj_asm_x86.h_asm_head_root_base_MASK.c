
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int modset; } ;
struct TYPE_7__ {scalar_t__ r; int t; } ;
typedef scalar_t__ Reg ;
typedef TYPE_1__ IRIns ;
typedef TYPE_2__ ASMState ;


 TYPE_1__* FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_6(ASMState *VAR_4)
{
  IRIns *VAR_5 = FUNC_0(VAR_0);
  Reg VAR_6 = VAR_5->r;
  if (FUNC_4(VAR_6)) {
    FUNC_3(VAR_4, VAR_6);
    if (FUNC_5(VAR_4->modset, VAR_6) || FUNC_2(VAR_5->t))
      VAR_5->r = VAR_2;
    if (VAR_6 != VAR_1)
      FUNC_1(VAR_4, VAR_3, VAR_6, VAR_1);
  }
}
