
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int ngx_uint_t ;
struct TYPE_25__ {int msec; int sec; } ;
typedef TYPE_5__ ngx_time_t ;
typedef int ngx_table_elt_t ;
typedef void* ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_23__ {int content_length_n; int keep_alive_n; } ;
struct TYPE_21__ {int headers; } ;
struct TYPE_26__ {scalar_t__ subrequests; int content_length_n; int subrequest_in_memory; int waited; int internal; int expect_tested; TYPE_4__* main; int start_msec; int start_sec; scalar_t__ uri_changes; int main_filter_need_in_memory; int discard_body; int log_handler; int variables; int write_event_handler; int read_event_handler; int * post_subrequest; struct TYPE_26__* parent; int http_protocol; int method_name; int unparsed_uri; int raw_uri; void* args; void* uri; int request_line; int http_version; int method; int stream; int spdy_stream; int request_body; TYPE_3__ headers_in; int pool; int loc_conf; int srv_conf; int main_conf; TYPE_1__ headers_out; int * ctx; TYPE_8__* connection; int signature; } ;
typedef TYPE_6__ ngx_http_request_t ;
typedef int ngx_http_post_subrequest_t ;
struct TYPE_27__ {TYPE_2__* ctx; } ;
typedef TYPE_7__ ngx_http_core_srv_conf_t ;
struct TYPE_28__ {int log; } ;
typedef TYPE_8__ ngx_connection_t ;
struct TYPE_24__ {int subrequests; int count; } ;
struct TYPE_22__ {int loc_conf; int srv_conf; int main_conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_6__*) ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_7__* FUNC_3 (TYPE_6__*,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (TYPE_6__*,int *) ;
 int FUNC_5 (TYPE_6__*,void**,void**) ;
 int FUNC_6 (TYPE_6__*) ;
 int VAR_13 ;
 int FUNC_7 (TYPE_6__*) ;
 scalar_t__ FUNC_8 (int *,int ,int,int) ;
 int FUNC_9 (int ,int ,int ,char*,void**,void**) ;
 int FUNC_10 (int ,int ,int ,char*,void**) ;
 void* FUNC_11 (int ,int) ;
 TYPE_5__* FUNC_12 () ;

__attribute__((used)) static ngx_int_t
FUNC_13(ngx_http_request_t *VAR_14,
    ngx_str_t *VAR_15, ngx_str_t *VAR_16, ngx_http_request_t **VAR_17,
    ngx_http_post_subrequest_t *VAR_18, ngx_uint_t VAR_19)
{
    ngx_time_t *VAR_20;
    ngx_connection_t *VAR_21;
    ngx_http_request_t *VAR_22;
    ngx_http_core_srv_conf_t *VAR_23;
    VAR_14->main->subrequests--;

    if (VAR_14->main->subrequests == 0) {




        FUNC_10(VAR_7, VAR_14->connection->log, 0,
                      "lua subrequests cycle while processing \"%V\"", VAR_15);
        VAR_14->main->subrequests = 1;
        return VAR_0;
    }



    VAR_22 = FUNC_11(VAR_14->pool, sizeof(ngx_http_request_t));
    if (VAR_22 == ((void*)0)) {
        return VAR_0;
    }

    VAR_22->signature = VAR_3;

    VAR_21 = VAR_14->connection;
    VAR_22->connection = VAR_21;

    VAR_22->ctx = FUNC_11(VAR_14->pool, sizeof(void *) * VAR_12);
    if (VAR_22->ctx == ((void*)0)) {
        return VAR_0;
    }

    if (FUNC_8(&VAR_22->headers_out.headers, VAR_14->pool, 20,
                      sizeof(ngx_table_elt_t))
        != VAR_8)
    {
        return VAR_0;
    }

    VAR_23 = FUNC_3(VAR_14, VAR_10);
    VAR_22->main_conf = VAR_23->ctx->main_conf;
    VAR_22->srv_conf = VAR_23->ctx->srv_conf;
    VAR_22->loc_conf = VAR_23->ctx->loc_conf;

    VAR_22->pool = VAR_14->pool;

    VAR_22->headers_in.content_length_n = -1;
    VAR_22->headers_in.keep_alive_n = -1;

    FUNC_1(VAR_22);
    FUNC_0(VAR_22);
    FUNC_2(VAR_22);

    VAR_22->request_body = VAR_14->request_body;
    VAR_22->method = VAR_1;
    VAR_22->http_version = VAR_14->http_version;

    VAR_22->request_line = VAR_14->request_line;
    VAR_22->uri = *VAR_15;

    if (VAR_16) {
        VAR_22->args = *VAR_16;
    }

    FUNC_9(VAR_6, VAR_21->log, 0,
                   "lua http subrequest \"%V?%V\"", VAR_15, &VAR_22->args);

    VAR_22->subrequest_in_memory = (VAR_19 & VAR_4) != 0;
    VAR_22->waited = (VAR_19 & VAR_5) != 0;





    VAR_22->unparsed_uri = VAR_14->unparsed_uri;
    VAR_22->method_name = VAR_9;
    VAR_22->http_protocol = VAR_14->http_protocol;

    FUNC_7(VAR_22);

    VAR_22->main = VAR_14->main;
    VAR_22->parent = VAR_14;
    VAR_22->post_subrequest = VAR_18;
    VAR_22->read_event_handler = VAR_13;
    VAR_22->write_event_handler = VAR_11;

    VAR_22->variables = VAR_14->variables;

    VAR_22->log_handler = VAR_14->log_handler;

    VAR_22->internal = 1;

    VAR_22->discard_body = VAR_14->discard_body;
    VAR_22->expect_tested = 1;
    VAR_22->main_filter_need_in_memory = VAR_14->main_filter_need_in_memory;

    VAR_22->uri_changes = VAR_2 + 1;





    VAR_20 = FUNC_12();
    VAR_22->start_sec = VAR_20->sec;
    VAR_22->start_msec = VAR_20->msec;

    VAR_14->main->count++;

    *VAR_17 = VAR_22;





    return FUNC_4(VAR_22, ((void*)0));
}
