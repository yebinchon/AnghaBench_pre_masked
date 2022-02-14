
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ handler; TYPE_1__* data; struct TYPE_11__* next; } ;
typedef TYPE_2__ ngx_pool_cleanup_t ;
struct TYPE_12__ {scalar_t__ cached; TYPE_5__* connection; } ;
typedef TYPE_3__ ngx_peer_connection_t ;
typedef int ngx_int_t ;
typedef int ngx_http_request_t ;
struct TYPE_13__ {int id; TYPE_1__* connection; void* recv_window; void* send_window; } ;
typedef TYPE_4__ ngx_http_grpc_ctx_t ;
typedef int ngx_http_grpc_conn_t ;
struct TYPE_14__ {TYPE_7__* pool; int log; } ;
typedef TYPE_5__ ngx_connection_t ;
struct TYPE_15__ {TYPE_2__* cleanup; } ;
struct TYPE_10__ {int last_stream_id; void* recv_window; void* send_window; void* init_window; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int ,int ,char*) ;
 TYPE_2__* FUNC_1 (TYPE_7__*,int) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_http_request_t *VAR_6,
    ngx_http_grpc_ctx_t *VAR_7, ngx_peer_connection_t *VAR_8)
{
    ngx_connection_t *VAR_9;
    ngx_pool_cleanup_t *VAR_10;

    VAR_9 = VAR_8->connection;

    if (VAR_8->cached) {






        for (VAR_10 = VAR_9->pool->cleanup; VAR_10; VAR_10 = VAR_10->next) {
            if (VAR_10->handler == VAR_5) {
                VAR_7->connection = VAR_10->data;
                break;
            }
        }

        if (VAR_7->connection == ((void*)0)) {
            FUNC_0(VAR_3, VAR_9->log, 0,
                          "no connection data found for "
                          "keepalive http2 connection");
            return VAR_0;
        }

        VAR_7->send_window = VAR_7->connection->init_window;
        VAR_7->recv_window = VAR_2;

        VAR_7->connection->last_stream_id += 2;
        VAR_7->id = VAR_7->connection->last_stream_id;

        return VAR_4;
    }

    VAR_10 = FUNC_1(VAR_9->pool, sizeof(ngx_http_grpc_conn_t));
    if (VAR_10 == ((void*)0)) {
        return VAR_0;
    }

    VAR_10->handler = VAR_5;
    VAR_7->connection = VAR_10->data;

    VAR_7->connection->init_window = VAR_1;
    VAR_7->connection->send_window = VAR_1;
    VAR_7->connection->recv_window = VAR_2;

    VAR_7->send_window = VAR_1;
    VAR_7->recv_window = VAR_2;

    VAR_7->id = 1;
    VAR_7->connection->last_stream_id = 1;

    return VAR_4;
}
