
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef size_t uint16_t ;
struct TYPE_6__ {int nsnap; size_t nsnapmap; int * snapmap; TYPE_3__* snap; } ;
struct TYPE_7__ {scalar_t__ maxslot; scalar_t__ baseslot; TYPE_1__ cur; } ;
typedef TYPE_2__ jit_State ;
struct TYPE_8__ {size_t mapofs; size_t nent; scalar_t__ nslots; } ;
typedef TYPE_3__ SnapShot ;
typedef int SnapEntry ;
typedef size_t MSize ;
typedef scalar_t__ BCReg ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,scalar_t__*,int ,scalar_t__) ;

void FUNC_3(jit_State *VAR_1)
{
  SnapShot *VAR_2 = &VAR_1->cur.snap[VAR_1->cur.nsnap-1];
  SnapEntry *VAR_3 = &VAR_1->cur.snapmap[VAR_2->mapofs];
  MSize VAR_4, VAR_5, VAR_6, VAR_7 = VAR_2->nent;
  uint8_t VAR_8[VAR_0];
  BCReg VAR_9 = VAR_1->maxslot;
  BCReg VAR_10 = FUNC_2(VAR_1, VAR_8, FUNC_0(VAR_3[VAR_7]), VAR_9);
  BCReg VAR_11 = VAR_1->baseslot;
  VAR_9 += VAR_11;
  VAR_10 += VAR_11;
  VAR_2->nslots = (uint8_t)VAR_9;
  for (VAR_4 = VAR_5 = 0; VAR_4 < VAR_7; VAR_4++) {
    BCReg VAR_12 = FUNC_1(VAR_3[VAR_4]);
    if (VAR_12 < VAR_10 || (VAR_12 < VAR_9 && VAR_8[VAR_12-VAR_11] == 0))
      VAR_3[VAR_5++] = VAR_3[VAR_4];
  }
  VAR_2->nent = (uint8_t)VAR_5;
  VAR_6 = VAR_1->cur.nsnapmap - VAR_2->mapofs - 1;
  while (VAR_4 <= VAR_6) VAR_3[VAR_5++] = VAR_3[VAR_4++];
  VAR_1->cur.nsnapmap = (uint16_t)(VAR_2->mapofs + VAR_5);
}
