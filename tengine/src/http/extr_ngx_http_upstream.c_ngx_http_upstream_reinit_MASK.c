
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_14__ ;
typedef struct TYPE_15__ TYPE_11__ ;


typedef scalar_t__ off_t ;
typedef int ngx_table_elt_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_22__ {int pos; int last; int start; } ;
struct TYPE_20__ {int * busy; int * in; TYPE_3__* buf; TYPE_14__* free; } ;
struct TYPE_15__ {int content_length_n; int last_modified_time; int trailers; int headers; } ;
struct TYPE_23__ {scalar_t__ (* reinit_request ) (TYPE_8__*) ;TYPE_6__ buffer; TYPE_4__ output; TYPE_9__* request_bufs; TYPE_11__ headers_in; scalar_t__ upgrade; scalar_t__ keepalive; } ;
typedef TYPE_7__ ngx_http_upstream_t ;
typedef int ngx_http_upstream_headers_in_t ;
struct TYPE_24__ {TYPE_5__* cache; int pool; struct TYPE_24__* main; TYPE_2__* request_body; } ;
typedef TYPE_8__ ngx_http_request_t ;
struct TYPE_25__ {TYPE_1__* buf; struct TYPE_25__* next; } ;
typedef TYPE_9__ ngx_chain_t ;
struct TYPE_21__ {scalar_t__ header_start; } ;
struct TYPE_19__ {int start; int last; int pos; } ;
struct TYPE_18__ {scalar_t__ temp_file; } ;
struct TYPE_17__ {scalar_t__ file_last; scalar_t__ file_pos; scalar_t__ in_file; int start; int pos; } ;
struct TYPE_16__ {int * next; TYPE_3__* buf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_14__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int ,int,int) ;
 int FUNC_2 (TYPE_11__*,int) ;
 scalar_t__ FUNC_3 (TYPE_8__*) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_http_request_t *VAR_2, ngx_http_upstream_t *VAR_3)
{
    off_t VAR_4;
    ngx_chain_t *VAR_5;

    if (VAR_3->reinit_request(VAR_2) != VAR_1) {
        return VAR_0;
    }

    VAR_3->keepalive = 0;
    VAR_3->upgrade = 0;

    FUNC_2(&VAR_3->headers_in, sizeof(ngx_http_upstream_headers_in_t));
    VAR_3->headers_in.content_length_n = -1;
    VAR_3->headers_in.last_modified_time = -1;

    if (FUNC_1(&VAR_3->headers_in.headers, VAR_2->pool, 8,
                      sizeof(ngx_table_elt_t))
        != VAR_1)
    {
        return VAR_0;
    }

    if (FUNC_1(&VAR_3->headers_in.trailers, VAR_2->pool, 2,
                      sizeof(ngx_table_elt_t))
        != VAR_1)
    {
        return VAR_0;
    }



    VAR_4 = 0;

    for (VAR_5 = VAR_3->request_bufs; VAR_5; VAR_5 = VAR_5->next) {
        VAR_5->buf->pos = VAR_5->buf->start;



        if (VAR_5->buf->in_file) {
            VAR_5->buf->file_pos = VAR_4;
            VAR_4 = VAR_5->buf->file_last;
        }
    }



    if (VAR_2->request_body && VAR_2->request_body->temp_file
        && VAR_2 != VAR_2->main && VAR_3->output.buf)
    {
        VAR_3->output.free = FUNC_0(VAR_2->pool);
        if (VAR_3->output.free == ((void*)0)) {
            return VAR_0;
        }

        VAR_3->output.free->buf = VAR_3->output.buf;
        VAR_3->output.free->next = ((void*)0);

        VAR_3->output.buf->pos = VAR_3->output.buf->start;
        VAR_3->output.buf->last = VAR_3->output.buf->start;
    }

    VAR_3->output.buf = ((void*)0);
    VAR_3->output.in = ((void*)0);
    VAR_3->output.busy = ((void*)0);



    VAR_3->buffer.pos = VAR_3->buffer.start;
    VAR_3->buffer.last = VAR_3->buffer.pos;

    return VAR_1;
}
