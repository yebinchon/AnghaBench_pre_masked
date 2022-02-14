
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ptrdiff_t ;
struct TYPE_7__ {scalar_t__ framedepth; int baseslot; int maxslot; scalar_t__ tailcalled; scalar_t__ loopunroll; int * base; TYPE_1__* L; } ;
typedef TYPE_2__ jit_State ;
struct TYPE_6__ {scalar_t__ base; } ;
typedef int TRef ;
typedef int BCReg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (TYPE_2__*,int,int ) ;

void FUNC_5(jit_State *VAR_4, BCReg VAR_5, ptrdiff_t VAR_6)
{
  FUNC_4(VAR_4, VAR_5, VAR_6);
  if (FUNC_1(VAR_4->L->base - 1)) {
    BCReg VAR_7 = (BCReg)FUNC_0(VAR_4->L->base - 1);
    if (--VAR_4->framedepth < 0)
      FUNC_2(VAR_4, VAR_2);
    VAR_4->baseslot -= (BCReg)VAR_7;
    VAR_4->base -= VAR_7;
    VAR_5 += VAR_7;
  }

  if (VAR_0 && VAR_4->baseslot == 2)
    VAR_4->base[VAR_5+1] = VAR_3;
  FUNC_3(&VAR_4->base[-1-VAR_0], &VAR_4->base[VAR_5], sizeof(TRef)*(VAR_4->maxslot+1+VAR_0));


  if (++VAR_4->tailcalled > VAR_4->loopunroll)
    FUNC_2(VAR_4, VAR_1);
}
