
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* p_buffer ;
typedef int lua_State ;
typedef scalar_t__ lua_Number ;
struct TYPE_3__ {scalar_t__ birthday; scalar_t__ sent; scalar_t__ received; } ;


 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 () ;

int FUNC_2(lua_State *VAR_0, p_buffer VAR_1) {
    FUNC_0(VAR_0, (lua_Number) VAR_1->received);
    FUNC_0(VAR_0, (lua_Number) VAR_1->sent);
    FUNC_0(VAR_0, FUNC_1() - VAR_1->birthday);
    return 3;
}
