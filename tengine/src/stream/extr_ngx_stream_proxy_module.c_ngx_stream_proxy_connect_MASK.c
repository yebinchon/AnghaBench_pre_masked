
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_17__ ;
typedef struct TYPE_20__ TYPE_15__ ;
typedef struct TYPE_19__ TYPE_13__ ;
typedef struct TYPE_18__ TYPE_12__ ;


struct TYPE_20__ {TYPE_5__* connection; int name; } ;
struct TYPE_23__ {void* start_time; TYPE_15__ peer; TYPE_12__* state; int proxy_protocol; scalar_t__ connected; } ;
typedef TYPE_2__ ngx_stream_upstream_t ;
typedef int ngx_stream_upstream_state_t ;
struct TYPE_24__ {int upstream_states; TYPE_2__* upstream; TYPE_5__* connection; } ;
typedef TYPE_3__ ngx_stream_session_t ;
struct TYPE_25__ {int connect_timeout; int proxy_protocol; } ;
typedef TYPE_4__ ngx_stream_proxy_srv_conf_t ;
typedef void* ngx_msec_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_26__ {TYPE_17__* write; TYPE_1__* read; TYPE_13__* log; int pool; TYPE_3__* data; } ;
typedef TYPE_5__ ngx_connection_t ;
struct TYPE_22__ {void* handler; TYPE_13__* log; } ;
struct TYPE_21__ {void* handler; TYPE_13__* log; } ;
struct TYPE_19__ {char* action; } ;
struct TYPE_18__ {int peer; void* response_time; void* first_byte_time; void* connect_time; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_17__*,int ) ;
 TYPE_12__* FUNC_1 (int ) ;
 void* VAR_8 ;
 scalar_t__ FUNC_2 (TYPE_15__*) ;
 int FUNC_3 (int ,TYPE_13__*,int ,char*,scalar_t__) ;
 int FUNC_4 (int ,TYPE_13__*,int ,char*) ;
 int FUNC_5 (TYPE_12__*,int) ;
 TYPE_4__* FUNC_6 (TYPE_3__*,int ) ;
 void* VAR_9 ;
 int FUNC_7 (TYPE_3__*,int ) ;
 int FUNC_8 (TYPE_3__*) ;
 int VAR_10 ;
 int FUNC_9 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_10(ngx_stream_session_t *VAR_11)
{
    ngx_int_t VAR_12;
    ngx_connection_t *VAR_13, *VAR_14;
    ngx_stream_upstream_t *VAR_15;
    ngx_stream_proxy_srv_conf_t *VAR_16;

    VAR_13 = VAR_11->connection;

    VAR_13->log->action = "connecting to upstream";

    VAR_16 = FUNC_6(VAR_11, VAR_10);

    VAR_15 = VAR_11->upstream;

    VAR_15->connected = 0;
    VAR_15->proxy_protocol = VAR_16->proxy_protocol;

    if (VAR_15->state) {
        VAR_15->state->response_time = VAR_8 - VAR_15->start_time;
    }

    VAR_15->state = FUNC_1(VAR_11->upstream_states);
    if (VAR_15->state == ((void*)0)) {
        FUNC_7(VAR_11, VAR_7);
        return;
    }

    FUNC_5(VAR_15->state, sizeof(ngx_stream_upstream_state_t));

    VAR_15->start_time = VAR_8;

    VAR_15->state->connect_time = (ngx_msec_t) -1;
    VAR_15->state->first_byte_time = (ngx_msec_t) -1;
    VAR_15->state->response_time = (ngx_msec_t) -1;

    VAR_12 = FUNC_2(&VAR_15->peer);

    FUNC_3(VAR_4, VAR_13->log, 0, "proxy connect: %i", VAR_12);

    if (VAR_12 == VAR_3) {
        FUNC_7(VAR_11, VAR_7);
        return;
    }

    VAR_15->state->peer = VAR_15->peer.name;

    if (VAR_12 == VAR_1) {
        FUNC_4(VAR_5, VAR_13->log, 0, "no live upstreams");
        FUNC_7(VAR_11, VAR_6);
        return;
    }

    if (VAR_12 == VAR_2) {
        FUNC_9(VAR_11);
        return;
    }



    VAR_14 = VAR_15->peer.connection;

    VAR_14->data = VAR_11;
    VAR_14->log = VAR_13->log;
    VAR_14->pool = VAR_13->pool;
    VAR_14->read->log = VAR_13->log;
    VAR_14->write->log = VAR_13->log;

    if (VAR_12 != VAR_0) {
        FUNC_8(VAR_11);
        return;
    }

    VAR_14->read->handler = VAR_9;
    VAR_14->write->handler = VAR_9;

    FUNC_0(VAR_14->write, VAR_16->connect_timeout);
}
