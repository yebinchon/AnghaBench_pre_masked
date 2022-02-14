
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ baseslot; size_t maxslot; int * base; TYPE_2__* pt; } ;
typedef TYPE_1__ jit_State ;
struct TYPE_6__ {size_t numparams; int flags; scalar_t__ framesize; } ;
typedef TYPE_2__ GCproto ;
typedef size_t BCReg ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_1(jit_State *VAR_5)
{
  GCproto *VAR_6 = VAR_5->pt;
  BCReg VAR_7, VAR_8 = VAR_6->numparams;
  if ((VAR_6->flags & VAR_3))
    FUNC_0(VAR_5, VAR_1);
  if (VAR_5->baseslot + VAR_6->framesize >= VAR_0)
    FUNC_0(VAR_5, VAR_2);

  for (VAR_7 = VAR_5->maxslot; VAR_7 < VAR_8; VAR_7++)
    VAR_5->base[VAR_7] = VAR_4;

  VAR_5->maxslot = VAR_8;
}
