
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_10__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_24__ {TYPE_5__* segment_data; } ;
struct TYPE_19__ {int code; } ;
struct TYPE_21__ {int version; int is_raw_update; TYPE_1__ action; } ;
struct TYPE_20__ {int curr_lookup_cache; } ;
struct TYPE_25__ {scalar_t__ (* decline_handler ) (TYPE_7__*) ;int data; TYPE_6__ file; int state; void* use_dedup; void* is_stat_dup_file; TYPE_3__ r_ctx; int is_process_meta_seg; int is_large_file; int parent; TYPE_2__ block_cache_ctx; void* retry_curr_ns; int name_server_addr; int * tfs_peer_servers; int pool; int name_server_addr_text; int rc_info_node; int rw_cluster_index; TYPE_8__* tfs_peer; } ;
typedef TYPE_7__ ngx_http_tfs_t ;
struct TYPE_18__ {int data; int (* free ) (TYPE_10__*,int ,int ) ;} ;
struct TYPE_26__ {TYPE_10__ peer; } ;
typedef TYPE_8__ ngx_http_tfs_peer_connection_t ;
struct TYPE_22__ {int file_id; int block_id; } ;
struct TYPE_23__ {TYPE_4__ segment_info; } ;


 scalar_t__ VAR_0 ;



 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (TYPE_7__*) ;
 int FUNC_1 (TYPE_7__*) ;
 scalar_t__ FUNC_2 (TYPE_7__*) ;
 int FUNC_3 (int ,int *,int *) ;
 scalar_t__ FUNC_4 (int ,TYPE_7__*) ;
 int FUNC_5 (TYPE_7__*) ;
 scalar_t__ FUNC_6 (TYPE_7__*,int ,int *,int *) ;
 int FUNC_7 (TYPE_10__*,int ,int ) ;
 scalar_t__ FUNC_8 (TYPE_7__*) ;

ngx_int_t
FUNC_9(ngx_http_tfs_t *VAR_7)
{
    ngx_int_t VAR_8;
    ngx_http_tfs_peer_connection_t *VAR_9;

    VAR_9 = VAR_7->tfs_peer;
    VAR_9->peer.free(&VAR_9->peer, VAR_9->peer.data, 0);

    if (!VAR_7->retry_curr_ns) {
        VAR_7->rw_cluster_index++;
        VAR_8 = FUNC_6(VAR_7, VAR_7->rc_info_node,
                                             &VAR_7->name_server_addr,
                                             &VAR_7->name_server_addr_text);
        if (VAR_8 == VAR_0) {
            return VAR_1;
        }

        FUNC_3(VAR_7->pool,
                                 &VAR_7->tfs_peer_servers[VAR_2],
                                 &VAR_7->name_server_addr);

        FUNC_5(VAR_7);

    } else {
        VAR_7->retry_curr_ns = VAR_3;
    }

    switch (VAR_7->r_ctx.action.code) {
    case 130:
    case 129:

        if (VAR_7->block_cache_ctx.curr_lookup_cache
            != VAR_4)
        {
            if (!VAR_7->parent
                && (VAR_7->r_ctx.version == 2
                    || (VAR_7->is_large_file && !VAR_7->is_process_meta_seg)))
            {
                VAR_7->decline_handler = FUNC_0;

            } else {
                VAR_7->decline_handler = FUNC_2;
            }
            return VAR_7->decline_handler(VAR_7);
        }
        break;
    case 128:

        if (VAR_7->r_ctx.is_raw_update) {
            return VAR_0;
        }


        if (VAR_7->is_stat_dup_file) {
            VAR_7->is_stat_dup_file = VAR_3;
            VAR_7->use_dedup = VAR_3;
            VAR_7->state = VAR_5;
            VAR_7->file.segment_data[0].segment_info.block_id = 0;
            VAR_7->file.segment_data[0].segment_info.file_id = 0;
        }
    }

    if (FUNC_4(VAR_7->data, VAR_7) != VAR_6) {
        return VAR_0;
    }

    FUNC_1(VAR_7);

    return VAR_6;
}
