
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {int top; } ;
typedef TYPE_1__ lua_State ;
typedef int lua_Number ;
typedef int cTValue ;
struct TYPE_19__ {scalar_t__ nomm; int metatable; } ;
typedef int TValue ;
typedef TYPE_2__ GCtab ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__*,int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_6 ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int *,int ) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__*) ;
 int * FUNC_6 (TYPE_1__*,int ,int ) ;
 int * FUNC_7 (TYPE_1__*,int *,int ) ;
 int * FUNC_8 (TYPE_1__*,TYPE_2__*,int *) ;
 int * FUNC_9 (TYPE_1__*,TYPE_2__*,int *) ;
 int FUNC_10 (TYPE_1__*,int ,int *,int *,int *) ;
 int * FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int *,int ) ;
 TYPE_2__* FUNC_13 (int *) ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (int *) ;
 scalar_t__ FUNC_19 (int *) ;
 int FUNC_20 (int *) ;

TValue *FUNC_21(lua_State *VAR_7, cTValue *VAR_8, cTValue *VAR_9)
{
  TValue VAR_10;
  int VAR_11;
  for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++) {
    cTValue *VAR_12;
    if (FUNC_0(FUNC_20(VAR_8))) {
      GCtab *VAR_13 = FUNC_13(VAR_8);
      cTValue *VAR_14 = FUNC_8(VAR_7, VAR_13, VAR_9);
      if (FUNC_0(!FUNC_18(VAR_14))) {
 VAR_13->nomm = 0;
 FUNC_5(VAR_7, VAR_13);
 return (TValue *)VAR_14;
      } else if (!(VAR_12 = FUNC_6(VAR_7, FUNC_14(VAR_13->metatable), VAR_5))) {
 VAR_13->nomm = 0;
 FUNC_5(VAR_7, VAR_13);
 if (VAR_14 != FUNC_11(VAR_7))
   return (TValue *)VAR_14;
 if (FUNC_18(VAR_9)) FUNC_3(VAR_7, VAR_1);
 else if (FUNC_16(VAR_9)) { FUNC_12(&VAR_10, (lua_Number)FUNC_2(VAR_9)); VAR_9 = &VAR_10; }
 else if (FUNC_19(VAR_9) && FUNC_17(VAR_9)) FUNC_3(VAR_7, VAR_0);
 return FUNC_9(VAR_7, VAR_13, VAR_9);
      }
    } else if (FUNC_18(VAR_12 = FUNC_7(VAR_7, VAR_8, VAR_5))) {
      FUNC_4(VAR_7, VAR_8, VAR_2);
      return ((void*)0);
    }
    if (FUNC_15(VAR_12)) {
      VAR_7->top = FUNC_10(VAR_7, VAR_6, VAR_12, VAR_8, VAR_9);

      return ((void*)0);
    }
    FUNC_1(VAR_7, &VAR_10, VAR_12);
    VAR_8 = &VAR_10;
  }
  FUNC_3(VAR_7, VAR_3);
  return ((void*)0);
}
