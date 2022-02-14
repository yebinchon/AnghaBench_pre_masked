
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* socket_pool; TYPE_2__* request; } ;
typedef TYPE_4__ ngx_http_lua_socket_tcp_upstream_t ;
struct TYPE_10__ {int queue; TYPE_4__* u; } ;
typedef TYPE_5__ ngx_http_lua_socket_tcp_conn_op_ctx_t ;
struct TYPE_8__ {int cache_connect_op; } ;
struct TYPE_7__ {int uri; TYPE_1__* connection; } ;
struct TYPE_6__ {int log; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,char*,int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void
FUNC_2(void *VAR_1)
{
    ngx_http_lua_socket_tcp_upstream_t *VAR_2;
    ngx_http_lua_socket_tcp_conn_op_ctx_t *VAR_3 = VAR_1;

    VAR_2 = VAR_3->u;
    FUNC_0(VAR_0, VAR_2->request->connection->log, 0,
                   "cleanup lua tcp socket conn_op_ctx: \"%V\"",
                   &VAR_2->request->uri);

    FUNC_1(&VAR_2->socket_pool->cache_connect_op,
                          &VAR_3->queue);
}
