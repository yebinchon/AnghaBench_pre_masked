
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_22__ {TYPE_3__* connection; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_25__ {int * connection; int data; int (* free ) (TYPE_7__*,int ,int ) ;} ;
struct TYPE_20__ {scalar_t__ len; int * data; } ;
struct TYPE_23__ {int conn_closed; TYPE_6__* socket_pool; TYPE_7__ peer; TYPE_2__ ssl_name; TYPE_1__* resolved; scalar_t__ body_downstream; scalar_t__ raw_downstream; int ** cleanup; } ;
typedef TYPE_5__ ngx_http_lua_socket_tcp_upstream_t ;
struct TYPE_24__ {scalar_t__ connections; } ;
typedef TYPE_6__ ngx_http_lua_socket_pool_t ;
typedef int ngx_connection_t ;
struct TYPE_21__ {int log; } ;
struct TYPE_19__ {int * ctx; } ;


 int VAR_0 ;
 int FUNC_0 (char*,TYPE_4__*,TYPE_5__*,int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_4__*,int **) ;
 int FUNC_3 (int ,TYPE_6__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_6 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (int ,int ,int ,char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_7__*,int ,int ) ;

__attribute__((used)) static void
FUNC_11(ngx_http_request_t *VAR_1,
    ngx_http_lua_socket_tcp_upstream_t *VAR_2)
{
    ngx_connection_t *VAR_3;
    ngx_http_lua_socket_pool_t *VAR_4;

    FUNC_0("request: %p, u: %p, u->cleanup: %p", VAR_1, VAR_2, VAR_2->cleanup);

    FUNC_8(VAR_0, VAR_1->connection->log, 0,
                   "lua finalize socket");

    if (VAR_2->cleanup) {
        *VAR_2->cleanup = ((void*)0);
        FUNC_2(VAR_1, VAR_2->cleanup);
        VAR_2->cleanup = ((void*)0);
    }

    FUNC_5(VAR_1, VAR_2);
    FUNC_6(VAR_1, VAR_2);

    if (VAR_2->raw_downstream || VAR_2->body_downstream) {
        VAR_2->peer.connection = ((void*)0);
        return;
    }

    if (VAR_2->resolved && VAR_2->resolved->ctx) {
        FUNC_9(VAR_2->resolved->ctx);
        VAR_2->resolved->ctx = ((void*)0);
    }

    if (VAR_2->peer.free) {
        VAR_2->peer.free(&VAR_2->peer, VAR_2->peer.data, 0);
    }
    VAR_3 = VAR_2->peer.connection;
    if (VAR_3) {
        FUNC_8(VAR_0, VAR_1->connection->log, 0,
                       "lua close socket connection");

        FUNC_4(VAR_3);
        VAR_2->peer.connection = ((void*)0);
        VAR_2->conn_closed = 1;

        VAR_4 = VAR_2->socket_pool;
        if (VAR_4 == ((void*)0)) {
            return;
        }

        VAR_4->connections--;

        if (VAR_4->connections == 0) {
            FUNC_3(VAR_1->connection->log, VAR_4);
            return;
        }

        FUNC_7(VAR_4);
    }
}
