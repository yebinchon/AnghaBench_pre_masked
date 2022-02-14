
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_9__ ;
typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_13__ ;
typedef struct TYPE_23__ TYPE_12__ ;
typedef struct TYPE_22__ TYPE_11__ ;
typedef struct TYPE_21__ TYPE_10__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int u_char ;
typedef scalar_t__ ngx_uint_t ;
typedef int ngx_int_t ;
struct TYPE_30__ {size_t segment_index; scalar_t__ segment_count; int curr_batch_count; TYPE_8__* segment_data; } ;
struct TYPE_28__ {int use_cache; int local_ctx; } ;
struct TYPE_31__ {int log; int decline_handler; TYPE_6__ file; int pool; int name_server_addr_text; TYPE_4__ block_cache_ctx; int data; } ;
typedef TYPE_7__ ngx_http_tfs_t ;
struct TYPE_29__ {scalar_t__ block_id; } ;
struct TYPE_27__ {int * ds_addrs; scalar_t__ ds_count; } ;
struct TYPE_32__ {TYPE_5__ segment_info; int cache_hit; TYPE_3__ block_info; } ;
typedef TYPE_8__ ngx_http_tfs_segment_data_t ;
struct TYPE_33__ {TYPE_7__* data; } ;
typedef TYPE_9__ ngx_http_tfs_remote_block_cache_ctx_t ;
typedef int ngx_http_tfs_inet_t ;
struct TYPE_21__ {int * ds_addrs; scalar_t__ ds_count; } ;
typedef TYPE_10__ ngx_http_tfs_block_cache_value_t ;
struct TYPE_22__ {scalar_t__ block_id; int ns_addr; } ;
typedef TYPE_11__ ngx_http_tfs_block_cache_key_t ;
struct TYPE_25__ {int * data; } ;
struct TYPE_23__ {scalar_t__ rc; TYPE_2__* value; TYPE_1__ key; } ;
typedef TYPE_12__ ngx_http_tair_key_value_t ;
struct TYPE_24__ {scalar_t__ nelts; TYPE_12__* elts; } ;
typedef TYPE_13__ ngx_array_t ;
struct TYPE_26__ {scalar_t__ len; int * data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,TYPE_7__*,int ) ;
 int FUNC_1 (TYPE_7__*,int ) ;
 int FUNC_2 (int ,int ,TYPE_11__*,TYPE_10__*) ;
 int FUNC_3 (TYPE_9__*,int ,int ,TYPE_11__*) ;
 int FUNC_4 (int ,int ,int ,char*) ;
 int FUNC_5 (int ,int ,int ,char*,scalar_t__) ;
 int FUNC_6 (int ,int ,int ,char*,int *,scalar_t__) ;
 int FUNC_7 (int *,int *,scalar_t__) ;
 int * FUNC_8 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_9(ngx_array_t *VAR_10, ngx_int_t VAR_11,
    void *VAR_12)
{
    u_char *VAR_13, *VAR_14;
    uint32_t VAR_15, VAR_16;
    ngx_uint_t VAR_17, VAR_18, VAR_19;
    ngx_http_tfs_t *VAR_20;
    ngx_http_tair_key_value_t *VAR_21;
    ngx_http_tfs_segment_data_t *VAR_22;
    ngx_http_tfs_block_cache_key_t VAR_23;
    ngx_http_tfs_block_cache_value_t VAR_24;
    ngx_http_tfs_remote_block_cache_ctx_t *VAR_25 = VAR_12;

    VAR_20 = VAR_25->data;

    VAR_22 = &VAR_20->file.segment_data[VAR_20->file.segment_index];
    VAR_16 = VAR_20->file.segment_count - VAR_20->file.segment_index;
    if (VAR_16 > VAR_4) {
        VAR_16 = VAR_4;
    }

    if (VAR_11 == VAR_8) {
        VAR_21 = VAR_10->elts;
        VAR_19 = 0;
        for (VAR_17 = 0; VAR_17 < VAR_10->nelts; VAR_17++, VAR_21++) {
            if (VAR_21->rc != VAR_1) {
                continue;
            }
            VAR_14 = VAR_21->key.data;
            VAR_13 = VAR_21->value->data;
            if (VAR_13 != ((void*)0)
                && (VAR_21->value->len
                    > VAR_6))
            {
                VAR_23.ns_addr = *(uint64_t *)VAR_14;
                VAR_14 += sizeof(uint64_t);
                VAR_23.block_id = *(uint32_t *)VAR_14;

                VAR_15 = *(uint32_t *)VAR_13;
                VAR_13 += sizeof(uint32_t);

                if (VAR_15 > 0) {

                    for (VAR_18 = 0; VAR_18 < VAR_16; VAR_18++) {
                        if(VAR_22[VAR_18].segment_info.block_id == VAR_23.block_id
                           && VAR_22[VAR_18].block_info.ds_addrs == ((void*)0))
                        {
                            break;
                        }
                    }

                    if (VAR_18 == VAR_16) {
                        continue;
                    }

                    VAR_22[VAR_18].block_info.ds_count = VAR_15;
                    VAR_22[VAR_18].block_info.ds_addrs = FUNC_8(VAR_20->pool,
                                        VAR_15 * sizeof(ngx_http_tfs_inet_t));
                    if (VAR_22[VAR_18].block_info.ds_addrs == ((void*)0)) {
                        FUNC_0(VAR_20->data, VAR_20,
                                                VAR_2);
                        return;
                    }
                    FUNC_7(VAR_22[VAR_18].block_info.ds_addrs, VAR_13,
                               VAR_15 * sizeof(ngx_http_tfs_inet_t));

                    if (VAR_20->block_cache_ctx.use_cache
                        & VAR_3)
                    {
                        VAR_24.ds_count = VAR_15;
                        VAR_24.ds_addrs =
                            (uint64_t *)VAR_22[VAR_18].block_info.ds_addrs;
                        FUNC_2(
                            VAR_20->block_cache_ctx.local_ctx, VAR_20->log, &VAR_23, &VAR_24);
                    }

                    VAR_19++;
                    VAR_22[VAR_18].cache_hit = VAR_5;

                    FUNC_6(VAR_7, VAR_20->log, 0,
                                   "remote block cache hit, "
                                   "ns addr: %V, block id: %uD",
                                   &VAR_20->name_server_addr_text,
                                   VAR_22[VAR_18].segment_info.block_id);

                } else {

                    FUNC_3(VAR_25, VAR_20->pool, VAR_20->log,
                                                           &VAR_23);
                }
            }
        }

        if (VAR_19 > 0) {
            FUNC_5(VAR_7, VAR_20->log, 0,
                           "batch lookup remote block cache, hit_count: %ui",
                           VAR_19);


            VAR_20->file.curr_batch_count += VAR_19;

            if (VAR_19 == VAR_10->nelts) {

                VAR_20->decline_handler = VAR_9;
                VAR_11 = VAR_0;
            }
        }

    } else {
        VAR_11 = VAR_8;
        FUNC_4(VAR_7, VAR_20->log, 0,
                       "remote block cache miss");
    }

    FUNC_1(VAR_20, VAR_11);
}
