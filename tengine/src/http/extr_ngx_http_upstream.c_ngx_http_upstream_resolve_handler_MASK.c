
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_24__ {int len; int * data; } ;
typedef TYPE_4__ ngx_str_t ;
struct TYPE_25__ {size_t async; size_t naddrs; TYPE_1__* addrs; scalar_t__ state; int name; TYPE_8__* data; } ;
typedef TYPE_5__ ngx_resolver_ctx_t ;
struct TYPE_22__ {scalar_t__ tries; int start_time; } ;
struct TYPE_26__ {TYPE_3__* conf; TYPE_2__ peer; TYPE_7__* resolved; } ;
typedef TYPE_6__ ngx_http_upstream_t ;
struct TYPE_27__ {size_t naddrs; int * ctx; TYPE_1__* addrs; } ;
typedef TYPE_7__ ngx_http_upstream_resolved_t ;
struct TYPE_28__ {TYPE_9__* connection; int args; int uri; TYPE_6__* upstream; } ;
typedef TYPE_8__ ngx_http_request_t ;
struct TYPE_29__ {int log; } ;
typedef TYPE_9__ ngx_connection_t ;
struct TYPE_23__ {scalar_t__ next_upstream_tries; } ;
struct TYPE_21__ {int socklen; int sockaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_9__*) ;
 int FUNC_1 (int ,TYPE_8__*) ;
 int FUNC_2 (TYPE_8__*,TYPE_6__*) ;
 scalar_t__ FUNC_3 (TYPE_8__*,TYPE_7__*) ;
 int FUNC_4 (TYPE_8__*,TYPE_6__*,int ) ;
 int FUNC_5 (int ,int ,int ,char*,TYPE_4__*) ;
 int FUNC_6 (int ,int ,int ,char*,int *,int *) ;
 int FUNC_7 (int ,int ,int ,char*,int *,scalar_t__,int ) ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int ,int ,int *,int,int ) ;

__attribute__((used)) static void
FUNC_11(ngx_resolver_ctx_t *VAR_7)
{
    ngx_uint_t VAR_8;
    ngx_connection_t *VAR_9;
    ngx_http_request_t *VAR_10;
    ngx_http_upstream_t *VAR_11;
    ngx_http_upstream_resolved_t *VAR_12;

    VAR_8 = VAR_7->async;

    VAR_10 = VAR_7->data;
    VAR_9 = VAR_10->connection;

    VAR_11 = VAR_10->upstream;
    VAR_12 = VAR_11->resolved;

    FUNC_1(VAR_9->log, VAR_10);

    FUNC_6(VAR_2, VAR_9->log, 0,
                   "http upstream resolve: \"%V?%V\"", &VAR_10->uri, &VAR_10->args);

    if (VAR_7->state) {
        FUNC_7(VAR_3, VAR_10->connection->log, 0,
                      "%V could not be resolved (%i: %s)",
                      &VAR_7->name, VAR_7->state,
                      FUNC_9(VAR_7->state));

        FUNC_4(VAR_10, VAR_11, VAR_0);
        goto failed;
    }

    VAR_12->naddrs = VAR_7->naddrs;
    VAR_12->addrs = VAR_7->addrs;
    if (FUNC_3(VAR_10, VAR_12) != VAR_4) {
        FUNC_4(VAR_10, VAR_11,
                                           VAR_1);
        goto failed;
    }

    FUNC_8(VAR_7);
    VAR_12->ctx = ((void*)0);

    VAR_11->peer.start_time = VAR_6;

    if (VAR_11->conf->next_upstream_tries
        && VAR_11->peer.tries > VAR_11->conf->next_upstream_tries)
    {
        VAR_11->peer.tries = VAR_11->conf->next_upstream_tries;
    }

    FUNC_2(VAR_10, VAR_11);

failed:

    if (VAR_8) {
        FUNC_0(VAR_9);
    }
}
