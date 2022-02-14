
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
typedef struct TYPE_26__ TYPE_13__ ;
typedef struct TYPE_25__ TYPE_12__ ;
typedef struct TYPE_24__ TYPE_11__ ;
typedef struct TYPE_23__ TYPE_10__ ;


typedef int uint64_t ;
typedef size_t uint32_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_35__ {size_t segment_index; size_t curr_batch_count; scalar_t__ left_length; scalar_t__ file_hole_size; size_t segment_count; scalar_t__ file_offset; TYPE_11__* segment_data; } ;
struct TYPE_32__ {scalar_t__ code; } ;
struct TYPE_33__ {int version; TYPE_6__ action; } ;
struct TYPE_31__ {scalar_t__ size; } ;
struct TYPE_29__ {TYPE_10__* data; } ;
struct TYPE_30__ {TYPE_3__ remote_ctx; } ;
struct TYPE_23__ {size_t sp_curr; struct TYPE_23__* next; TYPE_9__ file; scalar_t__ sp_count; TYPE_13__* tfs_peer; TYPE_2__* recv_chain; int header_buffer; int data; int log; int pool; TYPE_12__* tfs_peer_servers; int state; TYPE_7__ r_ctx; TYPE_5__ stat_info; int sp_ready; TYPE_4__ block_cache_ctx; int * out_bufs; int * request_bufs; int sp_callback; scalar_t__ sp_succ_count; scalar_t__ sp_fail_count; scalar_t__ sp_done_count; } ;
typedef TYPE_10__ ngx_http_tfs_t ;
struct TYPE_34__ {scalar_t__ size; scalar_t__ offset; int block_id; } ;
struct TYPE_24__ {scalar_t__ oper_offset; scalar_t__ oper_size; TYPE_8__ segment_info; } ;
typedef TYPE_11__ ngx_http_tfs_segment_data_t ;
struct TYPE_25__ {int peer_addr_text; } ;
typedef TYPE_12__ ngx_http_tfs_peer_connection_t ;
typedef int ngx_http_tfs_inet_t ;
struct TYPE_28__ {TYPE_1__* next; int * buf; } ;
struct TYPE_27__ {int * buf; } ;
struct TYPE_26__ {int body_buffer; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_10__* FUNC_0 (TYPE_10__*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (TYPE_10__*) ;
 int FUNC_2 (int ,TYPE_12__*,int *) ;
 scalar_t__ FUNC_3 (int ,TYPE_10__*) ;
 int * FUNC_4 (TYPE_10__*,TYPE_11__*) ;
 TYPE_13__* FUNC_5 (TYPE_10__*) ;
 int FUNC_6 (int ,int ,int ,char*,int ,int ) ;
 int FUNC_7 (int ,int ,int ,char*,scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__,int ) ;

ngx_int_t
FUNC_9(ngx_http_tfs_t *VAR_12)
{
    uint32_t VAR_13;
    ngx_http_tfs_t *VAR_14, **VAR_15;
    ngx_http_tfs_inet_t *VAR_16;
    ngx_http_tfs_segment_data_t *VAR_17;
    ngx_http_tfs_peer_connection_t *VAR_18;

    VAR_17 = &VAR_12->file.segment_data[VAR_12->file.segment_index];

    VAR_12->sp_count = 0;
    VAR_12->sp_done_count = 0;
    VAR_12->sp_fail_count = 0;
    VAR_12->sp_succ_count = 0;
    VAR_12->sp_curr = VAR_12->file.segment_index;
    VAR_12->sp_callback = VAR_10;
    VAR_15 = &VAR_12->next;


    for (VAR_13 = 0; VAR_13 < VAR_12->file.curr_batch_count; VAR_13++) {
        VAR_14 = FUNC_0(VAR_12);
        if (VAR_14 == ((void*)0)) {
            return VAR_0;
        }

        VAR_14->sp_callback = VAR_11;


        VAR_14->request_bufs = ((void*)0);
        VAR_14->out_bufs = ((void*)0);


        VAR_14->block_cache_ctx.remote_ctx.data = VAR_14;


        VAR_14->file.segment_index = 0;
        VAR_14->file.segment_data = &VAR_17[VAR_13];
        VAR_14->sp_curr = VAR_12->file.segment_index + VAR_13;
        VAR_14->sp_ready = VAR_4;
        VAR_14->stat_info.size = 0;

        if (VAR_12->r_ctx.action.code == VAR_2) {
            VAR_14->file.left_length = VAR_14->file.segment_data->segment_info.size;
            VAR_14->state = VAR_6;

        } else if (VAR_12->r_ctx.action.code == VAR_1) {

            if (VAR_12->r_ctx.version == 2) {
                VAR_14->file.file_hole_size = 0;
                if (VAR_13 < VAR_12->file.segment_count
                   && (VAR_12->file.file_offset
                       < VAR_17[VAR_13].segment_info.offset))
                {
                    VAR_14->file.file_hole_size = FUNC_8(VAR_12->file.left_length,
                        (uint64_t)(VAR_17[VAR_13].segment_info.offset
                                   - VAR_12->file.file_offset));
                    VAR_12->file.file_offset += VAR_14->file.file_hole_size;
                    VAR_12->file.left_length -= VAR_14->file.file_hole_size;
                    FUNC_7(VAR_7, VAR_12->log, 0,
                                  "find file hole, size: %uL",
                                  VAR_14->file.file_hole_size);
                }
            }
            VAR_14->file.file_offset = VAR_14->file.segment_data->oper_offset;
            VAR_14->file.left_length = VAR_14->file.segment_data->oper_size;
            VAR_12->file.file_offset += VAR_14->file.segment_data->oper_size;
            VAR_12->file.left_length -= VAR_14->file.segment_data->oper_size;

            VAR_14->state = VAR_5;
        }


        VAR_16 = FUNC_4(VAR_14, VAR_14->file.segment_data);
        if (VAR_16 == ((void*)0)) {
            return VAR_0;
        }

        VAR_18 = &VAR_14->tfs_peer_servers[VAR_3];
        FUNC_2(VAR_12->pool, VAR_18, VAR_16);

        FUNC_6(VAR_8, VAR_12->log, 0,
                       "block_id: %uD, select data server: %s",
                       VAR_14->file.segment_data->segment_info.block_id,
                       VAR_18->peer_addr_text);

        if (FUNC_3(VAR_12->data, VAR_14) != VAR_9) {
            return VAR_0;
        }

        VAR_14->tfs_peer = FUNC_5(VAR_14);
        if (VAR_14->tfs_peer == ((void*)0)) {
            return VAR_0;
        }

        VAR_14->recv_chain->buf = &VAR_14->header_buffer;
        VAR_14->recv_chain->next->buf = &VAR_14->tfs_peer->body_buffer;

        *VAR_15 = VAR_14;
        VAR_15 = &VAR_14->next;

        VAR_12->sp_count++;

        if (VAR_12->file.left_length == 0) {
            break;
        }
    }
    *VAR_15 = ((void*)0);


    for (VAR_14 = VAR_12->next; VAR_14; VAR_14 = VAR_12->next) {

        VAR_12->next = VAR_14->next;
        FUNC_1(VAR_14);
    }

    return VAR_9;
}
