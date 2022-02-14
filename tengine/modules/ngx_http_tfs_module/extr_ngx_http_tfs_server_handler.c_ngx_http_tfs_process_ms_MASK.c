
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_41__ TYPE_9__ ;
typedef struct TYPE_40__ TYPE_8__ ;
typedef struct TYPE_39__ TYPE_7__ ;
typedef struct TYPE_38__ TYPE_6__ ;
typedef struct TYPE_37__ TYPE_5__ ;
typedef struct TYPE_36__ TYPE_4__ ;
typedef struct TYPE_35__ TYPE_3__ ;
typedef struct TYPE_34__ TYPE_2__ ;
typedef struct TYPE_33__ TYPE_22__ ;
typedef struct TYPE_32__ TYPE_21__ ;
typedef struct TYPE_31__ TYPE_1__ ;
typedef struct TYPE_30__ TYPE_19__ ;
typedef struct TYPE_29__ TYPE_15__ ;
typedef struct TYPE_28__ TYPE_14__ ;
typedef struct TYPE_27__ TYPE_12__ ;
typedef struct TYPE_26__ TYPE_11__ ;
typedef struct TYPE_25__ TYPE_10__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_34__ {int curr_lookup_cache; } ;
struct TYPE_37__ {int code; } ;
struct TYPE_36__ {TYPE_5__ action; int chk_file_hole; int file_type; int chk_exist; scalar_t__ recursive; } ;
struct TYPE_31__ {scalar_t__ cluster_id; int left_length; int still_have; } ;
struct TYPE_29__ {scalar_t__ len; } ;
struct TYPE_30__ {int nelts; } ;
struct TYPE_32__ {int file_count; } ;
struct TYPE_33__ {scalar_t__ len; } ;
struct TYPE_38__ {int state; size_t last_dir_level; int orig_action; size_t logical_cluster_index; size_t rw_cluster_index; int decline_handler; TYPE_2__ block_cache_ctx; TYPE_4__ r_ctx; TYPE_1__ file; int log; TYPE_14__* rc_info_node; int name_server_addr; int * tfs_peer_servers; int pool; TYPE_15__ name_server_addr_text; TYPE_19__ file_holes; int * json_output; TYPE_11__* out_bufs; TYPE_21__ meta_info; scalar_t__* dir_lens; TYPE_22__ last_file_path; TYPE_3__* loc_conf; TYPE_8__* tfs_peer; scalar_t__ header; } ;
typedef TYPE_6__ ngx_http_tfs_t ;
struct TYPE_39__ {scalar_t__ cluster_id; } ;
typedef TYPE_7__ ngx_http_tfs_physical_cluster_t ;
struct TYPE_27__ {int pos; } ;
struct TYPE_40__ {TYPE_12__ body_buffer; } ;
typedef TYPE_8__ ngx_http_tfs_peer_connection_t ;
struct TYPE_41__ {TYPE_7__* rw_clusters; } ;
typedef TYPE_9__ ngx_http_tfs_logical_cluster_t ;
typedef int ngx_http_tfs_inet_t ;
struct TYPE_25__ {scalar_t__ len; } ;
typedef TYPE_10__ ngx_http_tfs_header_t ;
struct TYPE_26__ {struct TYPE_26__* next; } ;
typedef TYPE_11__ ngx_chain_t ;
typedef TYPE_12__ ngx_buf_t ;
struct TYPE_35__ {int meta_root_server; } ;
struct TYPE_28__ {TYPE_9__* logical_clusters; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;



 scalar_t__ VAR_19 ;
 int VAR_20 ;
 void* VAR_21 ;

 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ FUNC_0 (TYPE_12__*) ;
 int VAR_25 ;
 int FUNC_1 (TYPE_12__*) ;
 scalar_t__ FUNC_2 (TYPE_22__*,scalar_t__*) ;
 TYPE_11__* FUNC_3 (int *,TYPE_21__*,int ) ;
 TYPE_11__* FUNC_4 (int *,TYPE_19__*) ;
 int * FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (int ,int *,int *) ;
 scalar_t__ FUNC_8 (TYPE_6__*,TYPE_14__*,int *,TYPE_15__*) ;
 int FUNC_9 (int ,int ,int ,char*,scalar_t__,...) ;
 scalar_t__* FUNC_10 (int ,int) ;

ngx_int_t
FUNC_11(ngx_http_tfs_t *VAR_26)
{
    ngx_buf_t *VAR_27;
    ngx_int_t VAR_28, VAR_29, VAR_30;
    ngx_chain_t *VAR_31, **VAR_32;
    ngx_http_tfs_header_t *VAR_33;
    ngx_http_tfs_peer_connection_t *VAR_34;
    ngx_http_tfs_logical_cluster_t *VAR_35;
    ngx_http_tfs_physical_cluster_t *VAR_36;

    VAR_33 = (ngx_http_tfs_header_t *) VAR_26->header;
    VAR_34 = VAR_26->tfs_peer;
    VAR_27 = &VAR_34->body_buffer;

    if (FUNC_0(VAR_27) < VAR_33->len) {
        return VAR_0;
    }

    VAR_28 = FUNC_6(VAR_26);
    if (VAR_28 == VAR_3) {
        return VAR_3;
    }

    VAR_27->pos += VAR_33->len;


    if (VAR_28 == VAR_4
        || VAR_28 == VAR_7)
    {
        VAR_26->state = VAR_14;
        FUNC_1(VAR_27);

        FUNC_7(VAR_26->pool,
                         &VAR_26->tfs_peer_servers[VAR_12],
                         (ngx_http_tfs_inet_t *)&VAR_26->loc_conf->meta_root_server);

        FUNC_9(VAR_22, VAR_26->log, 0,
                      "need update meta table, rc: %i", VAR_28);

        return VAR_24;
    }


    if (VAR_28 == VAR_5 && VAR_26->r_ctx.recursive) {
        switch (VAR_26->r_ctx.action.code) {
        case 140:
        case 139:
        case 137:
        case 136:
            if (VAR_26->dir_lens == ((void*)0)) {
                VAR_30 = FUNC_2(&VAR_26->last_file_path,
                                                             &VAR_29);
                VAR_26->dir_lens = FUNC_10(VAR_26->pool,
                                          sizeof(ngx_int_t) * VAR_29);
                if (VAR_26->dir_lens == ((void*)0)) {
                    return VAR_3;
                }
                VAR_26->last_dir_level = 0;
                VAR_26->dir_lens[0] = VAR_26->last_file_path.len;

            } else {
                VAR_30 = FUNC_2(&VAR_26->last_file_path,
                                                             ((void*)0));
            }
            VAR_26->last_dir_level++;
            VAR_26->dir_lens[VAR_26->last_dir_level] = VAR_30;
            VAR_26->last_file_path.len = VAR_26->dir_lens[VAR_26->last_dir_level];
            VAR_26->orig_action = VAR_26->r_ctx.action.code;

            VAR_26->r_ctx.action.code = 140;
            return VAR_24;
        }
    }




    if (VAR_28 == VAR_8 && VAR_26->last_dir_level > 0) {
        VAR_28 = VAR_24;
    }

    if (VAR_28 == VAR_24 || VAR_28 == VAR_1) {
        switch (VAR_26->r_ctx.action.code) {
        case 140:
        case 139:
        case 137:
        case 136:
            if (VAR_26->dir_lens != ((void*)0)) {
                if (VAR_26->last_dir_level > 0) {
                    if (VAR_26->last_dir_level == 1) {
                        VAR_26->r_ctx.action.code = VAR_26->orig_action;
                    }
                    VAR_26->last_file_path.len = VAR_26->dir_lens[--(VAR_26->last_dir_level)];
                    return VAR_24;
                }
            }
        case 134:
            VAR_26->state = VAR_13;
            return VAR_2;

        case 133:
            switch (VAR_26->state) {
            case 131:
                if (VAR_28 == VAR_1) {
                    VAR_26->state = 130;
                    FUNC_1(VAR_27);
                    return VAR_24;
                }
                VAR_26->state = VAR_18;
                break;
            case 130:
                VAR_26->state = VAR_17;
                return VAR_2;
            }
            break;
        case 138:
            if (VAR_26->r_ctx.chk_exist == VAR_11 && VAR_26->meta_info.file_count > 0) {

                for (VAR_31 = VAR_26->out_bufs, VAR_32 = &VAR_26->out_bufs; VAR_31; VAR_31 = VAR_31->next) {
                    VAR_32 = &VAR_31->next;
                }

                VAR_31 = FUNC_3(VAR_26->json_output,
                                                        &VAR_26->meta_info,
                                                        VAR_26->r_ctx.file_type);
                if (VAR_31 == ((void*)0)) {
                    return VAR_3;
                }

                *VAR_32 = VAR_31;
            }

            VAR_26->state = VAR_13;
            return VAR_2;

        case 135:
            if (VAR_28 == VAR_1
                || (VAR_26->r_ctx.chk_file_hole && !VAR_26->file.still_have))
            {
                if (VAR_26->r_ctx.chk_file_hole) {

                    if (VAR_26->file_holes.nelts > 0) {
                        VAR_26->json_output = FUNC_5(VAR_26->log,
                                                                VAR_26->pool);
                        if (VAR_26->json_output == ((void*)0)) {
                            return VAR_3;
                        }

                        for (VAR_31 = VAR_26->out_bufs, VAR_32 = &VAR_26->out_bufs;
                             VAR_31;
                             VAR_31 = VAR_31->next)
                        {
                            VAR_32 = &VAR_31->next;
                        }

                        VAR_31 = FUNC_4(VAR_26->json_output,
                                                              &VAR_26->file_holes);
                        if (VAR_31 == ((void*)0)) {
                            return VAR_3;
                        }

                        *VAR_32 = VAR_31;
                    }

                }
                VAR_26->state = VAR_15;
                return VAR_2;
            }

            if (VAR_26->r_ctx.chk_file_hole) {
                FUNC_1(VAR_27);
                return VAR_24;
            }

            VAR_26->state = VAR_16;
            break;

        case 132:
            switch (VAR_26->state) {
            case 129:
                VAR_26->state = VAR_19;
                break;

            case 128:
                if (VAR_26->file.left_length == 0) {
                    VAR_26->state = VAR_20;
                    return VAR_2;
                }
                VAR_26->state = VAR_21;
            }
            break;
        default:
            return VAR_3;
        }




        if (VAR_26->name_server_addr_text.len == 0) {
            VAR_28 = FUNC_8(VAR_26, VAR_26->rc_info_node,
                                                 &VAR_26->name_server_addr,
                                                 &VAR_26->name_server_addr_text);
            if (VAR_28 == VAR_3) {

                return VAR_6;
            }

            FUNC_7(VAR_26->pool,
                                 &VAR_26->tfs_peer_servers[VAR_10],
                                 &VAR_26->name_server_addr);


            if (VAR_26->r_ctx.action.code == 132
                && VAR_26->state == VAR_19)
            {
                VAR_35 =
                   &VAR_26->rc_info_node->logical_clusters[VAR_26->logical_cluster_index];
                VAR_36 =
                    &VAR_35->rw_clusters[VAR_26->rw_cluster_index];
                if (VAR_36->cluster_id > 0) {
                    if (VAR_26->file.cluster_id == 0) {
                        VAR_26->file.cluster_id = VAR_36->cluster_id;

                    } else if (VAR_26->file.cluster_id
                               != VAR_36->cluster_id)
                    {
                        FUNC_9(VAR_23, VAR_26->log, 0,
                                      "error, cluster id conflict: "
                                      "%uD(ns) <> %uD(ms)",
                                      VAR_36->cluster_id,
                                      VAR_26->file.cluster_id);
                        return VAR_3;
                    }
                    VAR_26->state = VAR_21;
                }
            }
        }

        if (VAR_26->r_ctx.action.code == 135) {

            VAR_26->block_cache_ctx.curr_lookup_cache =
                VAR_9;
            VAR_26->decline_handler = VAR_25;
            return VAR_1;
        }

        return VAR_24;
    }

    return VAR_28;
}
