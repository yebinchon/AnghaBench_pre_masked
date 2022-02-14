
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u_char ;
typedef scalar_t__ ngx_uint_t ;
struct TYPE_15__ {int mutex; } ;
typedef TYPE_3__ ngx_slab_pool_t ;
struct TYPE_16__ {scalar_t__ key; struct TYPE_16__* right; struct TYPE_16__* left; int color; } ;
typedef TYPE_4__ ngx_rbtree_node_t ;
typedef int ngx_pool_t ;
typedef int ngx_log_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_17__ {TYPE_2__* sh; TYPE_3__* shpool; } ;
typedef TYPE_5__ ngx_http_tfs_local_block_cache_ctx_t ;
struct TYPE_18__ {int ds_count; int * ds_addrs; } ;
typedef TYPE_6__ ngx_http_tfs_block_cache_value_t ;
struct TYPE_19__ {int count; int queue; int data; int key; } ;
typedef TYPE_7__ ngx_http_tfs_block_cache_node_t ;
struct TYPE_20__ {int block_id; int ns_addr; } ;
typedef TYPE_8__ ngx_http_tfs_block_cache_key_t ;
struct TYPE_13__ {TYPE_4__* sentinel; TYPE_4__* root; } ;
struct TYPE_14__ {scalar_t__ hit_count; scalar_t__ miss_count; int queue; TYPE_1__ rbtree; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (TYPE_8__*,int *) ;
 int FUNC_1 (int ,int *,int ,char*,int ,int ) ;
 int FUNC_2 (int ,int *,int ,char*,double) ;
 int FUNC_3 (int *,int ,int) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int * FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

ngx_int_t
FUNC_10(ngx_http_tfs_local_block_cache_ctx_t *VAR_7,
    ngx_pool_t *VAR_8, ngx_log_t *VAR_9, ngx_http_tfs_block_cache_key_t* VAR_10,
    ngx_http_tfs_block_cache_value_t *VAR_11)
{
    double VAR_12;
    ngx_int_t VAR_13;
    ngx_uint_t VAR_14;
    ngx_slab_pool_t *VAR_15;
    ngx_rbtree_node_t *VAR_16, *VAR_17;
    ngx_http_tfs_block_cache_node_t *VAR_18;

    FUNC_1(VAR_4, VAR_9, 0,
                   "lookup local block cache, ns addr: %uL, block id: %uD",
                   VAR_10->ns_addr, VAR_10->block_id);

    VAR_15 = VAR_7->shpool;
    FUNC_8(&VAR_15->mutex);

    VAR_16 = VAR_7->sh->rbtree.root;
    VAR_17 = VAR_7->sh->rbtree.sentinel;

    VAR_14 = FUNC_4((u_char*)VAR_10, VAR_2);

    while (VAR_16 != VAR_17) {

        if (VAR_14 < VAR_16->key) {
            VAR_16 = VAR_16->left;
            continue;
        }

        if (VAR_14 > VAR_16->key) {
            VAR_16 = VAR_16->right;
            continue;
        }


        VAR_18 = (ngx_http_tfs_block_cache_node_t *) &VAR_16->color;
        VAR_13 = FUNC_0(VAR_10, &VAR_18->key);
        if (VAR_13 == 0) {
            VAR_11->ds_count = VAR_18->count;
            VAR_11->ds_addrs = FUNC_5(VAR_8,
                                          VAR_11->ds_count * sizeof(uint64_t));
            if (VAR_11->ds_addrs == ((void*)0)) {
                FUNC_9(&VAR_15->mutex);
                return VAR_1;
            }
            FUNC_3(VAR_11->ds_addrs, VAR_18->data,
                       VAR_11->ds_count * sizeof(uint64_t));
            FUNC_7(&VAR_18->queue);
            FUNC_6(&VAR_7->sh->queue, &VAR_18->queue);
            VAR_7->sh->hit_count++;
            if (VAR_7->sh->hit_count >= VAR_3) {
                VAR_12 = 100 * (double)((double)VAR_7->sh->hit_count
                                           / (double)(VAR_7->sh->hit_count
                                                      + VAR_7->sh->miss_count));
                FUNC_2(VAR_5, VAR_9, 0,
                              "local block cache hit_ratio: %.2f%%",
                              VAR_12);
                VAR_7->sh->hit_count = 0;
                VAR_7->sh->miss_count = 0;
            }
            FUNC_9(&VAR_15->mutex);
            return VAR_6;
        }
        VAR_16 = (VAR_13 < 0) ? VAR_16->left : VAR_16->right;
    }
    VAR_7->sh->miss_count++;
    FUNC_9(&VAR_15->mutex);

    FUNC_1(VAR_4, VAR_9, 0,
                   "lookup local block cache, "
                   "ns addr: %uL, block id: %uD not found",
                   VAR_10->ns_addr, VAR_10->block_id);

    return VAR_0;
}
