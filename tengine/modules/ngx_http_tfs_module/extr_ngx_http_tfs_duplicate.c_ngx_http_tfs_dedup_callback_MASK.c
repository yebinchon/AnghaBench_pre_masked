
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_11__ ;
typedef struct TYPE_20__ TYPE_10__ ;


typedef int ngx_int_t ;
struct TYPE_28__ {TYPE_6__* segment_data; int cluster_id; } ;
struct TYPE_25__ {int use_cache; int remote_ctx; } ;
struct TYPE_21__ {int cluster_id; } ;
struct TYPE_22__ {int code; } ;
struct TYPE_24__ {TYPE_11__ fsname; int file_suffix; int unlink_type; TYPE_1__ action; } ;
struct TYPE_29__ {int state; TYPE_7__ file; int * out_bufs; void* use_dedup; void* is_stat_dup_file; TYPE_4__ block_cache_ctx; int log; int data; TYPE_3__ r_ctx; TYPE_2__* tfs_peer; int pool; int meta_segment_data; TYPE_9__* rc_info_node; } ;
typedef TYPE_8__ ngx_http_tfs_t ;
struct TYPE_30__ {int remote_block_cache_info; int use_remote_block_cache; } ;
typedef TYPE_9__ ngx_http_tfs_rcs_info_t ;
struct TYPE_20__ {int dup_file_suffix; int dup_file_name; int save_body_buffer; int file_data; int file_ref_count; TYPE_8__* data; } ;
typedef TYPE_10__ ngx_http_tfs_dedup_ctx_t ;
struct TYPE_26__ {int file_id; int block_id; } ;
struct TYPE_27__ {TYPE_5__ segment_info; } ;
struct TYPE_23__ {int body_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,TYPE_11__*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_10__*,int ,int ) ;
 int FUNC_3 (TYPE_10__*,int ,int ) ;
 int FUNC_4 (int ,TYPE_8__*,int ) ;
 int FUNC_5 (TYPE_8__*,int ) ;
 int FUNC_6 (TYPE_8__*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (TYPE_8__*) ;
 int FUNC_9 (int *,int *,TYPE_11__*) ;
 int FUNC_10 (int ,int ,int ,char*) ;

__attribute__((used)) static void
FUNC_11(ngx_http_tfs_dedup_ctx_t *VAR_9, ngx_int_t VAR_10)
{
    ngx_http_tfs_t *VAR_11;
    ngx_http_tfs_rcs_info_t *VAR_12;

    VAR_11 = VAR_9->data;
    VAR_12 = VAR_11->rc_info_node;

    switch (VAR_11->r_ctx.action.code) {
    case 137:
        switch(VAR_11->state) {
        case 132:

            if (VAR_10 == VAR_8) {

                VAR_10 = FUNC_0(&VAR_9->dup_file_name,
                                                       &VAR_11->r_ctx.fsname);
                if (VAR_10 == VAR_8) {

                    if (VAR_11->r_ctx.unlink_type == VAR_5) {
                        if (--VAR_9->file_ref_count <= 0) {



                            VAR_11->state = 133;
                            VAR_11->is_stat_dup_file = VAR_3;
                            VAR_11->tfs_peer->body_buffer = VAR_9->save_body_buffer;
                            VAR_9->file_data = VAR_11->meta_segment_data;
                            VAR_10 = FUNC_2(VAR_9, VAR_11->pool,
                                                           VAR_11->log);



                            if (VAR_10 == VAR_1) {
                                FUNC_5(VAR_11, VAR_8);
                            }

                            return;
                        }


                        VAR_11->state = 134;
                        VAR_9->file_data = VAR_11->meta_segment_data;
                        VAR_10 = FUNC_3(VAR_9, VAR_11->pool, VAR_11->log);

                        if (VAR_10 == VAR_1) {
                            FUNC_5(VAR_11, VAR_0);
                        }

                        return;
                    }
                }


                VAR_11->tfs_peer->body_buffer = VAR_9->save_body_buffer;
                VAR_11->state = 133;
                VAR_11->is_stat_dup_file = VAR_3;
                FUNC_5(VAR_11, VAR_8);

                return;
            }


            VAR_11->tfs_peer->body_buffer = VAR_9->save_body_buffer;
            VAR_11->state = 133;
            VAR_11->is_stat_dup_file = VAR_3;
            FUNC_5(VAR_11, VAR_8);
            return;
        case 133:
        case 135:
            FUNC_5(VAR_11, VAR_8);
            return;
        case 134:
            FUNC_5(VAR_11, VAR_0);
            return;
        }
        break;
    case 136:
        switch(VAR_11->state) {
        case 131:
        case 129:

            if (VAR_10 == VAR_8) {

                VAR_10 = FUNC_1(&VAR_9->dup_file_name,
                                                     &VAR_11->r_ctx.file_suffix);
                if (VAR_10 == VAR_8) {

                    VAR_10 = FUNC_9(&VAR_9->dup_file_name,
                                                       &VAR_9->dup_file_suffix,
                                                       &VAR_11->r_ctx.fsname);
                    if (VAR_10 == VAR_8) {
                        VAR_11->file.cluster_id = VAR_11->r_ctx.fsname.cluster_id;
                        VAR_11->is_stat_dup_file = VAR_6;
                        VAR_11->state = 129;
                    }

                } else {



                    VAR_11->use_dedup = VAR_3;
                }
            }


            VAR_10 = FUNC_6(VAR_11);
            if (VAR_10 != VAR_8) {
                FUNC_10(VAR_7, VAR_11->log, 0,
                              "tfs get meta segment failed");
                FUNC_4(VAR_11->data, VAR_11,
                                              VAR_2);
                return;
            }


            if (VAR_11->is_stat_dup_file) {

                if (VAR_12->use_remote_block_cache) {
                    VAR_10 = FUNC_7(
                              &VAR_11->block_cache_ctx.remote_ctx,
                              &VAR_12->remote_block_cache_info);
                    if (VAR_10 == VAR_1) {
                        FUNC_10(VAR_7, VAR_11->log, 0,
                                     "get remote block cache instance failed.");

                    } else {
                        VAR_11->block_cache_ctx.use_cache |=
                            VAR_4;
                    }
                }

                FUNC_8(VAR_11);

                return;
            }

            FUNC_5(VAR_11, VAR_8);
            break;
        case 128:
            if (VAR_10 == VAR_8) {
                VAR_11->state = 130;
                FUNC_5(VAR_11, VAR_0);

            } else {



                VAR_11->state = 131;
                VAR_11->is_stat_dup_file = VAR_3;
                VAR_11->use_dedup = VAR_3;

                VAR_11->out_bufs = ((void*)0);

                VAR_11->file.segment_data[0].segment_info.block_id = 0;
                VAR_11->file.segment_data[0].segment_info.file_id = 0;
                FUNC_5(VAR_11, VAR_8);
            }
            break;
        case 130:
            FUNC_5(VAR_11, VAR_0);
            break;
        }
    }
    return;
}
