
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_41__ TYPE_9__ ;
typedef struct TYPE_40__ TYPE_8__ ;
typedef struct TYPE_39__ TYPE_7__ ;
typedef struct TYPE_38__ TYPE_6__ ;
typedef struct TYPE_37__ TYPE_5__ ;
typedef struct TYPE_36__ TYPE_4__ ;
typedef struct TYPE_35__ TYPE_3__ ;
typedef struct TYPE_34__ TYPE_2__ ;
typedef struct TYPE_33__ TYPE_27__ ;
typedef struct TYPE_32__ TYPE_25__ ;
typedef struct TYPE_31__ TYPE_24__ ;
typedef struct TYPE_30__ TYPE_1__ ;
typedef struct TYPE_29__ TYPE_10__ ;


struct TYPE_35__ {TYPE_10__* connection; int get; int * name; int socklen; scalar_t__ sockaddr; } ;
typedef TYPE_3__ ngx_peer_connection_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_36__ {int host; int socklen; scalar_t__ sockaddr; } ;
typedef TYPE_4__ ngx_http_upstream_resolved_t ;
struct TYPE_37__ {int write_event_handler; TYPE_2__* connection; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_30__ {int * out; int ** last; } ;
struct TYPE_38__ {int ft_type; int conn_waiting; int write_prepare_retvals; TYPE_8__* write_co_ctx; int connect_timeout; void* write_event_handler; void* read_event_handler; TYPE_1__ writer; void* socket_errno; int * cleanup; TYPE_4__* resolved; TYPE_3__ peer; } ;
typedef TYPE_6__ ngx_http_lua_socket_tcp_upstream_t ;
struct TYPE_39__ {scalar_t__ entered_content_phase; TYPE_8__* cur_co_ctx; } ;
typedef TYPE_7__ ngx_http_lua_ctx_t ;
struct TYPE_40__ {TYPE_6__* data; int cleanup; } ;
typedef TYPE_8__ ngx_http_lua_co_ctx_t ;
struct TYPE_41__ {int handler; TYPE_6__* data; } ;
typedef TYPE_9__ ngx_http_cleanup_t ;
struct TYPE_29__ {TYPE_24__* write; TYPE_25__* read; scalar_t__ fd; int log; TYPE_27__* pool; int sendfile; TYPE_6__* data; } ;
typedef TYPE_10__ ngx_connection_t ;
typedef int lua_State ;
struct TYPE_34__ {int log; int sendfile; } ;
struct TYPE_33__ {int log; } ;
struct TYPE_32__ {int log; void* handler; } ;
struct TYPE_31__ {int log; void* handler; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_24__*,int ) ;
 TYPE_27__* FUNC_5 (int,int ) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 scalar_t__ FUNC_7 (TYPE_25__*,int ) ;
 scalar_t__ FUNC_8 (TYPE_24__*,int ) ;
 int VAR_9 ;
 TYPE_7__* FUNC_9 (TYPE_5__*,int ) ;
 TYPE_9__* FUNC_10 (TYPE_5__*,int ) ;
 int FUNC_11 (TYPE_8__*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_12 (TYPE_5__*,TYPE_6__*,int *) ;
 void* VAR_13 ;
 void* VAR_14 ;
 int FUNC_13 (TYPE_5__*,TYPE_6__*,int) ;
 int FUNC_14 (TYPE_5__*,TYPE_6__*,int *,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 void* VAR_18 ;
 int FUNC_15 (int ,int ,int ,char*) ;
 int FUNC_16 (int ,int ,int ,char*,int) ;
 void* VAR_19 ;

__attribute__((used)) static int
FUNC_17(ngx_http_request_t *VAR_20,
    ngx_http_lua_socket_tcp_upstream_t *VAR_21, lua_State *VAR_22)
{
    ngx_http_lua_ctx_t *VAR_23;
    ngx_peer_connection_t *VAR_24;
    ngx_connection_t *VAR_25;
    ngx_http_cleanup_t *VAR_26;
    ngx_http_upstream_resolved_t *VAR_27;
    ngx_int_t VAR_28;
    ngx_http_lua_co_ctx_t *VAR_29;

    FUNC_15(VAR_7, VAR_20->connection->log, 0,
                   "lua tcp socket resolve retval handler");

    if (VAR_21->ft_type & VAR_6) {
        return 2;
    }

    VAR_24 = &VAR_21->peer;

    VAR_27 = VAR_21->resolved;

    if (VAR_27->sockaddr) {
        VAR_24->sockaddr = VAR_27->sockaddr;
        VAR_24->socklen = VAR_27->socklen;
        VAR_24->name = &VAR_27->host;

    } else {
        FUNC_3(VAR_22);
        FUNC_2(VAR_22, "resolver not working");
        return 2;
    }

    VAR_24->get = VAR_17;

    VAR_28 = FUNC_6(VAR_24);

    if (VAR_28 == VAR_3) {
        VAR_21->socket_errno = VAR_19;
    }

    if (VAR_21->cleanup == ((void*)0)) {
        VAR_26 = FUNC_10(VAR_20, 0);
        if (VAR_26 == ((void*)0)) {
            VAR_21->ft_type |= VAR_4;
            FUNC_3(VAR_22);
            FUNC_2(VAR_22, "no memory");
            return 2;
        }

        VAR_26->handler = VAR_15;
        VAR_26->data = VAR_21;
        VAR_21->cleanup = &VAR_26->handler;
    }

    FUNC_16(VAR_7, VAR_20->connection->log, 0,
                   "lua tcp socket connect: %i", VAR_28);

    if (VAR_28 == VAR_3) {
        return FUNC_12(VAR_20, VAR_21, VAR_22);
    }

    if (VAR_28 == VAR_1) {
        VAR_21->ft_type |= VAR_4;
        FUNC_3(VAR_22);
        FUNC_2(VAR_22, "no live connection");
        return 2;
    }

    if (VAR_28 == VAR_2) {
        FUNC_0("socket errno: %d", (int) VAR_19);
        VAR_21->ft_type |= VAR_4;
        VAR_21->socket_errno = VAR_19;
        return FUNC_12(VAR_20, VAR_21, VAR_22);
    }



    VAR_25 = VAR_24->connection;

    VAR_25->data = VAR_21;

    VAR_25->write->handler = VAR_18;
    VAR_25->read->handler = VAR_18;

    VAR_21->write_event_handler = VAR_13;
    VAR_21->read_event_handler = VAR_13;

    VAR_25->sendfile &= VAR_20->connection->sendfile;

    if (VAR_25->pool == ((void*)0)) {



        VAR_25->pool = FUNC_5(128, VAR_20->connection->log);
        if (VAR_25->pool == ((void*)0)) {
            return FUNC_14(VAR_20, VAR_21, VAR_22,
                                                VAR_5);
        }
    }

    VAR_25->log = VAR_20->connection->log;
    VAR_25->pool->log = VAR_25->log;
    VAR_25->read->log = VAR_25->log;
    VAR_25->write->log = VAR_25->log;
    VAR_23 = FUNC_9(VAR_20, VAR_12);

    VAR_29 = VAR_23->cur_co_ctx;

    FUNC_0("setting data to %p", VAR_21);

    if (VAR_28 == VAR_8) {
        FUNC_16(VAR_7, VAR_20->connection->log, 0,
                       "lua tcp socket connected: fd:%d", (int) VAR_25->fd);






        if (FUNC_8(VAR_25->write, 0) != VAR_8) {
            FUNC_13(VAR_20, VAR_21,
                                                  VAR_4);
            FUNC_3(VAR_22);
            FUNC_2(VAR_22, "failed to handle write event");
            return 2;
        }

        if (FUNC_7(VAR_25->read, 0) != VAR_8) {
            FUNC_13(VAR_20, VAR_21,
                                                  VAR_4);
            FUNC_3(VAR_22);
            FUNC_2(VAR_22, "failed to handle read event");
            return 2;
        }

        VAR_21->read_event_handler = VAR_14;
        VAR_21->write_event_handler = VAR_14;

        FUNC_1(VAR_22, 1);
        return 1;
    }



    FUNC_11(VAR_29);
    VAR_29->cleanup = VAR_10;
    VAR_29->data = VAR_21;

    FUNC_4(VAR_25->write, VAR_21->connect_timeout);

    VAR_21->write_co_ctx = VAR_23->cur_co_ctx;
    VAR_21->conn_waiting = 1;
    VAR_21->write_prepare_retvals = VAR_16;

    FUNC_0("setting data to %p", VAR_21);

    if (VAR_23->entered_content_phase) {
        VAR_20->write_event_handler = VAR_11;

    } else {
        VAR_20->write_event_handler = VAR_9;
    }

    return VAR_0;
}
