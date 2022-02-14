
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int off_t ;
typedef int ngx_int_t ;
struct TYPE_15__ {int content_length_n; } ;
struct TYPE_16__ {int pool; int request_body_no_buffering; TYPE_2__ headers_in; TYPE_1__* connection; TYPE_4__* request_body; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_17__ {int rest; int busy; int free; } ;
typedef TYPE_4__ ngx_http_request_body_t ;
struct TYPE_18__ {struct TYPE_18__* next; TYPE_6__* buf; } ;
typedef TYPE_5__ ngx_chain_t ;
typedef scalar_t__ ngx_buf_tag_t ;
struct TYPE_19__ {int temporary; size_t start; size_t pos; size_t last; int last_buf; int flush; int end; scalar_t__ tag; } ;
typedef TYPE_6__ ngx_buf_t ;
struct TYPE_14__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__* FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *,int *,TYPE_5__**,scalar_t__) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_3 (int ,int ,int ,char*) ;
 int FUNC_4 (TYPE_6__*,int) ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_http_request_t *VAR_3, ngx_chain_t *VAR_4)
{
    size_t VAR_5;
    ngx_int_t VAR_6;
    ngx_buf_t *VAR_7;
    ngx_chain_t *VAR_8, *VAR_9, *VAR_10, **VAR_11;
    ngx_http_request_body_t *VAR_12;

    VAR_12 = VAR_3->request_body;

    if (VAR_12->rest == -1) {
        FUNC_3(VAR_1, VAR_3->connection->log, 0,
                       "http request body content length filter");

        VAR_12->rest = VAR_3->headers_in.content_length_n;
    }

    VAR_10 = ((void*)0);
    VAR_11 = &VAR_10;

    for (VAR_8 = VAR_4; VAR_8; VAR_8 = VAR_8->next) {

        if (VAR_12->rest == 0) {
            break;
        }

        VAR_9 = FUNC_0(VAR_3->pool, &VAR_12->free);
        if (VAR_9 == ((void*)0)) {
            return VAR_0;
        }

        VAR_7 = VAR_9->buf;

        FUNC_4(VAR_7, sizeof(ngx_buf_t));

        VAR_7->temporary = 1;
        VAR_7->tag = (ngx_buf_tag_t) &VAR_2;
        VAR_7->start = VAR_8->buf->pos;
        VAR_7->pos = VAR_8->buf->pos;
        VAR_7->last = VAR_8->buf->last;
        VAR_7->end = VAR_8->buf->end;
        VAR_7->flush = VAR_3->request_body_no_buffering;

        VAR_5 = VAR_8->buf->last - VAR_8->buf->pos;

        if ((off_t) VAR_5 < VAR_12->rest) {
            VAR_8->buf->pos = VAR_8->buf->last;
            VAR_12->rest -= VAR_5;

        } else {
            VAR_8->buf->pos += (size_t) VAR_12->rest;
            VAR_12->rest = 0;
            VAR_7->last = VAR_8->buf->pos;
            VAR_7->last_buf = 1;
        }

        *VAR_11 = VAR_9;
        VAR_11 = &VAR_9->next;
    }

    VAR_6 = FUNC_2(VAR_3, VAR_10);

    FUNC_1(VAR_3->pool, &VAR_12->free, &VAR_12->busy, &VAR_10,
                            (ngx_buf_tag_t) &VAR_2);

    return VAR_6;
}
