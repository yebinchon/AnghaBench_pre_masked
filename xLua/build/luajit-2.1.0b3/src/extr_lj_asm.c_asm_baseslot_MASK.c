
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* T; } ;
struct TYPE_7__ {size_t mapofs; int nent; } ;
struct TYPE_6__ {int* snapmap; } ;
typedef TYPE_2__ SnapShot ;
typedef int SnapEntry ;
typedef int MSize ;
typedef scalar_t__ BCReg ;
typedef TYPE_3__ ASMState ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static BCReg FUNC_1(ASMState *VAR_2, SnapShot *VAR_3, int *VAR_4)
{
  SnapEntry *VAR_5 = &VAR_2->T->snapmap[VAR_3->mapofs];
  MSize VAR_6;
  for (VAR_6 = VAR_3->nent; VAR_6 > 0; VAR_6--) {
    SnapEntry VAR_7 = VAR_5[VAR_6-1];
    if ((VAR_7 & VAR_1)) {
      *VAR_4 = 1;
      return FUNC_0(VAR_7) - VAR_0;
    }
  }
  return 0;
}
