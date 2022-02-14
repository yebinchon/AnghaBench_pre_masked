
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_46__ TYPE_9__ ;
typedef struct TYPE_45__ TYPE_8__ ;
typedef struct TYPE_44__ TYPE_7__ ;
typedef struct TYPE_43__ TYPE_6__ ;
typedef struct TYPE_42__ TYPE_5__ ;
typedef struct TYPE_41__ TYPE_4__ ;
typedef struct TYPE_40__ TYPE_3__ ;
typedef struct TYPE_39__ TYPE_2__ ;
typedef struct TYPE_38__ TYPE_1__ ;
typedef struct TYPE_37__ TYPE_18__ ;
typedef struct TYPE_36__ TYPE_15__ ;
typedef struct TYPE_35__ TYPE_11__ ;
typedef struct TYPE_34__ TYPE_10__ ;


struct TYPE_37__ {scalar_t__ len; int * data; } ;
struct TYPE_42__ {int no_resolve; void* host; scalar_t__ no_port; scalar_t__ port; TYPE_1__* addrs; TYPE_18__ url; scalar_t__ err; scalar_t__ default_port; } ;
typedef TYPE_5__ ngx_url_t ;
typedef void* ngx_str_t ;
struct TYPE_43__ {int timeout; TYPE_8__* data; int handler; int type; void* name; } ;
typedef TYPE_6__ ngx_resolver_ctx_t ;
typedef scalar_t__ ngx_int_t ;
typedef int ngx_http_upstream_resolved_t ;
struct TYPE_41__ {scalar_t__ len; int * data; } ;
struct TYPE_44__ {scalar_t__ method; TYPE_2__* main; TYPE_3__* connection; TYPE_4__ connect_host; scalar_t__ connect_port_n; int pool; int write_event_handler; int read_event_handler; } ;
typedef TYPE_7__ ngx_http_request_t ;
struct TYPE_45__ {TYPE_15__* resolved; TYPE_9__* conf; } ;
typedef TYPE_8__ ngx_http_proxy_connect_upstream_t ;
struct TYPE_46__ {scalar_t__ address; int accept_connect; } ;
typedef TYPE_9__ ngx_http_proxy_connect_loc_conf_t ;
struct TYPE_34__ {TYPE_8__* u; } ;
typedef TYPE_10__ ngx_http_proxy_connect_ctx_t ;
struct TYPE_35__ {int resolver_timeout; int resolver; } ;
typedef TYPE_11__ ngx_http_core_loc_conf_t ;
typedef scalar_t__ in_port_t ;
struct TYPE_40__ {int log; } ;
struct TYPE_39__ {int count; } ;
struct TYPE_38__ {int name; int socklen; scalar_t__ sockaddr; } ;
struct TYPE_36__ {int naddrs; void* host; TYPE_6__* ctx; scalar_t__ sockaddr; scalar_t__ no_port; scalar_t__ port; int name; int socklen; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_6__* VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (TYPE_7__*,scalar_t__,TYPE_18__*) ;
 int VAR_11 ;
 TYPE_10__* FUNC_1 (TYPE_7__*,int ) ;
 void* FUNC_2 (TYPE_7__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_7__*,TYPE_9__*) ;
 int VAR_12 ;
 int FUNC_4 (TYPE_7__*,TYPE_8__*) ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_5 (TYPE_7__*,TYPE_8__*) ;
 scalar_t__ FUNC_6 (TYPE_7__*,TYPE_10__*) ;
 int VAR_15 ;
 int FUNC_7 (int ,int ,int ,char*) ;
 int FUNC_8 (int ,int ,int ,char*,TYPE_18__*) ;
 int FUNC_9 (int ,int ,int ,char*,...) ;
 int FUNC_10 (TYPE_5__*,int) ;
 scalar_t__ FUNC_11 (int ,TYPE_5__*) ;
 TYPE_15__* FUNC_12 (int ,int) ;
 scalar_t__ FUNC_13 (TYPE_6__*) ;
 TYPE_6__* FUNC_14 (int ,TYPE_6__*) ;

__attribute__((used)) static ngx_int_t
FUNC_15(ngx_http_request_t *VAR_16)
{
    ngx_url_t VAR_17;
    ngx_int_t VAR_18;
    ngx_resolver_ctx_t *VAR_19, VAR_20;
    ngx_http_core_loc_conf_t *VAR_21;
    ngx_http_proxy_connect_ctx_t *VAR_22;
    ngx_http_proxy_connect_upstream_t *VAR_23;
    ngx_http_proxy_connect_loc_conf_t *VAR_24;

    VAR_24 = FUNC_2(VAR_16, VAR_12);

    if (VAR_16->method != VAR_3 || !VAR_24->accept_connect) {
        return VAR_0;
    }

    VAR_18 = FUNC_3(VAR_16, VAR_24);

    if (VAR_18 != VAR_9) {
        return VAR_18;
    }

    VAR_22 = FUNC_1(VAR_16, VAR_12);;

    if (FUNC_6(VAR_16, VAR_22) != VAR_9) {
        return VAR_5;
    }

    VAR_23 = VAR_22->u;

    VAR_23->conf = VAR_24;

    FUNC_10(&VAR_17, sizeof(ngx_url_t));

    if (VAR_24->address) {
        if (FUNC_0(VAR_16, VAR_24->address, &VAR_17.url) != VAR_9) {
            return VAR_5;
        }

        if (VAR_17.url.len == 0 || VAR_17.url.data == ((void*)0)) {
            VAR_17.url.len = VAR_16->connect_host.len;
            VAR_17.url.data = VAR_16->connect_host.data;
        }

    } else {
        VAR_17.url.len = VAR_16->connect_host.len;
        VAR_17.url.data = VAR_16->connect_host.data;
    }

    VAR_17.default_port = VAR_16->connect_port_n;
    VAR_17.no_resolve = 1;

    FUNC_8(VAR_6, VAR_16->connection->log, 0,
                   "proxy_connect: connect handler: parse url: %V" , &VAR_17.url);

    if (FUNC_11(VAR_16->pool, &VAR_17) != VAR_9) {
        if (VAR_17.err) {
            FUNC_9(VAR_7, VAR_16->connection->log, 0,
                          "proxy_connect: %s in connect host \"%V\"",
                          VAR_17.err, &VAR_17.url);
            return VAR_4;
        }

        return VAR_5;
    }

    VAR_16->read_event_handler = VAR_13;
    VAR_16->write_event_handler = VAR_15;






    VAR_23->resolved = FUNC_12(VAR_16->pool, sizeof(ngx_http_upstream_resolved_t));
    if (VAR_23->resolved == ((void*)0)) {
        return VAR_5;
    }



    if (VAR_17.addrs) {
        FUNC_7(VAR_6, VAR_16->connection->log, 0,
                       "proxy_connect: upstream address given directly");

        VAR_23->resolved->sockaddr = VAR_17.addrs[0].sockaddr;
        VAR_23->resolved->socklen = VAR_17.addrs[0].socklen;



        VAR_23->resolved->naddrs = 1;
    }

    VAR_23->resolved->host = VAR_17.host;
    VAR_23->resolved->port = (in_port_t) (VAR_17.no_port ? VAR_16->connect_port_n : VAR_17.port);
    VAR_23->resolved->no_port = VAR_17.no_port;

    if (VAR_23->resolved->sockaddr) {

        VAR_18 = FUNC_5(VAR_16, VAR_23);

        if (VAR_18 != VAR_9) {
            return VAR_18;
        }

        VAR_16->main->count++;

        FUNC_4(VAR_16, VAR_23);

        return VAR_1;
    }

    ngx_str_t *VAR_25 = &VAR_17.host;

    VAR_21 = FUNC_2(VAR_16, VAR_11);
    VAR_20.name = *VAR_25;

    VAR_19 = FUNC_14(VAR_21->resolver, &VAR_20);
    if (VAR_19 == ((void*)0)) {
        FUNC_9(VAR_7, VAR_16->connection->log, 0,
                      "proxy_connect: failed to start the resolver");
        return VAR_5;
    }

    if (VAR_19 == VAR_8) {
        FUNC_9(VAR_7, VAR_16->connection->log, 0,
                      "proxy_connect: no resolver defined to resolve %V",
                      &VAR_16->connect_host);
        return VAR_2;
    }

    VAR_19->name = *VAR_25;

    VAR_19->type = VAR_10;

    VAR_19->handler = VAR_14;
    VAR_19->data = VAR_23;
    VAR_19->timeout = VAR_21->resolver_timeout;

    VAR_23->resolved->ctx = VAR_19;

    VAR_16->main->count++;

    if (FUNC_13(VAR_19) != VAR_9) {
        FUNC_7(VAR_6, VAR_16->connection->log, 0,
                       "proxy_connect: fail to run resolver immediately");

        VAR_23->resolved->ctx = ((void*)0);
        VAR_16->main->count--;
        return VAR_5;
    }

    return VAR_1;
}
