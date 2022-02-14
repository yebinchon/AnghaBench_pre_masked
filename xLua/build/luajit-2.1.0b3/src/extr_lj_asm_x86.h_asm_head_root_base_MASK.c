
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int modset; } ;
struct TYPE_7__ {int r; int t; } ;
typedef int Reg ;
typedef TYPE_1__ IRIns ;
typedef TYPE_2__ ASMState ;


 TYPE_1__* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*,int ,int,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ,int) ;

__attribute__((used)) static void FUNC_6(ASMState *VAR_5)
{
  IRIns *VAR_6 = FUNC_0(VAR_0);
  Reg VAR_7 = VAR_6->r;
  if (FUNC_4(VAR_7)) {
    FUNC_3(VAR_5, VAR_7);
    if (FUNC_5(VAR_5->modset, VAR_7) || FUNC_2(VAR_6->t))
      VAR_6->r = VAR_3;
    if (VAR_7 != VAR_2)
      FUNC_1(VAR_5, VAR_4, VAR_7|VAR_1, VAR_2);
  }
}
