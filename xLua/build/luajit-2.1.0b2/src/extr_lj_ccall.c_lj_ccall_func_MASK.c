
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_25__ {void (* func ) () ;scalar_t__ spadj; } ;
struct TYPE_21__ {unsigned int slot; } ;
struct TYPE_24__ {scalar_t__ tab; int miscmap; TYPE_1__ cb; } ;
struct TYPE_23__ {int info; int size; } ;
struct TYPE_22__ {int ctypeid; } ;
typedef int TValue ;
typedef TYPE_2__ GCcdata ;
typedef TYPE_3__ CType ;
typedef TYPE_4__ CTState ;
typedef int CTSize ;
typedef TYPE_5__ CCallState ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,TYPE_4__*,TYPE_3__*,TYPE_5__*,int*) ;
 int FUNC_3 (int *,TYPE_4__*,TYPE_3__*,TYPE_5__*) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (int ) ;
 TYPE_4__* FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 TYPE_3__* FUNC_10 (TYPE_4__*,int ) ;
 TYPE_3__* FUNC_11 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int ,int *) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (TYPE_5__*) ;
 int FUNC_16 (int ,int) ;
 int FUNC_17 (int *,void*) ;

int FUNC_18(lua_State *VAR_4, GCcdata *VAR_5)
{
  CTState *VAR_6 = FUNC_7(VAR_4);
  CType *VAR_7 = FUNC_10(VAR_6, VAR_5->ctypeid);
  CTSize VAR_8 = VAR_3;
  if (FUNC_9(VAR_7->info)) {
    VAR_8 = VAR_7->size;
    VAR_7 = FUNC_11(VAR_6, VAR_7);
  }
  if (FUNC_8(VAR_7->info)) {
    CCallState VAR_9;
    int VAR_10, VAR_11;
    VAR_9.func = (void (*)(void))FUNC_4(FUNC_5(VAR_5), VAR_8);
    VAR_10 = FUNC_3(VAR_4, VAR_6, VAR_7, &VAR_9);
    VAR_7 = (CType *)((intptr_t)VAR_7-(intptr_t)VAR_6->tab);
    VAR_6->cb.slot = ~0u;
    FUNC_15(&VAR_9);
    if (VAR_6->cb.slot != ~0u) {
      TValue VAR_12;
      FUNC_17(&VAR_12, (void *)VAR_9.func);
      FUNC_16(FUNC_13(VAR_4, VAR_6->miscmap, &VAR_12), 1);
    }
    VAR_7 = (CType *)((intptr_t)VAR_7+(intptr_t)VAR_6->tab);
    VAR_10 += FUNC_2(VAR_4, VAR_6, VAR_7, &VAR_9, &VAR_11);







    while (VAR_10-- > 0)
      FUNC_12(VAR_4);
    return VAR_11;
  }
  return -1;
}
