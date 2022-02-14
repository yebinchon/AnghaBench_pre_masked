
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ngx_http_request_t ;
struct TYPE_4__ {scalar_t__ ft_type; } ;
typedef TYPE_1__ ngx_http_lua_socket_tcp_upstream_t ;
typedef int lua_State ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,TYPE_1__*,int *) ;

__attribute__((used)) static int
FUNC_2(ngx_http_request_t *VAR_0,
    ngx_http_lua_socket_tcp_upstream_t *VAR_1, lua_State *VAR_2)
{
    if (VAR_1->ft_type) {
        return FUNC_1(VAR_0, VAR_1, VAR_2);
    }

    FUNC_0(VAR_2, 1);
    return 1;
}
