
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_25__ {TYPE_2__* top; TYPE_2__* base; } ;
typedef TYPE_1__ lua_State ;
struct TYPE_29__ {int ** p; TYPE_4__** ct; } ;
struct TYPE_28__ {int size; int info; } ;
struct TYPE_27__ {int ctypeid; } ;
struct TYPE_26__ {int n; int i; } ;
typedef TYPE_2__ TValue ;
typedef int MSize ;
typedef TYPE_3__ GCcdata ;
typedef int CTypeID ;
typedef TYPE_4__ CType ;
typedef int CTState ;
typedef int CTSize ;
typedef TYPE_5__ CDArith ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_3__* FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 void* FUNC_4 (int *,TYPE_4__*) ;
 void* FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 TYPE_4__* FUNC_11 (int *,int) ;
 TYPE_4__* FUNC_12 (int *,TYPE_4__*) ;
 TYPE_4__* FUNC_13 (int *,TYPE_4__*,int ,int *) ;
 int FUNC_14 (int *,int ,int ) ;
 int FUNC_15 (TYPE_1__*,int,int ) ;
 int FUNC_16 (TYPE_2__*) ;
 scalar_t__ FUNC_17 (TYPE_2__*) ;
 scalar_t__ FUNC_18 (TYPE_2__*) ;
 scalar_t__ FUNC_19 (TYPE_2__*) ;
 scalar_t__ FUNC_20 (TYPE_2__*) ;
 scalar_t__ FUNC_21 (TYPE_2__*) ;
 scalar_t__ FUNC_22 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_23(lua_State *VAR_7, CTState *VAR_8, CDArith *VAR_9)
{
  TValue *VAR_10 = VAR_7->base;
  int VAR_11 = 1;
  MSize VAR_12;
  if (VAR_10+1 >= VAR_7->top)
    FUNC_15(VAR_7, 1, VAR_6);
  for (VAR_12 = 0; VAR_12 < 2; VAR_12++, VAR_10++) {
    if (FUNC_18(VAR_10)) {
      GCcdata *VAR_13 = FUNC_1(VAR_10);
      CTypeID VAR_14 = (CTypeID)VAR_13->ctypeid;
      CType *VAR_15 = FUNC_11(VAR_8, VAR_14);
      uint8_t *VAR_16 = (uint8_t *)FUNC_3(VAR_13);
      if (FUNC_9(VAR_15->info)) {
 VAR_16 = (uint8_t *)FUNC_2(VAR_16, VAR_15->size);
 if (FUNC_10(VAR_15->info)) VAR_15 = FUNC_12(VAR_8, VAR_15);
      } else if (FUNC_8(VAR_15->info)) {
 VAR_16 = (uint8_t *)*(void **)VAR_16;
 VAR_15 = FUNC_5(VAR_8,
   FUNC_14(VAR_8, FUNC_0(VAR_5, VAR_0|VAR_14), VAR_4));
      }
      if (FUNC_7(VAR_15->info)) VAR_15 = FUNC_4(VAR_8, VAR_15);
      VAR_9->ct[VAR_12] = VAR_15;
      VAR_9->p[VAR_12] = VAR_16;
    } else if (FUNC_19(VAR_10)) {
      VAR_9->ct[VAR_12] = FUNC_5(VAR_8, VAR_2);
      VAR_9->p[VAR_12] = (uint8_t *)&VAR_10->i;
    } else if (FUNC_21(VAR_10)) {
      VAR_9->ct[VAR_12] = FUNC_5(VAR_8, VAR_1);
      VAR_9->p[VAR_12] = (uint8_t *)&VAR_10->n;
    } else if (FUNC_20(VAR_10)) {
      VAR_9->ct[VAR_12] = FUNC_5(VAR_8, VAR_3);
      VAR_9->p[VAR_12] = (uint8_t *)0;
    } else if (FUNC_22(VAR_10)) {
      TValue *VAR_17 = VAR_12 == 0 ? VAR_10+1 : VAR_10-1;
      CType *VAR_18 = FUNC_11(VAR_8, FUNC_1(VAR_17)->ctypeid);
      VAR_9->ct[VAR_12] = ((void*)0);
      VAR_9->p[VAR_12] = (uint8_t *)FUNC_17(VAR_10);
      VAR_11 = 0;
      if (FUNC_7(VAR_18->info)) {
 CTSize VAR_19;
 CType *VAR_20 = FUNC_13(VAR_8, VAR_18, FUNC_16(VAR_10), &VAR_19);
 if (VAR_20 && FUNC_6(VAR_20->info)) {
   VAR_9->ct[VAR_12] = FUNC_4(VAR_8, VAR_20);
   VAR_9->p[VAR_12] = (uint8_t *)&VAR_20->size;
   VAR_11 = 1;
 } else {
   VAR_9->ct[1-VAR_12] = VAR_18;
   VAR_9->p[1-VAR_12] = ((void*)0);
   break;
 }
      }
    } else {
      VAR_9->ct[VAR_12] = ((void*)0);
      VAR_9->p[VAR_12] = (void *)(intptr_t)1;
      VAR_11 = 0;
    }
  }
  return VAR_11;
}
