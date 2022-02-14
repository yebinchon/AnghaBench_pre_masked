
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_11__ ;


typedef scalar_t__ ssize_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_17__ {int connection_close; } ;
struct TYPE_16__ {int tag; } ;
struct TYPE_23__ {scalar_t__ pos; scalar_t__ last; int flush; int memory; int tag; } ;
struct TYPE_19__ {int keepalive; scalar_t__ length; TYPE_2__ headers_in; TYPE_1__ output; int free_bufs; TYPE_7__* out_bufs; TYPE_8__ buffer; } ;
typedef TYPE_4__ ngx_http_upstream_t ;
struct TYPE_20__ {TYPE_3__* connection; int pool; TYPE_4__* upstream; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_15__ {scalar_t__ size; } ;
struct TYPE_21__ {TYPE_11__ chunked; } ;
typedef TYPE_6__ ngx_http_proxy_ctx_t ;
struct TYPE_22__ {TYPE_8__* buf; struct TYPE_22__* next; } ;
typedef TYPE_7__ ngx_chain_t ;
typedef TYPE_8__ ngx_buf_t ;
struct TYPE_18__ {int log; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_7__* FUNC_0 (int ,int *) ;
 TYPE_6__* FUNC_1 (TYPE_5__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_5__*,TYPE_8__*,TYPE_11__*) ;
 int VAR_6 ;
 int FUNC_3 (int ,int ,int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_4 (int ,int ,int ,char*) ;

__attribute__((used)) static ngx_int_t
FUNC_5(void *VAR_7, ssize_t VAR_8)
{
    ngx_http_request_t *VAR_9 = VAR_7;

    ngx_int_t VAR_10;
    ngx_buf_t *VAR_11, *VAR_12;
    ngx_chain_t *VAR_13, **VAR_14;
    ngx_http_upstream_t *VAR_15;
    ngx_http_proxy_ctx_t *VAR_16;

    VAR_16 = FUNC_1(VAR_9, VAR_6);

    if (VAR_16 == ((void*)0)) {
        return VAR_2;
    }

    VAR_15 = VAR_9->upstream;
    VAR_12 = &VAR_15->buffer;

    VAR_12->pos = VAR_12->last;
    VAR_12->last += VAR_8;

    for (VAR_13 = VAR_15->out_bufs, VAR_14 = &VAR_15->out_bufs; VAR_13; VAR_13 = VAR_13->next) {
        VAR_14 = &VAR_13->next;
    }

    for ( ;; ) {

        VAR_10 = FUNC_2(VAR_9, VAR_12, &VAR_16->chunked);

        if (VAR_10 == VAR_5) {



            VAR_13 = FUNC_0(VAR_9->pool, &VAR_15->free_bufs);
            if (VAR_13 == ((void*)0)) {
                return VAR_2;
            }

            *VAR_14 = VAR_13;
            VAR_14 = &VAR_13->next;

            VAR_11 = VAR_13->buf;

            VAR_11->flush = 1;
            VAR_11->memory = 1;

            VAR_11->pos = VAR_12->pos;
            VAR_11->tag = VAR_15->output.tag;

            if (VAR_12->last - VAR_12->pos >= VAR_16->chunked.size) {
                VAR_12->pos += (size_t) VAR_16->chunked.size;
                VAR_11->last = VAR_12->pos;
                VAR_16->chunked.size = 0;

            } else {
                VAR_16->chunked.size -= VAR_12->last - VAR_12->pos;
                VAR_12->pos = VAR_12->last;
                VAR_11->last = VAR_12->last;
            }

            FUNC_3(VAR_3, VAR_9->connection->log, 0,
                           "http proxy out buf %p %z",
                           VAR_11->pos, VAR_11->last - VAR_11->pos);

            continue;
        }

        if (VAR_10 == VAR_1) {



            VAR_15->keepalive = !VAR_15->headers_in.connection_close;
            VAR_15->length = 0;

            break;
        }

        if (VAR_10 == VAR_0) {
            break;
        }



        FUNC_4(VAR_4, VAR_9->connection->log, 0,
                      "upstream sent invalid chunked response");

        return VAR_2;
    }

    return VAR_5;
}
