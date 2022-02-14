
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int ngx_int_t ;
struct TYPE_19__ {size_t left_length; int segment_count; TYPE_7__* segment_data; scalar_t__ last_write_segment_index; scalar_t__ segment_index; } ;
struct TYPE_17__ {int version; scalar_t__ offset; } ;
struct TYPE_20__ {TYPE_3__ file; int pool; int log; TYPE_1__ r_ctx; scalar_t__ is_large_file; TYPE_5__* send_body; } ;
typedef TYPE_4__ ngx_http_tfs_t ;
typedef int ngx_http_tfs_segment_data_t ;
struct TYPE_21__ {TYPE_6__* buf; struct TYPE_21__* next; } ;
typedef TYPE_5__ ngx_chain_t ;
struct TYPE_22__ {size_t last; size_t pos; size_t start; size_t file_last; size_t file_pos; } ;
typedef TYPE_6__ ngx_buf_t ;
typedef scalar_t__ int64_t ;
struct TYPE_18__ {size_t size; scalar_t__ offset; } ;
struct TYPE_23__ {size_t oper_size; TYPE_5__* data; int orig_data; TYPE_2__ segment_info; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_6__* FUNC_0 (int ) ;
 TYPE_5__* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_6__*) ;
 size_t FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (int ,int *,TYPE_5__*) ;
 size_t FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (int ,int ,int ,char*) ;
 int FUNC_7 (int ,int ,int ,char*,int) ;
 int FUNC_8 (int ,int ,int ,char*,size_t,size_t,size_t) ;
 int FUNC_9 (int ,int ,int ,char*,int) ;
 int FUNC_10 (TYPE_6__*,TYPE_6__*,int) ;
 void* FUNC_11 (size_t,size_t) ;
 TYPE_7__* FUNC_12 (int ,size_t) ;

ngx_int_t
FUNC_13(ngx_http_tfs_t *VAR_6)
{
    size_t VAR_7, VAR_8, VAR_9;
    int64_t VAR_10;
    uint32_t VAR_11;
    ngx_int_t VAR_12, VAR_13, VAR_14;
    ngx_buf_t *VAR_15;
    ngx_chain_t *VAR_16, *VAR_17, **VAR_18;

    if (VAR_6->send_body == ((void*)0)) {
        return VAR_0;
    }

    VAR_16 = VAR_6->send_body;
    VAR_10 = 0;





    VAR_7 = FUNC_5(VAR_16);
    VAR_6->file.left_length = VAR_7;

    VAR_12 = (VAR_7 + VAR_2 - 1)
                 / VAR_2;

    VAR_9 = sizeof(ngx_http_tfs_segment_data_t) * (VAR_12 + 1);

    if (VAR_6->file.segment_data == ((void*)0)) {
        VAR_6->file.segment_data = FUNC_12(VAR_6->pool, VAR_9);
        if (VAR_6->file.segment_data == ((void*)0)) {
            return VAR_0;
        }
    }

    VAR_6->file.segment_count = VAR_12;
    VAR_6->file.segment_index = 0;
    VAR_6->file.last_write_segment_index = 0;

    if (VAR_6->is_large_file) {
        VAR_10 = 0;

    } else if (VAR_6->r_ctx.version == 2) {
        VAR_10 = VAR_6->r_ctx.offset;
    }

    for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++) {
        VAR_6->file.segment_data[VAR_13].segment_info.offset = VAR_10;
        VAR_6->file.segment_data[VAR_13].segment_info.size =
            FUNC_11(VAR_7, VAR_2);
        VAR_6->file.segment_data[VAR_13].oper_size =
                                      VAR_6->file.segment_data[VAR_13].segment_info.size;
        if (VAR_6->is_large_file
            || (VAR_6->r_ctx.version == 2 && VAR_10 != VAR_1))
        {
            VAR_10 += VAR_2;
        }
        VAR_7 -= VAR_6->file.segment_data[VAR_13].segment_info.size;


        VAR_11 = VAR_6->file.segment_data[VAR_13].segment_info.size;
        VAR_18 = &VAR_6->file.segment_data[VAR_13].data;
        FUNC_7(VAR_3, VAR_6->log, 0,
                      "prepare segment[%i]'s data", VAR_13);

        while (VAR_11 > 0) {
            while (VAR_16 && FUNC_3(VAR_16->buf) == 0) {
                FUNC_6(VAR_3, VAR_6->log, 0,
                              "zero body buf");
                VAR_16 = VAR_16->next;
            }
            if (VAR_16 == ((void*)0)) {
                FUNC_9(VAR_4, VAR_6->log, 0,
                              "prepare segment data[%i] failed for early end.",
                              VAR_13);
                return VAR_0;
            }
            VAR_8 = FUNC_11(FUNC_3(VAR_16->buf), VAR_11);

            VAR_15 = FUNC_0(VAR_6->pool);
            if (VAR_15 == ((void*)0)) {
                return VAR_0;
            }
            FUNC_10(VAR_15, VAR_16->buf, sizeof(ngx_buf_t));
            if (FUNC_2(VAR_15)) {
                VAR_15->last = VAR_15->pos + VAR_8;
                FUNC_8(VAR_3, VAR_6->log, 0,
                               "pos: %uD, last: %uD, size: %z",
                               (VAR_15->pos - VAR_15->start),
                               (VAR_15->last - VAR_15->start),
                               VAR_8);

            } else {
                VAR_15->file_last = VAR_15->file_pos + VAR_8;
                FUNC_8(VAR_3, VAR_6->log, 0,
                               "pos: %O, last: %O, size: %z",
                               VAR_15->file_pos, VAR_15->file_last, VAR_8);
            }

            VAR_17 = FUNC_1(VAR_6->pool);
            if (VAR_17 == ((void*)0)) {
                return VAR_0;
            }
            VAR_17->buf = VAR_15;
            VAR_17->next = ((void*)0);
            *VAR_18 = VAR_17;
            VAR_18 = &VAR_17->next;

            if (FUNC_2(VAR_16->buf)) {
                VAR_16->buf->pos += VAR_8;

            } else {
                VAR_16->buf->file_pos += VAR_8;
            }

            VAR_11 -= VAR_8;
        }

        VAR_14 = FUNC_4(VAR_6->pool,
            &VAR_6->file.segment_data[VAR_13].orig_data, VAR_6->file.segment_data[VAR_13].data);
        if (VAR_14 == VAR_0) {
            return VAR_0;
        }
    }

    return VAR_5;
}
