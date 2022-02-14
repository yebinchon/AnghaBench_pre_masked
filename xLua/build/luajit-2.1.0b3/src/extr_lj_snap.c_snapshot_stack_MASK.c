
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
struct TYPE_10__ {size_t baseslot; size_t maxslot; int framedepth; TYPE_1__ cur; } ;
typedef TYPE_2__ jit_State ;
struct TYPE_11__ {scalar_t__ count; void* nslots; scalar_t__ ref; void* mapofs; int topslot; void* nent; } ;
typedef TYPE_3__ SnapShot ;
typedef int SnapEntry ;
typedef size_t MSize ;
typedef scalar_t__ IRRef1 ;
typedef size_t BCReg ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,size_t) ;
 size_t FUNC_1 (TYPE_2__*,int *,int *) ;
 size_t FUNC_2 (TYPE_2__*,int *,size_t) ;

__attribute__((used)) static void FUNC_3(jit_State *VAR_1, SnapShot *VAR_2, MSize VAR_3)
{
  BCReg VAR_4 = VAR_1->baseslot + VAR_1->maxslot;
  MSize VAR_5;
  SnapEntry *VAR_6;

  FUNC_0(VAR_1, VAR_3 + VAR_4 + (MSize)(VAR_0?2:VAR_1->framedepth+1));
  VAR_6 = &VAR_1->cur.snapmap[VAR_3];
  VAR_5 = FUNC_2(VAR_1, VAR_6, VAR_4);
  VAR_2->nent = (uint8_t)VAR_5;
  VAR_5 += FUNC_1(VAR_1, VAR_6 + VAR_5, &VAR_2->topslot);
  VAR_2->mapofs = (uint16_t)VAR_3;
  VAR_2->ref = (IRRef1)VAR_1->cur.nins;
  VAR_2->nslots = (uint8_t)VAR_4;
  VAR_2->count = 0;
  VAR_1->cur.nsnapmap = (uint16_t)(VAR_3 + VAR_5);
}
