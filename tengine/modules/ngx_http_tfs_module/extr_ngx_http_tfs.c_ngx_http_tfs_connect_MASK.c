
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
typedef struct TYPE_27__ TYPE_22__ ;
typedef struct TYPE_26__ TYPE_21__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_12__ ;
typedef struct TYPE_23__ TYPE_10__ ;


struct TYPE_32__ {TYPE_12__* log; TYPE_10__* connection; int name; } ;
typedef TYPE_6__ ngx_peer_connection_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_30__ {scalar_t__ limit; TYPE_10__* connection; int * out; int ** last; } ;
struct TYPE_25__ {int sendfile; } ;
struct TYPE_33__ {scalar_t__ (* create_request ) (TYPE_7__*) ;TYPE_5__* main_conf; TYPE_4__ writer; TYPE_1__ output; TYPE_8__* tfs_peer; TYPE_9__* data; } ;
typedef TYPE_7__ ngx_http_tfs_t ;
struct TYPE_34__ {int peer_addr_text; TYPE_6__ peer; } ;
typedef TYPE_8__ ngx_http_tfs_peer_connection_t ;
struct TYPE_35__ {TYPE_2__* connection; } ;
typedef TYPE_9__ ngx_http_request_t ;
struct TYPE_23__ {TYPE_22__* write; int log; TYPE_3__* read; TYPE_21__* pool; int sendfile; TYPE_7__* data; } ;
typedef TYPE_10__ ngx_connection_t ;
struct TYPE_31__ {int tfs_connect_timeout; } ;
struct TYPE_29__ {int log; void* handler; } ;
struct TYPE_28__ {int log; int sendfile; } ;
struct TYPE_27__ {int log; void* handler; } ;
struct TYPE_26__ {int log; } ;
struct TYPE_24__ {char* action; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (TYPE_22__*,int ) ;
 TYPE_21__* FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (TYPE_6__*) ;
 void* VAR_8 ;
 int FUNC_3 (TYPE_9__*,TYPE_7__*,int ) ;
 int FUNC_4 (TYPE_7__*,TYPE_8__*) ;
 int FUNC_5 (TYPE_9__*,TYPE_7__*) ;
 int FUNC_6 (int ,TYPE_12__*,int ,char*,...) ;
 scalar_t__ FUNC_7 (TYPE_7__*) ;

ngx_int_t
FUNC_8(ngx_http_tfs_t *VAR_9)
{
    ngx_int_t VAR_10;
    ngx_connection_t *VAR_11;
    ngx_http_request_t *VAR_12;
    ngx_peer_connection_t *VAR_13;
    ngx_http_tfs_peer_connection_t *VAR_14;

    VAR_14 = VAR_9->tfs_peer;
    VAR_13 = &VAR_14->peer;
    VAR_12 = VAR_9->data;

    VAR_13->log->action = "connecting server";

    VAR_10 = VAR_9->create_request(VAR_9);

    if (VAR_10 == VAR_3) {
        FUNC_6(VAR_6, VAR_13->log, 0, "create %V (%s) request failed",
            VAR_13->name, VAR_14->peer_addr_text);
        FUNC_3(VAR_12, VAR_9, VAR_4);
        return VAR_10;
    }

    FUNC_6(VAR_5, VAR_13->log, 0, "connecting %V, addr: %s",
                  VAR_13->name, VAR_14->peer_addr_text);

    VAR_10 = FUNC_2(VAR_13);

    if (VAR_10 == VAR_3 || VAR_10 == VAR_1 || VAR_10 == VAR_2) {
        FUNC_6(VAR_6, VAR_13->log, 0,
                      "connect to (%V: %s) failed", VAR_13->name,
                      VAR_14->peer_addr_text);
        FUNC_4(VAR_9, VAR_9->tfs_peer);
        return VAR_10;
    }

    VAR_11 = VAR_13->connection;
    VAR_11->data = VAR_9;

    VAR_11->read->handler = VAR_8;
    VAR_11->write->handler = VAR_8;

    VAR_11->sendfile &= VAR_12->connection->sendfile;
    VAR_9->output.sendfile = VAR_11->sendfile;

    if (VAR_11->pool == ((void*)0)) {
        VAR_11->pool = FUNC_1(128, VAR_12->connection->log);
        if (VAR_11->pool == ((void*)0)) {
            FUNC_6(VAR_6, VAR_13->log, 0,
                          "create connection pool failed");
            FUNC_3(VAR_12, VAR_9, VAR_4);
            return VAR_3;
        }
    }

    VAR_11->log = VAR_12->connection->log;
    VAR_11->pool->log = VAR_11->log;
    VAR_11->read->log = VAR_11->log;
    VAR_11->write->log = VAR_11->log;

    VAR_9->writer.out = ((void*)0);
    VAR_9->writer.last = &VAR_9->writer.out;
    VAR_9->writer.connection = VAR_11;
    VAR_9->writer.limit = 0;

    if (VAR_10 == VAR_0) {
        FUNC_0(VAR_11->write, VAR_9->main_conf->tfs_connect_timeout);
        return VAR_0;
    }

    FUNC_5(VAR_12, VAR_9);

    return VAR_7;
}
