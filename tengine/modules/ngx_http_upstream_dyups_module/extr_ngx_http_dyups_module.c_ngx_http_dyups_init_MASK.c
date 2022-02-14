
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_9__ ;
typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_20__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_13__ ;
typedef struct TYPE_22__ TYPE_10__ ;


typedef int u_char ;
struct TYPE_26__ {int dynamic; size_t idx; int default_port; int down; int * file_name; int host; int naddrs; int addrs; scalar_t__ err; int url; int * servers; int srv_conf; int * ref; TYPE_3__* upstream; scalar_t__ deleted; int * pool; } ;
typedef TYPE_2__ ngx_url_t ;
typedef size_t ngx_uint_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_27__ {scalar_t__ port; int flags; TYPE_6__** srv_conf; scalar_t__ servers; } ;
typedef TYPE_3__ ngx_http_upstream_srv_conf_t ;
typedef TYPE_2__ ngx_http_upstream_server_t ;
struct TYPE_24__ {size_t nelts; TYPE_3__** elts; } ;
struct TYPE_28__ {TYPE_1__ upstreams; } ;
typedef TYPE_5__ ngx_http_upstream_main_conf_t ;
struct TYPE_29__ {int ref; } ;
typedef TYPE_6__ ngx_http_dyups_upstream_srv_conf_t ;
typedef TYPE_2__ ngx_http_dyups_srv_conf_t ;
struct TYPE_30__ {int dy_upstreams; int enable; } ;
typedef TYPE_8__ ngx_http_dyups_main_conf_t ;
struct TYPE_31__ {int srv_conf; } ;
typedef TYPE_9__ ngx_http_conf_ctx_t ;
struct TYPE_22__ {int pool; scalar_t__ ctx; } ;
typedef TYPE_10__ ngx_conf_t ;
struct TYPE_25__ {int log; } ;
struct TYPE_23__ {size_t ctx_index; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_0 (int ,int,int) ;
 TYPE_2__* FUNC_1 (int *) ;
 TYPE_20__* VAR_4 ;
 void* FUNC_2 (TYPE_10__*,TYPE_13__) ;
 TYPE_2__ VAR_5 ;
 scalar_t__ FUNC_3 (TYPE_10__*) ;
 TYPE_13__ VAR_6 ;
 TYPE_13__ VAR_7 ;
 int FUNC_4 (int ,int ,int ,char*,scalar_t__) ;
 int FUNC_5 (TYPE_2__*,int) ;
 scalar_t__ FUNC_6 (int ,TYPE_2__*) ;
 int FUNC_7 (int *,char*) ;

__attribute__((used)) static ngx_int_t
FUNC_8(ngx_conf_t *VAR_8)
{
    ngx_url_t VAR_9;
    ngx_uint_t VAR_10;
    ngx_http_dyups_srv_conf_t *VAR_11;
    ngx_http_upstream_server_t *VAR_12;
    ngx_http_dyups_main_conf_t *VAR_13;
    ngx_http_upstream_srv_conf_t **VAR_14;
    ngx_http_upstream_main_conf_t *VAR_15;
    ngx_http_dyups_upstream_srv_conf_t *VAR_16;

    VAR_13 = FUNC_2(VAR_8, VAR_6);
    VAR_15 = FUNC_2(VAR_8, VAR_7);

    if (!VAR_13->enable) {
        return VAR_3;
    }

    VAR_14 = VAR_15->upstreams.elts;
    for (VAR_10 = 0; VAR_10 < VAR_15->upstreams.nelts; VAR_10++) {

        VAR_11 = FUNC_1(&VAR_13->dy_upstreams);
        if (VAR_11 == ((void*)0)) {
            return VAR_0;
        }

        FUNC_5(VAR_11, sizeof(ngx_http_dyups_srv_conf_t));

        VAR_11->pool = ((void*)0);
        VAR_11->upstream = VAR_14[VAR_10];
        VAR_11->dynamic = (VAR_14[VAR_10]->port == 0
                          && VAR_14[VAR_10]->srv_conf && VAR_14[VAR_10]->servers
                          && VAR_14[VAR_10]->flags & VAR_1);
        VAR_11->deleted = 0;
        VAR_11->idx = VAR_10;

        if (VAR_11->dynamic) {
            VAR_16 = VAR_11->upstream->srv_conf[VAR_6.ctx_index];
            VAR_11->ref = &VAR_16->ref;
        }
    }



    FUNC_5(&VAR_5,
                sizeof(ngx_http_upstream_srv_conf_t));
    VAR_5.srv_conf = ((ngx_http_conf_ctx_t *)
                                                (VAR_8->ctx))->srv_conf;
    VAR_5.servers = FUNC_0(VAR_8->pool, 1,
                                           sizeof(ngx_http_upstream_server_t));

    VAR_12 = FUNC_1(VAR_5.servers);
    if (VAR_12 == ((void*)0)) {
        return VAR_0;
    }

    FUNC_5(&VAR_9, sizeof(ngx_url_t));
    FUNC_5(VAR_12, sizeof(ngx_http_upstream_server_t));

    VAR_9.default_port = 80;
    FUNC_7(&VAR_9.url, "0.0.0.0");

    if (FUNC_6(VAR_8->pool, &VAR_9) != VAR_3) {
        if (VAR_9.err) {
            FUNC_4(VAR_2, VAR_4->log, 0,
                          "[dyups] %s in init", VAR_9.err);
        }

        return VAR_0;
    }

    VAR_12->addrs = VAR_9.addrs;
    VAR_12->naddrs = VAR_9.naddrs;
    VAR_12->down = 1;

    FUNC_7(&VAR_5.host,
                "_dyups_upstream_down_host_");
    VAR_5.file_name = (u_char *) "dyups_upstream";




    return VAR_3;

}
