
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ ngx_uint_t ;
typedef int ngx_http_request_t ;
struct TYPE_7__ {scalar_t__ no_close; scalar_t__ ft_type; TYPE_1__* read_co_ctx; } ;
typedef TYPE_2__ ngx_http_lua_socket_tcp_upstream_t ;
typedef int lua_State ;
struct TYPE_6__ {int * cleanup; } ;


 int FUNC_0 (int *,TYPE_2__*,int *,scalar_t__) ;
 int FUNC_1 (int *,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_2(ngx_http_request_t *VAR_0,
    ngx_http_lua_socket_tcp_upstream_t *VAR_1, lua_State *VAR_2)
{
    ngx_uint_t VAR_3;

    if (VAR_1->read_co_ctx) {
        VAR_1->read_co_ctx->cleanup = ((void*)0);
    }

    VAR_3 = VAR_1->ft_type;
    VAR_1->ft_type = 0;

    if (VAR_1->no_close) {
        VAR_1->no_close = 0;

    } else {
        FUNC_1(VAR_0, VAR_1);
    }

    return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
}
