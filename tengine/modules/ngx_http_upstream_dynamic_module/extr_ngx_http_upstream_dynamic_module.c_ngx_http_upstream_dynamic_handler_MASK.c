
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_10__ ;


typedef int u_char ;
struct sockaddr_in6 {void* sin6_port; } ;
struct TYPE_22__ {scalar_t__ s_addr; } ;
struct sockaddr_in {int sa_family; TYPE_3__ sin_addr; void* sin_port; } ;
struct sockaddr {int sa_family; TYPE_3__ sin_addr; void* sin_port; } ;
typedef int socklen_t ;
typedef size_t ngx_uint_t ;
struct TYPE_23__ {size_t len; int * data; } ;
typedef TYPE_4__ ngx_str_t ;
struct TYPE_24__ {size_t naddrs; TYPE_2__* addrs; scalar_t__ state; int name; TYPE_9__* data; } ;
typedef TYPE_5__ ngx_resolver_ctx_t ;
struct TYPE_25__ {int socklen; void* resolved; TYPE_4__* name; struct sockaddr_in* sockaddr; } ;
typedef TYPE_6__ ngx_peer_connection_t ;
struct TYPE_26__ {int * dyn_resolve_ctx; TYPE_6__ peer; } ;
typedef TYPE_7__ ngx_http_upstream_t ;
struct TYPE_27__ {scalar_t__ fail_check; } ;
typedef TYPE_8__ ngx_http_upstream_dynamic_srv_conf_t ;
struct TYPE_28__ {TYPE_8__* conf; TYPE_10__* request; } ;
typedef TYPE_9__ ngx_http_upstream_dynamic_peer_data_t ;
struct TYPE_19__ {TYPE_1__* connection; int pool; TYPE_7__* upstream; } ;
typedef TYPE_10__ ngx_http_request_t ;
typedef int in_port_t ;
struct TYPE_21__ {int socklen; struct sockaddr_in* sockaddr; } ;
struct TYPE_20__ {int log; } ;


 int VAR_0 ;

 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 void* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct sockaddr_in*,int,struct sockaddr_in*,int,int ) ;
 int FUNC_2 (TYPE_10__*,TYPE_7__*) ;
 int FUNC_3 (TYPE_10__*,TYPE_7__*,int ) ;
 int FUNC_4 (struct sockaddr_in*) ;
 size_t FUNC_5 (int ,scalar_t__*,int *,int) ;
 int FUNC_6 (int ,int ,int ,char*,TYPE_4__*) ;
 int FUNC_7 (int ,int ,int ,char*,int *,scalar_t__,int ) ;
 int FUNC_8 (struct sockaddr_in*,struct sockaddr_in*,int) ;
 TYPE_4__* FUNC_9 (int ,int) ;
 struct sockaddr_in* FUNC_10 (int ,int) ;
 int * FUNC_11 (int ,size_t) ;
 int FUNC_12 (TYPE_5__*) ;
 int FUNC_13 (scalar_t__) ;
 void* FUNC_14 (struct sockaddr_in*,int,int *,int,int) ;
 int * FUNC_15 (int *,char*,int ) ;
 scalar_t__ FUNC_16 () ;
 int FUNC_17 (void*) ;

__attribute__((used)) static void
FUNC_18(ngx_resolver_ctx_t *VAR_9)
{
    ngx_http_request_t *VAR_10;
    ngx_http_upstream_t *VAR_11;
    ngx_peer_connection_t *VAR_12;




    struct sockaddr_in *VAR_13, *VAR_14;

    in_port_t VAR_15;
    ngx_str_t *VAR_16;
    u_char *VAR_17;

    size_t VAR_18;
    ngx_http_upstream_dynamic_srv_conf_t *VAR_19;
    ngx_http_upstream_dynamic_peer_data_t *VAR_20;

    VAR_20 = VAR_9->data;
    VAR_10 = VAR_20->request;
    VAR_11 = VAR_10->upstream;
    VAR_12 = &VAR_11->peer;
    VAR_19 = VAR_20->conf;

    if (VAR_9->state) {

        FUNC_7(VAR_6, VAR_10->connection->log, 0,
                      "%V could not be resolved (%i: %s)",
                      &VAR_9->name, VAR_9->state,
                      FUNC_13(VAR_9->state));

        VAR_19->fail_check = FUNC_16();

        VAR_12->resolved = VAR_2;

    } else {
        VAR_19->fail_check = 0;
        VAR_13 = FUNC_10(VAR_10->pool, sizeof(struct sockaddr_in));
        if (VAR_13 == ((void*)0)) {
            FUNC_3(VAR_10, VAR_11,
                                               VAR_1);
            return;
        }

        FUNC_8(VAR_13, VAR_12->sockaddr, VAR_12->socklen);



        VAR_14 = (struct sockaddr_in *) VAR_9->addrs[0].sockaddr;
        if (VAR_13->sin_addr.s_addr == VAR_14->sin_addr.s_addr) {

            VAR_12->resolved = VAR_3;

            goto out;
        }

        VAR_13->sin_addr.s_addr = VAR_14->sin_addr.s_addr;

        VAR_18 = VAR_4 + sizeof(":65535") - 1;

        VAR_17 = FUNC_11(VAR_10->pool, VAR_18);
        if (VAR_17 == ((void*)0)) {
            FUNC_3(VAR_10, VAR_11,
                                               VAR_1);
            return;
        }

        VAR_15 = FUNC_17(VAR_13->sin_port);
        VAR_18 = FUNC_5(VAR_0, &VAR_13->sin_addr.s_addr,
                            VAR_17, VAR_4);
        VAR_18 = FUNC_15(&VAR_17[VAR_18], ":%d", VAR_15) - VAR_17;

        VAR_16 = FUNC_9(VAR_10->pool, sizeof(ngx_str_t));
        if (VAR_16 == ((void*)0)) {
            FUNC_3(VAR_10, VAR_11,
                                               VAR_1);
            return;
        }

        VAR_16->data = VAR_17;
        VAR_16->len = VAR_18;

        VAR_12->sockaddr = (struct sockaddr *) VAR_13;
        VAR_12->socklen = sizeof(struct sockaddr_in);
        VAR_12->name = VAR_16;


        FUNC_6(VAR_5, VAR_10->connection->log, 0,
                "name was resolved to %V", VAR_12->name);

        VAR_12->resolved = VAR_3;
    }

out:
    FUNC_12(VAR_9);
    VAR_11->dyn_resolve_ctx = ((void*)0);

    FUNC_2(VAR_10, VAR_11);
}
