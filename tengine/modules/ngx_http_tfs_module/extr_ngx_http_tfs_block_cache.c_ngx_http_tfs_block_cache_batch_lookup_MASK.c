
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ ngx_uint_t ;
typedef int ngx_pool_t ;
typedef int ngx_log_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_17__ {size_t segment_index; TYPE_4__* segment_data; } ;
struct TYPE_19__ {int name_server_addr; TYPE_1__ file; int pool; } ;
typedef TYPE_3__ ngx_http_tfs_t ;
struct TYPE_18__ {int block_id; } ;
struct TYPE_20__ {scalar_t__ cache_hit; TYPE_2__ segment_info; } ;
typedef TYPE_4__ ngx_http_tfs_segment_data_t ;
struct TYPE_21__ {int block_id; int ns_addr; } ;
typedef TYPE_5__ ngx_http_tfs_block_cache_key_t ;
struct TYPE_24__ {TYPE_3__* data; } ;
struct TYPE_22__ {int curr_lookup_cache; int use_cache; TYPE_8__ remote_ctx; int local_ctx; } ;
typedef TYPE_6__ ngx_http_tfs_block_cache_ctx_t ;
struct TYPE_23__ {scalar_t__ nelts; } ;
typedef TYPE_7__ ngx_array_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_7__*,int ,scalar_t__,int) ;
 scalar_t__ FUNC_1 (TYPE_7__*) ;
 scalar_t__ FUNC_2 (int ,int *,int *,TYPE_7__*,TYPE_7__*) ;
 scalar_t__ FUNC_3 (TYPE_8__*,int *,int *,TYPE_7__*) ;

ngx_int_t
FUNC_4(ngx_http_tfs_block_cache_ctx_t *VAR_6,
    ngx_pool_t *VAR_7, ngx_log_t *VAR_8, ngx_array_t *VAR_9,
    ngx_array_t *VAR_10)
{
    uint32_t VAR_11;
    ngx_int_t VAR_12;
    ngx_uint_t VAR_13;
    ngx_array_t VAR_14;
    ngx_http_tfs_t *VAR_15;
    ngx_http_tfs_segment_data_t *VAR_16;
    ngx_http_tfs_block_cache_key_t *VAR_17;

    VAR_12 = VAR_0;

    if (VAR_6->curr_lookup_cache == VAR_2) {

        VAR_6->curr_lookup_cache = VAR_4;

        if (VAR_6->use_cache & VAR_2) {
            VAR_12 = FUNC_2(VAR_6->local_ctx,
                                                             VAR_7, VAR_8, VAR_9,
                                                             VAR_10);

            if (VAR_12 == VAR_5 || VAR_12 == VAR_1) {
                return VAR_12;
            }
        }
    }


    if (VAR_6->curr_lookup_cache == VAR_4) {

        VAR_6->curr_lookup_cache = VAR_3;

        if (VAR_6->use_cache & VAR_4) {
            VAR_15 = VAR_6->remote_ctx.data;
            VAR_13 = VAR_9->nelts - VAR_10->nelts;

            VAR_12 = FUNC_0(&VAR_14, VAR_15->pool, VAR_13,
                                sizeof(ngx_http_tfs_block_cache_key_t));
            if (VAR_12 == VAR_1) {
                return VAR_12;
            }

            VAR_16 = &VAR_15->file.segment_data[VAR_15->file.segment_index];
            for (VAR_11 = 0; VAR_11 < VAR_9->nelts; VAR_11++, VAR_16++) {
                if (VAR_16->cache_hit == VAR_3) {
                    VAR_17 = (ngx_http_tfs_block_cache_key_t *)
                           FUNC_1(&VAR_14);
                    VAR_17->ns_addr = *((uint64_t*)(&VAR_15->name_server_addr));
                    VAR_17->block_id = VAR_16->segment_info.block_id;
                }
            }

            VAR_12 = FUNC_3(&VAR_6->remote_ctx,
                                                              VAR_7, VAR_8,
                                                              &VAR_14);
        }
    }

    return VAR_12;
}
