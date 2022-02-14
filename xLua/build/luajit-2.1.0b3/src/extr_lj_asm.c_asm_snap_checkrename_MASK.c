
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {size_t snapno; TYPE_1__* T; } ;
struct TYPE_12__ {int s; } ;
struct TYPE_11__ {size_t mapofs; size_t nent; } ;
struct TYPE_10__ {int* snapmap; TYPE_2__* snap; } ;
typedef TYPE_2__ SnapShot ;
typedef int SnapEntry ;
typedef size_t MSize ;
typedef scalar_t__ IRRef ;
typedef TYPE_3__ IRIns ;
typedef TYPE_4__ ASMState ;


 TYPE_3__* FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_4__*) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_4__*,TYPE_3__*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(ASMState *VAR_2, IRRef VAR_3)
{
  SnapShot *VAR_4 = &VAR_2->T->snap[VAR_2->snapno];
  SnapEntry *VAR_5 = &VAR_2->T->snapmap[VAR_4->mapofs];
  MSize VAR_6, VAR_7 = VAR_4->nent;
  for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
    SnapEntry VAR_8 = VAR_5[VAR_6];
    IRRef VAR_9 = FUNC_3(VAR_8);
    if (VAR_9 == VAR_3 || (VAR_0 && (VAR_8 & VAR_1) && ++VAR_9 == VAR_3)) {
      IRIns *VAR_10 = FUNC_0(VAR_9);
      FUNC_2(VAR_2, VAR_10);
      FUNC_1((VAR_2, "snaprensp $f $s", VAR_9, VAR_10->s));
      return 1;
    }
  }
  return 0;
}
