
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ptrdiff_t ;
struct TYPE_7__ {scalar_t__ framedepth; int maxslot; scalar_t__ tailcalled; scalar_t__ loopunroll; int * base; int baseslot; TYPE_1__* L; } ;
typedef TYPE_2__ jit_State ;
struct TYPE_6__ {scalar_t__ base; } ;
typedef int TRef ;
typedef size_t BCReg ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (TYPE_2__*,size_t,int ) ;

void FUNC_5(jit_State *VAR_2, BCReg VAR_3, ptrdiff_t VAR_4)
{
  FUNC_4(VAR_2, VAR_3, VAR_4);
  if (FUNC_1(VAR_2->L->base - 1)) {
    BCReg VAR_5 = (BCReg)FUNC_0(VAR_2->L->base - 1);
    if (--VAR_2->framedepth < 0)
      FUNC_2(VAR_2, VAR_1);
    VAR_2->baseslot -= (BCReg)VAR_5;
    VAR_2->base -= VAR_5;
    VAR_3 += VAR_5;
  }

  FUNC_3(&VAR_2->base[-1], &VAR_2->base[VAR_3], sizeof(TRef)*(VAR_2->maxslot+1));


  if (++VAR_2->tailcalled > VAR_2->loopunroll)
    FUNC_2(VAR_2, VAR_0);
}
