
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t nsnap; int * snapmap; TYPE_3__* snap; } ;
struct TYPE_7__ {TYPE_1__ cur; } ;
typedef TYPE_2__ jit_State ;
struct TYPE_9__ {int t; } ;
struct TYPE_8__ {size_t mapofs; size_t nent; } ;
typedef TYPE_3__ SnapShot ;
typedef size_t SnapNo ;
typedef int SnapEntry ;
typedef size_t MSize ;
typedef scalar_t__ IRRef ;


 TYPE_5__* FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(jit_State *VAR_1)
{
  SnapNo VAR_2, VAR_3 = VAR_1->cur.nsnap;
  for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
    SnapShot *VAR_4 = &VAR_1->cur.snap[VAR_2];
    SnapEntry *VAR_5 = &VAR_1->cur.snapmap[VAR_4->mapofs];
    MSize VAR_6, VAR_7 = VAR_4->nent;
    for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
      IRRef VAR_8 = FUNC_2(VAR_5[VAR_6]);
      if (VAR_8 >= VAR_0)
 FUNC_1(FUNC_0(VAR_8)->t);
    }
  }
}
