
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ngx_resolver_ctx_t ;
struct TYPE_5__ {TYPE_1__* resolved; } ;
typedef TYPE_2__ ngx_http_lua_socket_udp_upstream_t ;
struct TYPE_6__ {TYPE_2__* data; } ;
typedef TYPE_3__ ngx_http_lua_co_ctx_t ;
struct TYPE_4__ {int * ctx; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0)
{
    ngx_resolver_ctx_t *VAR_1;
    ngx_http_lua_socket_udp_upstream_t *VAR_2;
    ngx_http_lua_co_ctx_t *VAR_3 = VAR_0;

    VAR_2 = VAR_3->data;
    if (VAR_2 == ((void*)0)) {
        return;
    }

    VAR_1 = VAR_2->resolved->ctx;
    if (VAR_1 == ((void*)0)) {
        return;
    }

    FUNC_0(VAR_1);
}
