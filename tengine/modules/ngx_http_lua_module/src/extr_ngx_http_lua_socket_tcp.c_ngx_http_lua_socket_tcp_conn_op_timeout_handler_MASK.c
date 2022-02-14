
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_20__ {TYPE_9__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_21__ {int write_prepare_retvals; TYPE_1__* socket_pool; TYPE_7__* write_co_ctx; TYPE_2__* request; } ;
typedef TYPE_3__ ngx_http_lua_socket_tcp_upstream_t ;
struct TYPE_22__ {int queue; int port; int host; TYPE_3__* u; } ;
typedef TYPE_4__ ngx_http_lua_socket_tcp_conn_op_ctx_t ;
struct TYPE_23__ {scalar_t__ log_socket_errors; } ;
typedef TYPE_5__ ngx_http_lua_loc_conf_t ;
struct TYPE_24__ {int (* resume_handler ) (TYPE_2__*) ;scalar_t__ entered_content_phase; TYPE_7__* cur_co_ctx; } ;
typedef TYPE_6__ ngx_http_lua_ctx_t ;
struct TYPE_25__ {scalar_t__ co_ref; TYPE_4__* data; int * cleanup; } ;
typedef TYPE_7__ ngx_http_lua_co_ctx_t ;
struct TYPE_26__ {TYPE_4__* data; } ;
typedef TYPE_8__ ngx_event_t ;
struct TYPE_27__ {int log; } ;
typedef TYPE_9__ ngx_connection_t ;
struct TYPE_19__ {int connections; int cache_connect_op; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_6__* FUNC_1 (TYPE_2__*,int ) ;
 TYPE_5__* FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_6__*) ;
 int VAR_2 ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_3 ;
 int FUNC_6 (TYPE_9__*) ;
 int FUNC_7 (int ,int ,int ,char*) ;
 int FUNC_8 (int ,int ,int ,char*,int *,int ) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void
FUNC_11(ngx_event_t *VAR_4)
{
    ngx_http_lua_socket_tcp_upstream_t *VAR_5;
    ngx_http_lua_ctx_t *VAR_6;
    ngx_connection_t *VAR_7;
    ngx_http_request_t *VAR_8;
    ngx_http_lua_co_ctx_t *VAR_9;
    ngx_http_lua_loc_conf_t *VAR_10;
    ngx_http_lua_socket_tcp_conn_op_ctx_t *VAR_11;

    VAR_11 = VAR_4->data;
    FUNC_10(&VAR_11->queue);

    VAR_5 = VAR_11->u;
    VAR_8 = VAR_5->request;

    VAR_9 = VAR_5->write_co_ctx;
    VAR_9->cleanup = ((void*)0);

    VAR_9->data = VAR_11;
    VAR_5->write_co_ctx = ((void*)0);

    VAR_10 = FUNC_2(VAR_8, VAR_2);

    if (VAR_10->log_socket_errors) {
        FUNC_8(VAR_1, VAR_8->connection->log, 0,
                      "lua tcp socket queued connect timed out,"
                      " when trying to connect to %V:%ud",
                      &VAR_11->host, VAR_11->port);
    }

    FUNC_9(&VAR_5->socket_pool->cache_connect_op,
                          &VAR_11->queue);
    VAR_5->socket_pool->connections--;

    VAR_6 = FUNC_1(VAR_8, VAR_2);
    if (VAR_6 == ((void*)0)) {
        return;
    }

    VAR_6->cur_co_ctx = VAR_9;

    FUNC_3(VAR_9 && (!FUNC_4(VAR_6)
                        || VAR_9->co_ref >= 0));

    FUNC_7(VAR_0, VAR_8->connection->log, 0,
                   "lua tcp socket waking up the current request");

    VAR_5->write_prepare_retvals =
        VAR_3;

    VAR_7 = VAR_8->connection;

    if (VAR_6->entered_content_phase) {
        (void) FUNC_5(VAR_8);

    } else {
        VAR_6->resume_handler = FUNC_5;
        FUNC_0(VAR_8);
    }

    FUNC_6(VAR_7);
}
