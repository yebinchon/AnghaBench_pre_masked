
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_38__ TYPE_9__ ;
typedef struct TYPE_37__ TYPE_8__ ;
typedef struct TYPE_36__ TYPE_7__ ;
typedef struct TYPE_35__ TYPE_6__ ;
typedef struct TYPE_34__ TYPE_5__ ;
typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_25__ ;
typedef struct TYPE_29__ TYPE_1__ ;
typedef struct TYPE_28__ TYPE_12__ ;
typedef struct TYPE_27__ TYPE_11__ ;
typedef struct TYPE_26__ TYPE_10__ ;


typedef int ngx_table_elt_t ;
struct TYPE_38__ {int * data; int handler; } ;
typedef TYPE_9__ ngx_pool_cleanup_t ;
struct TYPE_36__ {int trailers; int headers; } ;
struct TYPE_35__ {int allocated; int tag; TYPE_25__* free; int sendfile; } ;
struct TYPE_34__ {int temporary; int tag; int * start; int * end; int * last; int * pos; } ;
struct TYPE_29__ {scalar_t__ limit; TYPE_12__* connection; int * out; int ** last; int pool; } ;
struct TYPE_26__ {int * send_pool; TYPE_7__ headers_in; TYPE_6__ output; TYPE_5__ buffer; TYPE_4__* conf; scalar_t__ request_sent; TYPE_1__ writer; int read_event_handler; int write_event_handler; } ;
typedef TYPE_10__ ngx_http_upstream_t ;
struct TYPE_27__ {int pool; TYPE_8__* connection; TYPE_3__* request_body; struct TYPE_27__* main; TYPE_10__* upstream; } ;
typedef TYPE_11__ ngx_http_request_t ;
struct TYPE_28__ {int sendfile; TYPE_11__* data; } ;
typedef TYPE_12__ ngx_connection_t ;
struct TYPE_37__ {int log; } ;
struct TYPE_33__ {int buffer_size; } ;
struct TYPE_32__ {TYPE_2__* buf; scalar_t__ temp_file; } ;
struct TYPE_31__ {int tag; int start; int last; int pos; } ;
struct TYPE_30__ {int * next; TYPE_2__* buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_25__* FUNC_0 (int ) ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_12__*,int ) ;
 int VAR_4 ;
 int FUNC_3 (TYPE_11__*,TYPE_10__*,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (TYPE_11__*,TYPE_10__*) ;
 int FUNC_5 (TYPE_11__*,TYPE_10__*,int) ;
 int VAR_6 ;
 scalar_t__ FUNC_6 (int *,int ,int,int) ;
 int FUNC_7 (int ,int ,int ,char*,TYPE_12__*,TYPE_11__*) ;
 int * FUNC_8 (int ,int) ;
 TYPE_9__* FUNC_9 (int ,int ) ;

void
FUNC_10(ngx_connection_t *VAR_7, ngx_http_request_t *VAR_8)
{
    ngx_http_upstream_t *VAR_9;
    ngx_http_request_t *VAR_10;
    ngx_pool_cleanup_t *VAR_11;

    FUNC_7(VAR_2, VAR_8->connection->log, 0,
                   "multi: http upstream init request: %p, %p", VAR_7, VAR_8);

    VAR_9 = VAR_8->upstream;
    VAR_10 = VAR_7->data;

    VAR_9->write_event_handler = VAR_6;
    VAR_9->read_event_handler = VAR_5;

    VAR_9->output.sendfile = VAR_7->sendfile;


    VAR_9->writer.pool = VAR_10->pool;
    VAR_9->writer.out = ((void*)0);
    VAR_9->writer.last = &VAR_9->writer.out;
    VAR_9->writer.connection = VAR_7;
    VAR_9->writer.limit = 0;

    if (VAR_9->request_sent) {
        if (FUNC_4(VAR_8, VAR_9) != VAR_3) {
            FUNC_3(VAR_8, VAR_9,
                                               VAR_1);
            return;
        }
    }

    if (VAR_8->request_body
        && VAR_8->request_body->buf
        && VAR_8->request_body->temp_file
        && VAR_8 == VAR_8->main)
    {





        VAR_9->output.free = FUNC_0(VAR_8->pool);
        if (VAR_9->output.free == ((void*)0)) {
            FUNC_3(VAR_8, VAR_9,
                                               VAR_1);
            return;
        }

        VAR_9->output.free->buf = VAR_8->request_body->buf;
        VAR_9->output.free->next = ((void*)0);
        VAR_9->output.allocated = 1;

        VAR_8->request_body->buf->pos = VAR_8->request_body->buf->start;
        VAR_8->request_body->buf->last = VAR_8->request_body->buf->start;
        VAR_8->request_body->buf->tag = VAR_9->output.tag;
    }

    VAR_9->request_sent = 0;

    if (VAR_9->buffer.start == ((void*)0)) {
        VAR_9->buffer.start = FUNC_8(VAR_8->pool, VAR_9->conf->buffer_size);
        if (VAR_9->buffer.start == ((void*)0)) {
            FUNC_3(VAR_8, VAR_9,
                                               VAR_1);
            return;
        }

        VAR_9->buffer.pos = VAR_9->buffer.start;
        VAR_9->buffer.last = VAR_9->buffer.start;
        VAR_9->buffer.end = VAR_9->buffer.start + VAR_9->conf->buffer_size;
        VAR_9->buffer.temporary = 1;

        VAR_9->buffer.tag = VAR_9->output.tag;

        if (FUNC_6(&VAR_9->headers_in.headers, VAR_8->pool, 8,
                          sizeof(ngx_table_elt_t))
            != VAR_3)
        {
            FUNC_2(VAR_7,
                                                     VAR_1);
            return;
        }

        if (FUNC_6(&VAR_9->headers_in.trailers, VAR_8->pool, 2,
                          sizeof(ngx_table_elt_t))
            != VAR_3)
        {
            FUNC_2(VAR_7,
                                                     VAR_1);
            return;
        }
    }

    if (VAR_9->send_pool == ((void*)0)) {
        VAR_9->send_pool = FUNC_1(VAR_0, VAR_8->connection->log);
        if (VAR_9->send_pool == ((void*)0)) {
            return;
        }

        VAR_11 = FUNC_9(VAR_8->pool, 0);
        if (VAR_11 == ((void*)0)) {
            return;
        }

        VAR_11->handler = VAR_4;
        VAR_11->data = VAR_9->send_pool;

    }

    FUNC_5(VAR_8, VAR_9, 1);
}
