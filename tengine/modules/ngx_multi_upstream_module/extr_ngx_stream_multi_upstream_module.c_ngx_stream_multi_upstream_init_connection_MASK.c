
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_9__ ;
typedef struct TYPE_34__ TYPE_8__ ;
typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;
typedef struct TYPE_26__ TYPE_18__ ;
typedef struct TYPE_25__ TYPE_17__ ;
typedef struct TYPE_24__ TYPE_12__ ;
typedef struct TYPE_23__ TYPE_11__ ;
typedef struct TYPE_22__ TYPE_10__ ;


typedef int ngx_stream_upstream_t ;
typedef int ngx_stream_upstream_state_t ;
struct TYPE_33__ {TYPE_6__* upstream; TYPE_12__* connection; int * captures_data; int * captures; int ncaptures; int * log_handler; int * variables; int * upstream_states; int * ctx; int health_check; int stat_processing; scalar_t__ ssl; int status; int phase_handler; int srv_conf; int main_conf; int start_msec; int start_sec; int received; int signature; } ;
typedef TYPE_7__ ngx_stream_session_t ;
struct TYPE_34__ {TYPE_7__* session; TYPE_4__* conf; } ;
typedef TYPE_8__ ngx_stream_multi_upstream_peer_data_t ;
struct TYPE_35__ {int used; int queue; int sockaddr; TYPE_4__* conf; int socklen; TYPE_12__* connection; } ;
typedef TYPE_9__ ngx_stream_multi_upstream_cache_t ;
struct TYPE_22__ {int socklen; int sockaddr; } ;
typedef TYPE_10__ ngx_peer_connection_t ;
struct TYPE_23__ {int data; } ;
typedef TYPE_11__ ngx_multi_connection_t ;
typedef int ngx_log_t ;
typedef int ngx_int_t ;
struct TYPE_24__ {TYPE_18__* log; TYPE_3__* write; TYPE_2__* read; TYPE_17__* pool; TYPE_11__* multi_c; TYPE_7__* data; int listening; } ;
typedef TYPE_12__ ngx_connection_t ;
struct TYPE_31__ {TYPE_18__* log; int name; TYPE_12__* connection; } ;
struct TYPE_32__ {int multi; TYPE_5__ peer; TYPE_1__* state; int * resolved; int upstream; int * downstream_busy; int * downstream_out; int * upstream_busy; int * upstream_out; int * free; } ;
struct TYPE_30__ {int cache; } ;
struct TYPE_29__ {TYPE_18__* log; } ;
struct TYPE_28__ {TYPE_18__* log; } ;
struct TYPE_27__ {int peer; } ;
struct TYPE_26__ {TYPE_7__* data; } ;
struct TYPE_25__ {TYPE_18__* log; } ;


 int VAR_0 ;
 TYPE_17__* FUNC_0 (int,TYPE_18__*) ;
 int FUNC_1 (int *,int ,int ) ;
 TYPE_18__* FUNC_2 (TYPE_17__*,int) ;
 void* FUNC_3 (TYPE_17__*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (TYPE_12__*,TYPE_7__*) ;

ngx_int_t
FUNC_7(ngx_connection_t *VAR_1,
    ngx_peer_connection_t *VAR_2, void *VAR_3)
{
    ngx_stream_multi_upstream_peer_data_t *VAR_4 = VAR_3;
    ngx_stream_multi_upstream_cache_t *VAR_5;
    ngx_multi_connection_t *VAR_6;
    ngx_stream_session_t *VAR_7, *VAR_8;

    VAR_1->pool = FUNC_0(128, VAR_4->session->connection->log);
    if (VAR_1->pool == ((void*)0)) {
        return VAR_0;
    }

    VAR_5 = FUNC_3(VAR_1->pool, sizeof(ngx_stream_multi_upstream_cache_t));
    if (VAR_5 == ((void*)0)) {
        return VAR_0;
    }

    VAR_5->connection = VAR_1;
    VAR_5->socklen = VAR_2->socklen;
    VAR_5->used = 1;
    VAR_5->conf = VAR_4->conf;

    FUNC_1(&VAR_5->sockaddr, VAR_2->sockaddr, VAR_2->socklen);

    FUNC_5(&VAR_4->conf->cache, &VAR_5->queue);


    VAR_6 = FUNC_3(VAR_1->pool, sizeof(ngx_multi_connection_t));
    if (VAR_6 == ((void*)0)) {
        return VAR_0;
    }
    FUNC_4(&VAR_6->data);

    VAR_7 = FUNC_3(VAR_1->pool, sizeof(ngx_stream_session_t));
    if (VAR_7 == ((void*)0)) {
        return VAR_0;
    }





    VAR_8 = VAR_4->session;
    VAR_7->signature = VAR_8->signature;
    VAR_7->connection = VAR_1;
    VAR_1->listening = VAR_8->connection->listening;
    VAR_7->received = VAR_8->received;
    VAR_7->start_sec = VAR_8->start_sec;
    VAR_7->start_msec = VAR_8->start_msec;
    VAR_7->main_conf = VAR_8->main_conf;
    VAR_7->srv_conf = VAR_8->srv_conf;
    VAR_7->phase_handler = VAR_8->phase_handler;
    VAR_7->status = VAR_8->status;

    VAR_7->ssl = 0;
    VAR_7->stat_processing = VAR_8->stat_processing;
    VAR_7->health_check = VAR_8->health_check;

    VAR_7->upstream = FUNC_3(VAR_1->pool, sizeof(ngx_stream_upstream_t));
    if (VAR_7->upstream == ((void*)0)) {
        return VAR_0;
    }



    VAR_7->upstream->peer.connection = VAR_1;
    VAR_7->upstream->peer.name = VAR_8->upstream->peer.name;
    VAR_7->upstream->free = ((void*)0);
    VAR_7->upstream->upstream_out = ((void*)0);
    VAR_7->upstream->upstream_busy = ((void*)0);
    VAR_7->upstream->downstream_out = ((void*)0);
    VAR_7->upstream->downstream_busy = ((void*)0);

    VAR_7->upstream->upstream = VAR_8->upstream->upstream;
    VAR_7->upstream->resolved = ((void*)0);
    VAR_7->upstream->state = FUNC_3(VAR_1->pool, sizeof(ngx_stream_upstream_state_t));
    if (VAR_7->upstream->state == ((void*)0)) {
        return VAR_0;
    }
    VAR_7->upstream->state->peer = VAR_7->upstream->peer.name;
    VAR_7->upstream->multi = 1;

    VAR_7->ctx = ((void*)0);
    VAR_7->upstream_states = ((void*)0);
    VAR_7->variables = ((void*)0);
    VAR_7->log_handler = ((void*)0);






    VAR_1->data = VAR_7;
    VAR_1->multi_c = VAR_6;

    VAR_1->log = FUNC_2(VAR_1->pool, sizeof(ngx_log_t));
    if (VAR_1->log == ((void*)0)) {
        return VAR_0;
    }
    *VAR_1->log = *VAR_4->session->connection->log;
    VAR_1->log->data = VAR_7;
    VAR_7->upstream->peer.log = VAR_1->log;
    VAR_1->pool->log = VAR_1->log;

    VAR_1->read->log = VAR_1->log;
    VAR_1->write->log = VAR_1->log;

    return FUNC_6(VAR_1, VAR_4->session);
}
