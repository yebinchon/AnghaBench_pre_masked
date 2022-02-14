
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_38__ TYPE_7__ ;
typedef struct TYPE_37__ TYPE_6__ ;
typedef struct TYPE_36__ TYPE_5__ ;
typedef struct TYPE_35__ TYPE_4__ ;
typedef struct TYPE_34__ TYPE_3__ ;
typedef struct TYPE_33__ TYPE_2__ ;
typedef struct TYPE_32__ TYPE_26__ ;
typedef struct TYPE_31__ TYPE_1__ ;


typedef int ptrdiff_t ;
struct TYPE_33__ {scalar_t__ base; TYPE_4__* top; int maxstack; int cframe; } ;
typedef TYPE_2__ lua_State ;
struct TYPE_34__ {size_t exitno; TYPE_2__* L; int parent; } ;
typedef TYPE_3__ jit_State ;
typedef int int32_t ;
struct TYPE_38__ {int* snapmap; TYPE_6__* ir; TYPE_5__* snap; } ;
struct TYPE_37__ {scalar_t__ r; } ;
struct TYPE_36__ {size_t nent; size_t mapofs; int topslot; int nslots; } ;
struct TYPE_31__ {int lo; int hi; } ;
struct TYPE_35__ {TYPE_1__ u32; } ;
struct TYPE_32__ {int framesize; } ;
typedef TYPE_4__ TValue ;
typedef TYPE_5__ SnapShot ;
typedef size_t SnapNo ;
typedef int SnapEntry ;
typedef size_t MSize ;
typedef size_t IRRef ;
typedef TYPE_6__ IRIns ;
typedef TYPE_7__ GCtrace ;
typedef int ExitState ;
typedef int BloomFilter ;
typedef int BCIns ;




 int VAR_0 ;


 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,TYPE_4__*,TYPE_4__*) ;
 TYPE_26__* FUNC_4 (TYPE_2__*) ;
 void* FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,int const*) ;
 int FUNC_10 (TYPE_4__*,int ) ;
 int FUNC_11 (TYPE_7__*,TYPE_5__*) ;
 int * FUNC_12 (int) ;
 size_t FUNC_13 (int) ;
 int FUNC_14 (TYPE_7__*,size_t) ;
 int FUNC_15 (TYPE_3__*,TYPE_7__*,int *,size_t,int ,size_t,TYPE_4__*) ;
 size_t FUNC_16 (int) ;
 int FUNC_17 (TYPE_3__*,TYPE_7__*,int *,size_t,int ,TYPE_6__*,TYPE_4__*) ;
 TYPE_7__* FUNC_18 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_19 (TYPE_4__*) ;
 scalar_t__ FUNC_20 (int ) ;

const BCIns *FUNC_21(jit_State *VAR_8, void *VAR_9)
{
  ExitState *VAR_10 = (ExitState *)VAR_9;
  SnapNo VAR_11 = VAR_8->exitno;
  GCtrace *VAR_12 = FUNC_18(VAR_8, VAR_8->parent);
  SnapShot *VAR_13 = &VAR_12->snap[VAR_11];
  MSize VAR_14, VAR_15 = VAR_13->nent;
  SnapEntry *VAR_16 = &VAR_12->snapmap[VAR_13->mapofs];
  SnapEntry *VAR_17 = &VAR_12->snapmap[FUNC_11(VAR_12, VAR_13)-1];
  ptrdiff_t VAR_18;
  TValue *VAR_19;
  BloomFilter VAR_20 = FUNC_14(VAR_12, VAR_11);
  const BCIns *VAR_21 = FUNC_12(VAR_16[VAR_15]);
  lua_State *VAR_22 = VAR_8->L;


  FUNC_9(FUNC_2(VAR_22->cframe), VAR_21+1);


  if (FUNC_0(VAR_22->base + VAR_13->topslot >= FUNC_20(VAR_22->maxstack))) {
    VAR_22->top = FUNC_5(VAR_22);
    FUNC_7(VAR_22, VAR_13->topslot - FUNC_4(VAR_22)->framesize);
  }


  VAR_19 = VAR_22->base-1;
  VAR_18 = FUNC_6(VAR_19);
  for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++) {
    SnapEntry VAR_23 = VAR_16[VAR_14];
    if (!(VAR_23 & VAR_6)) {
      TValue *VAR_24 = &VAR_19[FUNC_16(VAR_23)];
      IRRef VAR_25 = FUNC_13(VAR_23);
      IRIns *VAR_26 = &VAR_12->ir[VAR_25];
      if (VAR_26->r == VAR_3) {
 MSize VAR_27;
 for (VAR_27 = 0; VAR_27 < VAR_14; VAR_27++)
   if (FUNC_13(VAR_16[VAR_27]) == VAR_25) {
     FUNC_3(VAR_22, VAR_24, &VAR_19[FUNC_16(VAR_16[VAR_27])]);
     goto dupslot;
   }
 FUNC_17(VAR_8, VAR_12, VAR_10, VAR_11, VAR_20, VAR_26, VAR_24);
      dupslot:
 continue;
      }
      FUNC_15(VAR_8, VAR_12, VAR_10, VAR_11, VAR_20, VAR_25, VAR_24);
      if (VAR_2 && (VAR_23 & VAR_7) && FUNC_19(VAR_24)) {
 TValue VAR_28;
 FUNC_15(VAR_8, VAR_12, VAR_10, VAR_11, VAR_20, VAR_25+1, &VAR_28);
 VAR_24->u32.hi = VAR_28.u32.lo;
      } else if ((VAR_23 & (VAR_4|VAR_5))) {
 FUNC_8(!VAR_1);

 FUNC_10(VAR_24, FUNC_16(VAR_23) != 0 ? (int32_t)*VAR_17-- : VAR_18);
 VAR_22->base = VAR_24+1;
      }
    }
  }
  FUNC_8(VAR_16 + VAR_15 == VAR_17);


  switch (FUNC_1(*VAR_21)) {
  default:
    if (FUNC_1(*VAR_21) < VAR_0) {
      VAR_22->top = FUNC_5(VAR_22);
      break;
    }

  case 131: case 130: case 129: case 128:
    VAR_22->top = VAR_19 + VAR_13->nslots;
    break;
  }
  return VAR_21;
}
