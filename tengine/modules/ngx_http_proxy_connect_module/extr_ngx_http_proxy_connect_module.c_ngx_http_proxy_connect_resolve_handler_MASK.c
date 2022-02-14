
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_18__ {int len; int * data; } ;
typedef TYPE_1__ ngx_str_t ;
struct TYPE_19__ {size_t async; size_t naddrs; TYPE_7__* addrs; scalar_t__ state; int name; TYPE_5__* data; } ;
typedef TYPE_2__ ngx_resolver_ctx_t ;
struct TYPE_20__ {size_t naddrs; int * ctx; TYPE_7__* addrs; } ;
typedef TYPE_3__ ngx_http_upstream_resolved_t ;
struct TYPE_21__ {TYPE_6__* connection; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_22__ {TYPE_3__* resolved; TYPE_4__* request; } ;
typedef TYPE_5__ ngx_http_proxy_connect_upstream_t ;
struct TYPE_23__ {int log; } ;
typedef TYPE_6__ ngx_connection_t ;
typedef int in_addr_t ;
struct TYPE_24__ {int socklen; int sockaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_1 (TYPE_4__*,TYPE_5__*,int ) ;
 int FUNC_2 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (int ,int ,int ,char*) ;
 int FUNC_5 (int ,int ,int ,char*,TYPE_1__*) ;
 int FUNC_6 (int ,int ,int ,char*,int,int,int,int) ;
 int FUNC_7 (int ,int ,int ,char*,int *,scalar_t__,int ) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int ,int ,int *,int,int ) ;
 int FUNC_11 (TYPE_7__) ;

__attribute__((used)) static void
FUNC_12(ngx_resolver_ctx_t *VAR_6)
{
    ngx_connection_t *VAR_7;
    ngx_http_request_t *VAR_8;
    ngx_http_upstream_resolved_t *VAR_9;
    ngx_http_proxy_connect_upstream_t *VAR_10;





    VAR_10 = VAR_6->data;
    VAR_8 = VAR_10->request;
    VAR_9 = VAR_10->resolved;
    VAR_7 = VAR_8->connection;

    FUNC_4(VAR_2, VAR_8->connection->log, 0,
                   "proxy_connect: resolve handler");

    if (VAR_6->state) {
        FUNC_7(VAR_3, VAR_8->connection->log, 0,
                      "proxy_connect: %V could not be resolved (%i: %s)",
                      &VAR_6->name, VAR_6->state,
                      FUNC_9(VAR_6->state));

        FUNC_1(VAR_8, VAR_10, VAR_0);
        goto failed;
    }

    VAR_9->naddrs = VAR_6->naddrs;
    VAR_9->addrs = VAR_6->addrs;
    if (FUNC_0(VAR_8, VAR_9) != VAR_4) {
        FUNC_1(VAR_8, VAR_10,
                                                VAR_1);
        goto failed;
    }

    FUNC_8(VAR_6);
    VAR_9->ctx = ((void*)0);

    FUNC_2(VAR_8, VAR_10);

failed:






    FUNC_3(VAR_7);

}
