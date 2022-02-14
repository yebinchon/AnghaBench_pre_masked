
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_9__ ;
typedef struct TYPE_35__ TYPE_8__ ;
typedef struct TYPE_34__ TYPE_7__ ;
typedef struct TYPE_33__ TYPE_6__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_24__ ;
typedef struct TYPE_27__ TYPE_22__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_10__ ;


struct TYPE_31__ {TYPE_9__* connection; int get; int * name; int socklen; int sockaddr; } ;
typedef TYPE_4__ ngx_peer_connection_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_32__ {int host; int socklen; int sockaddr; } ;
typedef TYPE_5__ ngx_http_upstream_resolved_t ;
struct TYPE_33__ {TYPE_2__* connection; } ;
typedef TYPE_6__ ngx_http_request_t ;
struct TYPE_34__ {int read_event_handler; int write_event_handler; TYPE_4__ peer; TYPE_5__* resolved; TYPE_1__* conf; } ;
typedef TYPE_7__ ngx_http_proxy_connect_upstream_t ;
struct TYPE_35__ {int connect_timeout; } ;
typedef TYPE_8__ ngx_http_proxy_connect_ctx_t ;
struct TYPE_36__ {TYPE_24__* write; TYPE_10__* log; TYPE_3__* read; TYPE_22__* pool; int sendfile; TYPE_7__* data; } ;
typedef TYPE_9__ ngx_connection_t ;
struct TYPE_30__ {TYPE_10__* log; void* handler; } ;
struct TYPE_29__ {TYPE_10__* log; int sendfile; } ;
struct TYPE_28__ {TYPE_10__* log; void* handler; } ;
struct TYPE_27__ {TYPE_10__* log; } ;
struct TYPE_26__ {int local; } ;
struct TYPE_25__ {char* action; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (TYPE_24__*,int ) ;
 TYPE_22__* FUNC_1 (int,TYPE_10__*) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 TYPE_8__* FUNC_3 (TYPE_6__*,int ) ;
 int FUNC_4 (TYPE_6__*,TYPE_7__*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (TYPE_6__*) ;
 scalar_t__ FUNC_6 (TYPE_6__*,TYPE_7__*,int ) ;
 void* VAR_12 ;
 int VAR_13 ;
 int FUNC_7 (int ,TYPE_10__*,int ,char*,scalar_t__) ;
 int FUNC_8 (int ,TYPE_10__*,int ,char*) ;

__attribute__((used)) static void
FUNC_9(ngx_http_request_t *VAR_14,
    ngx_http_proxy_connect_upstream_t *VAR_15)
{
    ngx_int_t VAR_16;
    ngx_connection_t *VAR_17;
    ngx_peer_connection_t *VAR_18;
    ngx_http_upstream_resolved_t *VAR_19;
    ngx_http_proxy_connect_ctx_t *VAR_20;

    VAR_20 = FUNC_3(VAR_14, VAR_10);

    VAR_14->connection->log->action = "connecting to upstream";

    if (FUNC_6(VAR_14, VAR_15, VAR_15->conf->local) != VAR_8) {
        FUNC_4(VAR_14, VAR_15, VAR_5);
        return;
    }

    VAR_18 = &VAR_15->peer;
    VAR_19 = VAR_15->resolved;

    VAR_18->sockaddr = VAR_19->sockaddr;
    VAR_18->socklen = VAR_19->socklen;
    VAR_18->name = &VAR_19->host;

    VAR_18->get = VAR_9;

    VAR_16 = FUNC_2(&VAR_15->peer);

    FUNC_7(VAR_6, VAR_14->connection->log, 0,
                   "proxy_connect: ngx_event_connect_peer() returns %i", VAR_16);

    if (VAR_16 == VAR_3) {
        FUNC_4(VAR_14, VAR_15,
                                                VAR_5);
        return;
    }

    if (VAR_16 == VAR_1) {
        FUNC_8(VAR_7, VAR_14->connection->log, 0,
                      "proxy_connect: no live connection");
        FUNC_4(VAR_14, VAR_15, VAR_4);
        return;
    }

    if (VAR_16 == VAR_2) {
        FUNC_8(VAR_7, VAR_14->connection->log, 0,
                      "proxy_connect: connection error");
        FUNC_4(VAR_14, VAR_15, VAR_4);
        return;
    }



    VAR_17 = VAR_18->connection;

    VAR_17->data = VAR_15;

    VAR_17->write->handler = VAR_12;
    VAR_17->read->handler = VAR_12;

    VAR_15->write_event_handler = VAR_13;
    VAR_15->read_event_handler = VAR_11;

    VAR_17->sendfile &= VAR_14->connection->sendfile;
    VAR_17->log = VAR_14->connection->log;

    if (VAR_17->pool == ((void*)0)) {

        VAR_17->pool = FUNC_1(128, VAR_14->connection->log);
        if (VAR_17->pool == ((void*)0)) {
            FUNC_4(VAR_14, VAR_15,
                                                VAR_5);
            return;
        }
    }

    VAR_17->pool->log = VAR_17->log;
    VAR_17->read->log = VAR_17->log;
    VAR_17->write->log = VAR_17->log;

    if (VAR_16 == VAR_0) {
        FUNC_0(VAR_17->write, VAR_20->connect_timeout);
        return;
    }

    FUNC_5(VAR_14);
}
