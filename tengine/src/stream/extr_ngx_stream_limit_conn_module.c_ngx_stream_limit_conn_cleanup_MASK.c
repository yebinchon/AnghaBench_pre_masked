
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ conn; } ;
typedef TYPE_3__ ngx_stream_limit_conn_node_t ;
struct TYPE_14__ {int rbtree; } ;
typedef TYPE_4__ ngx_stream_limit_conn_ctx_t ;
struct TYPE_15__ {TYPE_2__* shm_zone; TYPE_7__* node; } ;
typedef TYPE_5__ ngx_stream_limit_conn_cleanup_t ;
struct TYPE_16__ {int mutex; } ;
typedef TYPE_6__ ngx_slab_pool_t ;
struct TYPE_17__ {int key; int color; } ;
typedef TYPE_7__ ngx_rbtree_node_t ;
struct TYPE_11__ {int log; scalar_t__ addr; } ;
struct TYPE_12__ {TYPE_1__ shm; TYPE_4__* data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,char*,int ,scalar_t__) ;
 int FUNC_1 (int ,TYPE_7__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_6__*,TYPE_7__*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_1)
{
    ngx_stream_limit_conn_cleanup_t *VAR_2 = VAR_1;

    ngx_slab_pool_t *VAR_3;
    ngx_rbtree_node_t *VAR_4;
    ngx_stream_limit_conn_ctx_t *VAR_5;
    ngx_stream_limit_conn_node_t *VAR_6;

    VAR_5 = VAR_2->shm_zone->data;
    VAR_3 = (ngx_slab_pool_t *) VAR_2->shm_zone->shm.addr;
    VAR_4 = VAR_2->node;
    VAR_6 = (ngx_stream_limit_conn_node_t *) &VAR_4->color;

    FUNC_2(&VAR_3->mutex);

    FUNC_0(VAR_0, VAR_2->shm_zone->shm.log, 0,
                   "limit conn cleanup: %08Xi %d", VAR_4->key, VAR_6->conn);

    VAR_6->conn--;

    if (VAR_6->conn == 0) {
        FUNC_1(VAR_5->rbtree, VAR_4);
        FUNC_4(VAR_3, VAR_4);
    }

    FUNC_3(&VAR_3->mutex);
}
