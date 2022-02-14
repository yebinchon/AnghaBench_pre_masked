
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int * log_ctx; TYPE_2__* data; } ;
typedef TYPE_3__ ngx_slab_pool_t ;
struct TYPE_17__ {int len; } ;
struct TYPE_12__ {TYPE_6__ name; scalar_t__ addr; int log; } ;
struct TYPE_15__ {TYPE_1__ shm; TYPE_5__* data; } ;
typedef TYPE_4__ ngx_shm_zone_t ;
typedef int ngx_int_t ;
typedef int ngx_http_reqstat_shctx_t ;
struct TYPE_16__ {TYPE_2__* sh; TYPE_3__* shpool; TYPE_9__* val; } ;
typedef TYPE_5__ ngx_http_reqstat_ctx_t ;
struct TYPE_18__ {int data; } ;
struct TYPE_13__ {int visit; int queue; int sentinel; int rbtree; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,char*,TYPE_6__*,TYPE_9__*,TYPE_9__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int ) ;
 void* FUNC_3 (TYPE_3__*,size_t) ;
 int FUNC_4 (int *,char*,TYPE_6__*) ;
 scalar_t__ FUNC_5 (int ,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_6(ngx_shm_zone_t *VAR_4, void *VAR_5)
{
    size_t VAR_6;
    ngx_http_reqstat_ctx_t *VAR_7, *VAR_8;

    VAR_8 = VAR_5;
    VAR_7 = VAR_4->data;

    if (VAR_8 != ((void*)0)) {
        if (FUNC_5(VAR_7->val->data, VAR_8->val->data) != 0) {
            FUNC_0(VAR_1, VAR_4->shm.log, 0,
                          "reqstat \"%V\" uses the value str \"%V\" "
                          "while previously it used \"%V\"",
                          &VAR_4->shm.name, VAR_7->val, VAR_8->val);
            return VAR_0;
        }

        VAR_7->shpool = VAR_8->shpool;
        VAR_7->sh = VAR_8->sh;

        return VAR_2;
    }

    VAR_7->shpool = (ngx_slab_pool_t *) VAR_4->shm.addr;

    VAR_7->sh = FUNC_3(VAR_7->shpool, sizeof(ngx_http_reqstat_shctx_t));
    if (VAR_7->sh == ((void*)0)) {
        return VAR_0;
    }

    VAR_7->shpool->data = VAR_7->sh;

    VAR_6 = sizeof(" in req_status zone \"\"") + VAR_4->shm.name.len;
    VAR_7->shpool->log_ctx = FUNC_3(VAR_7->shpool, VAR_6);
    if (VAR_7->shpool->log_ctx == ((void*)0)) {
        return VAR_0;
    }

    FUNC_4(VAR_7->shpool->log_ctx,
                " in req_status zone \"%V\"%Z",
                &VAR_4->shm.name);

    FUNC_2(&VAR_7->sh->rbtree, &VAR_7->sh->sentinel,
                    VAR_3);

    FUNC_1(&VAR_7->sh->queue);
    FUNC_1(&VAR_7->sh->visit);

    return VAR_2;
}
