
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
typedef int BCReg ;
typedef TYPE_3__ ASMState ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static BCReg FUNC_1(ASMState *VAR_1, SnapShot *VAR_2, int *VAR_3)
{
  SnapEntry *VAR_4 = &VAR_1->T->snapmap[VAR_2->mapofs];
  MSize VAR_5;
  for (VAR_5 = VAR_2->nent; VAR_5 > 0; VAR_5--) {
    SnapEntry VAR_6 = VAR_4[VAR_5-1];
    if ((VAR_6 & VAR_0)) {
      *VAR_3 = 1;
      return FUNC_0(VAR_6);
    }
  }
  return 0;
}
