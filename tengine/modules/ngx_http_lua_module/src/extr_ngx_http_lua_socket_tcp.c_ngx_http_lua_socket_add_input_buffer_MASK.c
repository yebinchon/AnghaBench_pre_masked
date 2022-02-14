
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


typedef int ngx_int_t ;
struct TYPE_14__ {int pool; TYPE_2__* connection; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_15__ {int buffer; TYPE_6__* buf_in; TYPE_1__* conf; } ;
typedef TYPE_4__ ngx_http_lua_socket_tcp_upstream_t ;
struct TYPE_16__ {int free_recv_bufs; } ;
typedef TYPE_5__ ngx_http_lua_ctx_t ;
struct TYPE_17__ {int * buf; struct TYPE_17__* next; } ;
typedef TYPE_6__ ngx_chain_t ;
struct TYPE_13__ {int log; } ;
struct TYPE_12__ {int buffer_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__* FUNC_0 (TYPE_3__*,int ) ;
 TYPE_6__* FUNC_1 (int ,int ,int *,int ) ;
 int VAR_2 ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_http_request_t *VAR_3,
    ngx_http_lua_socket_tcp_upstream_t *VAR_4)
{
    ngx_chain_t *VAR_5;
    ngx_http_lua_ctx_t *VAR_6;

    VAR_6 = FUNC_0(VAR_3, VAR_2);

    VAR_5 = FUNC_1(VAR_3->connection->log, VAR_3->pool,
                                         &VAR_6->free_recv_bufs,
                                         VAR_4->conf->buffer_size);

    if (VAR_5 == ((void*)0)) {
        return VAR_0;
    }

    VAR_4->buf_in->next = VAR_5;
    VAR_4->buf_in = VAR_5;
    VAR_4->buffer = *VAR_5->buf;

    return VAR_1;
}
