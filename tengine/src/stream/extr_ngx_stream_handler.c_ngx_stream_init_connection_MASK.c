
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_49__ TYPE_9__ ;
typedef struct TYPE_48__ TYPE_8__ ;
typedef struct TYPE_47__ TYPE_7__ ;
typedef struct TYPE_46__ TYPE_6__ ;
typedef struct TYPE_45__ TYPE_5__ ;
typedef struct TYPE_44__ TYPE_4__ ;
typedef struct TYPE_43__ TYPE_3__ ;
typedef struct TYPE_42__ TYPE_30__ ;
typedef struct TYPE_41__ TYPE_2__ ;
typedef struct TYPE_40__ TYPE_1__ ;
typedef struct TYPE_39__ TYPE_16__ ;
typedef struct TYPE_38__ TYPE_15__ ;
typedef struct TYPE_37__ TYPE_14__ ;
typedef struct TYPE_36__ TYPE_13__ ;
typedef struct TYPE_35__ TYPE_12__ ;
typedef struct TYPE_34__ TYPE_10__ ;


typedef int u_char ;
struct sockaddr_in6 {int sin6_addr; } ;
struct TYPE_43__ {int s_addr; } ;
struct sockaddr_in {TYPE_3__ sin_addr; } ;
struct sockaddr {int sa_family; } ;
typedef int ngx_uint_t ;
struct TYPE_47__ {int msec; int sec; } ;
typedef TYPE_7__ ngx_time_t ;
typedef int ngx_stream_variable_value_t ;
struct TYPE_48__ {int start_msec; int start_sec; int * variables; TYPE_16__* connection; int * ctx; int received; int ssl; int srv_conf; int main_conf; TYPE_14__* addr_conf; int signature; } ;
typedef TYPE_8__ ngx_stream_session_t ;
struct TYPE_49__ {int naddrs; TYPE_10__* addrs; } ;
typedef TYPE_9__ ngx_stream_port_t ;
struct TYPE_37__ {scalar_t__ proxy_protocol; int addr_text; int ssl; scalar_t__ default_server; TYPE_4__* ctx; } ;
struct TYPE_34__ {TYPE_14__ conf; int addr; int addr6; } ;
typedef TYPE_10__ ngx_stream_in_addr_t ;
typedef TYPE_10__ ngx_stream_in6_addr_t ;
struct TYPE_35__ {int proxy_protocol_timeout; int error_log; TYPE_5__* ctx; } ;
typedef TYPE_12__ ngx_stream_core_srv_conf_t ;
struct TYPE_40__ {int nelts; } ;
struct TYPE_36__ {TYPE_1__ variables; } ;
typedef TYPE_13__ ngx_stream_core_main_conf_t ;
typedef TYPE_14__ ngx_stream_addr_conf_t ;
struct TYPE_38__ {int (* handler ) (TYPE_15__*) ;int ready; } ;
typedef TYPE_15__ ngx_event_t ;
struct TYPE_39__ {scalar_t__ type; TYPE_30__* log; TYPE_15__* read; int pool; int log_error; int number; int socklen; int sockaddr; TYPE_8__* data; TYPE_6__* buffer; struct sockaddr* local_sockaddr; TYPE_2__* listening; } ;
typedef TYPE_16__ ngx_connection_t ;
struct TYPE_46__ {scalar_t__ pos; scalar_t__ last; } ;
struct TYPE_45__ {int srv_conf; int main_conf; } ;
struct TYPE_44__ {int srv_conf; int main_conf; } ;
struct TYPE_42__ {char* action; TYPE_8__* data; int handler; int connection; } ;
struct TYPE_41__ {TYPE_9__* servers; } ;



 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (TYPE_15__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_16__*,int *,int ) ;
 scalar_t__ FUNC_2 (TYPE_15__*,int ) ;
 int FUNC_3 (int ,TYPE_30__*,int ,char*,int ,char*,size_t,int *,int *) ;
 int FUNC_4 (int *,int *,int) ;
 void* FUNC_5 (int ,int) ;
 int FUNC_6 (TYPE_15__*,int *) ;
 int VAR_7 ;
 int FUNC_7 (TYPE_16__*,int ) ;
 size_t FUNC_8 (int ,int ,int *,int,int) ;
 int FUNC_9 (TYPE_16__*) ;
 int VAR_8 ;
 int FUNC_10 (TYPE_8__*,int ) ;
 TYPE_13__* FUNC_11 (TYPE_8__*,int ) ;
 TYPE_12__* FUNC_12 (TYPE_8__*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_13 (TYPE_15__*) ;
 int FUNC_14 (TYPE_15__*) ;
 TYPE_7__* FUNC_15 () ;
 scalar_t__ VAR_11 ;
 int FUNC_16 (TYPE_15__*) ;

void
FUNC_17(ngx_connection_t *VAR_12)
{
    u_char VAR_13[VAR_3];
    size_t VAR_14;
    ngx_uint_t VAR_15;
    ngx_time_t *VAR_16;
    ngx_event_t *VAR_17;
    struct sockaddr *VAR_18;
    ngx_stream_port_t *VAR_19;
    struct sockaddr_in *VAR_20;
    ngx_stream_in_addr_t *VAR_21;
    ngx_stream_session_t *VAR_22;
    ngx_stream_addr_conf_t *VAR_23;




    ngx_stream_core_srv_conf_t *VAR_24;
    ngx_stream_core_main_conf_t *VAR_25;



    VAR_19 = VAR_12->listening->servers;

    if (VAR_19->naddrs > 1) {
        if (FUNC_1(VAR_12, ((void*)0), 0) != VAR_2) {
            FUNC_9(VAR_12);
            return;
        }

        VAR_18 = VAR_12->local_sockaddr;

        switch (VAR_18->sa_family) {
        default:
            VAR_20 = (struct sockaddr_in *) VAR_18;

            VAR_21 = VAR_19->addrs;



            for (VAR_15 = 0; VAR_15 < VAR_19->naddrs - 1; VAR_15++) {
                if (VAR_21[VAR_15].addr == VAR_20->sin_addr.s_addr) {
                    break;
                }
            }

            VAR_23 = &VAR_21[VAR_15].conf;

            break;
        }

    } else {
        switch (VAR_12->local_sockaddr->sa_family) {
        default:
            VAR_21 = VAR_19->addrs;
            VAR_23 = &VAR_21[0].conf;
            break;
        }
    }

    VAR_22 = FUNC_5(VAR_12->pool, sizeof(ngx_stream_session_t));
    if (VAR_22 == ((void*)0)) {
        FUNC_9(VAR_12);
        return;
    }

    VAR_22->signature = VAR_5;
    VAR_22->main_conf = VAR_23->ctx->main_conf;
    VAR_22->srv_conf = VAR_23->ctx->srv_conf;
    if (VAR_12->buffer) {
        VAR_22->received += VAR_12->buffer->last - VAR_12->buffer->pos;
    }

    VAR_22->connection = VAR_12;
    VAR_12->data = VAR_22;

    VAR_24 = FUNC_12(VAR_22, VAR_8);

    FUNC_7(VAR_12, VAR_24->error_log);

    VAR_14 = FUNC_8(VAR_12->sockaddr, VAR_12->socklen, VAR_13, VAR_3, 1);

    FUNC_3(VAR_1, VAR_12->log, 0, "*%uA %sclient %*s connected to %V",
                  VAR_12->number, VAR_12->type == VAR_6 ? "udp " : "",
                  VAR_14, VAR_13, &VAR_23->addr_text);

    VAR_12->log->connection = VAR_12->number;
    VAR_12->log->handler = VAR_9;
    VAR_12->log->data = VAR_22;
    VAR_12->log->action = "initializing session";
    VAR_12->log_error = VAR_0;

    VAR_22->ctx = FUNC_5(VAR_12->pool, sizeof(void *) * VAR_10);
    if (VAR_22->ctx == ((void*)0)) {
        FUNC_9(VAR_12);
        return;
    }

    VAR_25 = FUNC_11(VAR_22, VAR_8);

    VAR_22->variables = FUNC_5(VAR_22->connection->pool,
                               VAR_25->variables.nelts
                               * sizeof(ngx_stream_variable_value_t));

    if (VAR_22->variables == ((void*)0)) {
        FUNC_9(VAR_12);
        return;
    }

    VAR_16 = FUNC_15();
    VAR_22->start_sec = VAR_16->sec;
    VAR_22->start_msec = VAR_16->msec;

    VAR_17 = VAR_12->read;
    VAR_17->handler = FUNC_14;

    if (VAR_23->proxy_protocol) {
        VAR_12->log->action = "reading PROXY protocol";

        VAR_17->handler = FUNC_13;

        if (!VAR_17->ready) {
            FUNC_0(VAR_17, VAR_24->proxy_protocol_timeout);

            if (FUNC_2(VAR_17, 0) != VAR_2) {
                FUNC_10(VAR_22,
                                            VAR_4);
            }

            return;
        }
    }

    if (VAR_11) {
        FUNC_6(VAR_17, &VAR_7);
        return;
    }

    VAR_17->handler(VAR_17);
}
