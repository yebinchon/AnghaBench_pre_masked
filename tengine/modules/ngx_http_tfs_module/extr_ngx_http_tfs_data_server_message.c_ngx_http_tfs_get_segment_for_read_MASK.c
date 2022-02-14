
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef int u_char ;
typedef int ngx_int_t ;
struct TYPE_15__ {int segment_count; TYPE_7__* segment_data; scalar_t__ left_length; scalar_t__ segment_index; } ;
struct TYPE_14__ {scalar_t__ size; scalar_t__ offset; } ;
struct TYPE_16__ {TYPE_3__ file; int log; TYPE_2__ r_ctx; int pool; TYPE_6__* seg_head; TYPE_1__* meta_segment_data; } ;
typedef TYPE_4__ ngx_http_tfs_t ;
struct TYPE_17__ {scalar_t__ offset; scalar_t__ size; } ;
typedef TYPE_5__ ngx_http_tfs_segment_info_t ;
struct TYPE_18__ {scalar_t__ size; int count; } ;
typedef TYPE_6__ ngx_http_tfs_segment_head_t ;
struct TYPE_19__ {scalar_t__ oper_size; scalar_t__ oper_offset; TYPE_5__ segment_info; } ;
typedef TYPE_7__ ngx_http_tfs_segment_data_t ;
struct TYPE_20__ {int * last; scalar_t__ pos; } ;
typedef TYPE_8__ ngx_buf_t ;
typedef size_t int32_t ;
struct TYPE_13__ {TYPE_8__* buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_8__*) ;
 size_t FUNC_1 (int,TYPE_5__*,scalar_t__) ;
 int FUNC_2 (int ,int ,int ,char*,int,scalar_t__,scalar_t__) ;
 int FUNC_3 (int ,int ,int ,char*,int,int) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 TYPE_7__* FUNC_5 (int ,int) ;

ngx_int_t
FUNC_6(ngx_http_tfs_t *VAR_6)
{
    uint32_t VAR_7, VAR_8, VAR_9, VAR_10;
    uint64_t VAR_11, VAR_12, VAR_13;
    int32_t VAR_14, VAR_15;
    ngx_buf_t *VAR_16;
    ngx_http_tfs_segment_info_t *VAR_17;
    ngx_http_tfs_segment_data_t *VAR_18, *VAR_19;

    if (VAR_6->meta_segment_data == ((void*)0)) {
        return VAR_1;
    }
    VAR_16 = VAR_6->meta_segment_data->buf;
    if (VAR_16 == ((void*)0)) {
        return VAR_1;
    }

    VAR_7 = FUNC_0(VAR_16);
    if (VAR_7 < (sizeof(ngx_http_tfs_segment_head_t) +
                    sizeof(ngx_http_tfs_segment_info_t)))
    {
        return VAR_1;
    }

    VAR_6->seg_head = (ngx_http_tfs_segment_head_t *)(VAR_16->pos);
    VAR_17 = (ngx_http_tfs_segment_info_t *)
                (VAR_16->pos + sizeof(ngx_http_tfs_segment_head_t));

    if (VAR_6->r_ctx.size == VAR_2) {
        VAR_13 = VAR_6->seg_head->size;

    } else {
        VAR_13 = VAR_6->r_ctx.size;
    }

    VAR_11 = VAR_6->r_ctx.offset;
    VAR_12 = VAR_11 + VAR_13;
    if (VAR_11 >= VAR_6->seg_head->size) {
        return VAR_0;
    }


    VAR_8 = VAR_6->seg_head->count;
    VAR_9 = (VAR_16->last - (u_char *) VAR_17)
                     / sizeof(ngx_http_tfs_segment_info_t);
    if (VAR_6->seg_head->count > VAR_9) {
        FUNC_3(VAR_4, VAR_6->log, 0,
                      "seg_count in seg_head larger than max seg_count, "
                      "%uD > %uD, seg_head may be corrupted.",
                      VAR_6->seg_head->count, VAR_9);
        VAR_8 = VAR_9 - 1;
    }
    VAR_14 = FUNC_1(VAR_8, VAR_17, VAR_11);
    if (VAR_14 < 0) {
        VAR_14 = 0 - VAR_14 - 1;
        if (((uint64_t) VAR_17[VAR_14].offset + VAR_17[VAR_14].size)
            <= VAR_11)
        {
            return VAR_1;
        }
    }


    VAR_15 = FUNC_1(VAR_8, VAR_17, VAR_12);
    if (VAR_15 > 0) {
        VAR_15 -= 1;

    } else if (VAR_15 < 0) {
        VAR_15 = 0 - VAR_15 - 1;

    } else {
        return VAR_1;
    }

    VAR_8 = VAR_15 - VAR_14 + 1;


    VAR_6->file.segment_data = FUNC_5(VAR_6->pool,
                               sizeof(ngx_http_tfs_segment_data_t) * VAR_8);
    if (VAR_6->file.segment_data == ((void*)0)) {
        return VAR_1;
    }

    VAR_6->file.segment_index = 0;
    VAR_6->file.segment_count = VAR_8;
    VAR_6->file.left_length = VAR_13;

    for (VAR_10 = 0; VAR_14 <= VAR_15; VAR_10++, VAR_14++) {
        VAR_6->file.segment_data[VAR_10].segment_info = VAR_17[VAR_14];
        VAR_6->file.segment_data[VAR_10].oper_size =
                                      VAR_6->file.segment_data[VAR_10].segment_info.size;
    }


    VAR_18 = &VAR_6->file.segment_data[0];
    VAR_18->oper_offset = VAR_6->r_ctx.offset;
    if (VAR_18->segment_info.offset > 0) {
        VAR_18->oper_offset -= VAR_18->segment_info.offset;
    }
    VAR_18->oper_size =
        VAR_18->segment_info.size - VAR_18->oper_offset;





    VAR_19 = &VAR_6->file.segment_data[VAR_8 - 1];
    VAR_19->oper_size = FUNC_4((VAR_12
                                       - (VAR_19->segment_info.offset
                                          + VAR_19->oper_offset)),
                                      VAR_19->segment_info.size);
    return VAR_5;
}
