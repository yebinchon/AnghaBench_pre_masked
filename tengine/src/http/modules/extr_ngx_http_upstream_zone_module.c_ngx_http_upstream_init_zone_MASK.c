
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_18__ {TYPE_7__* data; int * log_ctx; } ;
typedef TYPE_4__ ngx_slab_pool_t ;
struct TYPE_23__ {size_t len; } ;
struct TYPE_16__ {TYPE_9__ name; scalar_t__ exists; scalar_t__ addr; } ;
struct TYPE_19__ {TYPE_2__ shm; TYPE_8__* data; } ;
typedef TYPE_5__ ngx_shm_zone_t ;
typedef int ngx_int_t ;
struct TYPE_15__ {TYPE_7__* data; } ;
struct TYPE_20__ {TYPE_5__* shm_zone; TYPE_1__ peer; } ;
typedef TYPE_6__ ngx_http_upstream_srv_conf_t ;
struct TYPE_21__ {struct TYPE_21__* zone_next; } ;
typedef TYPE_7__ ngx_http_upstream_rr_peers_t ;
struct TYPE_17__ {size_t nelts; TYPE_6__** elts; } ;
struct TYPE_22__ {TYPE_3__ upstreams; } ;
typedef TYPE_8__ ngx_http_upstream_main_conf_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_7__* FUNC_0 (TYPE_4__*,TYPE_6__*) ;
 int * FUNC_1 (TYPE_4__*,size_t) ;
 int FUNC_2 (int *,char*,TYPE_9__*) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_shm_zone_t *VAR_2, void *VAR_3)
{
    size_t VAR_4;
    ngx_uint_t VAR_5;
    ngx_slab_pool_t *VAR_6;
    ngx_http_upstream_rr_peers_t *VAR_7, **VAR_8;
    ngx_http_upstream_srv_conf_t *VAR_9, **VAR_10;
    ngx_http_upstream_main_conf_t *VAR_11;

    VAR_6 = (ngx_slab_pool_t *) VAR_2->shm.addr;
    VAR_11 = VAR_2->data;
    VAR_10 = VAR_11->upstreams.elts;

    if (VAR_2->shm.exists) {
        VAR_7 = VAR_6->data;

        for (VAR_5 = 0; VAR_5 < VAR_11->upstreams.nelts; VAR_5++) {
            VAR_9 = VAR_10[VAR_5];

            if (VAR_9->shm_zone != VAR_2) {
                continue;
            }

            VAR_9->peer.data = VAR_7;
            VAR_7 = VAR_7->zone_next;
        }

        return VAR_1;
    }

    VAR_4 = sizeof(" in upstream zone \"\"") + VAR_2->shm.name.len;

    VAR_6->log_ctx = FUNC_1(VAR_6, VAR_4);
    if (VAR_6->log_ctx == ((void*)0)) {
        return VAR_0;
    }

    FUNC_2(VAR_6->log_ctx, " in upstream zone \"%V\"%Z",
                &VAR_2->shm.name);




    VAR_8 = (ngx_http_upstream_rr_peers_t **) (void *) &VAR_6->data;

    for (VAR_5 = 0; VAR_5 < VAR_11->upstreams.nelts; VAR_5++) {
        VAR_9 = VAR_10[VAR_5];

        if (VAR_9->shm_zone != VAR_2) {
            continue;
        }

        VAR_7 = FUNC_0(VAR_6, VAR_9);
        if (VAR_7 == ((void*)0)) {
            return VAR_0;
        }

        *VAR_8 = VAR_7;
        VAR_8 = &VAR_7->zone_next;
    }

    return VAR_1;
}
