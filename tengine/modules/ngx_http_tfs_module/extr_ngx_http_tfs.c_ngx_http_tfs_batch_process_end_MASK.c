
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_16__ {scalar_t__ segment_count; scalar_t__ segment_index; scalar_t__ left_length; scalar_t__ still_have; scalar_t__ curr_batch_count; } ;
struct TYPE_13__ {scalar_t__ code; } ;
struct TYPE_15__ {int version; int file_path_s; TYPE_1__ action; } ;
struct TYPE_14__ {int curr_lookup_cache; } ;
struct TYPE_18__ {scalar_t__ sp_fail_count; scalar_t__ sp_count; void* state; TYPE_5__* tfs_peer_servers; TYPE_4__ file; TYPE_3__ r_ctx; int file_name; scalar_t__ is_large_file; int * data; TYPE_2__ block_cache_ctx; void* is_rolling_back; scalar_t__ client_abort; int log; scalar_t__ request_timeout; } ;
typedef TYPE_6__ ngx_http_tfs_t ;
typedef int ngx_http_request_t ;
typedef int ngx_buf_t ;
struct TYPE_17__ {int body_buffer; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_0 (int *,TYPE_6__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_6__*,int ) ;
 int FUNC_4 (TYPE_6__*,scalar_t__) ;
 int VAR_17 ;
 scalar_t__ FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (int ,int ,int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_7 (int ,int ,int ,char*,scalar_t__) ;

ngx_int_t
FUNC_8(ngx_http_tfs_t *VAR_18)
{
    ngx_int_t VAR_19 = VAR_1;
    ngx_buf_t *VAR_20;
    ngx_http_request_t *VAR_21;


    if (VAR_18->sp_fail_count > 0) {
        FUNC_7(VAR_15, VAR_18->log, 0,
                      "sub process error, rest segment count: %D ",
                      VAR_18->file.segment_count - VAR_18->file.segment_index);


        if (VAR_18->r_ctx.version == 1
            && VAR_18->r_ctx.action.code == VAR_5)
        {
            VAR_18->state = VAR_11;
            VAR_18->is_rolling_back = VAR_13;
            VAR_18->file.segment_count = VAR_18->file.segment_index + VAR_18->sp_count;
            VAR_18->file.segment_index = 0;
            FUNC_4(VAR_18, VAR_16);
            return VAR_16;
        }

        if (VAR_18->request_timeout) {
            FUNC_3(VAR_18->data, VAR_18,
                                          VAR_3);

        } else if (VAR_18->client_abort) {
            FUNC_3(VAR_18->data, VAR_18,
                                          VAR_2);

        } else {
            FUNC_4(VAR_18, VAR_1);
        }
        return VAR_1;
    }

    VAR_18->file.segment_index += VAR_18->sp_count;
    VAR_18->file.curr_batch_count = 0;

    FUNC_6(VAR_14, VAR_18->log, 0,
                   "batch process segment count: %uD, rest segment count: %D ",
                   VAR_18->sp_count, VAR_18->file.segment_count - VAR_18->file.segment_index);

    if (VAR_18->r_ctx.action.code == VAR_5) {

        if (VAR_18->r_ctx.version == 1 && VAR_18->is_large_file) {
            VAR_18->state = VAR_11;


            if (VAR_18->client_abort) {
                VAR_18->is_rolling_back = VAR_13;
                VAR_18->file.segment_count = VAR_18->file.segment_index;
                VAR_18->file.segment_index = 0;

            } else {

                if (VAR_18->file.left_length == 0) {
                    VAR_19 = FUNC_5(VAR_18);
                    if (VAR_19 == VAR_1) {
                        FUNC_4(VAR_18, VAR_1);
                        return VAR_1;
                    }
                }
            }

        } else if (VAR_18->r_ctx.version == 2) {
            VAR_18->state = VAR_12;
        }

        VAR_19 = VAR_16;

    } else if (VAR_18->r_ctx.action.code == VAR_4) {
        if (VAR_18->file.segment_index < VAR_18->file.segment_count
            && VAR_18->file.left_length > 0)
        {
            VAR_18->state = VAR_9;


            VAR_18->block_cache_ctx.curr_lookup_cache =
                                               VAR_6;
            return FUNC_1(VAR_18);
        }


        VAR_21 = VAR_18->data;
        FUNC_0(VAR_21, VAR_18, VAR_17);
        VAR_19 = VAR_0;

        if (VAR_18->is_large_file) {
            VAR_18->state = VAR_8;
            VAR_18->file_name = VAR_18->r_ctx.file_path_s;
        }

        if (VAR_18->r_ctx.version == 2) {
            if (VAR_18->file.still_have) {
                VAR_18->state = VAR_10;
                VAR_20 =
                 &VAR_18->tfs_peer_servers[VAR_7].body_buffer;
                FUNC_2(VAR_20);
                VAR_19 = VAR_16;

            } else {
                VAR_18->state = VAR_8;
            }
        }
    }

    FUNC_4(VAR_18, VAR_19);

    return VAR_16;
}
