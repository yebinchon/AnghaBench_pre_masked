
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int nsnap; int * snapmap; TYPE_3__* snap; } ;
struct TYPE_7__ {int needsnap; scalar_t__ maxslot; TYPE_1__ cur; } ;
typedef TYPE_2__ jit_State ;
struct TYPE_8__ {size_t mapofs; size_t nent; } ;
typedef TYPE_3__ SnapShot ;
typedef int BCIns ;


 int FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(jit_State *VAR_0, const BCIns *VAR_1, int VAR_2)
{
  BCIns VAR_3 = VAR_1[1];
  const BCIns *VAR_4 = VAR_1 + 2 + (VAR_2 ? FUNC_2(VAR_3) : 0);
  SnapShot *VAR_5 = &VAR_0->cur.snap[VAR_0->cur.nsnap-1];

  VAR_0->cur.snapmap[VAR_5->mapofs + VAR_5->nent] = FUNC_0(VAR_4);
  VAR_0->needsnap = 1;
  if (FUNC_1(VAR_3) < VAR_0->maxslot) VAR_0->maxslot = FUNC_1(VAR_3);
  FUNC_3(VAR_0);
}
