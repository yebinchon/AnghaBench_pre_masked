
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
typedef struct TYPE_24__ TYPE_12__ ;
typedef struct TYPE_23__ TYPE_11__ ;
typedef struct TYPE_22__ TYPE_10__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int u_char ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_29__ {int use_cache; int local_ctx; } ;
struct TYPE_25__ {size_t segment_index; TYPE_8__* segment_data; } ;
struct TYPE_31__ {int state; int name_server_addr_text; int log; int pool; int * tfs_peer_servers; TYPE_5__ block_cache_ctx; int data; TYPE_1__ file; } ;
typedef TYPE_7__ ngx_http_tfs_t ;
struct TYPE_30__ {int block_id; } ;
struct TYPE_28__ {int ds_count; int * ds_addrs; } ;
struct TYPE_32__ {TYPE_6__ segment_info; int cache_hit; TYPE_4__ block_info; } ;
typedef TYPE_8__ ngx_http_tfs_segment_data_t ;
struct TYPE_33__ {TYPE_7__* data; } ;
typedef TYPE_9__ ngx_http_tfs_remote_block_cache_ctx_t ;
typedef int ngx_http_tfs_inet_t ;
struct TYPE_22__ {int ds_count; int * ds_addrs; } ;
typedef TYPE_10__ ngx_http_tfs_block_cache_value_t ;
struct TYPE_23__ {int block_id; int ns_addr; } ;
typedef TYPE_11__ ngx_http_tfs_block_cache_key_t ;
struct TYPE_26__ {int * data; } ;
struct TYPE_24__ {TYPE_3__* value; TYPE_2__ key; } ;
typedef TYPE_12__ ngx_http_tair_key_value_t ;
struct TYPE_27__ {scalar_t__ len; int * data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,TYPE_7__*,int ) ;
 int FUNC_1 (TYPE_7__*,int ) ;
 int FUNC_2 (int ,int ,TYPE_11__*,TYPE_10__*) ;
 int FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (TYPE_9__*,int ,int ,TYPE_11__*) ;
 int * FUNC_5 (TYPE_7__*,TYPE_8__*) ;
 int FUNC_6 (int ,int ,int ,char*,int *,int ) ;
 int FUNC_7 (int *,int *,int) ;
 int * FUNC_8 (int ,int) ;

__attribute__((used)) static void
FUNC_9(ngx_http_tair_key_value_t *VAR_8,
    ngx_int_t VAR_9, void *VAR_10)
{
    u_char *VAR_11, *VAR_12;
    uint32_t VAR_13;
    ngx_http_tfs_t *VAR_14;
    ngx_http_tfs_inet_t *VAR_15;
    ngx_http_tfs_segment_data_t *VAR_16;
    ngx_http_tfs_block_cache_key_t VAR_17;
    ngx_http_tfs_block_cache_value_t VAR_18;
    ngx_http_tfs_remote_block_cache_ctx_t *VAR_19 = VAR_10;

    VAR_14 = VAR_19->data;
    VAR_16 = &VAR_14->file.segment_data[VAR_14->file.segment_index];
    if (VAR_9 == VAR_0) {
        VAR_12 = VAR_8->key.data;
        VAR_11 = VAR_8->value->data;
        if (VAR_11 != ((void*)0)
            && (VAR_8->value->len
                > VAR_5))
        {
            VAR_17.ns_addr = *(uint64_t *)VAR_12;
            VAR_12 += sizeof(uint64_t);
            VAR_17.block_id = *(uint32_t *)VAR_12;

            VAR_13 = *(uint32_t *)VAR_11;
            VAR_11 += sizeof(uint32_t);

            if (VAR_13 > 0) {
                VAR_16->block_info.ds_count = VAR_13;
                VAR_16->block_info.ds_addrs = FUNC_8(VAR_14->pool,
                                       sizeof(ngx_http_tfs_inet_t) * VAR_13);
                if (VAR_16->block_info.ds_addrs == ((void*)0)) {
                    FUNC_0(VAR_14->data, VAR_14,
                                                VAR_1);
                    return;
                }
                FUNC_7(VAR_16->block_info.ds_addrs, VAR_11,
                           VAR_13 * sizeof(ngx_http_tfs_inet_t));


                if (VAR_14->block_cache_ctx.use_cache
                    & VAR_3)
                {
                    VAR_18.ds_count = VAR_13;
                    VAR_18.ds_addrs =
                        (uint64_t *)VAR_16->block_info.ds_addrs;
                    FUNC_2(
                                                   VAR_14->block_cache_ctx.local_ctx,
                                                   VAR_14->log, &VAR_17, &VAR_18);
                }


                VAR_14->state += 1;

                VAR_16->cache_hit = VAR_4;


                VAR_15 = FUNC_5(VAR_14, VAR_16);

                FUNC_3(VAR_14->pool,
                                           &VAR_14->tfs_peer_servers[VAR_2],
                                           VAR_15);

            } else {

                FUNC_4(VAR_19, VAR_14->pool, VAR_14->log,
                                                       &VAR_17);
            }
        }

    } else {
        FUNC_6(VAR_6, VAR_14->log, 0,
                       "lookup remote block cache, "
                       "ns addr: %V, block id: %uD not found",
                       &VAR_14->name_server_addr_text,
                       VAR_16->segment_info.block_id);
    }

    FUNC_1(VAR_14, VAR_7);
}
