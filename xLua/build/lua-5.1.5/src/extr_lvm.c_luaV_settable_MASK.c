
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_5__ {scalar_t__ flags; int metatable; } ;
typedef TYPE_1__ Table ;
typedef int const TValue ;
typedef int StkId ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int const*,int const*,int const*,int ) ;
 int const* FUNC_1 (int *,int ,int ) ;
 TYPE_1__* FUNC_2 (int const*) ;
 int FUNC_3 (int *,TYPE_1__*,int ) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int const*,char*) ;
 int const* FUNC_6 (int *,TYPE_1__*,int const*) ;
 int const* FUNC_7 (int *,int const*,int ) ;
 int FUNC_8 (int *,int const*,int const*) ;
 int FUNC_9 (int *,int const*,int ) ;
 scalar_t__ FUNC_10 (int const*) ;
 scalar_t__ FUNC_11 (int const*) ;
 scalar_t__ FUNC_12 (int const*) ;

void FUNC_13 (lua_State *VAR_2, const TValue *VAR_3, TValue *VAR_4, StkId VAR_5) {
  int VAR_6;
  TValue VAR_7;
  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
    const TValue *VAR_8;
    if (FUNC_12(VAR_3)) {
      Table *VAR_9 = FUNC_2(VAR_3);
      TValue *VAR_10 = FUNC_6(VAR_2, VAR_9, VAR_4);
      if (!FUNC_11(VAR_10) ||
          (VAR_8 = FUNC_1(VAR_2, VAR_9->metatable, VAR_1)) == ((void*)0)) {
        FUNC_9(VAR_2, VAR_10, VAR_5);
        VAR_9->flags = 0;
        FUNC_3(VAR_2, VAR_9, VAR_5);
        return;
      }

    }
    else if (FUNC_11(VAR_8 = FUNC_7(VAR_2, VAR_3, VAR_1)))
      FUNC_5(VAR_2, VAR_3, "index");
    if (FUNC_10(VAR_8)) {
      FUNC_0(VAR_2, VAR_8, VAR_3, VAR_4, VAR_5);
      return;
    }

    FUNC_8(VAR_2, &VAR_7, VAR_8);
    VAR_3 = &VAR_7;
  }
  FUNC_4(VAR_2, "loop in settable");
}
