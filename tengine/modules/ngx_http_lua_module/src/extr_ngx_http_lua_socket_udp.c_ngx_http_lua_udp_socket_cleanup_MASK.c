
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * request; } ;
typedef TYPE_1__ ngx_http_lua_socket_udp_upstream_t ;
struct TYPE_5__ {TYPE_1__* data; } ;
typedef TYPE_2__ ngx_http_lua_co_ctx_t ;


 int FUNC_0 (int *,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0)
{
    ngx_http_lua_socket_udp_upstream_t *VAR_1;
    ngx_http_lua_co_ctx_t *VAR_2 = VAR_0;

    VAR_1 = VAR_2->data;
    if (VAR_1 == ((void*)0)) {
        return;
    }

    if (VAR_1->request == ((void*)0)) {
        return;
    }

    FUNC_0(VAR_1->request, VAR_1);
}
