
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_45__ TYPE_9__ ;
typedef struct TYPE_44__ TYPE_8__ ;
typedef struct TYPE_43__ TYPE_7__ ;
typedef struct TYPE_42__ TYPE_6__ ;
typedef struct TYPE_41__ TYPE_5__ ;
typedef struct TYPE_40__ TYPE_4__ ;
typedef struct TYPE_39__ TYPE_3__ ;
typedef struct TYPE_38__ TYPE_2__ ;
typedef struct TYPE_37__ TYPE_25__ ;
typedef struct TYPE_36__ TYPE_1__ ;
typedef struct TYPE_35__ TYPE_17__ ;
typedef struct TYPE_34__ TYPE_16__ ;
typedef struct TYPE_33__ TYPE_15__ ;
typedef struct TYPE_32__ TYPE_14__ ;
typedef struct TYPE_31__ TYPE_13__ ;
typedef struct TYPE_30__ TYPE_12__ ;
typedef struct TYPE_29__ TYPE_11__ ;
typedef struct TYPE_28__ TYPE_10__ ;


struct TYPE_45__ {int socklen; int sockaddr; } ;
typedef TYPE_9__ ngx_peer_connection_t ;
struct TYPE_28__ {TYPE_16__* connection; } ;
typedef TYPE_10__ ngx_multi_connection_t ;
typedef int ngx_log_t ;
typedef int ngx_int_t ;
struct TYPE_41__ {TYPE_25__* log; TYPE_16__* connection; } ;
struct TYPE_43__ {TYPE_8__* pool; } ;
struct TYPE_42__ {TYPE_8__* pool; int output_filter; int thread_handler; int aio_preload; int aio_handler; } ;
struct TYPE_29__ {int multi; TYPE_5__ peer; int rewrite_cookie; int rewrite_redirect; int finalize_request; int abort_request; int process_header; int reinit_request; int create_request; int create_key; TYPE_12__* input_filter_ctx; int input_filter; int input_filter_init; int write_event_handler; int read_event_handler; int * state; int upstream; int conf; TYPE_7__ writer; TYPE_6__ output; } ;
typedef TYPE_11__ ngx_http_upstream_t ;
typedef int ngx_http_upstream_state_t ;
struct TYPE_30__ {TYPE_8__* pool; TYPE_11__* upstream; TYPE_16__* connection; int loc_conf; int srv_conf; int main_conf; TYPE_4__* main; } ;
typedef TYPE_12__ ngx_http_request_t ;
struct TYPE_31__ {TYPE_12__* request; TYPE_3__* conf; } ;
typedef TYPE_13__ ngx_http_multi_upstream_peer_data_t ;
struct TYPE_32__ {int used; int queue; int sockaddr; TYPE_3__* conf; int socklen; TYPE_16__* connection; } ;
typedef TYPE_14__ ngx_http_multi_upstream_cache_t ;
struct TYPE_33__ {TYPE_12__* current_request; TYPE_12__* request; TYPE_16__* connection; } ;
typedef TYPE_15__ ngx_http_log_ctx_t ;
struct TYPE_34__ {TYPE_25__* log; TYPE_2__* write; TYPE_1__* read; TYPE_17__* pool; int log_error; int number; TYPE_12__* data; TYPE_10__* multi_c; } ;
typedef TYPE_16__ ngx_connection_t ;
struct TYPE_44__ {TYPE_25__* log; } ;
struct TYPE_40__ {TYPE_12__* http_connection; } ;
struct TYPE_39__ {int cache; } ;
struct TYPE_38__ {TYPE_25__* log; } ;
struct TYPE_37__ {TYPE_15__* data; int * handler; int connection; } ;
struct TYPE_36__ {TYPE_25__* log; } ;
struct TYPE_35__ {TYPE_25__* log; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_10__* FUNC_0 (TYPE_16__*) ;
 TYPE_17__* FUNC_1 (int,TYPE_25__*) ;
 TYPE_12__* FUNC_2 (TYPE_16__*) ;
 int FUNC_3 (TYPE_16__*,TYPE_12__*) ;
 int FUNC_4 (int *,int ,int ) ;
 void* FUNC_5 (TYPE_17__*,int) ;
 int FUNC_6 (int *,int *) ;

ngx_int_t
FUNC_7(ngx_connection_t *VAR_2,
    ngx_peer_connection_t *VAR_3, void *VAR_4)
{
    ngx_http_multi_upstream_peer_data_t *VAR_5 = VAR_4;
    ngx_http_multi_upstream_cache_t *VAR_6;
    ngx_multi_connection_t *VAR_7;
    ngx_http_request_t *VAR_8;
    ngx_http_request_t *VAR_9;
    ngx_http_log_ctx_t *VAR_10;
    ngx_http_upstream_t *VAR_11, *VAR_12;

    VAR_2->pool = FUNC_1(128, VAR_5->request->connection->log);
    if (VAR_2->pool == ((void*)0)) {
        return VAR_0;
    }

    VAR_6 = FUNC_5(VAR_2->pool, sizeof(ngx_http_multi_upstream_cache_t));
    if (VAR_6 == ((void*)0)) {
        return VAR_0;
    }

    VAR_6->connection = VAR_2;
    VAR_6->socklen = VAR_3->socklen;
    VAR_6->used = 1;
    VAR_6->conf = VAR_5->conf;

    FUNC_4(&VAR_6->sockaddr, VAR_3->sockaddr, VAR_3->socklen);

    FUNC_6(&VAR_5->conf->cache, &VAR_6->queue);


    VAR_7 = FUNC_0(VAR_2);
    VAR_7->connection = VAR_2;
    VAR_2->multi_c = VAR_7;

    VAR_8 = VAR_5->request;

    VAR_2->data = VAR_8->main->http_connection;
    VAR_9 = FUNC_2(VAR_2);
    VAR_9->main_conf = VAR_8->main_conf;
    VAR_9->srv_conf = VAR_8->srv_conf;
    VAR_9->loc_conf = VAR_8->loc_conf;
    VAR_9->upstream = FUNC_5(VAR_2->pool, sizeof(ngx_http_upstream_t));
    if (VAR_9->upstream == ((void*)0)) {
        return VAR_0;
    }

    VAR_11 = VAR_8->upstream;
    VAR_12 = VAR_9->upstream;


    VAR_12->peer.connection = VAR_2;
    VAR_12->output.output_filter = VAR_11->output.output_filter;
    VAR_12->output.pool = VAR_9->pool;
    VAR_12->writer.pool = VAR_9->pool;
    VAR_12->input_filter_ctx = VAR_9;
    VAR_12->conf = VAR_11->conf;
    VAR_12->upstream = VAR_11->upstream;
    VAR_12->state = FUNC_5(VAR_2->pool, sizeof(ngx_http_upstream_state_t));
    if (VAR_12->state == ((void*)0)) {
        return VAR_0;
    }

    VAR_12->read_event_handler = VAR_11->read_event_handler;
    VAR_12->write_event_handler = VAR_11->write_event_handler;
    VAR_12->input_filter_init = VAR_11->input_filter_init;
    VAR_12->input_filter = VAR_11->input_filter;
    VAR_12->input_filter_ctx = ((void*)0);



    VAR_12->create_request = VAR_11->create_request;
    VAR_12->reinit_request = VAR_11->reinit_request;
    VAR_12->process_header = VAR_11->process_header;
    VAR_12->abort_request = VAR_11->abort_request;
    VAR_12->finalize_request = VAR_11->finalize_request;
    VAR_12->rewrite_redirect = VAR_11->rewrite_redirect;
    VAR_12->rewrite_cookie = VAR_11->rewrite_cookie;


    VAR_12->multi = 1;

    VAR_9->connection = VAR_2;

    VAR_2->data = VAR_9;

    VAR_2->log = FUNC_5(VAR_2->pool, sizeof(ngx_log_t));
    if (VAR_2->log == ((void*)0)) {
        return VAR_0;
    }
    *VAR_2->log = *VAR_5->request->connection->log;

    VAR_10 = FUNC_5(VAR_2->pool, sizeof(ngx_http_log_ctx_t));
    if (VAR_10 == ((void*)0)) {
        return VAR_0;
    }

    VAR_10->connection = VAR_2;
    VAR_10->request = VAR_9;
    VAR_10->current_request = VAR_9;

    VAR_2->log = FUNC_5(VAR_2->pool, sizeof(ngx_log_t));
    if (VAR_2->log == ((void*)0)) {
        return VAR_0;
    }
    *VAR_2->log = *VAR_5->request->connection->log;
    VAR_2->log->data = VAR_10;
    VAR_9->upstream->peer.log = VAR_2->log;

    VAR_2->log->connection = VAR_2->number;
    VAR_2->log->handler = ((void*)0);
    VAR_2->log->data = VAR_10;
    VAR_2->log_error = VAR_1;

    VAR_2->pool->log = VAR_2->log;

    VAR_2->read->log = VAR_2->log;
    VAR_2->write->log = VAR_2->log;
    VAR_9->pool->log = VAR_2->log;

    return FUNC_3(VAR_2, VAR_5->request);
}
