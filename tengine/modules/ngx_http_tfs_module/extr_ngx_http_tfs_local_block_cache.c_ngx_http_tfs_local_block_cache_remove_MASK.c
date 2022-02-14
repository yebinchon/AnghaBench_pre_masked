
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int u_char ;
typedef scalar_t__ ngx_uint_t ;
struct TYPE_15__ {int mutex; } ;
typedef TYPE_2__ ngx_slab_pool_t ;
struct TYPE_16__ {scalar_t__ key; struct TYPE_16__* right; struct TYPE_16__* left; int color; } ;
typedef TYPE_3__ ngx_rbtree_node_t ;
typedef int ngx_log_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_17__ {TYPE_2__* shpool; TYPE_1__* sh; } ;
typedef TYPE_4__ ngx_http_tfs_local_block_cache_ctx_t ;
struct TYPE_18__ {int queue; int key; } ;
typedef TYPE_5__ ngx_http_tfs_block_cache_node_t ;
struct TYPE_19__ {int block_id; int ns_addr; } ;
typedef TYPE_6__ ngx_http_tfs_block_cache_key_t ;
struct TYPE_20__ {TYPE_3__* sentinel; TYPE_3__* root; } ;
struct TYPE_14__ {TYPE_9__ rbtree; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_6__*,int *) ;
 int FUNC_1 (int ,int *,int ,char*,int ,int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_9__*,TYPE_3__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*,TYPE_3__*) ;

void
FUNC_8(ngx_http_tfs_local_block_cache_ctx_t *VAR_2,
    ngx_log_t *VAR_3, ngx_http_tfs_block_cache_key_t* VAR_4)
{
    ngx_int_t VAR_5;
    ngx_uint_t VAR_6;
    ngx_slab_pool_t *VAR_7;
    ngx_rbtree_node_t *VAR_8, *VAR_9;
    ngx_http_tfs_block_cache_node_t *VAR_10;

    FUNC_1(VAR_1, VAR_3, 0,
                   "remove local block cache, ns addr: %uL, block id: %uD",
                   VAR_4->ns_addr, VAR_4->block_id);

    VAR_7 = VAR_2->shpool;
    FUNC_5(&VAR_7->mutex);

    VAR_8 = VAR_2->sh->rbtree.root;
    VAR_9 = VAR_2->sh->rbtree.sentinel;

    VAR_6 = FUNC_2((u_char*)VAR_4, VAR_0);

    while (VAR_8 != VAR_9) {

        if (VAR_6 < VAR_8->key) {
            VAR_8 = VAR_8->left;
            continue;
        }

        if (VAR_6 > VAR_8->key) {
            VAR_8 = VAR_8->right;
            continue;
        }


        do {
            VAR_10 = (ngx_http_tfs_block_cache_node_t *) &VAR_8->color;
            VAR_5 = FUNC_0(VAR_4, &VAR_10->key);
            if (VAR_5 == 0) {
                FUNC_4(&VAR_2->sh->rbtree, VAR_8);
                FUNC_7(VAR_2->shpool, VAR_8);
                FUNC_3(&VAR_10->queue);
                FUNC_6(&VAR_7->mutex);
                return;
            }
            VAR_8 = (VAR_5 < 0) ? VAR_8->left : VAR_8->right;
        } while (VAR_8 != VAR_9 && VAR_6 == VAR_8->key);
        break;
    }
    FUNC_6(&VAR_7->mutex);

    FUNC_1(VAR_1, VAR_3, 0,
                   "remove local block cache, "
                   "ns addr: %uL, block id: %uD not found",
                   VAR_4->ns_addr, VAR_4->block_id);

}
