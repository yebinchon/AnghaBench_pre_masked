
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
typedef struct TYPE_12__ TYPE_11__ ;


typedef int ngx_int_t ;
struct TYPE_16__ {int start; int last; int pos; } ;
struct TYPE_15__ {int * busy; int * in; TYPE_2__* buf; TYPE_11__* free; } ;
struct TYPE_17__ {int header_size; int write_event_handler; int parse_state; TYPE_4__ header_buffer; TYPE_3__ output; TYPE_7__* request_bufs; scalar_t__ request_sent; } ;
typedef TYPE_5__ ngx_http_tfs_t ;
typedef int ngx_http_tfs_header_t ;
struct TYPE_18__ {int pool; struct TYPE_18__* main; TYPE_1__* request_body; } ;
typedef TYPE_6__ ngx_http_request_t ;
struct TYPE_19__ {struct TYPE_19__* next; } ;
typedef TYPE_7__ ngx_chain_t ;
struct TYPE_14__ {int start; int last; int pos; } ;
struct TYPE_13__ {scalar_t__ temp_file; } ;
struct TYPE_12__ {int * next; TYPE_2__* buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_11__* FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_7__*) ;
 int VAR_3 ;

ngx_int_t
FUNC_2(ngx_http_request_t *VAR_4, ngx_http_tfs_t *VAR_5)
{
    ngx_chain_t *VAR_6, *VAR_7;

    VAR_5->request_sent = 0;

    for (VAR_6 = VAR_5->request_bufs; VAR_6; VAR_6 = VAR_7) {
        VAR_7 = VAR_6->next;
        FUNC_1(VAR_4->pool, VAR_6);
    }


    if (VAR_4->request_body && VAR_4->request_body->temp_file
        && VAR_4 != VAR_4->main && VAR_5->output.buf)
    {
        VAR_5->output.free = FUNC_0(VAR_4->pool);
        if (VAR_5->output.free == ((void*)0)) {
            return VAR_0;
        }

        VAR_5->output.free->buf = VAR_5->output.buf;
        VAR_5->output.free->next = ((void*)0);

        VAR_5->output.buf->pos = VAR_5->output.buf->start;
        VAR_5->output.buf->last = VAR_5->output.buf->start;
    }

    VAR_5->output.buf = ((void*)0);
    VAR_5->output.in = ((void*)0);
    VAR_5->output.busy = ((void*)0);

    VAR_5->header_buffer.pos = VAR_5->header_buffer.start;
    VAR_5->header_buffer.last = VAR_5->header_buffer.start;

    VAR_5->parse_state = VAR_1;
    VAR_5->header_size = sizeof(ngx_http_tfs_header_t);
    VAR_5->write_event_handler = VAR_3;

    return VAR_2;
}
