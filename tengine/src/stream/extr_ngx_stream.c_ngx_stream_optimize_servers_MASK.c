
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_42__ TYPE_9__ ;
typedef struct TYPE_41__ TYPE_8__ ;
typedef struct TYPE_40__ TYPE_7__ ;
typedef struct TYPE_39__ TYPE_6__ ;
typedef struct TYPE_38__ TYPE_5__ ;
typedef struct TYPE_37__ TYPE_4__ ;
typedef struct TYPE_36__ TYPE_3__ ;
typedef struct TYPE_35__ TYPE_2__ ;
typedef struct TYPE_34__ TYPE_1__ ;
typedef struct TYPE_33__ TYPE_18__ ;
typedef struct TYPE_32__ TYPE_13__ ;
typedef struct TYPE_31__ TYPE_12__ ;
typedef struct TYPE_30__ TYPE_11__ ;
typedef struct TYPE_29__ TYPE_10__ ;


typedef size_t ngx_uint_t ;
struct TYPE_40__ {size_t naddrs; } ;
typedef TYPE_7__ ngx_stream_port_t ;
struct TYPE_41__ {int error_log; } ;
typedef TYPE_8__ ngx_stream_core_srv_conf_t ;
typedef int ngx_stream_core_main_conf_t ;
struct TYPE_34__ {size_t nelts; TYPE_10__* elts; } ;
struct TYPE_42__ {TYPE_1__ addrs; } ;
typedef TYPE_9__ ngx_stream_conf_port_t ;
struct TYPE_38__ {int nelts; } ;
struct TYPE_37__ {int bind; TYPE_3__* ctx; int reuseport; int ipv6only; int tcp_keepcnt; int tcp_keepintvl; int tcp_keepidle; int so_keepalive; scalar_t__ wildcard; int sndbuf; int rcvbuf; int backlog; int type; int socklen; int sockaddr; } ;
struct TYPE_29__ {TYPE_5__ servers; TYPE_4__ opt; } ;
typedef TYPE_10__ ngx_stream_conf_addr_t ;
struct TYPE_35__ {int handler; int * data; } ;
struct TYPE_30__ {int addr_ntop; int pool_size; TYPE_6__* sockaddr; TYPE_7__* servers; int reuseport; int ipv6only; int keepcnt; int keepintvl; int keepidle; int keepalive; scalar_t__ wildcard; int sndbuf; int rcvbuf; int backlog; TYPE_2__ log; int addr_text; int logp; int type; int handler; } ;
typedef TYPE_11__ ngx_listening_t ;
struct TYPE_31__ {int pool; } ;
typedef TYPE_12__ ngx_conf_t ;
struct TYPE_32__ {size_t nelts; TYPE_9__* elts; } ;
typedef TYPE_13__ ngx_array_t ;
struct TYPE_39__ {int sa_family; } ;
struct TYPE_36__ {int ** main_conf; TYPE_8__** srv_conf; } ;
struct TYPE_33__ {size_t ctx_index; } ;



 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_11__* FUNC_0 (TYPE_12__*,int ,int ) ;
 TYPE_7__* FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_10__*,size_t,int,int ) ;
 scalar_t__ FUNC_3 (TYPE_12__*,TYPE_7__*,TYPE_10__*) ;
 scalar_t__ FUNC_4 (TYPE_12__*,TYPE_7__*,TYPE_10__*) ;
 int VAR_4 ;
 TYPE_18__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (TYPE_12__*,int *,TYPE_10__*) ;

__attribute__((used)) static char *
FUNC_6(ngx_conf_t *VAR_7, ngx_array_t *VAR_8)
{
    ngx_uint_t VAR_9, VAR_10, VAR_11, VAR_12;
    ngx_listening_t *VAR_13;
    ngx_stream_port_t *VAR_14;
    ngx_stream_conf_port_t *VAR_15;
    ngx_stream_conf_addr_t *VAR_16;
    ngx_stream_core_srv_conf_t *VAR_17;




    VAR_15 = VAR_8->elts;
    for (VAR_10 = 0; VAR_10 < VAR_8->nelts; VAR_10++) {

        FUNC_2(VAR_15[VAR_10].addrs.elts, (size_t) VAR_15[VAR_10].addrs.nelts,
                 sizeof(ngx_stream_conf_addr_t), VAR_4);

        VAR_16 = VAR_15[VAR_10].addrs.elts;
        VAR_11 = VAR_15[VAR_10].addrs.nelts;






        if (VAR_16[VAR_11 - 1].opt.wildcard) {
            VAR_16[VAR_11 - 1].opt.bind = 1;
            VAR_12 = 1;

        } else {
            VAR_12 = 0;
        }

        VAR_9 = 0;

        while (VAR_9 < VAR_11) {

            if (VAR_12 && !VAR_16[VAR_9].opt.bind) {
                VAR_9++;
                continue;
            }

            VAR_13 = FUNC_0(VAR_7, VAR_16[VAR_9].opt.sockaddr,
                                      VAR_16[VAR_9].opt.socklen);
            if (VAR_13 == ((void*)0)) {
                return VAR_0;
            }

            VAR_13->addr_ntop = 1;
            VAR_13->handler = VAR_6;
            VAR_13->pool_size = 256;
            VAR_13->type = VAR_16[VAR_9].opt.type;

            VAR_17 = VAR_16->opt.ctx->srv_conf[VAR_5.ctx_index];

            VAR_13->logp = VAR_17->error_log;
            VAR_13->log.data = &VAR_13->addr_text;
            VAR_13->log.handler = VAR_3;

            VAR_13->backlog = VAR_16[VAR_9].opt.backlog;
            VAR_13->rcvbuf = VAR_16[VAR_9].opt.rcvbuf;
            VAR_13->sndbuf = VAR_16[VAR_9].opt.sndbuf;

            VAR_13->wildcard = VAR_16[VAR_9].opt.wildcard;

            VAR_13->keepalive = VAR_16[VAR_9].opt.so_keepalive;
            VAR_14 = FUNC_1(VAR_7->pool, sizeof(ngx_stream_port_t));
            if (VAR_14 == ((void*)0)) {
                return VAR_0;
            }

            VAR_13->servers = VAR_14;

            VAR_14->naddrs = VAR_9 + 1;
            switch (VAR_13->sockaddr->sa_family) {







            default:
                if (FUNC_3(VAR_7, VAR_14, VAR_16) != VAR_2) {
                    return VAR_0;
                }
                break;
            }

            VAR_16++;
            VAR_11--;
        }
    }

    return VAR_1;
}
