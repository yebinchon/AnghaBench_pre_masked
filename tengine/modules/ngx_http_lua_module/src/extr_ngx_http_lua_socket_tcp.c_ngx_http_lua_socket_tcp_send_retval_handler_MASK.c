
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_10__ {int request_len; scalar_t__ ft_type; } ;
typedef TYPE_3__ ngx_http_lua_socket_tcp_upstream_t ;
typedef int lua_State ;
struct TYPE_8__ {int log; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*,int *) ;
 int FUNC_2 (int ,int ,int ,char*) ;

__attribute__((used)) static int
FUNC_3(ngx_http_request_t *VAR_1,
    ngx_http_lua_socket_tcp_upstream_t *VAR_2, lua_State *VAR_3)
{
    FUNC_2(VAR_0, VAR_1->connection->log, 0,
                   "lua tcp socket send return value handler");

    if (VAR_2->ft_type) {
        return FUNC_1(VAR_1, VAR_2, VAR_3);
    }

    FUNC_0(VAR_3, VAR_2->request_len);
    return 1;
}
