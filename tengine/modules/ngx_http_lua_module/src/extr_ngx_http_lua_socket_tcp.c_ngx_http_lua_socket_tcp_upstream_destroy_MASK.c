
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cleanup; } ;
typedef TYPE_1__ ngx_http_lua_socket_tcp_upstream_t ;
typedef int lua_State ;


 int FUNC_0 (char*) ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3(lua_State *VAR_0)
{
    ngx_http_lua_socket_tcp_upstream_t *VAR_1;

    FUNC_0("upstream destroy triggered by Lua GC");

    VAR_1 = FUNC_1(VAR_0, 1);
    if (VAR_1 == ((void*)0)) {
        return 0;
    }

    if (VAR_1->cleanup) {
        FUNC_2(VAR_1);
    }

    return 0;
}
