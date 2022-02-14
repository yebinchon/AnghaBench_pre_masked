
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ngx_log_t ;
struct TYPE_3__ {scalar_t__ key; int * lua_vm; } ;
typedef TYPE_1__ ngx_http_lua_socket_pool_t ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int *,int ,char*,scalar_t__) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_8(ngx_log_t *VAR_3, ngx_http_lua_socket_pool_t *VAR_4)
{
    lua_State *VAR_5;

    FUNC_7(VAR_1, VAR_3, 0,
                   "lua tcp socket keepalive: free connection pool for \"%s\"",
                   VAR_4->key);

    VAR_5 = VAR_4->lua_vm;

    FUNC_1(VAR_5, FUNC_6(VAR_2));
    FUNC_4(VAR_5, VAR_0);
    FUNC_3(VAR_5, (char *) VAR_4->key);
    FUNC_2(VAR_5);
    FUNC_5(VAR_5, -3);
    FUNC_0(VAR_5, 1);
}
