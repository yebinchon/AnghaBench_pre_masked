
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_14__ ;


typedef int uint64_t ;
typedef int ngx_int_t ;
struct TYPE_17__ {int use_cache; } ;
struct TYPE_18__ {size_t segment_index; TYPE_5__* segment_data; } ;
struct TYPE_21__ {int state; int log; int * tfs_peer_servers; int pool; TYPE_14__ block_cache_ctx; int name_server_addr; TYPE_1__ file; } ;
typedef TYPE_4__ ngx_http_tfs_t ;
struct TYPE_20__ {int * ds_addrs; int ds_count; } ;
struct TYPE_19__ {int block_id; } ;
struct TYPE_22__ {TYPE_3__ block_info; int cache_hit; TYPE_2__ segment_info; } ;
typedef TYPE_5__ ngx_http_tfs_segment_data_t ;
typedef int ngx_http_tfs_inet_t ;
struct TYPE_23__ {scalar_t__ ds_addrs; int ds_count; } ;
typedef TYPE_6__ ngx_http_tfs_block_cache_value_t ;
struct TYPE_24__ {int block_id; int ns_addr; } ;
typedef TYPE_7__ ngx_http_tfs_block_cache_key_t ;




 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int FUNC_0 (TYPE_14__*,int ,int ,TYPE_7__*,TYPE_6__*) ;
 int FUNC_1 (TYPE_4__*,int) ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (TYPE_4__*,TYPE_5__*) ;
 int * FUNC_4 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_5 (int ,int ,int ,char*) ;

ngx_int_t
FUNC_6(ngx_http_tfs_t *VAR_4)
{
    ngx_int_t VAR_5;
    ngx_http_tfs_inet_t *VAR_6;
    ngx_http_tfs_segment_data_t *VAR_7;
    ngx_http_tfs_block_cache_key_t VAR_8;
    ngx_http_tfs_block_cache_value_t VAR_9;

    VAR_7 = &VAR_4->file.segment_data[VAR_4->file.segment_index];
    VAR_8.ns_addr = *((uint64_t*)(&VAR_4->name_server_addr));
    VAR_8.block_id = VAR_7->segment_info.block_id;

    VAR_5 = FUNC_0(&VAR_4->block_cache_ctx, VAR_4->pool, VAR_4->log,
                                         &VAR_8, &VAR_9);

    switch (VAR_5) {
    case 130:

        if (VAR_4->block_cache_ctx.use_cache & VAR_2) {
            return 130;
        }
        break;
    case 128:

        VAR_7->cache_hit = VAR_1;

        VAR_7->block_info.ds_count = VAR_9.ds_count;
        VAR_7->block_info.ds_addrs = (ngx_http_tfs_inet_t *)
                                             VAR_9.ds_addrs;

        VAR_6 = FUNC_4(VAR_4, VAR_7);
        if (VAR_6 == ((void*)0)) {
            FUNC_3(VAR_4, VAR_7);

        } else {

            VAR_4->state += 1;
            FUNC_2(VAR_4->pool,
                          &VAR_4->tfs_peer_servers[VAR_0], VAR_6);
        }

       break;
    case 129:

        FUNC_5(VAR_3, VAR_4->log, 0,
                      "lookup block cache failed.");
        break;
    }
    VAR_5 = 128;

    FUNC_1(VAR_4, VAR_5);

    return VAR_5;
}
