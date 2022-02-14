
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_15__ ;


struct TYPE_23__ {int gray; } ;
struct TYPE_24__ {TYPE_2__ gc; } ;
typedef TYPE_3__ global_State ;
struct TYPE_22__ {int gct; int gclist; } ;
struct TYPE_26__ {TYPE_1__ gch; } ;
struct TYPE_25__ {scalar_t__ closed; } ;
struct TYPE_21__ {int env; int metatable; } ;
typedef TYPE_4__ GCupval ;
typedef int GCtab ;
typedef TYPE_5__ GCobj ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,int *) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 TYPE_15__* FUNC_3 (TYPE_5__*) ;
 TYPE_4__* FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_3__*,TYPE_5__*) ;
 scalar_t__ FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,TYPE_5__*) ;
 int FUNC_10 (int ,int ) ;
 int * FUNC_11 (int ) ;
 int FUNC_12 (TYPE_4__*) ;
 int FUNC_13 (TYPE_5__*) ;

__attribute__((used)) static void FUNC_14(global_State *VAR_9, GCobj *VAR_10)
{
  int VAR_11 = VAR_10->gch.gct;
  FUNC_8(FUNC_7(VAR_10) && !FUNC_6(VAR_9, VAR_10));
  FUNC_13(VAR_10);
  if (FUNC_0(VAR_11 == ~VAR_7)) {
    GCtab *VAR_12 = FUNC_11(FUNC_3(VAR_10)->metatable);
    FUNC_5(VAR_10);
    if (VAR_12) FUNC_1(VAR_9, VAR_12);
    FUNC_1(VAR_9, FUNC_11(FUNC_3(VAR_10)->env));
  } else if (FUNC_0(VAR_11 == ~VAR_8)) {
    GCupval *VAR_13 = FUNC_4(VAR_10);
    FUNC_2(VAR_9, FUNC_12(VAR_13));
    if (VAR_13->closed)
      FUNC_5(VAR_10);
  } else if (VAR_11 != ~VAR_3 && VAR_11 != ~VAR_0) {
    FUNC_8(VAR_11 == ~VAR_1 || VAR_11 == ~VAR_4 ||
        VAR_11 == ~VAR_5 || VAR_11 == ~VAR_2 || VAR_11 == ~VAR_6);
    FUNC_10(VAR_10->gch.gclist, VAR_9->gc.gray);
    FUNC_9(VAR_9->gc.gray, VAR_10);
  }
}
