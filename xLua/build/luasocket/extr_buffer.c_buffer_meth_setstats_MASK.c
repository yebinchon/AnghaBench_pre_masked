
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* p_buffer ;
typedef int lua_State ;
typedef int lua_Number ;
struct TYPE_3__ {long received; long sent; scalar_t__ birthday; } ;


 scalar_t__ FUNC_0 (int *,int,int ) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 () ;

int FUNC_5(lua_State *VAR_0, p_buffer VAR_1) {
    VAR_1->received = (long) FUNC_0(VAR_0, 2, (lua_Number) VAR_1->received);
    VAR_1->sent = (long) FUNC_0(VAR_0, 3, (lua_Number) VAR_1->sent);
    if (FUNC_1(VAR_0, 4)) VAR_1->birthday = FUNC_4() - FUNC_3(VAR_0, 4);
    FUNC_2(VAR_0, 1);
    return 1;
}
