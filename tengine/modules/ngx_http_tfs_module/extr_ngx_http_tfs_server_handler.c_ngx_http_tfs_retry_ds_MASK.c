
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_11__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_23__ {size_t segment_index; int left_length; TYPE_8__* segment_data; } ;
struct TYPE_20__ {int code; } ;
struct TYPE_21__ {int is_raw_update; TYPE_1__ action; } ;
struct TYPE_26__ {scalar_t__ (* retry_handler ) (TYPE_7__*) ;int data; int * tfs_peer_servers; int pool; TYPE_9__* tfs_peer; TYPE_6__* recv_chain; int header_buffer; TYPE_4__ file; int state; void* retry_curr_ns; int retry_count; void* use_dedup; void* is_stat_dup_file; TYPE_2__ r_ctx; int is_process_meta_seg; int is_large_file; } ;
typedef TYPE_7__ ngx_http_tfs_t ;
struct TYPE_22__ {int size; int crc; int file_id; int block_id; } ;
struct TYPE_27__ {scalar_t__ ds_retry; int oper_size; int oper_offset; TYPE_3__ segment_info; int orig_data; int * data; int write_file_number; } ;
typedef TYPE_8__ ngx_http_tfs_segment_data_t ;
struct TYPE_19__ {int data; int (* free ) (TYPE_11__*,int ,int ) ;} ;
struct TYPE_28__ {int body_buffer; TYPE_11__ peer; } ;
typedef TYPE_9__ ngx_http_tfs_peer_connection_t ;
typedef int ngx_http_tfs_inet_t ;
struct TYPE_25__ {TYPE_5__* next; int * buf; } ;
struct TYPE_24__ {int * buf; } ;


 scalar_t__ VAR_0 ;




 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_0 (int ,int **,int ) ;
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (int ,int *,int *) ;
 scalar_t__ FUNC_3 (int ,TYPE_7__*) ;
 int * FUNC_4 (TYPE_7__*,TYPE_8__*) ;
 TYPE_9__* FUNC_5 (TYPE_7__*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (TYPE_11__*,int ,int ) ;
 scalar_t__ FUNC_8 (TYPE_7__*) ;

ngx_int_t
FUNC_9(ngx_http_tfs_t *VAR_12)
{
    ngx_int_t VAR_13;
    ngx_http_tfs_inet_t *VAR_14;
    ngx_http_tfs_segment_data_t *VAR_15;
    ngx_http_tfs_peer_connection_t *VAR_16;

    VAR_16 = VAR_12->tfs_peer;
    VAR_16->peer.free(&VAR_16->peer, VAR_16->peer.data, 0);

    VAR_15 = &VAR_12->file.segment_data[VAR_12->file.segment_index];
    VAR_14 = FUNC_4(VAR_12, VAR_15);
    if (VAR_14 == ((void*)0)) {
        switch(VAR_12->r_ctx.action.code) {
        case 129:
            VAR_12->state = VAR_7;
            break;
        case 131:
            VAR_12->state = VAR_6;
            break;
        case 130:
            if (VAR_12->is_large_file && VAR_12->is_process_meta_seg) {
                return VAR_2;
            }


            return VAR_0;
        case 128:

            if (VAR_12->r_ctx.is_raw_update) {
                return VAR_0;
            }




            if (VAR_12->is_stat_dup_file) {
                VAR_12->is_stat_dup_file = VAR_5;
                VAR_12->use_dedup = VAR_5;
                VAR_12->state = VAR_8;
                VAR_12->file.segment_data[0].segment_info.block_id = 0;
                VAR_12->file.segment_data[0].segment_info.file_id = 0;
                VAR_12->retry_curr_ns = VAR_10;

            } else {

                if (++VAR_12->retry_count <= VAR_4) {
                    VAR_12->retry_curr_ns = VAR_10;
                }
                VAR_12->state = VAR_9;
                VAR_15->segment_info.block_id = 0;
                VAR_15->segment_info.file_id = 0;
                VAR_15->write_file_number = 0;
                VAR_15->segment_info.crc = 0;

                VAR_15->data = ((void*)0);
                VAR_13 = FUNC_0(VAR_12->pool,
                    &VAR_15->data, VAR_15->orig_data);
                if (VAR_13 == VAR_0) {
                    return VAR_0;
                }

                VAR_12->file.left_length = VAR_15->segment_info.size;
                VAR_15->oper_offset = 0;
                VAR_15->oper_size = FUNC_6(VAR_12->file.left_length,
                                                  VAR_3);
            }
            break;
        default:
            return VAR_0;
        }

        VAR_12->tfs_peer = FUNC_5(VAR_12);
        if (VAR_12->tfs_peer == ((void*)0)) {
            return VAR_0;
        }

        VAR_12->recv_chain->buf = &VAR_12->header_buffer;
        VAR_12->recv_chain->next->buf = &VAR_12->tfs_peer->body_buffer;


        VAR_15->ds_retry = 0;

        if (VAR_12->retry_handler == ((void*)0)) {
            return VAR_0;
        }

        return VAR_12->retry_handler(VAR_12);
    }

    FUNC_2(VAR_12->pool,
                               &VAR_12->tfs_peer_servers[VAR_1],
                               VAR_14);

    if (FUNC_3(VAR_12->data, VAR_12) != VAR_11) {
        return VAR_0;
    }

    FUNC_1(VAR_12);

    return VAR_11;
}
