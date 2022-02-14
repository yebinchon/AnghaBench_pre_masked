
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef void* uint16_t ;
struct TYPE_10__ {size_t nsnap; size_t nsnapmap; int * snapmap; scalar_t__ nins; TYPE_2__* snap; } ;
struct TYPE_11__ {scalar_t__ irt; } ;
struct TYPE_8__ {TYPE_3__ cur; TYPE_7__ guardemit; } ;
typedef TYPE_1__ jit_State ;
struct TYPE_9__ {size_t mapofs; size_t nent; scalar_t__ nslots; scalar_t__ count; int topslot; scalar_t__ ref; } ;
typedef TYPE_2__ SnapShot ;
typedef int SnapEntry ;
typedef size_t MSize ;
typedef scalar_t__ IRRef1 ;
typedef scalar_t__ BCReg ;


 int FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 (TYPE_7__) ;
 size_t FUNC_2 (TYPE_3__*,TYPE_2__*) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(jit_State *VAR_0, SnapShot *VAR_1,
       SnapEntry *VAR_2, IRRef1 *VAR_3)
{
  SnapEntry *VAR_4, *VAR_5 = &VAR_0->cur.snapmap[VAR_1->mapofs];
  SnapEntry *VAR_6 = &VAR_0->cur.snapmap[FUNC_2(&VAR_0->cur, VAR_1)];
  MSize VAR_7;
  MSize VAR_8, VAR_9, VAR_10, VAR_11 = VAR_1->nent;
  BCReg VAR_12 = VAR_1->nslots;
  SnapShot *VAR_13 = &VAR_0->cur.snap[VAR_0->cur.nsnap];
  if (FUNC_1(VAR_0->guardemit)) {
    VAR_7 = VAR_0->cur.nsnapmap;
    VAR_0->cur.nsnap++;
  } else {
    VAR_13--;
    VAR_7 = VAR_13->mapofs;
  }
  VAR_0->guardemit.irt = 0;

  VAR_13->mapofs = (uint16_t)VAR_7;
  VAR_13->ref = (IRRef1)VAR_0->cur.nins;
  VAR_13->nslots = VAR_12;
  VAR_13->topslot = VAR_1->topslot;
  VAR_13->count = 0;
  VAR_4 = &VAR_0->cur.snapmap[VAR_7];

  VAR_8 = VAR_9 = VAR_10 = 0;
  while (VAR_8 < VAR_11) {
    SnapEntry VAR_14 = VAR_5[VAR_8], VAR_15 = VAR_2[VAR_9];
    if (FUNC_5(VAR_15) < FUNC_5(VAR_14)) {
      VAR_4[VAR_10++] = VAR_15;
      VAR_9++;
    } else {
      if (FUNC_5(VAR_15) == FUNC_5(VAR_14)) VAR_9++;
      if (!FUNC_0(FUNC_3(VAR_14)))
 VAR_14 = FUNC_4(VAR_14, VAR_3[FUNC_3(VAR_14)]);
      VAR_4[VAR_10++] = VAR_14;
      VAR_8++;
    }
  }
  while (FUNC_5(VAR_2[VAR_9]) < VAR_12)
    VAR_4[VAR_10++] = VAR_2[VAR_9++];
  VAR_13->nent = (uint8_t)VAR_10;
  VAR_5 += VAR_11;
  VAR_4 += VAR_10;
  while (VAR_5 < VAR_6)
    *VAR_4++ = *VAR_5++;
  VAR_0->cur.nsnapmap = (uint16_t)(VAR_4 - VAR_0->cur.snapmap);
}
