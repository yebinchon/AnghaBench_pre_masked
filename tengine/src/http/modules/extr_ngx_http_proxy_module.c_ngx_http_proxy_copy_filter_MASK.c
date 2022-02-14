
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_16__ {TYPE_3__* connection; TYPE_2__* upstream; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_17__ {int length; int upstream_done; TYPE_4__* input_ctx; TYPE_6__** last_in; TYPE_6__* in; int log; int tag; int free; int pool; } ;
typedef TYPE_5__ ngx_event_pipe_t ;
struct TYPE_18__ {struct TYPE_18__* next; TYPE_7__* buf; } ;
typedef TYPE_6__ ngx_chain_t ;
struct TYPE_19__ {scalar_t__ pos; scalar_t__ last; int last_shadow; int recycled; int num; struct TYPE_19__* shadow; int tag; } ;
typedef TYPE_7__ ngx_buf_t ;
struct TYPE_15__ {int log; } ;
struct TYPE_13__ {int connection_close; } ;
struct TYPE_14__ {int keepalive; TYPE_1__ headers_in; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_6__* FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int ,int ,char*,int ) ;
 int FUNC_2 (int ,int ,int ,char*) ;
 int FUNC_3 (TYPE_7__*,TYPE_7__*,int) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_event_pipe_t *VAR_4, ngx_buf_t *VAR_5)
{
    ngx_buf_t *VAR_6;
    ngx_chain_t *VAR_7;
    ngx_http_request_t *VAR_8;

    if (VAR_5->pos == VAR_5->last) {
        return VAR_3;
    }

    VAR_7 = FUNC_0(VAR_4->pool, &VAR_4->free);
    if (VAR_7 == ((void*)0)) {
        return VAR_0;
    }

    VAR_6 = VAR_7->buf;

    FUNC_3(VAR_6, VAR_5, sizeof(ngx_buf_t));
    VAR_6->shadow = VAR_5;
    VAR_6->tag = VAR_4->tag;
    VAR_6->last_shadow = 1;
    VAR_6->recycled = 1;
    VAR_5->shadow = VAR_6;

    FUNC_1(VAR_1, VAR_4->log, 0, "input buf #%d", VAR_6->num);

    if (VAR_4->in) {
        *VAR_4->last_in = VAR_7;
    } else {
        VAR_4->in = VAR_7;
    }
    VAR_4->last_in = &VAR_7->next;

    if (VAR_4->length == -1) {
        return VAR_3;
    }

    VAR_4->length -= VAR_6->last - VAR_6->pos;

    if (VAR_4->length == 0) {
        VAR_8 = VAR_4->input_ctx;
        VAR_4->upstream_done = 1;
        VAR_8->upstream->keepalive = !VAR_8->upstream->headers_in.connection_close;

    } else if (VAR_4->length < 0) {
        VAR_8 = VAR_4->input_ctx;
        VAR_4->upstream_done = 1;

        FUNC_2(VAR_2, VAR_8->connection->log, 0,
                      "upstream sent more data than specified in "
                      "\"Content-Length\" header");
    }

    return VAR_3;
}
