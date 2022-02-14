
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_63__ TYPE_9__ ;
typedef struct TYPE_62__ TYPE_8__ ;
typedef struct TYPE_61__ TYPE_7__ ;
typedef struct TYPE_60__ TYPE_6__ ;
typedef struct TYPE_59__ TYPE_5__ ;
typedef struct TYPE_58__ TYPE_4__ ;
typedef struct TYPE_57__ TYPE_3__ ;
typedef struct TYPE_56__ TYPE_38__ ;
typedef struct TYPE_55__ TYPE_2__ ;
typedef struct TYPE_54__ TYPE_26__ ;
typedef struct TYPE_53__ TYPE_21__ ;
typedef struct TYPE_52__ TYPE_20__ ;
typedef struct TYPE_51__ TYPE_1__ ;
typedef struct TYPE_50__ TYPE_19__ ;
typedef struct TYPE_49__ TYPE_18__ ;
typedef struct TYPE_48__ TYPE_17__ ;
typedef struct TYPE_47__ TYPE_16__ ;
typedef struct TYPE_46__ TYPE_15__ ;
typedef struct TYPE_45__ TYPE_14__ ;
typedef struct TYPE_44__ TYPE_13__ ;
typedef struct TYPE_43__ TYPE_12__ ;
typedef struct TYPE_42__ TYPE_11__ ;
typedef struct TYPE_41__ TYPE_10__ ;


struct TYPE_51__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; } ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_47__ {TYPE_19__* rc_ctx; TYPE_3__* ups_addr; int enable_rcs; } ;
typedef TYPE_16__ ngx_http_tfs_upstream_t ;
struct TYPE_45__ {int const code; } ;
struct TYPE_46__ {TYPE_14__ action; int appkey; int size; scalar_t__ offset; scalar_t__ write_meta_segment; } ;
struct TYPE_61__ {scalar_t__ cluster_id; int left_length; TYPE_6__* segment_data; scalar_t__ file_offset; } ;
struct TYPE_55__ {int port; int ip; } ;
struct TYPE_44__ {int pool; } ;
struct TYPE_42__ {size_t size; int num; } ;
struct TYPE_43__ {int alignment; TYPE_13__* filter_ctx; int output_filter; TYPE_11__ bufs; int pool; } ;
struct TYPE_48__ {int header_size; scalar_t__ (* decline_handler ) (TYPE_17__*) ;TYPE_26__* tfs_peer; TYPE_38__* recv_chain; int header_buffer; int log; TYPE_15__ r_ctx; TYPE_18__* rc_info_node; TYPE_7__ file; int is_process_meta_seg; scalar_t__ is_large_file; int send_body; int meta_segment_data; int state; TYPE_4__* main_conf; TYPE_2__ name_server_addr; int pool; TYPE_13__ writer; TYPE_12__ output; TYPE_20__* data; TYPE_10__* loc_conf; int write_event_handler; int read_event_handler; } ;
typedef TYPE_17__ ngx_http_tfs_t ;
struct TYPE_49__ {int app_id; } ;
typedef TYPE_18__ ngx_http_tfs_rcs_info_t ;
struct TYPE_50__ {TYPE_8__* shpool; } ;
typedef TYPE_19__ ngx_http_tfs_rc_ctx_t ;
typedef int ngx_http_tfs_header_t ;
struct TYPE_52__ {int write_event_handler; int read_event_handler; } ;
typedef TYPE_20__ ngx_http_request_t ;
struct TYPE_53__ {int directio_alignment; size_t client_body_buffer_size; } ;
typedef TYPE_21__ ngx_http_core_loc_conf_t ;
struct TYPE_63__ {int * buf; } ;
struct TYPE_62__ {int mutex; } ;
struct TYPE_59__ {int size; } ;
struct TYPE_60__ {void* oper_size; scalar_t__ oper_offset; TYPE_5__ segment_info; int data; } ;
struct TYPE_58__ {scalar_t__ cluster_id; } ;
struct TYPE_57__ {scalar_t__ sockaddr; } ;
struct TYPE_56__ {TYPE_9__* next; int * buf; } ;
struct TYPE_54__ {int body_buffer; } ;
struct TYPE_41__ {TYPE_16__* upstream; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;




 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 TYPE_21__* FUNC_0 (TYPE_20__*,int ) ;
 TYPE_38__* FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_17__*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (TYPE_17__*) ;
 scalar_t__ FUNC_5 (TYPE_17__*) ;
 scalar_t__ FUNC_6 (TYPE_17__*,TYPE_18__*) ;
 scalar_t__ FUNC_7 (TYPE_17__*,int ) ;
 scalar_t__ FUNC_8 (TYPE_17__*) ;
 TYPE_18__* FUNC_9 (TYPE_19__*,int ) ;
 int VAR_18 ;
 int VAR_19 ;
 TYPE_26__* FUNC_10 (TYPE_17__*) ;
 int VAR_20 ;
 int FUNC_11 (TYPE_20__*,TYPE_17__*) ;
 scalar_t__ FUNC_12 (TYPE_17__*,int ) ;
 int VAR_21 ;
 int FUNC_13 (int ,int ,int ,char*) ;
 void* FUNC_14 (int ,int ) ;
 size_t VAR_22 ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (TYPE_17__*) ;

ngx_int_t
FUNC_19(ngx_http_tfs_t *VAR_23)
{
    ngx_int_t VAR_24;
    ngx_http_request_t *VAR_25;
    ngx_http_tfs_rc_ctx_t *VAR_26;
    ngx_http_tfs_rcs_info_t *VAR_27;
    ngx_http_tfs_upstream_t *VAR_28;
    ngx_http_core_loc_conf_t *VAR_29;

    VAR_23->read_event_handler = VAR_19;
    VAR_23->write_event_handler = VAR_20;
    VAR_25 = ((void*)0);
    VAR_27 = ((void*)0);
    VAR_26 = ((void*)0);
    VAR_28 = VAR_23->loc_conf->upstream;

    if (VAR_23->r_ctx.action.code != VAR_4) {
        VAR_25 = VAR_23->data;
        VAR_25->read_event_handler = VAR_18;
        VAR_25->write_event_handler = VAR_21;

        VAR_29 = FUNC_0(VAR_25, VAR_17);
        if (VAR_29 == ((void*)0)) {
            return VAR_1;
        }

        VAR_23->output.alignment = VAR_29->directio_alignment;
        VAR_23->output.bufs.size = VAR_29->client_body_buffer_size;

    } else {

        VAR_23->output.alignment = 512;
        VAR_23->output.bufs.size = (size_t) 2 * VAR_22;
    }

    VAR_23->output.pool = VAR_23->pool;
    VAR_23->output.bufs.num = 1;
    VAR_23->output.output_filter = VAR_16;
    VAR_23->output.filter_ctx = &VAR_23->writer;
    VAR_23->header_size = sizeof(ngx_http_tfs_header_t);
    VAR_23->writer.pool = VAR_23->pool;

    VAR_24 = FUNC_8(VAR_23);
    if (VAR_24 != VAR_15) {
        FUNC_13(VAR_14, VAR_23->log, 0,
                      "tfs peer init failed");
        return VAR_2;
    }


    VAR_23->recv_chain = FUNC_1(VAR_23->pool, 2);
    if (VAR_23->recv_chain == ((void*)0)) {
        FUNC_13(VAR_14, VAR_23->log, 0,
                      "tfs alloc chains failed");
        return VAR_2;
    }

    if (VAR_23->r_ctx.action.code != VAR_4) {

        if (!VAR_28->enable_rcs) {
            switch(VAR_23->r_ctx.action.code) {
            case 130:
                VAR_23->state = VAR_9;
                break;
            case 129:
                VAR_23->state = VAR_10;
                break;
            case 131:
                VAR_23->state = VAR_8;
                break;
            case 128:
                VAR_23->state = VAR_11;
                break;
            default:
                FUNC_16(&VAR_26->shpool->mutex);
                return VAR_1;
            }

            VAR_23->name_server_addr.ip =
                ((struct sockaddr_in*)
                 (VAR_28->ups_addr->sockaddr))->sin_addr.s_addr;
            VAR_23->name_server_addr.port =
                FUNC_17(((struct sockaddr_in*)
                       (VAR_28->ups_addr->sockaddr))->sin_port);


            if (VAR_23->r_ctx.action.code == 128) {
                if (VAR_23->main_conf->cluster_id > 0) {
                    VAR_23->file.cluster_id = VAR_23->main_conf->cluster_id;
                    VAR_23->state = VAR_12;
                }


                if (VAR_23->is_large_file) {
                    VAR_24 = FUNC_5(VAR_23);
                    if (VAR_24 == VAR_1) {
                        return VAR_1;
                    }
                }
            }

            if (!VAR_23->is_large_file
                || (VAR_23->r_ctx.action.code != 128))
            {

                VAR_24 = FUNC_4(VAR_23);
                if (VAR_24 == VAR_1) {
                    FUNC_13(VAR_14, VAR_23->log, 0,
                                  "tfs get meta segment failed");
                    return VAR_2;
                }


                if (VAR_23->r_ctx.action.code == 128) {

                    if (VAR_23->r_ctx.write_meta_segment) {
                        VAR_24 = FUNC_7(VAR_23, VAR_23->send_body);
                        if (VAR_24 == VAR_1) {
                            return VAR_1;
                        }
                        VAR_23->send_body = VAR_23->meta_segment_data;
                    }

                    VAR_23->file.segment_data[0].data = VAR_23->send_body;
                    VAR_23->file.segment_data[0].segment_info.size =
                                  FUNC_3(VAR_23->send_body);
                    VAR_23->file.left_length =
                                      VAR_23->file.segment_data[0].segment_info.size;
                    VAR_23->file.segment_data[0].oper_size =
                                        FUNC_14(VAR_23->file.left_length,
                                                VAR_5);

                } else {


                    if (VAR_23->is_large_file) {
                        VAR_23->is_process_meta_seg = VAR_13;
                        VAR_23->file.file_offset = 0;
                        VAR_23->file.left_length = VAR_7;

                    } else {
                        VAR_23->file.file_offset = VAR_23->r_ctx.offset;
                        VAR_23->file.left_length = VAR_23->r_ctx.size;
                    }

                    VAR_23->file.segment_data[0].oper_offset = VAR_23->file.file_offset;
                    VAR_23->file.segment_data[0].oper_size =
                                       FUNC_14(VAR_23->file.left_length,
                                               VAR_6);
                }
            }

        } else {

            VAR_26 = VAR_28->rc_ctx;
            FUNC_15(&VAR_26->shpool->mutex);
            VAR_27 = FUNC_9(VAR_26, VAR_23->r_ctx.appkey);
            FUNC_16(&VAR_26->shpool->mutex);
            if (VAR_27 != ((void*)0)) {
                VAR_23->rc_info_node = VAR_27;

                if (VAR_23->r_ctx.action.code == VAR_3) {
                    VAR_24 = FUNC_12(VAR_23, VAR_27->app_id);
                    if (VAR_24 == VAR_1) {
                        FUNC_13(VAR_14, VAR_23->log, 0,
                                      "tfs set output appid failed");
                        return VAR_1;
                    }

                    FUNC_11(VAR_25, VAR_23);
                    return VAR_15;
                }


                VAR_24 = FUNC_6(VAR_23, VAR_27);
                if (VAR_24 == VAR_0) {
                    if (VAR_23->decline_handler) {
                        VAR_24 = VAR_23->decline_handler(VAR_23);
                        if (VAR_24 == VAR_1) {
                            return VAR_24;
                        }
                    }
                    return VAR_15;
                }

                if (VAR_24 != VAR_15) {
                    return VAR_24;
                }
            }
        }
    }

    VAR_23->tfs_peer = FUNC_10(VAR_23);
    if (VAR_23->tfs_peer == ((void*)0)) {
        FUNC_13(VAR_14, VAR_23->log, 0, "tfs select peer failed");

        return VAR_1;
    }

    VAR_23->recv_chain->buf = &VAR_23->header_buffer;
    VAR_23->recv_chain->next->buf = &VAR_23->tfs_peer->body_buffer;

    FUNC_2(VAR_23);

    return VAR_15;
}
