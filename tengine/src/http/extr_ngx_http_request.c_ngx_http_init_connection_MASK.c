
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_44__ TYPE_9__ ;
typedef struct TYPE_43__ TYPE_8__ ;
typedef struct TYPE_42__ TYPE_7__ ;
typedef struct TYPE_41__ TYPE_6__ ;
typedef struct TYPE_40__ TYPE_5__ ;
typedef struct TYPE_39__ TYPE_4__ ;
typedef struct TYPE_38__ TYPE_3__ ;
typedef struct TYPE_37__ TYPE_2__ ;
typedef struct TYPE_36__ TYPE_1__ ;
typedef struct TYPE_35__ TYPE_16__ ;
typedef struct TYPE_34__ TYPE_15__ ;
typedef struct TYPE_33__ TYPE_14__ ;
typedef struct TYPE_32__ TYPE_12__ ;
typedef struct TYPE_31__ TYPE_11__ ;
typedef struct TYPE_30__ TYPE_10__ ;


struct sockaddr_in6 {int sin6_addr; } ;
struct TYPE_36__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
typedef int ngx_uint_t ;
struct TYPE_43__ {int enable; } ;
typedef TYPE_8__ ngx_http_v2_srv_conf_t ;
struct TYPE_44__ {scalar_t__ enable; } ;
typedef TYPE_9__ ngx_http_ssl_srv_conf_t ;
struct TYPE_30__ {int naddrs; TYPE_12__* addrs; } ;
typedef TYPE_10__ ngx_http_port_t ;
struct TYPE_31__ {int * current_request; int * request; TYPE_16__* connection; } ;
typedef TYPE_11__ ngx_http_log_ctx_t ;
struct TYPE_40__ {scalar_t__ proxy_protocol; scalar_t__ ssl; scalar_t__ http2; TYPE_3__* default_server; } ;
struct TYPE_32__ {TYPE_5__ conf; int addr; int addr6; } ;
typedef TYPE_12__ ngx_http_in_addr_t ;
typedef TYPE_12__ ngx_http_in6_addr_t ;
struct TYPE_33__ {int ssl; int proxy_protocol; TYPE_5__* addr_conf; int conf_ctx; } ;
typedef TYPE_14__ ngx_http_connection_t ;
struct TYPE_34__ {int (* handler ) (TYPE_15__*) ;scalar_t__ ready; } ;
typedef TYPE_15__ ngx_event_t ;
struct TYPE_35__ {TYPE_7__* listening; TYPE_6__* log; TYPE_4__* write; TYPE_15__* read; int log_error; int number; int pool; TYPE_2__* local_sockaddr; TYPE_14__* data; } ;
typedef TYPE_16__ ngx_connection_t ;
struct TYPE_42__ {int post_accept_timeout; TYPE_10__* servers; } ;
struct TYPE_41__ {char* action; TYPE_11__* data; int handler; int connection; } ;
struct TYPE_39__ {int handler; } ;
struct TYPE_38__ {int ctx; } ;
struct TYPE_37__ {int sa_family; } ;



 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_15__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_16__*,int *,int ) ;
 scalar_t__ FUNC_2 (TYPE_15__*,int ) ;
 int FUNC_3 (TYPE_16__*) ;
 int VAR_2 ;
 void* FUNC_4 (int ,int ) ;
 int VAR_3 ;
 int FUNC_5 (TYPE_15__*) ;
 int VAR_4 ;
 int FUNC_6 (TYPE_15__*) ;
 int VAR_5 ;
 int FUNC_7 (TYPE_15__*) ;
 int FUNC_8 (int *,int *,int) ;
 TYPE_11__* FUNC_9 (int ,int) ;
 TYPE_14__* FUNC_10 (int ,int) ;
 int FUNC_11 (TYPE_15__*,int *) ;
 int VAR_6 ;
 int FUNC_12 (TYPE_16__*,int) ;
 scalar_t__ VAR_7 ;
 int FUNC_13 (TYPE_15__*) ;

void
FUNC_14(ngx_connection_t *VAR_8)
{
    ngx_uint_t VAR_9;
    ngx_event_t *VAR_10;
    struct sockaddr_in *VAR_11;
    ngx_http_port_t *VAR_12;
    ngx_http_in_addr_t *VAR_13;
    ngx_http_log_ctx_t *VAR_14;
    ngx_http_connection_t *VAR_15;
    VAR_15 = FUNC_10(VAR_8->pool, sizeof(ngx_http_connection_t));
    if (VAR_15 == ((void*)0)) {
        FUNC_3(VAR_8);
        return;
    }

    VAR_8->data = VAR_15;



    VAR_12 = VAR_8->listening->servers;

    if (VAR_12->naddrs > 1) {







        if (FUNC_1(VAR_8, ((void*)0), 0) != VAR_1) {
            FUNC_3(VAR_8);
            return;
        }

        switch (VAR_8->local_sockaddr->sa_family) {
        default:
            VAR_11 = (struct sockaddr_in *) VAR_8->local_sockaddr;

            VAR_13 = VAR_12->addrs;



            for (VAR_9 = 0; VAR_9 < VAR_12->naddrs - 1; VAR_9++) {
                if (VAR_13[VAR_9].addr == VAR_11->sin_addr.s_addr) {
                    break;
                }
            }

            VAR_15->addr_conf = &VAR_13[VAR_9].conf;

            break;
        }

    } else {

        switch (VAR_8->local_sockaddr->sa_family) {
        default:
            VAR_13 = VAR_12->addrs;
            VAR_15->addr_conf = &VAR_13[0].conf;
            break;
        }
    }


    VAR_15->conf_ctx = VAR_15->addr_conf->default_server->ctx;

    VAR_14 = FUNC_9(VAR_8->pool, sizeof(ngx_http_log_ctx_t));
    if (VAR_14 == ((void*)0)) {
        FUNC_3(VAR_8);
        return;
    }

    VAR_14->connection = VAR_8;
    VAR_14->request = ((void*)0);
    VAR_14->current_request = ((void*)0);

    VAR_8->log->connection = VAR_8->number;
    VAR_8->log->handler = VAR_3;
    VAR_8->log->data = VAR_14;
    VAR_8->log->action = "waiting for request";

    VAR_8->log_error = VAR_0;

    VAR_10 = VAR_8->read;
    VAR_10->handler = FUNC_7;
    VAR_8->write->handler = VAR_2;
    if (VAR_15->addr_conf->proxy_protocol) {
        VAR_15->proxy_protocol = 1;
        VAR_8->log->action = "reading PROXY protocol";
    }

    if (VAR_10->ready) {


        if (VAR_7) {
            FUNC_11(VAR_10, &VAR_6);
            return;
        }

        VAR_10->handler(VAR_10);
        return;
    }

    FUNC_0(VAR_10, VAR_8->listening->post_accept_timeout);
    FUNC_12(VAR_8, 1);

    if (FUNC_2(VAR_10, 0) != VAR_1) {
        FUNC_3(VAR_8);
        return;
    }
}
