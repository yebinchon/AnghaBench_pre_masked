
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_5__ {int metatable; } ;
typedef TYPE_1__ Table ;
struct TYPE_6__ {int len; } ;
typedef int TValue ;
typedef int StkId ;




 int VAR_0 ;
 int FUNC_0 (int *,int const*,int const*,int const*,int ,int) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int *,int ,int ) ;
 TYPE_1__* FUNC_3 (int const*) ;
 int FUNC_4 (int *,int const*,char*) ;
 int FUNC_5 (TYPE_1__*) ;
 int * FUNC_6 (int *,int const*,int ) ;
 int FUNC_7 (int ,int ) ;
 TYPE_2__* FUNC_8 (int const*) ;
 int FUNC_9 (int const*) ;
 int FUNC_10 (int const*) ;

void FUNC_11 (lua_State *VAR_1, StkId VAR_2, const TValue *VAR_3) {
  const TValue *VAR_4;
  switch (FUNC_10(VAR_3)) {
    case 128: {
      Table *VAR_5 = FUNC_3(VAR_3);
      VAR_4 = FUNC_2(VAR_1, VAR_5->metatable, VAR_0);
      if (VAR_4) break;
      FUNC_7(VAR_2, FUNC_1(FUNC_5(VAR_5)));
      return;
    }
    case 129: {
      FUNC_7(VAR_2, FUNC_1(FUNC_8(VAR_3)->len));
      return;
    }
    default: {
      VAR_4 = FUNC_6(VAR_1, VAR_3, VAR_0);
      if (FUNC_9(VAR_4))
        FUNC_4(VAR_1, VAR_3, "get length of");
      break;
    }
  }
  FUNC_0(VAR_1, VAR_4, VAR_3, VAR_3, VAR_2, 1);
}
