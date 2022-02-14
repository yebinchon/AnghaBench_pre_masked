
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ ngx_uint_t ;
struct TYPE_13__ {TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_14__ {scalar_t__ ft_type; TYPE_2__* write_co_ctx; } ;
typedef TYPE_4__ ngx_http_lua_socket_tcp_upstream_t ;
typedef int lua_State ;
struct TYPE_12__ {int * cleanup; } ;
struct TYPE_11__ {int log; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,TYPE_4__*,int *,scalar_t__) ;
 int FUNC_1 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_2 (int ,int ,int ,char*) ;

__attribute__((used)) static int
FUNC_3(ngx_http_request_t *VAR_1,
    ngx_http_lua_socket_tcp_upstream_t *VAR_2, lua_State *VAR_3)
{
    ngx_uint_t VAR_4;

    FUNC_2(VAR_0, VAR_1->connection->log, 0,
                   "lua tcp socket error retval handler");

    if (VAR_2->write_co_ctx) {
        VAR_2->write_co_ctx->cleanup = ((void*)0);
    }

    FUNC_1(VAR_1, VAR_2);

    VAR_4 = VAR_2->ft_type;
    VAR_2->ft_type = 0;
    return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
}
