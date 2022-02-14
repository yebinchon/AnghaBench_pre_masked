
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int * log_ctx; TYPE_1__* data; } ;
typedef TYPE_3__ ngx_slab_pool_t ;
struct TYPE_14__ {size_t len; } ;
struct TYPE_10__ {TYPE_6__ name; scalar_t__ exists; scalar_t__ addr; } ;
struct TYPE_12__ {TYPE_2__ shm; TYPE_5__* data; } ;
typedef TYPE_4__ ngx_shm_zone_t ;
typedef int ngx_int_t ;
typedef int ngx_http_tfs_rc_shctx_t ;
struct TYPE_13__ {TYPE_3__* shpool; TYPE_1__* sh; } ;
typedef TYPE_5__ ngx_http_tfs_rc_ctx_t ;
struct TYPE_9__ {int kp_queue; int queue; int sentinel; int rbtree; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int ) ;
 void* FUNC_2 (TYPE_3__*,size_t) ;
 int FUNC_3 (int *,char*,TYPE_6__*) ;

ngx_int_t
FUNC_4(ngx_shm_zone_t *VAR_3, void *VAR_4)
{
    ngx_http_tfs_rc_ctx_t *VAR_5 = VAR_4;

    size_t VAR_6;
    ngx_http_tfs_rc_ctx_t *VAR_7;

    VAR_7 = VAR_3->data;

    if (VAR_5) {

        VAR_7->sh = VAR_5->sh;
        VAR_7->shpool = VAR_5->shpool;

        return VAR_1;
    }

    VAR_7->shpool = (ngx_slab_pool_t *) VAR_3->shm.addr;

    if (VAR_3->shm.exists) {
        VAR_7->sh = VAR_7->shpool->data;

        return VAR_1;
    }

    VAR_7->sh = FUNC_2(VAR_7->shpool, sizeof(ngx_http_tfs_rc_shctx_t));
    if (VAR_7->sh == ((void*)0)) {
        return VAR_0;
    }

    VAR_7->shpool->data = VAR_7->sh;

    FUNC_1(&VAR_7->sh->rbtree, &VAR_7->sh->sentinel,
                    VAR_2);
    FUNC_0(&VAR_7->sh->queue);
    FUNC_0(&VAR_7->sh->kp_queue);

    VAR_6 = sizeof(" in tfs rc servers zone \"\"") + VAR_3->shm.name.len;

    VAR_7->shpool->log_ctx = FUNC_2(VAR_7->shpool, VAR_6);
    if (VAR_7->shpool->log_ctx == ((void*)0)) {
        return VAR_0;
    }

    FUNC_3(VAR_7->shpool->log_ctx, " in tfs rc servers zone \"%V\"%Z",
                &VAR_3->shm.name);

    return VAR_1;
}
