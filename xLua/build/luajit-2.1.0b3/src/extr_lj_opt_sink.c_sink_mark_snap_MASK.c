
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * snapmap; } ;
struct TYPE_8__ {TYPE_1__ cur; } ;
typedef TYPE_2__ jit_State ;
struct TYPE_10__ {int t; } ;
struct TYPE_9__ {size_t mapofs; size_t nent; } ;
typedef TYPE_3__ SnapShot ;
typedef int SnapEntry ;
typedef size_t MSize ;
typedef int IRRef ;


 TYPE_6__* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(jit_State *VAR_0, SnapShot *VAR_1)
{
  SnapEntry *VAR_2 = &VAR_0->cur.snapmap[VAR_1->mapofs];
  MSize VAR_3, VAR_4 = VAR_1->nent;
  for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
    IRRef VAR_5 = FUNC_3(VAR_2[VAR_3]);
    if (!FUNC_1(VAR_5))
      FUNC_2(FUNC_0(VAR_5)->t);
  }
}
