
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_42__ TYPE_9__ ;
typedef struct TYPE_41__ TYPE_8__ ;
typedef struct TYPE_40__ TYPE_7__ ;
typedef struct TYPE_39__ TYPE_6__ ;
typedef struct TYPE_38__ TYPE_5__ ;
typedef struct TYPE_37__ TYPE_4__ ;
typedef struct TYPE_36__ TYPE_3__ ;
typedef struct TYPE_35__ TYPE_2__ ;
typedef struct TYPE_34__ TYPE_1__ ;
typedef struct TYPE_33__ TYPE_10__ ;


typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
typedef int ngx_int_t ;
struct TYPE_40__ {size_t segment_index; scalar_t__ left_length; int file_hole_size; int file_offset; TYPE_9__* segment_data; } ;
struct TYPE_38__ {int save_body_buffer; } ;
struct TYPE_37__ {scalar_t__ size; } ;
struct TYPE_34__ {int code; } ;
struct TYPE_36__ {int version; int read_stat_type; int chk_exist; TYPE_1__ action; } ;
struct TYPE_35__ {int size; } ;
struct TYPE_41__ {void* read_ver; int header_size; TYPE_7__ file; TYPE_6__* tfs_peer; TYPE_5__ dedup_ctx; int use_dedup; int is_large_file; TYPE_10__* meta_segment_data; int free_bufs; int pool; TYPE_4__ file_stat; int state; TYPE_3__ r_ctx; TYPE_2__ stat_info; int parent; int is_process_meta_seg; int * json_output; int log; } ;
typedef TYPE_8__ ngx_http_tfs_t ;
typedef int ngx_http_tfs_segment_head_t ;
struct TYPE_42__ {int oper_size; } ;
typedef TYPE_9__ ngx_http_tfs_segment_data_t ;
typedef int ngx_http_tfs_ds_read_response_t ;
struct TYPE_33__ {int * buf; } ;
typedef TYPE_10__ ngx_chain_t ;
struct TYPE_39__ {int body_buffer; } ;


 int VAR_0 ;




 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 TYPE_10__* FUNC_0 (int ,int *,scalar_t__) ;
 TYPE_10__* FUNC_1 (TYPE_8__*,TYPE_9__*) ;
 TYPE_10__* FUNC_2 (TYPE_8__*,TYPE_9__*) ;
 TYPE_10__* FUNC_3 (TYPE_8__*,TYPE_9__*,void*,int ) ;
 TYPE_10__* FUNC_4 (TYPE_8__*,TYPE_9__*) ;
 TYPE_10__* FUNC_5 (TYPE_8__*,TYPE_9__*) ;
 TYPE_10__* FUNC_6 (TYPE_8__*,TYPE_9__*) ;
 int FUNC_7 (TYPE_8__*,int ) ;
 int * FUNC_8 (int ,int ) ;

ngx_chain_t *
FUNC_9(ngx_http_tfs_t *VAR_7)
{
    uint32_t VAR_8;
    uint16_t VAR_9;
    ngx_int_t VAR_10;
    ngx_chain_t *VAR_11;
    ngx_http_tfs_segment_data_t *VAR_12;

    VAR_11 = ((void*)0);
    VAR_8 = 0;
    VAR_9 = VAR_7->r_ctx.action.code;
    VAR_12 = &VAR_7->file.segment_data[VAR_7->file.segment_index];

    switch (VAR_9) {
    case 137:
        if (VAR_7->r_ctx.chk_exist == VAR_3) {
            VAR_7->json_output = FUNC_8(VAR_7->log, VAR_7->pool);
            if (VAR_7->json_output == ((void*)0)) {
                return ((void*)0);
            }
        }
        if (VAR_7->is_large_file) {
            VAR_12->oper_size = sizeof(ngx_http_tfs_segment_head_t);
            return FUNC_3(VAR_7, VAR_12,
                            VAR_6, VAR_5);
        }

        return FUNC_4(VAR_7, VAR_12);

    case 139:
        VAR_7->read_ver = VAR_4;
        VAR_7->header_size = sizeof(ngx_http_tfs_ds_read_response_t);

        if (VAR_7->is_large_file && VAR_7->is_process_meta_seg) {
            if (VAR_7->meta_segment_data == ((void*)0)) {

                VAR_11 = FUNC_0(VAR_7->pool, &VAR_7->free_bufs,
                    VAR_1);
                if (VAR_11 == ((void*)0)) {
                    return ((void*)0);
                }
                VAR_7->tfs_peer->body_buffer = *(VAR_11->buf);
                VAR_7->meta_segment_data = VAR_11;
            }
        }



        if (VAR_7->r_ctx.version == 1
            && VAR_7->file.file_offset == 0
            && !VAR_7->parent)
        {
            VAR_7->read_ver = VAR_6;
        }

        if (VAR_7->r_ctx.version == 2 && VAR_7->file.file_hole_size > 0) {
            VAR_10 = FUNC_7(VAR_7, VAR_7->file.file_hole_size);
            if (VAR_10 == VAR_0) {
                return ((void*)0);
            }
            VAR_7->stat_info.size += VAR_7->file.file_hole_size;
            VAR_7->file.file_hole_size = 0;
        }
        return FUNC_3(VAR_7, VAR_12,
                                                VAR_7->read_ver,
                                                VAR_7->r_ctx.read_stat_type);
    case 136:
        switch(VAR_7->state) {
        case 129:
            return FUNC_4(VAR_7, VAR_12);
        case 131:
            return FUNC_2(VAR_7, VAR_12);
        case 128:
            return FUNC_6(VAR_7, VAR_12);
        case 132:
            return FUNC_1(VAR_7, VAR_12);
        case 130:
            return FUNC_5(VAR_7, VAR_12);
        default:
            return ((void*)0);
        }

    case 138:
        switch(VAR_7->state) {
        case 133:
            return FUNC_4(VAR_7, VAR_12);

        case 134:
            VAR_7->read_ver = VAR_4;
            if (VAR_7->meta_segment_data == ((void*)0)) {
                if (VAR_7->use_dedup) {
                    VAR_8 = VAR_7->file_stat.size;
                    VAR_7->file.left_length = VAR_7->file_stat.size;
                }



                if (VAR_7->is_large_file) {
                    VAR_8 = VAR_1;
                    VAR_7->file.left_length = VAR_2;
                }
                VAR_11 = FUNC_0(VAR_7->pool, &VAR_7->free_bufs,
                    VAR_8);
                if (VAR_11 == ((void*)0)) {
                    return ((void*)0);
                }
                VAR_7->meta_segment_data = VAR_11;


                if (!VAR_7->is_large_file && VAR_7->use_dedup) {
                    VAR_7->dedup_ctx.save_body_buffer = VAR_7->tfs_peer->body_buffer;
                }

                VAR_7->tfs_peer->body_buffer = *(VAR_11->buf);
            }
            VAR_7->header_size = sizeof(ngx_http_tfs_ds_read_response_t);


            if (VAR_7->file.left_length == VAR_2) {
                VAR_7->read_ver = VAR_6;
            }
            return FUNC_3(VAR_7, VAR_12,
                                     VAR_7->read_ver, VAR_5);
        case 135:
            return FUNC_5(VAR_7, VAR_12);

        default:
            return ((void*)0);
        }
    }

    return VAR_11;
}
