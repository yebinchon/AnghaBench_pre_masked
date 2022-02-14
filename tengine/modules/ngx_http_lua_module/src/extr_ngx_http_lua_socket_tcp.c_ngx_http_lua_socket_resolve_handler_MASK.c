
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_9__ ;
typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_12__ ;
typedef struct TYPE_23__ TYPE_10__ ;


typedef int u_char ;
struct sockaddr_in6 {void* sin6_port; } ;
struct TYPE_24__ {int socklen; struct sockaddr* sockaddr; } ;
struct TYPE_25__ {TYPE_12__ s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; void* sin_port; int sin_family; } ;
struct sockaddr {int sa_family; } ;
typedef int socklen_t ;
typedef size_t ngx_uint_t ;
typedef int ngx_str_t ;
struct TYPE_28__ {int len; scalar_t__ data; } ;
struct TYPE_29__ {int naddrs; TYPE_12__* addrs; scalar_t__ state; TYPE_4__ name; TYPE_8__* data; } ;
typedef TYPE_5__ ngx_resolver_ctx_t ;
struct TYPE_26__ {size_t len; int * data; } ;
struct TYPE_30__ {int naddrs; int socklen; int * ctx; TYPE_2__ host; struct sockaddr* sockaddr; TYPE_12__* addrs; int port; } ;
typedef TYPE_6__ ngx_http_upstream_resolved_t ;
struct TYPE_31__ {int (* write_event_handler ) (TYPE_7__*) ;int pool; TYPE_10__* connection; } ;
typedef TYPE_7__ ngx_http_request_t ;
struct TYPE_32__ {unsigned int conn_waiting; void* write_prepare_retvals; TYPE_3__* write_co_ctx; TYPE_6__* resolved; TYPE_7__* request; } ;
typedef TYPE_8__ ngx_http_lua_socket_tcp_upstream_t ;
struct TYPE_33__ {int resume_handler; TYPE_3__* cur_co_ctx; } ;
typedef TYPE_9__ ngx_http_lua_ctx_t ;
struct TYPE_23__ {int log; } ;
typedef TYPE_10__ ngx_connection_t ;
typedef int lua_State ;
typedef int in_addr_t ;
struct TYPE_27__ {int * co; int * cleanup; } ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,...) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char*,int,int ) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (int *) ;
 TYPE_9__* FUNC_7 (TYPE_7__*,int ) ;
 int FUNC_8 (int) ;
 int VAR_6 ;
 void* VAR_7 ;
 int FUNC_9 (TYPE_7__*,TYPE_8__*,int ) ;
 int FUNC_10 (TYPE_7__*,TYPE_8__*,int *) ;
 int VAR_8 ;
 int FUNC_11 (TYPE_10__*) ;
 size_t FUNC_12 (int ,TYPE_12__*,int *,int) ;
 int FUNC_13 (int ,int ,int ,char*) ;
 int FUNC_14 (int ,int ,int ,char*,int*) ;
 int FUNC_15 (int ,int ,int ,char*,int ,int) ;
 int FUNC_16 (int ,int ,int ,char*,int,int,int,int) ;
 int FUNC_17 (struct sockaddr*,struct sockaddr*,int) ;
 int FUNC_18 (struct sockaddr_in*,int) ;
 struct sockaddr* FUNC_19 (int ,int) ;
 int * FUNC_20 (int ,size_t) ;
 size_t FUNC_21 () ;
 int FUNC_22 (TYPE_5__*) ;
 int FUNC_23 (scalar_t__) ;
 void* FUNC_24 (struct sockaddr*,int,int *,int,int) ;
 int * FUNC_25 (int *,char*,int ) ;
 int FUNC_26 (TYPE_12__) ;
 int FUNC_27 (TYPE_7__*) ;

__attribute__((used)) static void
FUNC_28(ngx_resolver_ctx_t *VAR_9)
{
    ngx_http_request_t *VAR_10;
    ngx_connection_t *VAR_11;
    ngx_http_upstream_resolved_t *VAR_12;
    ngx_http_lua_ctx_t *VAR_13;
    lua_State *VAR_14;
    ngx_http_lua_socket_tcp_upstream_t *VAR_15;
    u_char *VAR_16;
    size_t VAR_17;




    struct sockaddr_in *VAR_18;

    ngx_uint_t VAR_19;
    unsigned VAR_20;

    VAR_15 = VAR_9->data;
    VAR_10 = VAR_15->request;
    VAR_11 = VAR_10->connection;
    VAR_12 = VAR_15->resolved;

    FUNC_13(VAR_4, VAR_11->log, 0,
                   "lua tcp socket resolve handler");

    VAR_13 = FUNC_7(VAR_10, VAR_6);
    if (VAR_13 == ((void*)0)) {
        return;
    }

    VAR_13->cur_co_ctx = VAR_15->write_co_ctx;

    VAR_15->write_co_ctx->cleanup = ((void*)0);

    VAR_14 = VAR_13->cur_co_ctx->co;

    VAR_20 = VAR_15->conn_waiting;

    if (VAR_9->state) {
        FUNC_15(VAR_4, VAR_11->log, 0,
                       "lua tcp socket resolver error: %s "
                       "(connect waiting: %d)",
                       FUNC_23(VAR_9->state), (int) VAR_20);

        FUNC_6(VAR_14);
        FUNC_5(VAR_14, (char *) VAR_9->name.data, VAR_9->name.len);
        FUNC_3(VAR_14, " could not be resolved (%d: %s)",
                        (int) VAR_9->state,
                        FUNC_23(VAR_9->state));
        FUNC_2(VAR_14, 2);

        VAR_15->write_prepare_retvals =
                                VAR_7;
        FUNC_9(VAR_10, VAR_15,
                                              VAR_2);

        if (VAR_20) {
            FUNC_11(VAR_11);
        }

        return;
    }

    VAR_12->naddrs = VAR_9->naddrs;
    VAR_12->addrs = VAR_9->addrs;
    FUNC_8(VAR_12->naddrs > 0);

    if (VAR_12->naddrs == 1) {
        VAR_19 = 0;

    } else {
        VAR_19 = FUNC_21() % VAR_12->naddrs;
    }

    FUNC_0("selected addr index: %d", (int) VAR_19);
    VAR_17 = VAR_3 + sizeof(":65535") - 1;

    VAR_16 = FUNC_20(VAR_10->pool, VAR_17 + sizeof(struct sockaddr_in));
    if (VAR_16 == ((void*)0)) {
        goto nomem;
    }

    VAR_18 = (struct sockaddr_in *) &VAR_16[VAR_17];
    FUNC_18(VAR_18, sizeof(struct sockaddr_in));

    VAR_17 = FUNC_12(VAR_0, &VAR_12->addrs[VAR_19], VAR_16, VAR_3);
    VAR_17 = FUNC_25(&VAR_16[VAR_17], ":%d", VAR_12->port) - VAR_16;

    VAR_18->sin_family = VAR_0;
    VAR_18->sin_port = FUNC_1(VAR_12->port);
    VAR_18->sin_addr.s_addr = VAR_12->addrs[VAR_19];

    VAR_12->sockaddr = (struct sockaddr *) VAR_18;
    VAR_12->socklen = sizeof(struct sockaddr_in);


    VAR_12->host.data = VAR_16;
    VAR_12->host.len = VAR_17;
    VAR_12->naddrs = 1;

    FUNC_22(VAR_9);
    VAR_12->ctx = ((void*)0);

    VAR_15->conn_waiting = 0;
    VAR_15->write_co_ctx = ((void*)0);

    if (VAR_20) {
        VAR_13->resume_handler = VAR_8;
        VAR_10->write_event_handler(VAR_10);
        FUNC_11(VAR_11);

    } else {
        (void) FUNC_10(VAR_10, VAR_15, VAR_14);
    }

    return;

nomem:

    if (VAR_12->ctx) {
        FUNC_22(VAR_9);
        VAR_12->ctx = ((void*)0);
    }

    VAR_15->write_prepare_retvals = VAR_7;
    FUNC_9(VAR_10, VAR_15,
                                          VAR_1);

    if (VAR_20) {
        FUNC_0("run posted requests");
        FUNC_11(VAR_11);

    } else {
        FUNC_6(VAR_14);
        FUNC_4(VAR_14, "no memory");
    }
}
