
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int t; } ;
struct TYPE_9__ {size_t snapno; TYPE_1__* T; } ;
struct TYPE_8__ {size_t mapofs; size_t nent; } ;
struct TYPE_7__ {int* snapmap; TYPE_2__* snap; } ;
typedef TYPE_2__ SnapShot ;
typedef int SnapEntry ;
typedef size_t MSize ;
typedef scalar_t__ IRRef ;
typedef TYPE_3__ ASMState ;


 TYPE_6__* FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(ASMState *VAR_3)
{
  SnapShot *VAR_4 = &VAR_3->T->snap[VAR_3->snapno];
  SnapEntry *VAR_5 = &VAR_3->T->snapmap[VAR_4->mapofs];
  MSize VAR_6, VAR_7 = VAR_4->nent;
  for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
    SnapEntry VAR_8 = VAR_5[VAR_6];
    IRRef VAR_9 = FUNC_5(VAR_8);
    if (!FUNC_2(VAR_9)) {
      FUNC_1(VAR_3, VAR_9);
      if (VAR_1 && (VAR_8 & VAR_2)) {
 FUNC_4(FUNC_3(FUNC_0(VAR_9+1)->t) == VAR_0);
 FUNC_1(VAR_3, VAR_9+1);
      }
    }
  }
}
