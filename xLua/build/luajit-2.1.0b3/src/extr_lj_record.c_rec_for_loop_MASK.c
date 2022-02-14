
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {int start; } ;
struct TYPE_16__ {size_t maxslot; void** base; TYPE_3__ scev; TYPE_1__* L; } ;
typedef TYPE_4__ jit_State ;
typedef int cTValue ;
struct TYPE_14__ {scalar_t__ irt; } ;
struct TYPE_17__ {int dir; int pc; void* idx; void* step; void* stop; void* start; TYPE_2__ t; } ;
struct TYPE_13__ {int * base; } ;
typedef void* TRef ;
typedef TYPE_5__ ScEvEntry ;
typedef scalar_t__ IRType ;
typedef size_t BCReg ;
typedef int BCIns ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 size_t FUNC_1 (int const) ;
 scalar_t__ FUNC_2 (int const) ;
 void* FUNC_3 (int ,void*,void*) ;
 void* FUNC_4 (TYPE_4__*,int const*,size_t,scalar_t__) ;
 void* FUNC_5 (TYPE_4__*,int const*,size_t,scalar_t__,int) ;
 void* FUNC_6 (TYPE_4__*,size_t,scalar_t__,int) ;
 scalar_t__ FUNC_7 (void*) ;
 scalar_t__ FUNC_8 (TYPE_4__*,int *) ;
 int FUNC_9 (int) ;
 int FUNC_10 (TYPE_4__*,scalar_t__,int,void*,void*,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int const*) ;
 void* FUNC_13 (void*) ;
 scalar_t__ FUNC_14 (void*) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static void FUNC_16(jit_State *VAR_13, const BCIns *VAR_14, ScEvEntry *VAR_15,
    int VAR_16)
{
  BCReg VAR_17 = FUNC_1(*VAR_14);
  cTValue *VAR_18 = &VAR_13->L->base[VAR_17];
  TRef VAR_19 = VAR_13->base[VAR_17+VAR_3];
  IRType VAR_20 = VAR_19 ? FUNC_14(VAR_19) :
      (VAR_16 || VAR_12) ? FUNC_8(VAR_13, VAR_18) : VAR_10;
  int VAR_21 = VAR_6 +
    ((!VAR_12 || FUNC_15(VAR_18) == (VAR_20 == VAR_9)) ? VAR_7 : 0);
  TRef VAR_22 = FUNC_5(VAR_13, VAR_14, VAR_17+VAR_5, VAR_20, VAR_21);
  TRef VAR_23 = FUNC_5(VAR_13, VAR_14, VAR_17+VAR_4, VAR_20, VAR_21);
  int VAR_24, VAR_25 = FUNC_11(&VAR_18[VAR_4]);
  FUNC_9(FUNC_2(*VAR_14) == VAR_0 || FUNC_2(*VAR_14) == VAR_1);
  VAR_15->t.irt = VAR_20;
  VAR_15->dir = VAR_25;
  VAR_15->stop = FUNC_13(VAR_22);
  VAR_15->step = FUNC_13(VAR_23);
  FUNC_10(VAR_13, VAR_20, VAR_25, VAR_22, VAR_23, VAR_16);
  VAR_15->start = FUNC_13(FUNC_4(VAR_13, VAR_14, VAR_17+VAR_3, VAR_9));
  VAR_24 = (VAR_12 &&
 !(VAR_15->start && FUNC_7(VAR_15->stop) && FUNC_7(VAR_15->step) &&
   FUNC_15(&VAR_18[VAR_3]) == (VAR_20 == VAR_9))) ?
 VAR_8 : 0;
  if (VAR_24) {
    VAR_13->base[VAR_17+VAR_5] = VAR_22;
    VAR_13->base[VAR_17+VAR_4] = VAR_23;
  }
  if (!VAR_19)
    VAR_19 = FUNC_6(VAR_13, VAR_17+VAR_3, VAR_20,
      VAR_6 + VAR_24 + (VAR_13->scev.start << 16));
  if (!VAR_16)
    VAR_13->base[VAR_17+VAR_3] = VAR_19 = FUNC_3(FUNC_0(VAR_11, VAR_20), VAR_19, VAR_23);
  VAR_13->base[VAR_17+VAR_2] = VAR_19;
  VAR_15->idx = FUNC_13(VAR_19);
  FUNC_12(VAR_15->pc, VAR_14);
  VAR_13->maxslot = VAR_17+VAR_2+1;
}
