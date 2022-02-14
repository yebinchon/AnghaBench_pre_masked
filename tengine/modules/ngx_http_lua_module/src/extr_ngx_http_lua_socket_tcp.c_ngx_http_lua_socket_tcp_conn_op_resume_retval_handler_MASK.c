
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int ngx_http_request_t ;
struct TYPE_14__ {TYPE_2__* socket_pool; } ;
typedef TYPE_3__ ngx_http_lua_socket_tcp_upstream_t ;
struct TYPE_12__ {int len; int data; } ;
struct TYPE_15__ {int queue; int port; TYPE_1__ host; int ** cleanup; } ;
typedef TYPE_4__ ngx_http_lua_socket_tcp_conn_op_ctx_t ;
struct TYPE_16__ {TYPE_6__* cur_co_ctx; } ;
typedef TYPE_5__ ngx_http_lua_ctx_t ;
struct TYPE_17__ {TYPE_4__* data; } ;
typedef TYPE_6__ ngx_http_lua_co_ctx_t ;
typedef int lua_State ;
struct TYPE_13__ {int cache_connect_op; int connections; } ;


 int VAR_0 ;
 int FUNC_0 (char*,TYPE_6__*) ;
 TYPE_5__* FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int **) ;
 int VAR_1 ;
 int FUNC_3 (int *,TYPE_3__*,int *,TYPE_5__*,int ,int ,int ,int) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static int
FUNC_5(ngx_http_request_t *VAR_2,
    ngx_http_lua_socket_tcp_upstream_t *VAR_3, lua_State *VAR_4)
{
    int VAR_5;
    ngx_http_lua_ctx_t *VAR_6;
    ngx_http_lua_co_ctx_t *VAR_7;
    ngx_http_lua_socket_tcp_conn_op_ctx_t *VAR_8;

    VAR_6 = FUNC_1(VAR_2, VAR_1);
    if (VAR_6 == ((void*)0)) {
        return VAR_0;
    }

    VAR_7 = VAR_6->cur_co_ctx;
    FUNC_0("coctx: %p", VAR_7);
    VAR_8 = VAR_7->data;
    if (VAR_8->cleanup != ((void*)0)) {
        *VAR_8->cleanup = ((void*)0);
        FUNC_2(VAR_2, VAR_8->cleanup);
        VAR_8->cleanup = ((void*)0);
    }


    VAR_3->socket_pool->connections--;

    VAR_5 = FUNC_3(VAR_4, VAR_3, VAR_2, VAR_6,
                                                  VAR_8->host.data,
                                                  VAR_8->host.len,
                                                  VAR_8->port, 1);
    FUNC_4(&VAR_3->socket_pool->cache_connect_op,
                          &VAR_8->queue);

    return VAR_5;
}
