
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef size_t ptrdiff_t ;
struct TYPE_11__ {scalar_t__ irt; } ;
struct TYPE_10__ {int nsnap; scalar_t__ nsnapmap; TYPE_4__* snap; int * snapmap; } ;
struct TYPE_12__ {TYPE_6__* bpropcache; TYPE_2__ guardemit; TYPE_1__ cur; } ;
typedef TYPE_3__ jit_State ;
struct TYPE_15__ {scalar_t__ val; scalar_t__ key; } ;
struct TYPE_14__ {int t; } ;
struct TYPE_13__ {size_t mapofs; size_t nent; } ;
typedef TYPE_4__ SnapShot ;
typedef int SnapNo ;
typedef int SnapEntry ;
typedef scalar_t__ MSize ;
typedef scalar_t__ IRRef ;
typedef TYPE_5__ IRIns ;
typedef TYPE_6__ BPropEntry ;


 size_t VAR_0 ;
 TYPE_5__* FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,scalar_t__) ;

__attribute__((used)) static void FUNC_4(jit_State *VAR_2, IRRef VAR_3, SnapNo VAR_4, MSize VAR_5)
{
  ptrdiff_t VAR_6;
  SnapShot *VAR_7 = &VAR_2->cur.snap[VAR_4-1];
  SnapEntry *VAR_8 = VAR_2->cur.snapmap;
  VAR_8[VAR_7->mapofs + VAR_7->nent] = VAR_8[VAR_2->cur.snap[0].nent];
  VAR_2->cur.nsnapmap = (uint16_t)VAR_5;
  VAR_2->cur.nsnap = VAR_4;
  VAR_2->guardemit.irt = 0;
  FUNC_3(VAR_2, VAR_3);
  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
    BPropEntry *VAR_9 = &VAR_2->bpropcache[VAR_6];
    if (VAR_9->val >= VAR_3)
      VAR_9->key = 0;
  }
  for (VAR_3--; VAR_3 >= VAR_1; VAR_3--) {
    IRIns *VAR_10 = FUNC_0(VAR_3);
    FUNC_2(VAR_10->t);
    FUNC_1(VAR_10->t);
  }
}
