
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {int base; int stack; } ;
typedef TYPE_1__ lua_State ;
typedef int (* lua_Hook ) (TYPE_1__*,TYPE_3__*) ;
struct TYPE_18__ {int event; int i_ci; int currentline; } ;
typedef TYPE_3__ lua_Debug ;
struct TYPE_19__ {int cur_L; int (* hookf ) (TYPE_1__*,TYPE_3__*) ;} ;
typedef TYPE_5__ global_State ;
typedef int BCLine ;


 TYPE_5__* FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_1__*,scalar_t__) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static void FUNC_12(lua_State *VAR_1, int VAR_2, BCLine VAR_3)
{
  global_State *VAR_4 = FUNC_0(VAR_1);
  lua_Hook VAR_5 = VAR_4->hookf;
  if (VAR_5 && !FUNC_1(VAR_4)) {
    lua_Debug VAR_6;
    FUNC_7(VAR_4);
    VAR_6.event = VAR_2;
    VAR_6.currentline = VAR_3;

    VAR_6.i_ci = (int)((VAR_1->base-1) - FUNC_11(VAR_1->stack));
    FUNC_6(VAR_1, 1+VAR_0);



    FUNC_2(VAR_4);

    VAR_5(VAR_1, &VAR_6);
    FUNC_8(FUNC_1(VAR_4));
    FUNC_10(VAR_4->cur_L, FUNC_9(VAR_1));



    FUNC_3(VAR_4);

  }
}
