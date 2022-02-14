
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_20__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_18__ ;


typedef int int32_t ;
struct TYPE_27__ {scalar_t__ ktrace; int curfinal; } ;
struct TYPE_26__ {int const startins; } ;
struct TYPE_25__ {int freeset; int topslot; int parent; TYPE_5__* J; TYPE_1__* T; } ;
struct TYPE_24__ {size_t mapofs; size_t nent; scalar_t__ nslots; int topslot; } ;
struct TYPE_23__ {int o; int gcr; } ;
struct TYPE_22__ {size_t nsnap; scalar_t__ link; int * snapmap; TYPE_2__* snap; } ;
struct TYPE_21__ {int const* dispatch; } ;
typedef TYPE_2__ SnapShot ;
typedef size_t SnapNo ;
typedef scalar_t__ BCReg ;
typedef int const BCIns ;
typedef TYPE_3__ ASMState ;




 int VAR_0 ;
 int VAR_1 ;


 TYPE_20__* FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 TYPE_18__* FUNC_1 (TYPE_5__*) ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_3 (TYPE_3__*,TYPE_2__*,int*) ;
 int FUNC_4 (TYPE_3__*,int ,int *,int,size_t) ;
 int FUNC_5 (TYPE_3__*,TYPE_2__*) ;
 scalar_t__ FUNC_6 (int const) ;
 scalar_t__ FUNC_7 (int const) ;
 scalar_t__ FUNC_8 (int const) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int const) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*,int ,int) ;
 int FUNC_13 (TYPE_3__*,int ,int ) ;
 int FUNC_14 (TYPE_3__*,int ,int ) ;
 int FUNC_15 (int const*) ;
 int VAR_11 ;
 int FUNC_16 (int ) ;
 int FUNC_17 (TYPE_3__*,int,int ) ;
 int FUNC_18 (TYPE_3__*,int ,int ) ;
 int FUNC_19 (int ,int ) ;
 int const* FUNC_20 (int *) ;
 TYPE_4__* FUNC_21 (TYPE_5__*,scalar_t__) ;
 int FUNC_22 (int const*) ;

__attribute__((used)) static void FUNC_23(ASMState *VAR_12)
{
  SnapNo VAR_13 = VAR_12->T->nsnap-1;
  SnapShot *VAR_14 = &VAR_12->T->snap[VAR_13];
  int VAR_15 = 0;
  BCReg VAR_16 = FUNC_3(VAR_12, VAR_14, &VAR_15);

  VAR_12->topslot = VAR_14->topslot;
  FUNC_11(VAR_12);
  FUNC_18(VAR_12, VAR_5, FUNC_2(VAR_6));

  if (VAR_12->T->link == 0) {

    const BCIns *VAR_17 = FUNC_20(&VAR_12->T->snapmap[VAR_14->mapofs + VAR_14->nent]);
    int32_t VAR_18;
    if (FUNC_10(*VAR_17) == VAR_1) {
      BCIns *VAR_19 = &FUNC_21(VAR_12->J, FUNC_8(*VAR_17))->startins;
      if (FUNC_9(FUNC_10(*VAR_19)))
 VAR_17 = VAR_19;
    }



    FUNC_17(VAR_12, FUNC_15(FUNC_1(VAR_12->J)->dispatch), VAR_7);
    FUNC_17(VAR_12, FUNC_15(VAR_17), VAR_8);

    VAR_18 = (int32_t)(VAR_14->nslots - VAR_16 - VAR_3);
    switch (FUNC_10(*VAR_17)) {
    case 131: case 130:
      VAR_18 -= (int32_t)(1 + VAR_3 + FUNC_6(*VAR_17) + FUNC_7(*VAR_17)); break;
    case 129: VAR_18 -= (int32_t)(FUNC_6(*VAR_17) + FUNC_8(*VAR_17)); break;
    case 128: VAR_18 -= (int32_t)FUNC_6(*VAR_17); break;
    default: if (FUNC_10(*VAR_17) < VAR_0) VAR_18 = 0; break;
    }
    FUNC_17(VAR_12, VAR_18, VAR_9);
  } else if (VAR_16) {

    FUNC_14(VAR_12, VAR_6, VAR_11);
  }
  FUNC_12(VAR_12, VAR_6, 8*(int32_t)VAR_16);

  if (VAR_12->J->ktrace) {
    FUNC_19(FUNC_0(VAR_12->J->ktrace)[VAR_4].gcr, FUNC_16(VAR_12->J->curfinal));
    FUNC_0(VAR_12->J->ktrace)->o = VAR_2;
  }


  FUNC_5(VAR_12, VAR_14);


  if (!VAR_12->parent && VAR_15)
    FUNC_4(VAR_12, VAR_12->topslot, ((void*)0), VAR_12->freeset & VAR_10, VAR_13);
}
