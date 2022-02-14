
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef void* uint8_t ;
typedef void* uint16_t ;
struct TYPE_9__ {void* nsnapmap; scalar_t__ nins; int * snapmap; } ;
struct TYPE_10__ {size_t baseslot; size_t maxslot; size_t framedepth; TYPE_1__ cur; } ;
typedef TYPE_2__ jit_State ;
struct TYPE_11__ {scalar_t__ count; void* nslots; void* nent; scalar_t__ ref; void* mapofs; void* topslot; } ;
typedef TYPE_3__ SnapShot ;
typedef int SnapEntry ;
typedef size_t MSize ;
typedef scalar_t__ IRRef1 ;
typedef size_t BCReg ;


 int FUNC_0 (TYPE_2__*,size_t) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int *) ;
 size_t FUNC_2 (TYPE_2__*,int *,size_t) ;

__attribute__((used)) static void FUNC_3(jit_State *VAR_0, SnapShot *VAR_1, MSize VAR_2)
{
  BCReg VAR_3 = VAR_0->baseslot + VAR_0->maxslot;
  MSize VAR_4;
  SnapEntry *VAR_5;

  FUNC_0(VAR_0, VAR_2 + VAR_3 + (MSize)VAR_0->framedepth+1);
  VAR_5 = &VAR_0->cur.snapmap[VAR_2];
  VAR_4 = FUNC_2(VAR_0, VAR_5, VAR_3);
  VAR_1->topslot = (uint8_t)FUNC_1(VAR_0, VAR_5 + VAR_4);
  VAR_1->mapofs = (uint16_t)VAR_2;
  VAR_1->ref = (IRRef1)VAR_0->cur.nins;
  VAR_1->nent = (uint8_t)VAR_4;
  VAR_1->nslots = (uint8_t)VAR_3;
  VAR_1->count = 0;
  VAR_0->cur.nsnapmap = (uint16_t)(VAR_2 + VAR_4 + 1 + VAR_0->framedepth);
}
