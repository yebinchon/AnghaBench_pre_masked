
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_12__ ;
typedef struct TYPE_24__ TYPE_11__ ;
typedef struct TYPE_23__ TYPE_10__ ;


typedef int u_char ;
struct TYPE_32__ {size_t len; int * data; } ;
typedef TYPE_7__ ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_26__ {scalar_t__ len; } ;
struct TYPE_30__ {int status; scalar_t__ content_length_n; TYPE_1__ content_type; } ;
struct TYPE_28__ {int data; scalar_t__ len; } ;
struct TYPE_33__ {int err_status; int expect_tested; TYPE_5__ headers_out; TYPE_4__* connection; int pool; TYPE_3__ uri; int write_event_handler; struct TYPE_33__* parent; TYPE_2__* main; } ;
typedef TYPE_8__ ngx_http_request_t ;
struct TYPE_34__ {TYPE_11__* pr_co_ctx; TYPE_10__* ctx; } ;
typedef TYPE_9__ ngx_http_lua_post_subrequest_data_t ;
struct TYPE_23__ {int run_post_subrequest; size_t index; int free_bufs; TYPE_12__* body; int busy_bufs; scalar_t__ headers_set; int seen_last_for_subreq; scalar_t__ entered_content_phase; TYPE_11__* cur_co_ctx; int resume_handler; scalar_t__ no_abort; } ;
typedef TYPE_10__ ngx_http_lua_ctx_t ;
struct TYPE_24__ {scalar_t__ pending_subreqs; int* sr_statuses; TYPE_7__* sr_bodies; TYPE_5__** sr_headers; int * sr_flags; } ;
typedef TYPE_11__ ngx_http_lua_co_ctx_t ;
struct TYPE_25__ {TYPE_6__* buf; struct TYPE_25__* next; } ;
typedef TYPE_12__ ngx_chain_t ;
typedef int ngx_buf_tag_t ;
struct TYPE_31__ {int start; scalar_t__ pos; scalar_t__ last; } ;
struct TYPE_29__ {TYPE_8__* data; int log; } ;
struct TYPE_27__ {int count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int*,int ,...) ;
 int * FUNC_2 (int *,scalar_t__,scalar_t__) ;
 int FUNC_3 (TYPE_8__*) ;
 int FUNC_4 (TYPE_8__*) ;
 int VAR_13 ;
 TYPE_10__* FUNC_5 (TYPE_8__*,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_6 (TYPE_8__*,TYPE_10__*) ;
 int FUNC_7 (TYPE_8__*,TYPE_10__*) ;
 int VAR_16 ;
 int FUNC_8 (TYPE_8__*) ;
 int FUNC_9 (int ,int ,int ,char*) ;
 int FUNC_10 (int ,int ,int ,char*,int,int ) ;
 int FUNC_11 (int ,int ,int ,char*,int) ;
 int * FUNC_12 (int ,size_t) ;
 int FUNC_13 (int ,int ) ;

ngx_int_t
FUNC_14(ngx_http_request_t *VAR_17, void *VAR_18, ngx_int_t VAR_19)
{
    ngx_http_request_t *VAR_20;
    ngx_http_lua_ctx_t *VAR_21;
    ngx_http_lua_ctx_t *VAR_22;
    ngx_http_lua_co_ctx_t *VAR_23;
    size_t VAR_24;
    ngx_str_t *VAR_25;
    u_char *VAR_26;
    ngx_chain_t *VAR_27;

    ngx_http_lua_post_subrequest_data_t *VAR_28 = VAR_18;

    VAR_22 = VAR_28->ctx;

    if (VAR_22->run_post_subrequest) {
        if (VAR_17 != VAR_17->connection->data) {
            VAR_17->connection->data = VAR_17;
        }

        return VAR_12;
    }

    FUNC_10(VAR_10, VAR_17->connection->log, 0,
                   "lua run post subrequest handler, rc:%i c:%ud", VAR_19,
                   VAR_17->main->count);

    VAR_22->run_post_subrequest = 1;

    VAR_20 = VAR_17->parent;

    VAR_21 = FUNC_5(VAR_20, VAR_15);
    if (VAR_21 == ((void*)0)) {
        return VAR_0;
    }

    VAR_23 = VAR_28->pr_co_ctx;
    VAR_23->pending_subreqs--;

    if (VAR_23->pending_subreqs == 0) {
        FUNC_0("all subrequests are done");

        VAR_21->no_abort = 0;
        VAR_21->resume_handler = VAR_16;
        VAR_21->cur_co_ctx = VAR_23;
    }

    if (VAR_21->entered_content_phase) {
        FUNC_9(VAR_10, VAR_17->connection->log, 0,
                       "lua restoring write event handler");

        VAR_20->write_event_handler = VAR_14;

    } else {
        VAR_20->write_event_handler = VAR_13;
    }

    FUNC_0("status rc = %d", (int) VAR_19);
    FUNC_0("status headers_out.status = %d", (int) VAR_17->headers_out.status);
    FUNC_0("uri: %.*s", (int) VAR_17->uri.len, VAR_17->uri.data);



    VAR_23->sr_statuses[VAR_22->index] = VAR_17->headers_out.status;

    if (VAR_23->sr_statuses[VAR_22->index] == 0) {
        if (VAR_19 == VAR_12) {
            VAR_19 = VAR_7;
        }

        if (VAR_19 == VAR_0) {
            VAR_19 = VAR_4;
        }

        if (VAR_19 >= 100) {
            VAR_23->sr_statuses[VAR_22->index] = VAR_19;
        }
    }

    if (!VAR_22->seen_last_for_subreq) {
        VAR_23->sr_flags[VAR_22->index] |= VAR_5;
    }

    FUNC_0("pr_coctx status: %d", (int) VAR_23->sr_statuses[VAR_22->index]);


    if (VAR_22->headers_set) {
        VAR_19 = FUNC_7(VAR_17, VAR_22);
        if (VAR_19 != VAR_12) {
            FUNC_11(VAR_11, VAR_17->connection->log, 0,
                          "failed to set default content type: %i", VAR_19);
            return VAR_0;
        }
    }

    VAR_23->sr_headers[VAR_22->index] = &VAR_17->headers_out;



    VAR_25 = &VAR_23->sr_bodies[VAR_22->index];

    VAR_24 = 0;
    for (VAR_27 = VAR_22->body; VAR_27; VAR_27 = VAR_27->next) {

        VAR_24 += VAR_27->buf->last - VAR_27->buf->pos;
    }

    VAR_25->len = VAR_24;

    if (VAR_24 == 0) {
        VAR_25->data = ((void*)0);

    } else {
        VAR_26 = FUNC_12(VAR_17->pool, VAR_24);
        if (VAR_26 == ((void*)0)) {
            return VAR_0;
        }

        VAR_25->data = VAR_26;



        for (VAR_27 = VAR_22->body; VAR_27; VAR_27 = VAR_27->next) {
            VAR_26 = FUNC_2(VAR_26, VAR_27->buf->pos, VAR_27->buf->last - VAR_27->buf->pos);

            VAR_27->buf->last = VAR_27->buf->pos;





        }
    }

    if (VAR_22->body) {




        FUNC_1(

                                &VAR_21->free_bufs, VAR_21->busy_bufs,
                                &VAR_22->body,
                                (ngx_buf_tag_t) &VAR_15);

        FUNC_0("free bufs: %p", VAR_21->free_bufs);
    }

    FUNC_8(VAR_20);

    if (VAR_17 != VAR_17->connection->data) {
        VAR_17->connection->data = VAR_17;
    }

    if (VAR_19 == VAR_0
        || VAR_19 == VAR_3
        || VAR_19 == VAR_6
        || (VAR_19 >= VAR_9
            && VAR_19 != VAR_2
            && VAR_19 != VAR_8
            && VAR_19 != VAR_1))
    {


        if (VAR_19 > VAR_12) {
            VAR_17->err_status = VAR_19;

            VAR_17->expect_tested = 1;
            VAR_17->headers_out.content_type.len = 0;
            VAR_17->headers_out.content_length_n = 0;

            FUNC_3(VAR_17);
            FUNC_4(VAR_17);

            VAR_19 = FUNC_6(VAR_17, VAR_22);
            if (VAR_19 == VAR_0) {
                return VAR_0;
            }
        }

        return VAR_12;
    }

    return VAR_19;
}
