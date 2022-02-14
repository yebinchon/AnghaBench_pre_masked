
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_23__ {int len; int data; } ;
struct TYPE_24__ {int timeout; TYPE_7__* data; int handler; TYPE_2__ name; } ;
typedef TYPE_3__ ngx_resolver_ctx_t ;
struct TYPE_25__ {scalar_t__ resolved; int log; TYPE_2__* host; } ;
typedef TYPE_4__ ngx_peer_connection_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_26__ {TYPE_3__* dyn_resolve_ctx; } ;
typedef TYPE_5__ ngx_http_upstream_t ;
struct TYPE_27__ {int fallback; scalar_t__ fail_check; scalar_t__ fail_timeout; } ;
typedef TYPE_6__ ngx_http_upstream_dynamic_srv_conf_t ;
struct TYPE_28__ {scalar_t__ (* original_get_peer ) (TYPE_4__*,int ) ;int data; TYPE_8__* request; TYPE_6__* conf; } ;
typedef TYPE_7__ ngx_http_upstream_dynamic_peer_data_t ;
struct TYPE_29__ {TYPE_1__* connection; TYPE_5__* upstream; } ;
typedef TYPE_8__ ngx_http_request_t ;
struct TYPE_30__ {int resolver_timeout; int * resolver; } ;
typedef TYPE_9__ ngx_http_core_loc_conf_t ;
struct TYPE_22__ {int log; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 TYPE_3__* VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 TYPE_9__* FUNC_0 (TYPE_8__*,int ) ;
 int VAR_11 ;
 int FUNC_1 (TYPE_8__*,TYPE_5__*,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ,char*) ;
 int FUNC_4 (int ,int ,int ,char*,int) ;
 int FUNC_5 (int ,int ,int ,char*) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 TYPE_3__* FUNC_7 (int *,TYPE_3__*) ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ FUNC_9 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_10 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_11 (TYPE_4__*,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_12(ngx_peer_connection_t *VAR_12, void *VAR_13)
{
    ngx_http_upstream_dynamic_peer_data_t *VAR_14 = VAR_13;
    ngx_http_request_t *VAR_15;
    ngx_http_core_loc_conf_t *VAR_16;
    ngx_resolver_ctx_t *VAR_17, VAR_18;
    ngx_http_upstream_t *VAR_19;
    ngx_int_t VAR_20;
    ngx_http_upstream_dynamic_srv_conf_t *VAR_21;

    FUNC_3(VAR_5, VAR_12->log, 0,
                   "get dynamic peer");
    if (VAR_12->resolved == VAR_4) {
        return VAR_8;
    }

    VAR_21 = VAR_14->conf;
    VAR_15 = VAR_14->request;
    VAR_19 = VAR_15->upstream;

    if (VAR_12->resolved == VAR_3) {

        FUNC_4(VAR_5, VAR_12->log, 0,
                       "resolve failed! fallback: %ui", VAR_21->fallback);

        switch (VAR_21->fallback) {

        case 128:
            return VAR_8;

        case 129:
            FUNC_1(VAR_15, VAR_19, VAR_2);
            return VAR_9;

        default:

            return VAR_1;
        }

        return VAR_1;
    }

    if (VAR_21->fail_check
        && (FUNC_8() - VAR_21->fail_check < VAR_21->fail_timeout))
    {
        FUNC_4(VAR_5, VAR_12->log, 0,
                       "in fail timeout period, fallback: %ui", VAR_21->fallback);

        switch (VAR_21->fallback) {

        case 128:
            return VAR_14->original_get_peer(VAR_12, VAR_14->data);

        case 129:
            FUNC_1(VAR_15, VAR_19, VAR_2);
            return VAR_9;

        default:



            return VAR_14->original_get_peer(VAR_12, VAR_14->data);
        }

        return VAR_1;
    }



    VAR_20 = VAR_14->original_get_peer(VAR_12, VAR_14->data);

    if (VAR_20 != VAR_8) {
        return VAR_20;
    }



    if (VAR_12->host == ((void*)0)) {
        FUNC_3(VAR_5, VAR_12->log, 0,
                       "load balancer doesn't support dyn resolve!");
        return VAR_8;
    }

    if (FUNC_2(VAR_12->host->data, VAR_12->host->len) != VAR_0) {
        FUNC_3(VAR_5, VAR_12->log, 0,
                       "host is an IP address, connect directly!");
        return VAR_8;
    }

    VAR_16 = FUNC_0(VAR_15, VAR_10);
    if (VAR_16->resolver == ((void*)0)) {
        FUNC_5(VAR_6, VAR_15->connection->log, 0,
                      "resolver has not been configured!");
        return VAR_8;
    }

    VAR_18.name = *VAR_12->host;

    VAR_17 = FUNC_7(VAR_16->resolver, &VAR_18);
    if (VAR_17 == ((void*)0)) {
        FUNC_5(VAR_6, VAR_15->connection->log, 0,
                      "resolver start failed!");
        return VAR_8;
    }

    if (VAR_17 == VAR_7) {
        FUNC_5(VAR_6, VAR_15->connection->log, 0,
                      "resolver started but no resolver!");
        return VAR_8;
    }

    VAR_17->name = *VAR_12->host;



    VAR_17->handler = VAR_11;
    VAR_17->data = VAR_14;
    VAR_17->timeout = VAR_16->resolver_timeout;

    VAR_19->dyn_resolve_ctx = VAR_17;

    if (FUNC_6(VAR_17) != VAR_8) {
        FUNC_5(VAR_6, VAR_12->log, 0,
                      "resolver name failed!\n");

        VAR_19->dyn_resolve_ctx = ((void*)0);

        return VAR_8;
    }

    return VAR_9;
}
