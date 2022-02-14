
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_10__ ;


typedef scalar_t__ uint32_t ;
typedef int ngx_table_elt_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_20__ {size_t segment_index; scalar_t__ left_length; TYPE_6__* segment_data; } ;
struct TYPE_18__ {TYPE_10__* content_type; } ;
struct TYPE_21__ {scalar_t__ sp_curr; scalar_t__ length; int log; TYPE_4__ file; int * parent; TYPE_2__ headers_in; int pool; int is_process_meta_seg; int state; TYPE_7__* tfs_peer; scalar_t__ header; } ;
typedef TYPE_5__ ngx_http_tfs_t ;
struct TYPE_17__ {int file_id; int block_id; } ;
struct TYPE_22__ {scalar_t__ oper_size; TYPE_1__ segment_info; } ;
typedef TYPE_6__ ngx_http_tfs_segment_data_t ;
struct TYPE_25__ {int pos; } ;
struct TYPE_23__ {int peer_addr_text; TYPE_9__ body_buffer; } ;
typedef TYPE_7__ ngx_http_tfs_peer_connection_t ;
struct TYPE_19__ {scalar_t__ type; scalar_t__ len; } ;
struct TYPE_24__ {int data_len; TYPE_3__ header; } ;
typedef TYPE_8__ ngx_http_tfs_ds_read_response_t ;
typedef TYPE_9__ ngx_buf_t ;
typedef scalar_t__ int16_t ;
struct TYPE_16__ {int value; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_0 (TYPE_9__*) ;
 int FUNC_1 (TYPE_9__*) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (TYPE_5__*,TYPE_6__*) ;
 int FUNC_4 (int ,int ,int ,char*) ;
 int FUNC_5 (int ,int ,int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_6 (int ,int ,int ,char*,int ,int ,int ,scalar_t__) ;
 TYPE_10__* FUNC_7 (int ,int) ;

ngx_int_t
FUNC_8(ngx_http_tfs_t *VAR_14)
{
    int16_t VAR_15;
    uint32_t VAR_16;
    ngx_int_t VAR_17;
    ngx_buf_t *VAR_18;
    ngx_http_tfs_segment_data_t *VAR_19;
    ngx_http_tfs_peer_connection_t *VAR_20;
    ngx_http_tfs_ds_read_response_t *VAR_21;

    VAR_21 = (ngx_http_tfs_ds_read_response_t *) VAR_14->header;
    VAR_15 = VAR_21->header.type;
    if (VAR_15 == VAR_10) {
        VAR_14->length = VAR_21->header.len - sizeof(uint32_t);
        return VAR_13;
    }

    VAR_19 = &VAR_14->file.segment_data[VAR_14->file.segment_index];
    VAR_20 = VAR_14->tfs_peer;
    VAR_18 = &VAR_20->body_buffer;

    if (VAR_21->data_len < 0) {
        if (VAR_21->data_len == VAR_5) {
            FUNC_3(VAR_14, VAR_19);

        } else if (VAR_21->data_len == -22) {



            VAR_21->data_len = VAR_4;
        }


        if (VAR_21->data_len == VAR_7
            || VAR_21->data_len == VAR_4
            || VAR_21->data_len == VAR_6)
        {
            return VAR_21->data_len;
        }
        FUNC_6(VAR_12, VAR_14->log, 0,
                      "read file(block id: %uD, file id: %uL) "
                      "from (%s) fail, error code: %D, will retry",
                      VAR_19->segment_info.block_id,
                      VAR_19->segment_info.file_id,
                      VAR_20->peer_addr_text, VAR_21->data_len);
        FUNC_1(VAR_18);
        return VAR_3;
    }

    if (VAR_21->data_len == 0) {
        VAR_14->state = VAR_9;
        FUNC_4(VAR_11, VAR_14->log, 0, "read len is 0");
        return VAR_1;
    }

    if (VAR_21->data_len >= VAR_8) {


        if (((VAR_14->parent == ((void*)0) && !VAR_14->is_process_meta_seg)
             || (VAR_14->parent && VAR_14->sp_curr == 0))
            && VAR_14->headers_in.content_type == ((void*)0))
        {
            if (FUNC_0(VAR_18) < VAR_8) {
                return VAR_0;
            }

            VAR_14->headers_in.content_type = FUNC_7(VAR_14->pool, sizeof(ngx_table_elt_t));
            if (VAR_14->headers_in.content_type == ((void*)0)) {
                return VAR_2;
            }

            VAR_17 = FUNC_2(VAR_18->pos, &VAR_14->headers_in.content_type->value);
            if (VAR_17 != VAR_13) {
                FUNC_4(VAR_11, VAR_14->log, 0, "unknown content type");
            }
        }
    }

    VAR_16 = VAR_21->header.len - sizeof(uint32_t);
    VAR_14->length = VAR_16;

    VAR_19->oper_size = VAR_21->data_len;

    if (VAR_14->parent) {
        VAR_14->file.left_length = VAR_21->data_len;
    }

    FUNC_5(VAR_11, VAR_14->log, 0,
                   "read len is %O, data len is %D",
                   VAR_14->length, VAR_21->data_len);

    return VAR_13;
}
