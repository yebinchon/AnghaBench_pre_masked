
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_9__ ;
typedef struct TYPE_34__ TYPE_8__ ;
typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;
typedef struct TYPE_26__ TYPE_14__ ;
typedef struct TYPE_25__ TYPE_13__ ;
typedef struct TYPE_24__ TYPE_12__ ;
typedef struct TYPE_23__ TYPE_11__ ;
typedef struct TYPE_22__ TYPE_10__ ;


typedef int uint32_t ;
struct TYPE_33__ {int data; } ;
typedef TYPE_7__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_31__ {size_t segment_index; int * segment_data; int cluster_id; } ;
struct TYPE_27__ {int code; } ;
struct TYPE_32__ {int version; int unlink_type; TYPE_1__ action; } ;
struct TYPE_34__ {int state; size_t logical_cluster_index; size_t rw_cluster_index; int group_count; int * tfs_peer_servers; int pool; TYPE_5__ file; int is_stat_dup_file; int * meta_segment_data; TYPE_6__ r_ctx; int is_large_file; int name_server_addr; int name_server_addr_text; int group_seq; TYPE_9__* rc_info_node; void* decline_handler; int is_process_meta_seg; int parent; int is_rolling_back; TYPE_4__* main_conf; int log; TYPE_3__* loc_conf; TYPE_11__* tfs_peer; scalar_t__ header; } ;
typedef TYPE_8__ ngx_http_tfs_t ;
struct TYPE_35__ {TYPE_12__* logical_clusters; } ;
typedef TYPE_9__ ngx_http_tfs_rcs_info_t ;
struct TYPE_22__ {int cluster_id; TYPE_7__ cluster_id_text; } ;
typedef TYPE_10__ ngx_http_tfs_physical_cluster_t ;
struct TYPE_26__ {int data; int (* free ) (TYPE_14__*,int ,int ) ;} ;
struct TYPE_23__ {TYPE_14__ peer; int body_buffer; } ;
typedef TYPE_11__ ngx_http_tfs_peer_connection_t ;
struct TYPE_24__ {TYPE_10__* rw_clusters; } ;
typedef TYPE_12__ ngx_http_tfs_logical_cluster_t ;
typedef int ngx_http_tfs_inet_t ;
struct TYPE_25__ {scalar_t__ len; } ;
typedef TYPE_13__ ngx_http_tfs_header_t ;
typedef int ngx_buf_t ;
struct TYPE_30__ {int cluster_id; } ;
struct TYPE_29__ {TYPE_2__* upstream; } ;
struct TYPE_28__ {int enable_rcs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;




 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;



 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

 int VAR_13 ;
 int VAR_14 ;



 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_0 (int *) ;
 void* VAR_18 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_8__*) ;
 int FUNC_4 (int ,int *,int *) ;
 int FUNC_5 (TYPE_9__*,int,int ,int ) ;
 int * FUNC_6 (TYPE_8__*,int *) ;
 scalar_t__ FUNC_7 (TYPE_8__*,TYPE_9__*,int *,int *) ;
 int FUNC_8 (int ,int ,int ,char*,int ,int ) ;
 int FUNC_9 (TYPE_14__*,int ,int ) ;
 int FUNC_10 (TYPE_14__*,int ,int ) ;

ngx_int_t
FUNC_11(ngx_http_tfs_t *VAR_19)
{
    uint32_t VAR_20;
    ngx_buf_t *VAR_21;
    ngx_int_t VAR_22;
    ngx_str_t *VAR_23;
    ngx_http_tfs_inet_t *VAR_24;
    ngx_http_tfs_header_t *VAR_25;
    ngx_http_tfs_rcs_info_t *VAR_26;
    ngx_http_tfs_peer_connection_t *VAR_27;
    ngx_http_tfs_logical_cluster_t *VAR_28;
    ngx_http_tfs_physical_cluster_t *VAR_29;

    VAR_25 = (ngx_http_tfs_header_t *) VAR_19->header;
    VAR_27 = VAR_19->tfs_peer;
    VAR_21 = &VAR_27->body_buffer;

    if (FUNC_0(VAR_21) < VAR_25->len) {
        return VAR_0;
    }

    VAR_22 = FUNC_3(VAR_19);

    FUNC_1(VAR_21);
    if (VAR_22 == VAR_2) {
        return VAR_22;
    }

    if (VAR_22 <= VAR_5) {
        return VAR_3;
    }

    switch (VAR_19->r_ctx.action.code) {
    case 136:
        VAR_19->state = VAR_12;
        break;
    case 138:
        if (!VAR_19->parent
            && (VAR_19->r_ctx.version == 2
                || (VAR_19->is_large_file && !VAR_19->is_process_meta_seg)))
        {
            VAR_19->decline_handler = VAR_18;
            return VAR_1;
        }
        VAR_19->state = VAR_8;
        break;
    case 135:
        switch(VAR_19->state) {
        case 131:

            if (VAR_19->loc_conf->upstream->enable_rcs) {
                VAR_26 = VAR_19->rc_info_node;
                VAR_28 =
                    &VAR_26->logical_clusters[VAR_19->logical_cluster_index];
                VAR_29 =
                    &VAR_28->rw_clusters[VAR_19->rw_cluster_index];

                VAR_23 = &VAR_29->cluster_id_text;
                VAR_20 = FUNC_2(VAR_23->data);
                if (VAR_19->file.cluster_id != VAR_20) {
                    FUNC_8(VAR_17,
                                  VAR_19->log, 0,
                                  "error, cluster id conflict: "
                                  "%uD(ns) <> %uD(rcs)",
                                  VAR_19->file.cluster_id,
                                  VAR_20);
                    return VAR_2;
                }
                VAR_29->cluster_id = VAR_19->file.cluster_id;

            } else {
                VAR_19->main_conf->cluster_id = VAR_19->file.cluster_id;
            }
            VAR_19->state = 130;
            return VAR_22;

        case 129:
            if (VAR_19->group_count != 1) {
                VAR_19->state = 128;
                return VAR_22;
            }

            VAR_19->group_seq = 0;
        case 128:
            VAR_26 = VAR_19->rc_info_node;
            FUNC_5(VAR_26,
                                                    VAR_19->group_count,
                                                    VAR_19->group_seq,
                                                    VAR_19->name_server_addr);
            VAR_22 = FUNC_7(VAR_19, VAR_26,
                                                 &VAR_19->name_server_addr,
                                                 &VAR_19->name_server_addr_text);
            if (VAR_22 == VAR_2) {
                return VAR_6;
            }

            VAR_27->peer.free(&VAR_27->peer, VAR_27->peer.data, 0);

            FUNC_4(VAR_19->pool,
                                       &VAR_19->tfs_peer_servers[VAR_7],
                                       &VAR_19->name_server_addr);
            return VAR_22;

        case 130:
            if (VAR_19->is_stat_dup_file) {
                VAR_19->state = VAR_15;

            } else if (VAR_19->is_rolling_back) {
                VAR_19->state = VAR_14;

            } else {
                if (!VAR_19->parent
                    && (VAR_19->r_ctx.version == 2
                        || (VAR_19->is_large_file && !VAR_19->is_process_meta_seg)))
                {
                    VAR_19->decline_handler = VAR_18;
                    return VAR_1;
                }
                VAR_19->state = VAR_13;
            }
            break;
        }
        break;
    case 137:
        switch (VAR_19->state) {
        case 133:

            if (VAR_19->group_count != 1) {
                VAR_19->state = 132;
            }

            VAR_19->group_seq = 0;
        case 132:
            VAR_26 = VAR_19->rc_info_node;
            FUNC_5(VAR_26,
                                                    VAR_19->group_count,
                                                    VAR_19->group_seq,
                                                    VAR_19->name_server_addr);
            VAR_22 = FUNC_7(VAR_19, VAR_26,
                                                 &VAR_19->name_server_addr,
                                                 &VAR_19->name_server_addr_text);
            if (VAR_22 == VAR_2) {

                return VAR_6;
            }

            VAR_27->peer.free(&VAR_27->peer, VAR_27->peer.data, 0);

            FUNC_4(VAR_19->pool,
                             &VAR_19->tfs_peer_servers[VAR_7],
                             &VAR_19->name_server_addr);
            return VAR_22;
        case 134:
            if (VAR_19->is_large_file
                && VAR_19->r_ctx.unlink_type == VAR_16
                && VAR_19->meta_segment_data == ((void*)0))
            {
                VAR_19->state = VAR_10;

            } else if (VAR_19->is_stat_dup_file) {
                VAR_19->state = VAR_11;

            } else {
                VAR_19->state = VAR_9;
            }
        }
        break;
    }

    VAR_24 = FUNC_6(VAR_19,
                                  &VAR_19->file.segment_data[VAR_19->file.segment_index]);
    if (VAR_24 == ((void*)0)) {
        return VAR_2;
    }

    FUNC_4(VAR_19->pool,
                               &VAR_19->tfs_peer_servers[VAR_4],
                               VAR_24);
    return VAR_22;
}
