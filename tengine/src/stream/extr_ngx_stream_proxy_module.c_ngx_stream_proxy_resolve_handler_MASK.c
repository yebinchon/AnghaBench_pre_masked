
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_21__ {scalar_t__ tries; int start_time; } ;
struct TYPE_22__ {TYPE_3__ peer; TYPE_5__* resolved; } ;
typedef TYPE_4__ ngx_stream_upstream_t ;
struct TYPE_23__ {size_t naddrs; int * ctx; TYPE_1__* addrs; } ;
typedef TYPE_5__ ngx_stream_upstream_resolved_t ;
struct TYPE_24__ {TYPE_2__* connection; TYPE_4__* upstream; } ;
typedef TYPE_6__ ngx_stream_session_t ;
struct TYPE_25__ {scalar_t__ next_upstream_tries; } ;
typedef TYPE_7__ ngx_stream_proxy_srv_conf_t ;
struct TYPE_26__ {int len; int * data; } ;
typedef TYPE_8__ ngx_str_t ;
struct TYPE_27__ {size_t naddrs; TYPE_1__* addrs; scalar_t__ state; int name; TYPE_6__* data; } ;
typedef TYPE_9__ ngx_resolver_ctx_t ;
struct TYPE_20__ {int log; } ;
struct TYPE_19__ {int socklen; int sockaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,char*) ;
 int FUNC_1 (int ,int ,int ,char*,TYPE_8__*) ;
 int FUNC_2 (int ,int ,int ,char*,int *,scalar_t__,int ) ;
 int FUNC_3 (TYPE_9__*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int ,int *,int,int ) ;
 TYPE_7__* FUNC_6 (TYPE_6__*,int ) ;
 int FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (TYPE_6__*,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_9 (TYPE_6__*,TYPE_5__*) ;

__attribute__((used)) static void
FUNC_10(ngx_resolver_ctx_t *VAR_7)
{
    ngx_stream_session_t *VAR_8;
    ngx_stream_upstream_t *VAR_9;
    ngx_stream_proxy_srv_conf_t *VAR_10;
    ngx_stream_upstream_resolved_t *VAR_11;

    VAR_8 = VAR_7->data;

    VAR_9 = VAR_8->upstream;
    VAR_11 = VAR_9->resolved;

    FUNC_0(VAR_0, VAR_8->connection->log, 0,
                   "stream upstream resolve");

    if (VAR_7->state) {
        FUNC_2(VAR_1, VAR_8->connection->log, 0,
                      "%V could not be resolved (%i: %s)",
                      &VAR_7->name, VAR_7->state,
                      FUNC_4(VAR_7->state));

        FUNC_8(VAR_8, VAR_4);
        return;
    }

    VAR_11->naddrs = VAR_7->naddrs;
    VAR_11->addrs = VAR_7->addrs;
    if (FUNC_9(VAR_8, VAR_11) != VAR_2) {
        FUNC_8(VAR_8, VAR_4);
        return;
    }

    FUNC_3(VAR_7);
    VAR_11->ctx = ((void*)0);

    VAR_9->peer.start_time = VAR_5;

    VAR_10 = FUNC_6(VAR_8, VAR_6);

    if (VAR_10->next_upstream_tries
        && VAR_9->peer.tries > VAR_10->next_upstream_tries)
    {
        VAR_9->peer.tries = VAR_10->next_upstream_tries;
    }

    FUNC_7(VAR_8);
}
