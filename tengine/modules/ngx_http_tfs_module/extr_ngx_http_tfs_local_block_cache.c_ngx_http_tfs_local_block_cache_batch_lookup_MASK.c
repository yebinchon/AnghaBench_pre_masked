
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u_char ;
typedef scalar_t__ ngx_uint_t ;
struct TYPE_16__ {int mutex; } ;
typedef TYPE_3__ ngx_slab_pool_t ;
struct TYPE_17__ {scalar_t__ key; struct TYPE_17__* right; struct TYPE_17__* left; int color; } ;
typedef TYPE_4__ ngx_rbtree_node_t ;
typedef int ngx_pool_t ;
typedef int ngx_log_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_18__ {TYPE_2__* sh; TYPE_3__* shpool; } ;
typedef TYPE_5__ ngx_http_tfs_local_block_cache_ctx_t ;
struct TYPE_19__ {int ds_count; int * ds_addrs; } ;
typedef TYPE_6__ ngx_http_tfs_block_cache_value_t ;
struct TYPE_20__ {int count; int queue; int data; int key; } ;
typedef TYPE_7__ ngx_http_tfs_block_cache_node_t ;
struct TYPE_21__ {TYPE_6__* value; int * key; } ;
typedef TYPE_8__ ngx_http_tfs_block_cache_kv_t ;
typedef int ngx_http_tfs_block_cache_key_t ;
struct TYPE_22__ {scalar_t__ nelts; int * elts; } ;
typedef TYPE_9__ ngx_array_t ;
struct TYPE_14__ {TYPE_4__* root; TYPE_4__* sentinel; } ;
struct TYPE_15__ {scalar_t__ miss_count; scalar_t__ hit_count; int queue; TYPE_1__ rbtree; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_9__*) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int *,int ,char*,scalar_t__) ;
 int FUNC_3 (int ,int *,int ,char*,double) ;
 int FUNC_4 (int *,int ,int) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 void* FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

ngx_int_t
FUNC_11(
    ngx_http_tfs_local_block_cache_ctx_t *VAR_6,
    ngx_pool_t *VAR_7, ngx_log_t *VAR_8, ngx_array_t *VAR_9, ngx_array_t *VAR_10)
{
    double VAR_11;
    ngx_int_t VAR_12;
    ngx_uint_t VAR_13, VAR_14, VAR_15;
    ngx_slab_pool_t *VAR_16;
    ngx_rbtree_node_t *VAR_17, *VAR_18;
    ngx_http_tfs_block_cache_kv_t *VAR_19;
    ngx_http_tfs_block_cache_key_t *VAR_20;
    ngx_http_tfs_block_cache_node_t *VAR_21;
    ngx_http_tfs_block_cache_value_t *VAR_22;

    FUNC_2(VAR_4, VAR_8, 0,
                   "batch lookup local block cache, block count: %ui",
                   VAR_9->nelts);

    VAR_20 = VAR_9->elts;
    VAR_16 = VAR_6->shpool;
    VAR_12 = VAR_1;
    FUNC_9(&VAR_16->mutex);

    VAR_18 = VAR_6->sh->rbtree.sentinel;
    VAR_15 = 0;

    for (VAR_13 = 0; VAR_13 < VAR_9->nelts; VAR_13++, VAR_20++) {
        VAR_17 = VAR_6->sh->rbtree.root;
        VAR_14 = FUNC_5((u_char*)VAR_20,
                                VAR_2);

        while (VAR_17 != VAR_18) {

            if (VAR_14 < VAR_17->key) {
                VAR_17 = VAR_17->left;
                continue;
            }

            if (VAR_14 > VAR_17->key) {
                VAR_17 = VAR_17->right;
                continue;
            }


            VAR_21 = (ngx_http_tfs_block_cache_node_t *) &VAR_17->color;
            VAR_12 = FUNC_1(VAR_20, &VAR_21->key);
            if (VAR_12 == 0) {
                VAR_22 = FUNC_6(VAR_7,
                                    sizeof(ngx_http_tfs_block_cache_value_t));
                if (VAR_22 == ((void*)0)) {
                    FUNC_10(&VAR_16->mutex);
                    return VAR_1;
                }

                VAR_22->ds_count = VAR_21->count;
                VAR_22->ds_addrs = FUNC_6(VAR_7,
                                            VAR_22->ds_count * sizeof(uint64_t));
                if (VAR_22->ds_addrs == ((void*)0)) {
                    FUNC_10(&VAR_16->mutex);
                    return VAR_1;
                }
                FUNC_4(VAR_22->ds_addrs, VAR_21->data,
                           VAR_22->ds_count * sizeof(uint64_t));

                VAR_19 = (ngx_http_tfs_block_cache_kv_t *)FUNC_0(VAR_10);
                VAR_19->key = VAR_20;
                VAR_19->value = VAR_22;

                FUNC_8(&VAR_21->queue);
                FUNC_7(&VAR_6->sh->queue, &VAR_21->queue);
                VAR_15++;
                break;
            }
            VAR_17 = (VAR_12 < 0) ? VAR_17->left : VAR_17->right;
        }

        if (VAR_17 == VAR_18) {
            VAR_6->sh->miss_count++;
        }
    }

    VAR_6->sh->hit_count += VAR_15;
    if (VAR_6->sh->hit_count >= VAR_3) {
        VAR_11 = 100 * (double)((double)VAR_6->sh->hit_count
                                   / (double)(VAR_6->sh->hit_count
                                              + VAR_6->sh->miss_count));
        FUNC_3(VAR_5, VAR_8, 0,
                      "local block cache hit_ratio: %.2f%%",
                      VAR_11);
        VAR_6->sh->hit_count = 0;
        VAR_6->sh->miss_count = 0;
    }

    FUNC_10(&VAR_16->mutex);

    FUNC_2(VAR_4, VAR_8, 0,
                   "batch lookup local block cache, hit_count: %ui",
                   VAR_10->nelts);


    if (VAR_15 < VAR_9->nelts) {
        VAR_12 = VAR_0;
    }

    return VAR_12;
}
