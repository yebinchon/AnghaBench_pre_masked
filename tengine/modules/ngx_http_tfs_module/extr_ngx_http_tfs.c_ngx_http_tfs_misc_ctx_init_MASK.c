
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_39__ TYPE_9__ ;
typedef struct TYPE_38__ TYPE_8__ ;
typedef struct TYPE_37__ TYPE_7__ ;
typedef struct TYPE_36__ TYPE_6__ ;
typedef struct TYPE_35__ TYPE_5__ ;
typedef struct TYPE_34__ TYPE_4__ ;
typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_24__ ;
typedef struct TYPE_30__ TYPE_1__ ;
typedef struct TYPE_29__ TYPE_14__ ;
typedef struct TYPE_28__ TYPE_13__ ;
typedef struct TYPE_27__ TYPE_12__ ;
typedef struct TYPE_26__ TYPE_11__ ;
typedef struct TYPE_25__ TYPE_10__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_31__ {int file_data; TYPE_11__* data; } ;
struct TYPE_39__ {int code; } ;
struct TYPE_25__ {int version; scalar_t__ app_id; scalar_t__ is_raw_update; int no_dedup; TYPE_9__ action; int size; scalar_t__ offset; scalar_t__ write_meta_segment; int read_stat_type; int unlink_type; } ;
struct TYPE_37__ {int use_cache; int remote_ctx; } ;
struct TYPE_33__ {int left_length; TYPE_2__* segment_data; scalar_t__ file_offset; } ;
struct TYPE_26__ {int state; int group_seq; size_t logical_cluster_index; int decline_handler; TYPE_24__ dedup_ctx; TYPE_14__* data; void* retry_curr_ns; void* use_dedup; int log; TYPE_10__ r_ctx; scalar_t__ is_large_file; TYPE_7__ block_cache_ctx; TYPE_6__* main_conf; void* is_stat_dup_file; int * tfs_peer_servers; int pool; TYPE_5__* loc_conf; TYPE_3__ file; void* is_process_meta_seg; int send_body; int meta_segment_data; int name_server_addr; int name_server_addr_text; } ;
typedef TYPE_11__ ngx_http_tfs_t ;
struct TYPE_27__ {scalar_t__ app_id; scalar_t__ meta_root_server; TYPE_13__* logical_clusters; scalar_t__ need_duplicate; int remote_block_cache_info; int use_remote_block_cache; } ;
typedef TYPE_12__ ngx_http_tfs_rcs_info_t ;
struct TYPE_28__ {int dup_server_addr_hash; int dup_server_info; } ;
typedef TYPE_13__ ngx_http_tfs_logical_cluster_t ;
typedef int ngx_http_tfs_inet_t ;
struct TYPE_29__ {TYPE_8__* request_body; } ;
typedef TYPE_14__ ngx_http_request_t ;
struct TYPE_38__ {int bufs; } ;
struct TYPE_36__ {int enable_remote_block_cache; } ;
struct TYPE_34__ {scalar_t__ version; } ;
struct TYPE_35__ {scalar_t__ meta_root_server; TYPE_4__ meta_server_table; } ;
struct TYPE_30__ {int size; } ;
struct TYPE_32__ {void* oper_size; scalar_t__ oper_offset; TYPE_1__ segment_info; int data; int orig_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int const VAR_6 ;
 int const VAR_7 ;




 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 size_t VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 void* VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_24__*,int *,int ) ;
 int VAR_25 ;
 scalar_t__ FUNC_3 (TYPE_11__*) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (TYPE_11__*) ;
 int VAR_26 ;
 scalar_t__ FUNC_6 (TYPE_11__*,int ) ;
 int FUNC_7 (int ,int *,int *) ;
 int * FUNC_8 (TYPE_11__*) ;
 scalar_t__ FUNC_9 (TYPE_11__*,TYPE_12__*,int *,int *) ;
 int FUNC_10 (TYPE_11__*) ;
 int FUNC_11 (int ,int ,int ,char*) ;
 void* FUNC_12 (int ,int ) ;

ngx_int_t
FUNC_13(ngx_http_tfs_t *VAR_27, ngx_http_tfs_rcs_info_t *VAR_28)
{
    ngx_int_t VAR_29;
    ngx_http_request_t *VAR_30;
    ngx_http_tfs_inet_t *VAR_31;
    ngx_http_tfs_logical_cluster_t *VAR_32;


    if (VAR_27->r_ctx.version == 1) {
        switch (VAR_27->r_ctx.action.code) {
        case 129:
            VAR_27->state = VAR_18;
            break;

        case 131:
            VAR_27->state = VAR_16;
            break;

        case 128:
            VAR_27->state = VAR_19;
            break;

        case 130:
            VAR_27->state = VAR_17;
            if (!VAR_27->is_large_file && VAR_28->need_duplicate) {



                if (VAR_27->r_ctx.unlink_type == VAR_20) {
                    VAR_27->is_stat_dup_file = VAR_21;
                    VAR_27->r_ctx.read_stat_type = VAR_13;
                    VAR_27->use_dedup = VAR_21;
                    VAR_27->dedup_ctx.data = VAR_27;
                }
            }
            break;
        }

        VAR_29 = FUNC_9(VAR_27, VAR_28, &VAR_27->name_server_addr,
                                             &VAR_27->name_server_addr_text);
        if (VAR_29 == VAR_2) {
            return VAR_5;
        }

        FUNC_7(VAR_27->pool,
          &VAR_27->tfs_peer_servers[VAR_12], &VAR_27->name_server_addr);

        if (!VAR_27->is_large_file
            || (VAR_27->r_ctx.action.code != 128))
        {

            VAR_29 = FUNC_3(VAR_27);
            if (VAR_29 == VAR_2) {
                FUNC_11(VAR_23, VAR_27->log, 0,
                              "tfs get meta segment failed");
                return VAR_4;
            }


            if (VAR_27->r_ctx.action.code == 128) {

                if (VAR_27->r_ctx.write_meta_segment) {
                    VAR_29 = FUNC_6(VAR_27, VAR_27->send_body);
                    if (VAR_29 == VAR_2) {
                        return VAR_2;
                    }
                    VAR_27->send_body = VAR_27->meta_segment_data;
                }

                VAR_27->file.segment_data[0].data = VAR_27->send_body;

                VAR_29 = FUNC_0(VAR_27->pool,
                    &VAR_27->file.segment_data[0].orig_data, VAR_27->file.segment_data[0].data);
                if (VAR_29 == VAR_2) {
                    return VAR_2;
                }

                VAR_27->file.segment_data[0].segment_info.size =
                                 FUNC_1(VAR_27->send_body);
                VAR_27->file.left_length= VAR_27->file.segment_data[0].segment_info.size;
                VAR_27->file.segment_data[0].oper_size =
                   FUNC_12(VAR_27->file.left_length, VAR_8);

            } else {



                if (VAR_27->is_large_file) {
                    VAR_27->is_process_meta_seg = VAR_21;
                    VAR_27->file.file_offset = 0;
                    VAR_27->file.left_length = VAR_10;

                } else {
                    VAR_27->file.file_offset = VAR_27->r_ctx.offset;
                    VAR_27->file.left_length = VAR_27->r_ctx.size;
                }

                VAR_27->file.segment_data[0].oper_offset = VAR_27->file.file_offset;
                VAR_27->file.segment_data[0].oper_size =
                  FUNC_12(VAR_27->file.left_length, VAR_9);
            }
        }

    } else if (VAR_27->r_ctx.version == 2) {

        if (VAR_27->r_ctx.action.code != 131
            && VAR_27->r_ctx.action.code != VAR_6
            && VAR_27->r_ctx.action.code != VAR_7)
        {
            if (VAR_27->r_ctx.app_id != VAR_28->app_id) {
                return VAR_22;
            }
        }


        if (VAR_28->meta_root_server == 0) {
            return VAR_3;
        }

        if (VAR_27->loc_conf->meta_root_server != VAR_28->meta_root_server) {

            VAR_27->loc_conf->meta_root_server = VAR_28->meta_root_server;
            VAR_27->loc_conf->meta_server_table.version = 0;
            FUNC_7(VAR_27->pool,
                             &VAR_27->tfs_peer_servers[VAR_15],
                             (ngx_http_tfs_inet_t *)&VAR_28->meta_root_server);
        }


        VAR_27->state += 1;


        if (VAR_27->loc_conf->meta_server_table.version != 0) {

            VAR_27->state += 1;

            FUNC_10(VAR_27);

            VAR_31 = FUNC_8(VAR_27);

            FUNC_7(VAR_27->pool,
                          &VAR_27->tfs_peer_servers[VAR_11], VAR_31);
        }
    }





    switch (VAR_27->r_ctx.action.code) {
    case 130:
        VAR_27->group_seq = -1;

        if (VAR_27->r_ctx.version == 2
            || !VAR_27->is_stat_dup_file
            || VAR_27->state != VAR_17)
        {
            break;
        }
    case 129:
    case 131:
        if (VAR_27->main_conf->enable_remote_block_cache == VAR_0) {
            if (VAR_28->use_remote_block_cache) {
                VAR_27->block_cache_ctx.use_cache |= VAR_14;
            }
        }

        if (VAR_27->block_cache_ctx.use_cache & VAR_14) {
            VAR_29 = FUNC_4(
                                             &VAR_27->block_cache_ctx.remote_ctx,
                                             &VAR_28->remote_block_cache_info);
            if (VAR_29 == VAR_2) {
                FUNC_11(VAR_23, VAR_27->log, 0,
                              "get remote block cache instance failed.");
                VAR_27->block_cache_ctx.use_cache &=~VAR_14;
            }
        }


        if (VAR_27->r_ctx.version == 1) {
            VAR_27->decline_handler = VAR_26;
            return VAR_1;
        }
        break;

    case 128:
        VAR_27->group_seq = -1;
        if (VAR_27->is_large_file || VAR_27->r_ctx.version == 2) {
            VAR_29 = FUNC_5(VAR_27);
            if (VAR_29 == VAR_2) {
                return VAR_2;
            }
        }
    }


    if (VAR_27->r_ctx.version == 1
        && VAR_27->r_ctx.action.code == 128
        && !VAR_27->is_large_file
        && VAR_28->need_duplicate
        && !VAR_27->r_ctx.no_dedup)
    {

        if (VAR_27->r_ctx.is_raw_update > 0) {
            return VAR_3;
        }

        VAR_27->dedup_ctx.data = VAR_27;
        VAR_32 = &VAR_28->logical_clusters[VAR_27->logical_cluster_index];
        VAR_29 = FUNC_2(&VAR_27->dedup_ctx,
                                         &VAR_32->dup_server_info,
                                         VAR_32->dup_server_addr_hash);
        if (VAR_29 == VAR_2) {
            FUNC_11(VAR_23, VAR_27->log, 0,
                          "get dedup instance failed.");

            return VAR_24;
        }

        VAR_27->use_dedup = VAR_21;

        VAR_27->retry_curr_ns = VAR_21;

        VAR_30 = VAR_27->data;
        VAR_27->dedup_ctx.file_data = VAR_30->request_body->bufs;
        VAR_27->decline_handler = VAR_25;

        return VAR_1;
    }

    return VAR_24;
}
