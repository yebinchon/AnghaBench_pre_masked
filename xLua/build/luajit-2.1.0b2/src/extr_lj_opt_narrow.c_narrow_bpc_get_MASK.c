
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t ptrdiff_t ;
struct TYPE_5__ {TYPE_2__* bpropcache; } ;
typedef TYPE_1__ jit_State ;
struct TYPE_6__ {scalar_t__ key; int mode; } ;
typedef scalar_t__ IRRef1 ;
typedef int IRRef ;
typedef TYPE_2__ BPropEntry ;


 size_t VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static BPropEntry *FUNC_0(jit_State *VAR_2, IRRef1 VAR_3, IRRef VAR_4)
{
  ptrdiff_t VAR_5;
  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
    BPropEntry *VAR_6 = &VAR_2->bpropcache[VAR_5];

    if (VAR_6->key == VAR_3 && VAR_6->mode >= VAR_4 &&
 ((VAR_6->mode ^ VAR_4) & VAR_1) == 0)
      return VAR_6;
  }
  return ((void*)0);
}
