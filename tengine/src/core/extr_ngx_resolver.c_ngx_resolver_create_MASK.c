
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_9__ ;
typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_23__ ;
typedef struct TYPE_25__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_30__ {int * data; scalar_t__ len; } ;
struct TYPE_29__ {int default_port; int naddrs; TYPE_6__* resolver; TYPE_1__* addrs; int server; int socklen; int sockaddr; TYPE_5__ url; int err; } ;
typedef TYPE_4__ ngx_url_t ;
typedef size_t ngx_uint_t ;
typedef TYPE_5__ ngx_str_t ;
struct TYPE_26__ {scalar_t__ nelts; } ;
struct TYPE_31__ {int ipv6; int ident; int resend_timeout; int tcp_timeout; int expire; scalar_t__ valid; TYPE_23__ connections; int log_level; int * log; TYPE_2__* event; int addr6_expire_queue; int addr6_resend_queue; int addr6_sentinel; int addr6_rbtree; int addr_expire_queue; int srv_expire_queue; int name_expire_queue; int addr_resend_queue; int srv_resend_queue; int name_resend_queue; int addr_sentinel; int addr_rbtree; int srv_sentinel; int srv_rbtree; int name_sentinel; int name_rbtree; } ;
typedef TYPE_6__ ngx_resolver_t ;
typedef TYPE_4__ ngx_resolver_connection_t ;
struct TYPE_32__ {TYPE_6__* data; int handler; } ;
typedef TYPE_8__ ngx_pool_cleanup_t ;
typedef int ngx_event_t ;
struct TYPE_33__ {int pool; TYPE_3__* cycle; } ;
typedef TYPE_9__ ngx_conf_t ;
struct TYPE_28__ {int new_log; } ;
struct TYPE_27__ {int cancelable; int * log; TYPE_6__* data; int handler; } ;
struct TYPE_25__ {int name; int socklen; int sockaddr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_23__*,int ,size_t,int) ;
 TYPE_4__* FUNC_1 (TYPE_23__*,int) ;
 int FUNC_2 (int ,TYPE_9__*,int ,char*,...) ;
 int FUNC_3 (TYPE_4__*,int) ;
 scalar_t__ FUNC_4 (TYPE_5__*,int) ;
 scalar_t__ FUNC_5 (int ,TYPE_4__*) ;
 void* FUNC_6 (int ,int) ;
 TYPE_8__* FUNC_7 (int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_10 (TYPE_9__*,TYPE_5__*,TYPE_5__**,size_t*) ;
 int VAR_9 ;
 scalar_t__ FUNC_11 (int *,char*) ;
 TYPE_5__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int *,char*,int) ;

ngx_resolver_t *
FUNC_14(ngx_conf_t *VAR_10, ngx_str_t *VAR_11, ngx_uint_t VAR_12)
{
    ngx_str_t VAR_13;
    ngx_url_t VAR_14;
    ngx_uint_t VAR_15, VAR_16;
    ngx_resolver_t *VAR_17;
    ngx_pool_cleanup_t *VAR_18;
    ngx_resolver_connection_t *VAR_19;




    VAR_17 = FUNC_6(VAR_10->pool, sizeof(ngx_resolver_t));
    if (VAR_17 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_17->event = FUNC_6(VAR_10->pool, sizeof(ngx_event_t));
    if (VAR_17->event == ((void*)0)) {
        return ((void*)0);
    }

    VAR_18 = FUNC_7(VAR_10->pool, 0);
    if (VAR_18 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_18->handler = VAR_6;
    VAR_18->data = VAR_17;

    FUNC_9(&VAR_17->name_rbtree, &VAR_17->name_sentinel,
                    VAR_8);

    FUNC_9(&VAR_17->srv_rbtree, &VAR_17->srv_sentinel,
                    VAR_8);

    FUNC_9(&VAR_17->addr_rbtree, &VAR_17->addr_sentinel,
                    VAR_5);

    FUNC_8(&VAR_17->name_resend_queue);
    FUNC_8(&VAR_17->srv_resend_queue);
    FUNC_8(&VAR_17->addr_resend_queue);

    FUNC_8(&VAR_17->name_expire_queue);
    FUNC_8(&VAR_17->srv_expire_queue);
    FUNC_8(&VAR_17->addr_expire_queue);
    VAR_17->event->handler = VAR_9;
    VAR_17->event->data = VAR_17;
    VAR_17->event->log = &VAR_10->cycle->new_log;
    VAR_17->event->cancelable = 1;
    VAR_17->ident = -1;

    VAR_17->resend_timeout = 5;
    VAR_17->tcp_timeout = 5;
    VAR_17->expire = 30;
    VAR_17->valid = 0;

    VAR_17->log = &VAR_10->cycle->new_log;
    VAR_17->log_level = VAR_2;
    if (VAR_12) {
        if (FUNC_0(&VAR_17->connections, VAR_10->pool, VAR_12,
                           sizeof(ngx_resolver_connection_t))
            != VAR_3)
        {
            return ((void*)0);
        }
    }

    for (VAR_15 = 0; VAR_15 < VAR_12; VAR_15++) {
        if (FUNC_13(VAR_11[VAR_15].data, "valid=", 6) == 0) {
            VAR_13.len = VAR_11[VAR_15].len - 6;
            VAR_13.data = VAR_11[VAR_15].data + 6;

            VAR_17->valid = FUNC_4(&VAR_13, 1);

            if (VAR_17->valid == (time_t) VAR_0) {
                FUNC_2(VAR_1, VAR_10, 0,
                                   "invalid parameter: %V", &VAR_11[VAR_15]);
                return ((void*)0);
            }

            continue;
        }
        FUNC_3(&VAR_14, sizeof(ngx_url_t));

        VAR_14.url = VAR_11[VAR_15];
        VAR_14.default_port = 53;

        if (FUNC_5(VAR_10->pool, &VAR_14) != VAR_3) {
            if (VAR_14.err) {
                FUNC_2(VAR_1, VAR_10, 0,
                                   "%s in resolver \"%V\"",
                                   VAR_14.err, &VAR_14.url);
            }

            return ((void*)0);
        }

        VAR_19 = FUNC_1(&VAR_17->connections, VAR_14.naddrs);
        if (VAR_19 == ((void*)0)) {
            return ((void*)0);
        }

        FUNC_3(VAR_19, VAR_14.naddrs * sizeof(ngx_resolver_connection_t));

        for (VAR_16 = 0; VAR_16 < VAR_14.naddrs; VAR_16++) {
            VAR_19[VAR_16].sockaddr = VAR_14.addrs[VAR_16].sockaddr;
            VAR_19[VAR_16].socklen = VAR_14.addrs[VAR_16].socklen;
            VAR_19[VAR_16].server = VAR_14.addrs[VAR_16].name;
            VAR_19[VAR_16].resolver = VAR_17;
        }
    }

    if (VAR_12 && VAR_17->connections.nelts == 0) {
        FUNC_2(VAR_1, VAR_10, 0, "no name servers defined");
        return ((void*)0);
    }

    return VAR_17;
}
