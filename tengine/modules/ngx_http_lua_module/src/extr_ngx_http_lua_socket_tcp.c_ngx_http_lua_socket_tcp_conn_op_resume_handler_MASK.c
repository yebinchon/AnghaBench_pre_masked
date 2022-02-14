
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_19__ ;


typedef int ngx_queue_t ;
struct TYPE_21__ {TYPE_9__* connection; } ;
typedef TYPE_1__ ngx_http_request_t ;
struct TYPE_22__ {int write_prepare_retvals; TYPE_6__* write_co_ctx; TYPE_4__* socket_pool; TYPE_1__* request; } ;
typedef TYPE_2__ ngx_http_lua_socket_tcp_upstream_t ;
struct TYPE_23__ {int * cleanup; int queue; TYPE_2__* u; } ;
typedef TYPE_3__ ngx_http_lua_socket_tcp_conn_op_ctx_t ;
struct TYPE_24__ {scalar_t__ backlog; scalar_t__ connections; scalar_t__ size; int cache_connect_op; int wait_connect_op; int key; } ;
typedef TYPE_4__ ngx_http_lua_socket_pool_t ;
struct TYPE_25__ {int (* resume_handler ) (TYPE_1__*) ;scalar_t__ entered_content_phase; TYPE_6__* cur_co_ctx; } ;
typedef TYPE_5__ ngx_http_lua_ctx_t ;
struct TYPE_26__ {scalar_t__ co_ref; TYPE_3__* data; int * cleanup; } ;
typedef TYPE_6__ ngx_http_lua_co_ctx_t ;
struct TYPE_27__ {int handler; TYPE_3__* data; } ;
typedef TYPE_7__ ngx_http_cleanup_t ;
struct TYPE_28__ {TYPE_3__* data; } ;
typedef TYPE_8__ ngx_event_t ;
struct TYPE_29__ {int log; } ;
typedef TYPE_9__ ngx_connection_t ;
struct TYPE_20__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_19__* VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_5__* FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int) ;
 TYPE_7__* FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_5__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_5 ;
 int FUNC_6 (TYPE_9__*) ;
 int FUNC_7 (int ,int ,int ,char*) ;
 int FUNC_8 (int ,int ,int ,char*,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void
FUNC_13(ngx_event_t *VAR_6)
{
    ngx_queue_t *VAR_7;
    ngx_connection_t *VAR_8;
    ngx_http_lua_ctx_t *VAR_9;
    ngx_http_request_t *VAR_10;
    ngx_http_cleanup_t *VAR_11;
    ngx_http_lua_co_ctx_t *VAR_12;
    ngx_http_lua_socket_pool_t *VAR_13;
    ngx_http_lua_socket_tcp_upstream_t *VAR_14;
    ngx_http_lua_socket_tcp_conn_op_ctx_t *VAR_15;

    VAR_15 = VAR_6->data;
    VAR_14 = VAR_15->u;
    VAR_10 = VAR_14->request;
    VAR_13 = VAR_14->socket_pool;

    if (FUNC_9(&VAR_13->wait_connect_op)) {





        if (VAR_13->backlog >= 0 && VAR_13->connections > VAR_13->size) {
            FUNC_8(VAR_1, VAR_2->log, 0,
                          "lua tcp socket connections count mismatched for "
                          "connection pool \"%s\", connections: %i, size: %i",
                          VAR_13->key, VAR_13->connections, VAR_13->size);
            VAR_13->connections = VAR_13->size;
        }


        return;
    }

    VAR_7 = FUNC_10(&VAR_13->wait_connect_op);
    FUNC_12(VAR_7);

    VAR_12 = VAR_14->write_co_ctx;
    VAR_12->cleanup = ((void*)0);

    VAR_12->data = VAR_15;

    VAR_14->write_co_ctx = ((void*)0);

    VAR_9 = FUNC_1(VAR_10, VAR_3);
    if (VAR_9 == ((void*)0)) {
        FUNC_11(&VAR_13->cache_connect_op,
                              &VAR_15->queue);
        return;
    }

    VAR_9->cur_co_ctx = VAR_12;

    FUNC_2(VAR_12 && (!FUNC_4(VAR_9)
                        || VAR_12->co_ref >= 0));

    FUNC_7(VAR_0, VAR_10->connection->log, 0,
                   "lua tcp socket waking up the current request");

    VAR_14->write_prepare_retvals =
        VAR_5;

    VAR_8 = VAR_10->connection;

    if (VAR_9->entered_content_phase) {
        (void) FUNC_5(VAR_10);

    } else {
        VAR_11 = FUNC_3(VAR_10, 0);
        if (VAR_11 != ((void*)0)) {
            VAR_11->handler = VAR_4;
            VAR_11->data = VAR_15;
            VAR_15->cleanup = &VAR_11->handler;
        }

        VAR_9->resume_handler = FUNC_5;
        FUNC_0(VAR_10);
    }

    FUNC_6(VAR_8);
}
