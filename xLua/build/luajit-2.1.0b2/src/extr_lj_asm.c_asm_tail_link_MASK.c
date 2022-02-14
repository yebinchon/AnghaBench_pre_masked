
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_16__ ;


typedef int int32_t ;
struct TYPE_21__ {int const startins; } ;
struct TYPE_20__ {int freeset; int topslot; int parent; int J; TYPE_1__* T; } ;
struct TYPE_19__ {size_t mapofs; size_t nent; scalar_t__ nslots; int topslot; } ;
struct TYPE_18__ {size_t nsnap; scalar_t__ link; int * snapmap; TYPE_2__* snap; } ;
struct TYPE_17__ {int const* dispatch; } ;
typedef TYPE_2__ SnapShot ;
typedef size_t SnapNo ;
typedef scalar_t__ BCReg ;
typedef int const BCIns ;
typedef TYPE_3__ ASMState ;




 int VAR_0 ;
 int VAR_1 ;


 TYPE_16__* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (TYPE_3__*,TYPE_2__*,int*) ;
 int FUNC_3 (TYPE_3__*,int ,int *,int,size_t) ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*) ;
 scalar_t__ FUNC_5 (int const) ;
 scalar_t__ FUNC_6 (int const) ;
 scalar_t__ FUNC_7 (int const) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int const) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*,int ,int) ;
 int FUNC_12 (TYPE_3__*,int ,int ) ;
 int FUNC_13 (int const*) ;
 int VAR_9 ;
 int FUNC_14 (TYPE_3__*,int,int ) ;
 int FUNC_15 (TYPE_3__*,int ,int ) ;
 int const* FUNC_16 (int ) ;
 TYPE_4__* FUNC_17 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_18(ASMState *VAR_10)
{
  SnapNo VAR_11 = VAR_10->T->nsnap-1;
  SnapShot *VAR_12 = &VAR_10->T->snap[VAR_11];
  int VAR_13 = 0;
  BCReg VAR_14 = FUNC_2(VAR_10, VAR_12, &VAR_13);

  VAR_10->topslot = VAR_12->topslot;
  FUNC_10(VAR_10);
  FUNC_15(VAR_10, VAR_3, FUNC_1(VAR_4));

  if (VAR_10->T->link == 0) {

    const BCIns *VAR_15 = FUNC_16(VAR_10->T->snapmap[VAR_12->mapofs + VAR_12->nent]);
    int32_t VAR_16;
    if (FUNC_9(*VAR_15) == VAR_1) {
      BCIns *VAR_17 = &FUNC_17(VAR_10->J, FUNC_7(*VAR_15))->startins;
      if (FUNC_8(FUNC_9(*VAR_17)))
 VAR_15 = VAR_17;
    }
    FUNC_14(VAR_10, FUNC_13(FUNC_0(VAR_10->J)->dispatch), VAR_5);
    FUNC_14(VAR_10, FUNC_13(VAR_15), VAR_6);
    VAR_16 = (int32_t)(VAR_12->nslots - VAR_14);
    switch (FUNC_9(*VAR_15)) {
    case 131: case 130:
      VAR_16 -= (int32_t)(1 + VAR_2 + FUNC_5(*VAR_15) + FUNC_6(*VAR_15)); break;
    case 129: VAR_16 -= (int32_t)(FUNC_5(*VAR_15) + FUNC_7(*VAR_15)); break;
    case 128: VAR_16 -= (int32_t)FUNC_5(*VAR_15); break;
    default: if (FUNC_9(*VAR_15) < VAR_0) VAR_16 = 0; break;
    }
    FUNC_14(VAR_10, VAR_16, VAR_7);
  } else if (VAR_14) {

    FUNC_12(VAR_10, VAR_4, VAR_9);
  }
  FUNC_11(VAR_10, VAR_4, 8*(int32_t)VAR_14);


  FUNC_4(VAR_10, VAR_12);


  if (!VAR_10->parent && VAR_13)
    FUNC_3(VAR_10, VAR_10->topslot, ((void*)0), VAR_10->freeset & VAR_8, VAR_11);
}
