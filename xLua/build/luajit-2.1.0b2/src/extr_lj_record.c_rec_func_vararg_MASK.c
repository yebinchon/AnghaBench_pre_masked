
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


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(jit_State *VAR_4)
{
  GCproto *VAR_5 = VAR_4->pt;
  BCReg VAR_6, VAR_7, VAR_8 = VAR_4->maxslot+1;
  FUNC_1((VAR_5->flags & VAR_2));
  if (VAR_4->baseslot + VAR_8 + VAR_5->framesize >= VAR_0)
    FUNC_0(VAR_4, VAR_1);
  VAR_4->base[VAR_8-1] = VAR_4->base[-1];

  VAR_7 = VAR_5->numparams < VAR_4->maxslot ? VAR_5->numparams : VAR_4->maxslot;
  for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
    VAR_4->base[VAR_8+VAR_6] = VAR_4->base[VAR_6];
    VAR_4->base[VAR_6] = VAR_3;
  }
  VAR_4->maxslot = VAR_7;
  VAR_4->framedepth++;
  VAR_4->base += VAR_8;
  VAR_4->baseslot += VAR_8;
}
