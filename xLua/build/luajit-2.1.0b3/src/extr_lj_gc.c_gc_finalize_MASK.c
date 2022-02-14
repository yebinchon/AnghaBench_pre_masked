
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_19__ ;
typedef struct TYPE_22__ TYPE_12__ ;


typedef int uint8_t ;
typedef int lua_State ;
struct TYPE_24__ {scalar_t__ nocdatafin; int root; int mmudata; } ;
struct TYPE_26__ {TYPE_1__ gc; int jit_base; } ;
typedef TYPE_3__ global_State ;
typedef int cTValue ;
struct TYPE_28__ {int nextgc; } ;
struct TYPE_25__ {int nextgc; int marked; int gct; } ;
struct TYPE_27__ {TYPE_2__ gch; } ;
struct TYPE_23__ {int finalizer; } ;
struct TYPE_22__ {int metatable; } ;
typedef int TValue ;
typedef TYPE_4__ GCobj ;


 TYPE_3__* FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *,int *) ;
 TYPE_19__* FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int *,int *,TYPE_4__*) ;
 TYPE_4__* FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 TYPE_12__* FUNC_6 (TYPE_4__*) ;
 TYPE_4__* FUNC_7 (int ) ;
 int * FUNC_8 (TYPE_3__*,int ,int ) ;
 int * FUNC_9 (int *,int ,int *) ;
 int FUNC_10 (int ) ;
 TYPE_8__* FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_13 (int *,int *,int ) ;
 int FUNC_14 (int ,TYPE_4__*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int *) ;
 int * FUNC_20 (int ) ;

__attribute__((used)) static void FUNC_21(lua_State *VAR_3)
{
  global_State *VAR_4 = FUNC_0(VAR_3);
  GCobj *VAR_5 = FUNC_4(FUNC_7(VAR_4->gc.mmudata));
  cTValue *VAR_6;
  FUNC_10(FUNC_20(VAR_4->jit_base) == ((void*)0));

  if (VAR_5 == FUNC_7(VAR_4->gc.mmudata))
    FUNC_15(VAR_4->gc.mmudata);
  else
    FUNC_16(FUNC_7(VAR_4->gc.mmudata)->gch.nextgc, VAR_5->gch.nextgc);
  FUNC_16(VAR_5->gch.nextgc, FUNC_11(VAR_4)->nextgc);
  FUNC_14(FUNC_11(VAR_4)->nextgc, VAR_5);
  FUNC_12(VAR_4, VAR_5);

  VAR_6 = FUNC_8(VAR_4, FUNC_18(FUNC_6(VAR_5)->metatable), VAR_2);
  if (VAR_6)
    FUNC_3(VAR_4, VAR_3, VAR_6, VAR_5);
}
