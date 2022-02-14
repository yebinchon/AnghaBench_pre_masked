
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
typedef struct TYPE_28__ TYPE_1__ ;
typedef struct TYPE_27__ TYPE_14__ ;
typedef struct TYPE_26__ TYPE_10__ ;


struct TYPE_32__ {int name; int * connection; scalar_t__ cached; scalar_t__ socklen; int * sockaddr; int tries; int log; } ;
typedef TYPE_5__ ngx_peer_connection_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_33__ {TYPE_4__* upstream; } ;
typedef TYPE_6__ ngx_http_request_t ;
struct TYPE_28__ {scalar_t__ (* handler ) (TYPE_6__*,TYPE_7__*,int *) ;} ;
struct TYPE_34__ {TYPE_1__ balancer; } ;
typedef TYPE_7__ ngx_http_lua_srv_conf_t ;
struct TYPE_35__ {TYPE_10__* balancer_peer_data; } ;
typedef TYPE_8__ ngx_http_lua_main_conf_t ;
struct TYPE_36__ {scalar_t__ exit_code; scalar_t__ exited; int context; } ;
typedef TYPE_9__ ngx_http_lua_ctx_t ;
struct TYPE_27__ {TYPE_2__* peers; } ;
struct TYPE_26__ {TYPE_14__ rrp; scalar_t__ more_tries; int host; scalar_t__ socklen; int * sockaddr; int total_tries; TYPE_6__* request; TYPE_7__* conf; } ;
typedef TYPE_10__ ngx_http_lua_balancer_peer_data_t ;
typedef int lua_State ;
struct TYPE_30__ {scalar_t__ tries; } ;
struct TYPE_31__ {TYPE_3__ peer; } ;
struct TYPE_29__ {scalar_t__ single; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*,...) ;
 TYPE_9__* FUNC_1 (TYPE_6__*,int ) ;
 TYPE_8__* FUNC_2 (TYPE_6__*,int ) ;
 int FUNC_3 (int) ;
 TYPE_9__* FUNC_4 (TYPE_6__*) ;
 int * FUNC_5 (TYPE_6__*,TYPE_9__*) ;
 int VAR_7 ;
 int FUNC_6 (TYPE_6__*,int *,TYPE_9__*) ;
 scalar_t__ FUNC_7 (TYPE_5__*,TYPE_14__*) ;
 int FUNC_8 (int ,int ,int ,char*,int ) ;
 scalar_t__ FUNC_9 (TYPE_6__*,TYPE_7__*,int *) ;

__attribute__((used)) static ngx_int_t
FUNC_10(ngx_peer_connection_t *VAR_8, void *VAR_9)
{
    lua_State *VAR_10;
    ngx_int_t VAR_11;
    ngx_http_request_t *VAR_12;
    ngx_http_lua_ctx_t *VAR_13;
    ngx_http_lua_srv_conf_t *VAR_14;
    ngx_http_lua_main_conf_t *VAR_15;
    ngx_http_lua_balancer_peer_data_t *VAR_16 = VAR_9;

    FUNC_8(VAR_5, VAR_8->log, 0,
                   "lua balancer peer, tries: %ui", VAR_8->tries);

    VAR_14 = VAR_16->conf;

    VAR_12 = VAR_16->request;

    FUNC_3(VAR_14->balancer.handler && VAR_12);

    VAR_13 = FUNC_1(VAR_12, VAR_7);

    if (VAR_13 == ((void*)0)) {
        VAR_13 = FUNC_4(VAR_12);
        if (VAR_13 == ((void*)0)) {
            return VAR_2;
        }

        VAR_10 = FUNC_5(VAR_12, VAR_13);

    } else {
        VAR_10 = FUNC_5(VAR_12, VAR_13);

        FUNC_0("reset ctx");
        FUNC_6(VAR_12, VAR_10, VAR_13);
    }

    VAR_13->context = VAR_3;

    VAR_16->sockaddr = ((void*)0);
    VAR_16->socklen = 0;
    VAR_16->more_tries = 0;
    VAR_16->total_tries++;

    VAR_15 = FUNC_2(VAR_12, VAR_7);





    VAR_15->balancer_peer_data = VAR_16;

    VAR_11 = VAR_14->balancer.handler(VAR_12, VAR_14, VAR_10);

    if (VAR_11 == VAR_2) {
        return VAR_2;
    }

    if (VAR_13->exited && VAR_13->exit_code != VAR_6) {
        VAR_11 = VAR_13->exit_code;
        if (VAR_11 == VAR_2
            || VAR_11 == VAR_0
            || VAR_11 == VAR_1



        ) {
            return VAR_11;
        }

        if (VAR_11 > VAR_6) {
            return VAR_2;
        }
    }

    if (VAR_16->sockaddr && VAR_16->socklen) {
        VAR_8->sockaddr = VAR_16->sockaddr;
        VAR_8->socklen = VAR_16->socklen;
        VAR_8->cached = 0;
        VAR_8->connection = ((void*)0);
        VAR_8->name = VAR_16->host;

        VAR_16->rrp.peers->single = 0;

        if (VAR_16->more_tries) {
            VAR_12->upstream->peer.tries += VAR_16->more_tries;
        }

        FUNC_0("tries: %d", (int) VAR_12->upstream->peer.tries);

        return VAR_6;
    }

    return FUNC_7(VAR_8, &VAR_16->rrp);
}
