
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int maxslot; scalar_t__ baseslot; int * base; int framedepth; TYPE_2__* pt; } ;
typedef TYPE_1__ jit_State ;
struct TYPE_6__ {int flags; scalar_t__ framesize; scalar_t__ numparams; } ;
typedef TYPE_2__ GCproto ;
typedef int BCReg ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(jit_State *VAR_6)
{
  GCproto *VAR_7 = VAR_6->pt;
  BCReg VAR_8, VAR_9, VAR_10 = VAR_6->maxslot+1+VAR_0;
  FUNC_1((VAR_7->flags & VAR_3));
  if (VAR_6->baseslot + VAR_10 + VAR_7->framesize >= VAR_1)
    FUNC_0(VAR_6, VAR_2);
  VAR_6->base[VAR_10-1-VAR_0] = VAR_6->base[-1-VAR_0];




  VAR_9 = VAR_7->numparams < VAR_6->maxslot ? VAR_7->numparams : VAR_6->maxslot;
  for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
    VAR_6->base[VAR_10+VAR_8] = VAR_6->base[VAR_8];
    VAR_6->base[VAR_8] = VAR_5;
  }
  VAR_6->maxslot = VAR_9;
  VAR_6->framedepth++;
  VAR_6->base += VAR_10;
  VAR_6->baseslot += VAR_10;
}
