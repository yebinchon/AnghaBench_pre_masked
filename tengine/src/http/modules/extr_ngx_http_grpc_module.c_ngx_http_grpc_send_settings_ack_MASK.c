
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
struct TYPE_14__ {TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_15__ {scalar_t__ stream_id_3; scalar_t__ stream_id_2; scalar_t__ stream_id_1; scalar_t__ stream_id_0; int flags; int type; scalar_t__ length_2; scalar_t__ length_1; scalar_t__ length_0; } ;
typedef TYPE_4__ ngx_http_grpc_frame_t ;
struct TYPE_16__ {TYPE_6__* out; } ;
typedef TYPE_5__ ngx_http_grpc_ctx_t ;
struct TYPE_17__ {TYPE_2__* buf; struct TYPE_17__* next; } ;
typedef TYPE_6__ ngx_chain_t ;
struct TYPE_13__ {scalar_t__ last; } ;
struct TYPE_12__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_6__* FUNC_0 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_1 (int ,int ,int ,char*) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_http_request_t *VAR_5, ngx_http_grpc_ctx_t *VAR_6)
{
    ngx_chain_t *VAR_7, **VAR_8;
    ngx_http_grpc_frame_t *VAR_9;

    FUNC_1(VAR_3, VAR_5->connection->log, 0,
                   "grpc send settings ack");

    for (VAR_7 = VAR_6->out, VAR_8 = &VAR_6->out; VAR_7; VAR_7 = VAR_7->next) {
        VAR_8 = &VAR_7->next;
    }

    VAR_7 = FUNC_0(VAR_5, VAR_6);
    if (VAR_7 == ((void*)0)) {
        return VAR_0;
    }

    VAR_9 = (ngx_http_grpc_frame_t *) VAR_7->buf->last;
    VAR_7->buf->last += sizeof(ngx_http_grpc_frame_t);

    VAR_9->length_0 = 0;
    VAR_9->length_1 = 0;
    VAR_9->length_2 = 0;
    VAR_9->type = VAR_2;
    VAR_9->flags = VAR_1;
    VAR_9->stream_id_0 = 0;
    VAR_9->stream_id_1 = 0;
    VAR_9->stream_id_2 = 0;
    VAR_9->stream_id_3 = 0;

    *VAR_8 = VAR_7;

    return VAR_4;
}
