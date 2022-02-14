
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {TYPE_6__* socket_pool; } ;
typedef TYPE_1__ ngx_http_lua_socket_tcp_upstream_t ;
struct TYPE_14__ {scalar_t__ timer_set; scalar_t__ posted; } ;
struct TYPE_11__ {int queue; TYPE_7__ event; TYPE_1__* u; } ;
typedef TYPE_2__ ngx_http_lua_socket_tcp_conn_op_ctx_t ;
struct TYPE_12__ {TYPE_2__* data; } ;
typedef TYPE_3__ ngx_http_lua_co_ctx_t ;
struct TYPE_15__ {int log; } ;
struct TYPE_13__ {int connections; int cache_connect_op; } ;


 int VAR_0 ;
 TYPE_9__* VAR_1 ;
 int FUNC_0 (TYPE_7__*) ;
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (int ,int ,int ,char*,TYPE_2__*,TYPE_1__*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(void *VAR_2)
{
    ngx_http_lua_co_ctx_t *VAR_3 = VAR_2;
    ngx_http_lua_socket_tcp_upstream_t *VAR_4;
    ngx_http_lua_socket_tcp_conn_op_ctx_t *VAR_5;

    VAR_5 = VAR_3->data;
    VAR_4 = VAR_5->u;

    FUNC_3(VAR_0, VAR_1->log, 0,
                   "lua tcp socket abort queueing, conn_op_ctx: %p, u: %p",
                   VAR_5, VAR_4);

    if (VAR_5->event.posted) {
        FUNC_1(&VAR_5->event);

    } else if (VAR_5->event.timer_set) {
        FUNC_0(&VAR_5->event);
    }

    FUNC_5(&VAR_5->queue);
    FUNC_4(&VAR_4->socket_pool->cache_connect_op,
                          &VAR_5->queue);

    VAR_4->socket_pool->connections--;
    FUNC_2(VAR_4->socket_pool);
}
