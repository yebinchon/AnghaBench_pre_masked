
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_9__ ;
typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_11__ ;
typedef struct TYPE_21__ TYPE_10__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_26__ {int host; int socklen; scalar_t__ sockaddr; } ;
typedef TYPE_4__ ngx_http_upstream_resolved_t ;
struct TYPE_27__ {TYPE_1__* connection; int pool; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_28__ {TYPE_11__* connection; int server; int socklen; scalar_t__ sockaddr; } ;
typedef TYPE_6__ ngx_http_lua_udp_connection_t ;
struct TYPE_29__ {int ft_type; int read_event_handler; int * cleanup; int socket_errno; TYPE_4__* resolved; TYPE_6__ udp_connection; } ;
typedef TYPE_7__ ngx_http_lua_socket_udp_upstream_t ;
struct TYPE_30__ {TYPE_9__* cur_co_ctx; } ;
typedef TYPE_8__ ngx_http_lua_ctx_t ;
struct TYPE_31__ {TYPE_7__* data; } ;
typedef TYPE_9__ ngx_http_lua_co_ctx_t ;
struct TYPE_21__ {int handler; TYPE_7__* data; } ;
typedef TYPE_10__ ngx_http_cleanup_t ;
struct TYPE_22__ {int log; TYPE_3__* write; TYPE_2__* read; int pool; TYPE_7__* data; } ;
typedef TYPE_11__ ngx_connection_t ;
typedef int lua_State ;
struct TYPE_25__ {int log; int * handler; } ;
struct TYPE_24__ {int log; scalar_t__ resolver; int handler; } ;
struct TYPE_23__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 TYPE_10__* FUNC_3 (TYPE_5__*,int ) ;
 TYPE_8__* FUNC_4 (TYPE_5__*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (TYPE_5__*,TYPE_7__*,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (int ,int ,int ,char*) ;
 int FUNC_8 (int ,int ,int ,char*,scalar_t__) ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_9(ngx_http_request_t *VAR_9,
    ngx_http_lua_socket_udp_upstream_t *VAR_10, lua_State *VAR_11)
{
    ngx_http_lua_ctx_t *VAR_12;
    ngx_http_lua_co_ctx_t *VAR_13;
    ngx_connection_t *VAR_14;
    ngx_http_cleanup_t *VAR_15;
    ngx_http_upstream_resolved_t *VAR_16;
    ngx_int_t VAR_17;
    ngx_http_lua_udp_connection_t *VAR_18;

    FUNC_7(VAR_2, VAR_9->connection->log, 0,
                   "lua udp socket resolve retval handler");

    if (VAR_10->ft_type & VAR_1) {
        return 2;
    }

    VAR_18 = &VAR_10->udp_connection;

    VAR_16 = VAR_10->resolved;

    if (VAR_16->sockaddr) {
        VAR_18->sockaddr = VAR_16->sockaddr;
        VAR_18->socklen = VAR_16->socklen;
        VAR_18->server = VAR_16->host;

    } else {
        FUNC_2(VAR_11);
        FUNC_1(VAR_11, "resolver not working");
        return 2;
    }

    VAR_17 = FUNC_6(VAR_18);

    if (VAR_17 != VAR_3) {
        VAR_10->socket_errno = VAR_8;
    }

    if (VAR_10->cleanup == ((void*)0)) {
        VAR_15 = FUNC_3(VAR_9, 0);
        if (VAR_15 == ((void*)0)) {
            VAR_10->ft_type |= VAR_0;
            FUNC_2(VAR_11);
            FUNC_1(VAR_11, "no memory");
            return 2;
        }

        VAR_15->handler = VAR_6;
        VAR_15->data = VAR_10;
        VAR_10->cleanup = &VAR_15->handler;
    }

    FUNC_8(VAR_2, VAR_9->connection->log, 0,
                   "lua udp socket connect: %i", VAR_17);

    if (VAR_17 != VAR_3) {
        return FUNC_5(VAR_9, VAR_10, VAR_11);
    }



    VAR_14 = VAR_18->connection;

    VAR_14->data = VAR_10;

    VAR_14->write->handler = ((void*)0);
    VAR_14->read->handler = VAR_7;
    VAR_14->read->resolver = 0;

    VAR_14->pool = VAR_9->pool;
    VAR_14->log = VAR_9->connection->log;
    VAR_14->read->log = VAR_14->log;
    VAR_14->write->log = VAR_14->log;

    VAR_12 = FUNC_4(VAR_9, VAR_4);

    VAR_13 = VAR_12->cur_co_ctx;

    VAR_13->data = VAR_10;

    VAR_10->read_event_handler = VAR_5;

    FUNC_0(VAR_11, 1);
    return 1;
}
