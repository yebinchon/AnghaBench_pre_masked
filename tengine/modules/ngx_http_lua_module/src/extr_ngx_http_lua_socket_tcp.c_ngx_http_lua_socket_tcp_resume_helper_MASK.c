
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_13__ ;


typedef int ngx_uint_t ;
typedef int ngx_int_t ;
struct TYPE_26__ {TYPE_8__* connection; } ;
typedef TYPE_1__ ngx_http_request_t ;
struct TYPE_27__ {int (* write_prepare_retvals ) (TYPE_1__*,TYPE_2__*,int ) ;int (* read_prepare_retvals ) (TYPE_1__*,TYPE_2__*,int ) ;TYPE_13__* socket_pool; int conn_closed; struct TYPE_27__* u; } ;
typedef TYPE_2__ ngx_http_lua_socket_tcp_upstream_t ;
typedef int (* ngx_http_lua_socket_tcp_retval_handler ) (TYPE_1__*,TYPE_2__*,int ) ;
typedef TYPE_2__ ngx_http_lua_socket_tcp_conn_op_ctx_t ;
struct TYPE_28__ {scalar_t__ entered_content_phase; TYPE_7__* cur_co_ctx; int resume_handler; } ;
typedef TYPE_6__ ngx_http_lua_ctx_t ;
struct TYPE_29__ {int co; TYPE_2__* data; } ;
typedef TYPE_7__ ngx_http_lua_co_ctx_t ;
struct TYPE_30__ {int log; int requests; } ;
typedef TYPE_8__ ngx_connection_t ;
typedef int lua_State ;
struct TYPE_25__ {int connections; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int FUNC_0 (char*,TYPE_7__*) ;
 TYPE_6__* FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int * FUNC_3 (TYPE_1__*,TYPE_6__*) ;
 int VAR_4 ;
 int FUNC_4 (TYPE_8__*,int *,TYPE_1__*,TYPE_6__*,int ) ;
 int FUNC_5 (int *,TYPE_1__*,TYPE_6__*,int) ;
 int FUNC_6 (TYPE_13__*) ;
 int VAR_5 ;
 int FUNC_7 (int ,int ,int ,char*) ;
 int FUNC_8 (int ,int ,int ,char*,int) ;
 int FUNC_9 (int ,int ,int ,char*,int (*) (TYPE_1__*,TYPE_2__*,int ),TYPE_2__*) ;

__attribute__((used)) static ngx_int_t
FUNC_10(ngx_http_request_t *VAR_6, int VAR_7)
{
    int VAR_8;
    lua_State *VAR_9;
    ngx_int_t VAR_10;
    ngx_uint_t VAR_11;
    ngx_connection_t *VAR_12;
    ngx_http_lua_ctx_t *VAR_13;
    ngx_http_lua_co_ctx_t *VAR_14;
    ngx_http_lua_socket_tcp_conn_op_ctx_t *VAR_15;

    ngx_http_lua_socket_tcp_retval_handler VAR_16;

    ngx_http_lua_socket_tcp_upstream_t *VAR_17;

    VAR_13 = FUNC_1(VAR_6, VAR_4);
    if (VAR_13 == ((void*)0)) {
        return VAR_2;
    }

    VAR_13->resume_handler = VAR_5;

    FUNC_7(VAR_3, VAR_6->connection->log, 0,
                   "lua tcp operation done, resuming lua thread");

    VAR_14 = VAR_13->cur_co_ctx;

    FUNC_0("coctx: %p", VAR_14);

    switch (VAR_7) {

    case 129:
        VAR_15 = VAR_14->data;
        VAR_17 = VAR_15->u;
        VAR_16 = VAR_17->write_prepare_retvals;
        break;

    case 131:
    case 128:
        VAR_17 = VAR_14->data;
        VAR_16 = VAR_17->write_prepare_retvals;
        break;

    case 130:
        VAR_17 = VAR_14->data;
        VAR_16 = VAR_17->read_prepare_retvals;
        break;

    default:

        return VAR_2;
    }

    FUNC_9(VAR_3, VAR_6->connection->log, 0,
                   "lua tcp socket calling prepare retvals handler %p, "
                   "u:%p", VAR_16, VAR_17);

    VAR_8 = VAR_16(VAR_6, VAR_17, VAR_13->cur_co_ctx->co);
    if (VAR_7 == 131
        && VAR_8 > 1
        && !VAR_17->conn_closed
        && VAR_17->socket_pool != ((void*)0))
    {
        VAR_17->socket_pool->connections--;
        FUNC_6(VAR_17->socket_pool);
    }

    if (VAR_8 == VAR_0) {
        return VAR_1;
    }

    VAR_12 = VAR_6->connection;
    VAR_9 = FUNC_3(VAR_6, VAR_13);
    VAR_11 = VAR_12->requests;

    VAR_10 = FUNC_5(VAR_9, VAR_6, VAR_13, VAR_8);

    FUNC_8(VAR_3, VAR_6->connection->log, 0,
                   "lua run thread returned %d", VAR_10);

    if (VAR_10 == VAR_0) {
        return FUNC_4(VAR_12, VAR_9, VAR_6, VAR_13, VAR_11);
    }

    if (VAR_10 == VAR_1) {
        FUNC_2(VAR_6, VAR_1);
        return FUNC_4(VAR_12, VAR_9, VAR_6, VAR_13, VAR_11);
    }

    if (VAR_13->entered_content_phase) {
        FUNC_2(VAR_6, VAR_10);
        return VAR_1;
    }

    return VAR_10;
}
