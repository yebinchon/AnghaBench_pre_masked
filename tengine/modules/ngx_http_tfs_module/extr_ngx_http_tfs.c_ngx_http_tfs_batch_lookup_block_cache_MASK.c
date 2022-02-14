
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_10__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int ngx_int_t ;
struct TYPE_19__ {int use_cache; } ;
struct TYPE_20__ {scalar_t__ segment_count; size_t segment_index; scalar_t__ curr_batch_count; TYPE_7__* segment_data; } ;
struct TYPE_25__ {int log; int decline_handler; TYPE_12__ block_cache_ctx; TYPE_1__ file; int pool; int name_server_addr; } ;
typedef TYPE_6__ ngx_http_tfs_t ;
struct TYPE_23__ {int * ds_addrs; int ds_count; } ;
struct TYPE_21__ {scalar_t__ block_id; } ;
struct TYPE_26__ {int cache_hit; TYPE_4__ block_info; TYPE_2__ segment_info; } ;
typedef TYPE_7__ ngx_http_tfs_segment_data_t ;
typedef int ngx_http_tfs_inet_t ;
struct TYPE_27__ {TYPE_5__* value; TYPE_3__* key; } ;
typedef TYPE_8__ ngx_http_tfs_block_cache_kv_t ;
struct TYPE_28__ {scalar_t__ block_id; int ns_addr; } ;
typedef TYPE_9__ ngx_http_tfs_block_cache_key_t ;
struct TYPE_18__ {scalar_t__ nelts; TYPE_8__* elts; } ;
typedef TYPE_10__ ngx_array_t ;
struct TYPE_24__ {scalar_t__ ds_addrs; int ds_count; } ;
struct TYPE_22__ {scalar_t__ block_id; } ;




 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int FUNC_0 (TYPE_10__*,int ,scalar_t__,int) ;
 scalar_t__ FUNC_1 (TYPE_10__*) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_12__*,int ,int ,TYPE_10__*,TYPE_10__*) ;
 int FUNC_3 (TYPE_6__*,int) ;
 int FUNC_4 (int ,int ,int ,char*) ;

ngx_int_t
FUNC_5(ngx_http_tfs_t *VAR_5)
{
    uint32_t VAR_6, VAR_7, VAR_8;
    ngx_int_t VAR_9;
    ngx_array_t VAR_10, VAR_11;
    ngx_http_tfs_segment_data_t *VAR_12;
    ngx_http_tfs_block_cache_kv_t *VAR_13;
    ngx_http_tfs_block_cache_key_t *VAR_14;

    VAR_8 = VAR_5->file.segment_count - VAR_5->file.segment_index;
    if (VAR_8 > VAR_1) {
        VAR_8 = VAR_1;
    }

    VAR_9 = FUNC_0(&VAR_10, VAR_5->pool, VAR_8,
                        sizeof(ngx_http_tfs_block_cache_key_t));
    if (VAR_9 == 129) {
        return VAR_9;
    }

    VAR_12 = &VAR_5->file.segment_data[VAR_5->file.segment_index];
    for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) {
        VAR_14 = (ngx_http_tfs_block_cache_key_t *) FUNC_1(&VAR_10);
        VAR_14->ns_addr = *((uint64_t*)(&VAR_5->name_server_addr));
        VAR_14->block_id = VAR_12[VAR_6].segment_info.block_id;
    }

    VAR_9 = FUNC_0(&VAR_11, VAR_5->pool, VAR_8,
                        sizeof(ngx_http_tfs_block_cache_kv_t));
    if (VAR_9 == 129) {
        return VAR_9;
    }

    VAR_9 = FUNC_2(&VAR_5->block_cache_ctx,
                                               VAR_5->pool, VAR_5->log,
                                               &VAR_10, &VAR_11);

    if (VAR_9 != 129 && VAR_11.nelts > 0) {

        VAR_5->file.curr_batch_count += VAR_11.nelts;
        VAR_13 = VAR_11.elts;
        for (VAR_6 = 0; VAR_6 < VAR_11.nelts; VAR_6++, VAR_13++) {

            for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
                if (VAR_12[VAR_7].segment_info.block_id == VAR_13->key->block_id
                    && VAR_12[VAR_7].block_info.ds_addrs == ((void*)0))
                {
                    break;
                }
            }

            VAR_12[VAR_7].block_info.ds_count = VAR_13->value->ds_count;
            VAR_12[VAR_7].block_info.ds_addrs = (ngx_http_tfs_inet_t *)
                                                   VAR_13->value->ds_addrs;

            VAR_12[VAR_7].cache_hit = VAR_0;
        }
    }

    switch (VAR_9) {
    case 130:

        if (VAR_5->block_cache_ctx.use_cache & VAR_2) {
            return 130;
        }
        VAR_9 = 128;
        break;
    case 128:

        VAR_5->decline_handler = VAR_4;
        VAR_9 = 130;
        break;
    case 129:

        FUNC_4(VAR_3, VAR_5->log, 0,
                      "batch lookup block cache failed.");
        VAR_9 = 128;
    }

    FUNC_3(VAR_5, VAR_9);

    return VAR_9;
}
