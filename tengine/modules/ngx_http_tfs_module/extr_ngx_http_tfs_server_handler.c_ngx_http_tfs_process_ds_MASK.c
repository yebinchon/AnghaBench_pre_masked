
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_45__ TYPE_9__ ;
typedef struct TYPE_44__ TYPE_8__ ;
typedef struct TYPE_43__ TYPE_7__ ;
typedef struct TYPE_42__ TYPE_6__ ;
typedef struct TYPE_41__ TYPE_5__ ;
typedef struct TYPE_40__ TYPE_4__ ;
typedef struct TYPE_39__ TYPE_3__ ;
typedef struct TYPE_38__ TYPE_2__ ;
typedef struct TYPE_37__ TYPE_23__ ;
typedef struct TYPE_36__ TYPE_20__ ;
typedef struct TYPE_35__ TYPE_1__ ;
typedef struct TYPE_34__ TYPE_16__ ;
typedef struct TYPE_33__ TYPE_15__ ;
typedef struct TYPE_32__ TYPE_14__ ;
typedef struct TYPE_31__ TYPE_13__ ;
typedef struct TYPE_30__ TYPE_12__ ;
typedef struct TYPE_29__ TYPE_11__ ;
typedef struct TYPE_28__ TYPE_10__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_42__ {size_t segment_index; scalar_t__ left_length; size_t segment_count; scalar_t__ file_offset; int still_have; TYPE_11__* segment_data; } ;
struct TYPE_44__ {int block_id; } ;
struct TYPE_36__ {TYPE_8__ file; } ;
struct TYPE_43__ {int code; } ;
struct TYPE_45__ {void* chk_exist; int version; void* is_raw_update; int file_path_s; TYPE_20__ fsname; TYPE_7__ action; } ;
struct TYPE_37__ {scalar_t__ size; int flag; } ;
struct TYPE_39__ {int file_ref_count; int file_data; } ;
struct TYPE_35__ {scalar_t__ size; } ;
struct TYPE_28__ {int state; TYPE_5__* tfs_peer_servers; TYPE_6__ file; TYPE_9__ r_ctx; int file_name; int is_large_file; TYPE_23__ file_stat; int request_timeout; int client_abort; void* decline_handler; TYPE_3__ dedup_ctx; TYPE_14__* data; void* use_dedup; int is_rolling_back; int parent; TYPE_1__ stat_info; int log; void* is_stat_dup_file; int json_output; TYPE_15__* out_bufs; TYPE_12__* tfs_peer; scalar_t__ header; } ;
typedef TYPE_10__ ngx_http_tfs_t ;
struct TYPE_40__ {scalar_t__ size; scalar_t__ offset; int file_id; int block_id; } ;
struct TYPE_29__ {scalar_t__ oper_size; scalar_t__ oper_offset; TYPE_4__ segment_info; TYPE_15__* data; } ;
typedef TYPE_11__ ngx_http_tfs_segment_data_t ;
struct TYPE_34__ {size_t pos; size_t file_pos; } ;
struct TYPE_30__ {TYPE_16__ body_buffer; } ;
typedef TYPE_12__ ngx_http_tfs_peer_connection_t ;
struct TYPE_31__ {scalar_t__ len; } ;
typedef TYPE_13__ ngx_http_tfs_header_t ;
struct TYPE_32__ {TYPE_2__* request_body; } ;
typedef TYPE_14__ ngx_http_request_t ;
struct TYPE_33__ {TYPE_16__* buf; struct TYPE_33__* next; } ;
typedef TYPE_15__ ngx_chain_t ;
typedef TYPE_16__ ngx_buf_t ;
struct TYPE_41__ {TYPE_16__ body_buffer; } ;
struct TYPE_38__ {int bufs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;



 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 size_t VAR_15 ;
 void* VAR_16 ;

 void* VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;

 int VAR_22 ;

 int VAR_23 ;


 int VAR_24 ;
 void* VAR_25 ;


 int VAR_26 ;
 int VAR_27 ;
 scalar_t__ VAR_28 ;
 int FUNC_0 (TYPE_16__*) ;
 scalar_t__ FUNC_1 (TYPE_16__*) ;
 int FUNC_2 (TYPE_16__*) ;
 scalar_t__ FUNC_3 (TYPE_10__*) ;
 TYPE_15__* FUNC_4 (int ,int ,int ,TYPE_23__*) ;
 int FUNC_5 (TYPE_20__*,int ,int ) ;
 int FUNC_6 (TYPE_10__*,TYPE_11__*) ;
 void* VAR_29 ;
 scalar_t__ FUNC_7 (TYPE_10__*) ;
 int FUNC_8 (int ,int ,int ,char*) ;
 void* FUNC_9 (scalar_t__,scalar_t__) ;

ngx_int_t
FUNC_10(ngx_http_tfs_t *VAR_30)
{
    size_t VAR_31;
    uint32_t VAR_32, VAR_33;
    ngx_int_t VAR_34;
    ngx_buf_t *VAR_35, *VAR_36;
    ngx_chain_t *VAR_37, **VAR_38;
    ngx_http_request_t *VAR_39;
    ngx_http_tfs_header_t *VAR_40;
    ngx_http_tfs_segment_data_t *VAR_41;
    ngx_http_tfs_peer_connection_t *VAR_42;

    VAR_40 = (ngx_http_tfs_header_t *) VAR_30->header;
    VAR_42 = VAR_30->tfs_peer;
    VAR_35 = &VAR_42->body_buffer;

    VAR_32 = VAR_40->len;
    if (FUNC_1(VAR_35) < VAR_32) {
        return VAR_0;
    }

    VAR_34 = FUNC_3(VAR_30);
    if (VAR_34 == VAR_3) {
        return VAR_3;
    }

    FUNC_2(VAR_35);

    VAR_41 = &VAR_30->file.segment_data[VAR_30->file.segment_index];

    switch (VAR_30->r_ctx.action.code) {
    case 136:
        VAR_30->file_name = VAR_30->r_ctx.file_path_s;
        if (VAR_34 == VAR_28) {
            VAR_30->state = VAR_22;

            if (VAR_30->r_ctx.chk_exist == VAR_16) {

                for (VAR_37 = VAR_30->out_bufs, VAR_38 = &VAR_30->out_bufs; VAR_37; VAR_37 = VAR_37->next) {
                    VAR_38 = &VAR_37->next;
                }

                VAR_37 = FUNC_4(
                                  VAR_30->json_output,
                                  FUNC_5(&VAR_30->r_ctx.fsname,
                                                                   VAR_30->is_large_file,
                                                                   0),
                                  VAR_30->r_ctx.fsname.file.block_id,
                                  &VAR_30->file_stat);
                if (VAR_37 == ((void*)0)) {
                    return VAR_3;
                }

                *VAR_38 = VAR_37;
            }

            return VAR_2;
        }

        if (VAR_34 == VAR_10) {
            FUNC_6(VAR_30, VAR_41);
        }

        return VAR_6;

    case 135:
        switch(VAR_30->state) {
        case 129:
            if (VAR_34 == VAR_28) {
                if (VAR_30->file_stat.flag == VAR_12) {
                    VAR_34 = FUNC_7(VAR_30);
                    if (VAR_34 == VAR_3) {
                        return VAR_3;
                    }
                    VAR_39 = VAR_30->data;
                    VAR_30->dedup_ctx.file_data = VAR_39->request_body->bufs;
                    VAR_30->dedup_ctx.file_ref_count += 1;
                    VAR_30->decline_handler = VAR_29;
                    return VAR_1;
                }

            } else {


                if (VAR_34 == VAR_7
                    || VAR_34 == VAR_9)
                {
                    VAR_30->state = VAR_23;
                    VAR_30->is_stat_dup_file = VAR_16;
                    VAR_30->use_dedup = VAR_16;

                    VAR_30->file.segment_data[0].segment_info.block_id = 0;
                    VAR_30->file.segment_data[0].segment_info.file_id = 0;
                    VAR_34 = VAR_28;

                } else {

                    VAR_34 = VAR_6;
                }
            }
            break;
        case 131:
            if (VAR_34 == VAR_28) {
                VAR_30->state = 128;

            } else {

                return VAR_6;
            }
            break;
        case 128:

            if (VAR_34 != VAR_28) {
                return VAR_6;
            }


            VAR_37 = VAR_41->data;
            VAR_33 = VAR_41->oper_size;
            while (VAR_33 > 0) {
                while (VAR_37 && FUNC_1(VAR_37->buf) == 0) {
                    VAR_37 = VAR_37->next;
                }
                if (VAR_37 == ((void*)0)) {
                    FUNC_8(VAR_27, VAR_30->log, 0,
                                  "update send data offset "
                                  "failed for early end.");
                    return VAR_3;
                }
                VAR_31 = FUNC_9(FUNC_1(VAR_37->buf), VAR_33);
                if (FUNC_0(VAR_37->buf)) {
                    VAR_37->buf->pos += VAR_31;

                } else {
                    VAR_37->buf->file_pos += VAR_31;
                }
                VAR_33 -= VAR_31;
            }
            VAR_41->data = VAR_37;

            VAR_30->file.left_length -= VAR_41->oper_size;
            VAR_30->stat_info.size += VAR_41->oper_size;
            VAR_41->oper_offset += VAR_41->oper_size;
            VAR_41->oper_size = FUNC_9(VAR_30->file.left_length,
                                              VAR_13);

            if (VAR_30->r_ctx.version == 1) {
                if (VAR_30->file.left_length > 0 && !VAR_30->is_large_file) {
                    VAR_30->state = 128;
                    return VAR_28;
                }
            }
            VAR_30->state = 132;
            break;
        case 132:

            if (VAR_34 != VAR_28) {
                return VAR_6;
            }


            if (VAR_30->parent) {
                return VAR_2;
            }

            VAR_30->file.segment_index++;


            if (VAR_30->r_ctx.version == 1) {

                if (VAR_30->client_abort && VAR_30->r_ctx.is_raw_update == VAR_16) {
                    VAR_30->state = VAR_25;
                    VAR_30->is_rolling_back = VAR_26;
                    VAR_30->file.segment_index = 0;
                    return VAR_28;
                }

                VAR_30->state = VAR_24;
                VAR_34 = FUNC_7(VAR_30);
                if (VAR_34 == VAR_3) {
                    return VAR_3;
                }



                if (VAR_30->use_dedup) {
                    VAR_39 = VAR_30->data;
                    VAR_30->dedup_ctx.file_data = VAR_39->request_body->bufs;
                    VAR_30->dedup_ctx.file_ref_count += 1;
                    VAR_30->decline_handler = VAR_29;
                    return VAR_1;
                }
                return VAR_2;
            }
            break;


         case 130:
             VAR_30->file.segment_index++;
             if (VAR_30->file.segment_index >= VAR_30->file.segment_count) {
                 if (VAR_30->client_abort) {
                     return VAR_4;
                 }

                 if (VAR_30->request_timeout) {
                     return VAR_5;
                 }

                 return VAR_3;
             }

             VAR_30->state = VAR_25;
             return VAR_28;
        }
        break;
    case 137:
        switch(VAR_30->state) {
        case 133:
            if (VAR_34 == VAR_28) {
                if (VAR_30->file_stat.flag == VAR_12
                    || VAR_30->file_stat.flag == VAR_11)
                {
                    VAR_30->state = VAR_21;
                    VAR_41->oper_size =
                                     FUNC_9(VAR_30->file_stat.size,
                                             VAR_14);
                    return VAR_28;
                }


                return VAR_8;
            }

            return VAR_6;
       case 134:
            if (VAR_34 != VAR_28) {
                return VAR_34;
            }


            if (VAR_30->r_ctx.version == 1 && !VAR_30->is_large_file) {
                VAR_30->state = VAR_17;
                VAR_30->file_name = VAR_30->r_ctx.file_path_s;
                return VAR_2;
            }


            VAR_30->file.segment_index++;
            if (VAR_30->file.segment_index >= VAR_30->file.segment_count) {
                if (VAR_30->r_ctx.version == 1) {

                    VAR_30->state = VAR_17;
                    VAR_30->file_name = VAR_30->r_ctx.file_path_s;
                    return VAR_2;
                }

                if (VAR_30->r_ctx.version == 2) {
                    if (!VAR_30->file.still_have) {
                        VAR_30->state = VAR_20;

                    } else {
                        VAR_30->state = VAR_19;
                        VAR_30->file.file_offset = VAR_41->segment_info.offset
                                            + VAR_41->segment_info.size;
                        VAR_30->file.segment_index = 0;
                    }

                    VAR_36 =
                     &VAR_30->tfs_peer_servers[VAR_15].body_buffer;
                    FUNC_2(VAR_36);
                }

            } else {
                VAR_30->state = VAR_18;
            }
            break;
        }
    }

    return VAR_34;
}
