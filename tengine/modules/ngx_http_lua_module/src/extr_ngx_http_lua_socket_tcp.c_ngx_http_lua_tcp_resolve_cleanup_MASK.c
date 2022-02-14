
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int handler; } ;
typedef TYPE_2__ ngx_resolver_ctx_t ;
struct TYPE_10__ {TYPE_1__* resolved; TYPE_6__* socket_pool; } ;
typedef TYPE_3__ ngx_http_lua_socket_tcp_upstream_t ;
struct TYPE_11__ {TYPE_3__* data; } ;
typedef TYPE_4__ ngx_http_lua_co_ctx_t ;
struct TYPE_13__ {int log; } ;
struct TYPE_12__ {int connections; } ;
struct TYPE_8__ {TYPE_2__* ctx; } ;


 int VAR_0 ;
 TYPE_7__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (int ,int ,int ,char*) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_3(void *VAR_3)
{
    ngx_resolver_ctx_t *VAR_4;
    ngx_http_lua_socket_tcp_upstream_t *VAR_5;
    ngx_http_lua_co_ctx_t *VAR_6 = VAR_3;

    FUNC_1(VAR_0, VAR_1->log, 0,
                   "lua tcp socket abort resolver");

    VAR_5 = VAR_6->data;
    if (VAR_5 == ((void*)0)) {
        return;
    }

    if (VAR_5->socket_pool != ((void*)0)) {
        VAR_5->socket_pool->connections--;
        FUNC_0(VAR_5->socket_pool);
    }

    VAR_4 = VAR_5->resolved->ctx;
    if (VAR_4 == ((void*)0)) {
        return;
    }


    VAR_4->handler = VAR_2;

    FUNC_2(VAR_4);
}
