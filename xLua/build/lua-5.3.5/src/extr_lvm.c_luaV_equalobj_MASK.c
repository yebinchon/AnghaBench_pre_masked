
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int top; } ;
typedef TYPE_1__ lua_State ;
typedef scalar_t__ lua_Integer ;
struct TYPE_9__ {int metatable; } ;
struct TYPE_8__ {int metatable; } ;
typedef int TValue ;







 scalar_t__ VAR_0 ;





 int VAR_1 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int ,int ) ;
 int * FUNC_2 (TYPE_1__*,int ,int ) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int const*) ;
 TYPE_5__* FUNC_6 (int const*) ;
 int FUNC_7 (int const*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (TYPE_1__*,int const*,int const*,int const*,int ,int) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int const*) ;
 scalar_t__ FUNC_13 (int const*,scalar_t__*) ;
 int FUNC_14 (int const*) ;
 scalar_t__ FUNC_15 (int const*) ;
 int FUNC_16 (int const*) ;
 TYPE_2__* FUNC_17 (int const*) ;

int FUNC_18 (lua_State *VAR_2, const TValue *VAR_3, const TValue *VAR_4) {
  const TValue *VAR_5;
  if (FUNC_16(VAR_3) != FUNC_16(VAR_4)) {
    if (FUNC_15(VAR_3) != FUNC_15(VAR_4) || FUNC_15(VAR_3) != VAR_0)
      return 0;
    else {
      lua_Integer VAR_6, VAR_7;
      return (FUNC_13(VAR_3, &VAR_6) && FUNC_13(VAR_4, &VAR_7) && VAR_6 == VAR_7);
    }
  }

  switch (FUNC_16(VAR_3)) {
    case 133: return 1;
    case 131: return (FUNC_7(VAR_3) == FUNC_7(VAR_4));
    case 132: return FUNC_11(FUNC_3(VAR_3), FUNC_3(VAR_4));
    case 137: return FUNC_0(VAR_3) == FUNC_0(VAR_4);
    case 135: return FUNC_12(VAR_3) == FUNC_12(VAR_4);
    case 136: return FUNC_4(VAR_3) == FUNC_4(VAR_4);
    case 130: return FUNC_1(FUNC_14(VAR_3), FUNC_14(VAR_4));
    case 134: return FUNC_9(FUNC_14(VAR_3), FUNC_14(VAR_4));
    case 128: {
      if (FUNC_17(VAR_3) == FUNC_17(VAR_4)) return 1;
      else if (VAR_2 == ((void*)0)) return 0;
      VAR_5 = FUNC_2(VAR_2, FUNC_17(VAR_3)->metatable, VAR_1);
      if (VAR_5 == ((void*)0))
        VAR_5 = FUNC_2(VAR_2, FUNC_17(VAR_4)->metatable, VAR_1);
      break;
    }
    case 129: {
      if (FUNC_6(VAR_3) == FUNC_6(VAR_4)) return 1;
      else if (VAR_2 == ((void*)0)) return 0;
      VAR_5 = FUNC_2(VAR_2, FUNC_6(VAR_3)->metatable, VAR_1);
      if (VAR_5 == ((void*)0))
        VAR_5 = FUNC_2(VAR_2, FUNC_6(VAR_4)->metatable, VAR_1);
      break;
    }
    default:
      return FUNC_5(VAR_3) == FUNC_5(VAR_4);
  }
  if (VAR_5 == ((void*)0))
    return 0;
  FUNC_10(VAR_2, VAR_5, VAR_3, VAR_4, VAR_2->top, 1);
  return !FUNC_8(VAR_2->top);
}
