
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_15__ ;
typedef struct TYPE_22__ TYPE_12__ ;
typedef struct TYPE_21__ TYPE_11__ ;
typedef struct TYPE_20__ TYPE_10__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int u_char ;
typedef int ngx_uint_t ;
typedef int ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_28__ {int segment_count; scalar_t__ still_have; scalar_t__ file_offset; scalar_t__ left_length; TYPE_7__* segment_data; scalar_t__ segment_index; int cluster_id; } ;
struct TYPE_26__ {scalar_t__ code; } ;
struct TYPE_27__ {scalar_t__ chk_file_hole; int offset; TYPE_3__ action; } ;
struct TYPE_29__ {scalar_t__ has_split_frag; TYPE_5__ file; int log; int file_holes; TYPE_4__ r_ctx; int pool; scalar_t__ is_first_segment; TYPE_8__* tfs_peer; scalar_t__ header; } ;
typedef TYPE_6__ ngx_http_tfs_t ;
struct TYPE_24__ {scalar_t__ offset; scalar_t__ size; int file_id; int block_id; } ;
struct TYPE_30__ {scalar_t__ oper_size; scalar_t__ oper_offset; TYPE_1__ segment_info; } ;
typedef TYPE_7__ ngx_http_tfs_segment_data_t ;
struct TYPE_23__ {int * pos; } ;
struct TYPE_31__ {TYPE_15__ body_buffer; } ;
typedef TYPE_8__ ngx_http_tfs_peer_connection_t ;
struct TYPE_25__ {int frag_count; int cluster_id; } ;
struct TYPE_32__ {scalar_t__ still_have; TYPE_2__ frag_info; } ;
typedef TYPE_9__ ngx_http_tfs_ms_read_response_t ;
struct TYPE_20__ {scalar_t__ offset; scalar_t__ size; int file_id; int block_id; } ;
typedef TYPE_10__ ngx_http_tfs_meta_frag_meta_info_t ;
struct TYPE_21__ {int type; } ;
typedef TYPE_11__ ngx_http_tfs_header_t ;
struct TYPE_22__ {scalar_t__ offset; int length; } ;
typedef TYPE_12__ ngx_http_tfs_file_hole_info_t ;
typedef int int64_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (int *,int ,int ,int) ;
 TYPE_12__* FUNC_1 (int *) ;
 TYPE_7__* FUNC_2 (int ,TYPE_7__*,int,int) ;
 scalar_t__ FUNC_3 (TYPE_15__*,int *,int ) ;
 int FUNC_4 (int ,int ,int ,char*,int,scalar_t__,scalar_t__) ;
 int FUNC_5 (int ,int ,int ,char*,scalar_t__,int) ;
 scalar_t__ FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (TYPE_7__*,int) ;
 void* FUNC_8 (scalar_t__,scalar_t__) ;
 TYPE_7__* FUNC_9 (int ,int) ;
 int FUNC_10 (int *,char*) ;

__attribute__((used)) static ngx_int_t
FUNC_11(ngx_http_tfs_t *VAR_10)
{
    u_char *VAR_11;
    int64_t VAR_12;
    uint16_t VAR_13;
    uint32_t VAR_14;
    uint64_t VAR_15;
    ngx_int_t VAR_16;
    ngx_str_t VAR_17;
    ngx_uint_t VAR_18;
    ngx_http_tfs_header_t *VAR_19;
    ngx_http_tfs_segment_data_t *VAR_20, *VAR_21,
                                        *VAR_22;
    ngx_http_tfs_file_hole_info_t *VAR_23;
    ngx_http_tfs_peer_connection_t *VAR_24;
    ngx_http_tfs_ms_read_response_t *VAR_25;
    ngx_http_tfs_meta_frag_meta_info_t *VAR_26;

    VAR_19 = (ngx_http_tfs_header_t *) VAR_10->header;
    VAR_24 = VAR_10->tfs_peer;
    VAR_13 = VAR_19->type;

    switch (VAR_13) {
    case 128:
        FUNC_10(&VAR_17, "read file(meta server)");
        return FUNC_3(&VAR_24->body_buffer, &VAR_17, VAR_10->log);
    }

    VAR_25 = (ngx_http_tfs_ms_read_response_t *) VAR_24->body_buffer.pos;

    VAR_14 = VAR_25->frag_info.frag_count & ~(1 << (sizeof(uint32_t) * 8 - 1));

    VAR_10->file.cluster_id = VAR_25->frag_info.cluster_id;

    if (VAR_10->r_ctx.action.code == VAR_3) {
        return VAR_9;
    }

    if (VAR_14 == 0) {
        return VAR_0;
    }

    if (VAR_10->file.segment_data == ((void*)0)) {
        VAR_10->file.segment_data =
            FUNC_9(VAR_10->pool, sizeof(ngx_http_tfs_segment_data_t) * VAR_14);
        if (VAR_10->file.segment_data == ((void*)0)) {
            return VAR_1;
        }

        VAR_10->is_first_segment = VAR_6;

    } else {

        if (VAR_14 > VAR_10->file.segment_count) {
            VAR_10->file.segment_data = FUNC_2(VAR_10->pool,
                          VAR_10->file.segment_data,
                          sizeof(ngx_http_tfs_segment_data_t)
                           * VAR_10->file.segment_count,
                          sizeof(ngx_http_tfs_segment_data_t) * VAR_14);
            if (VAR_10->file.segment_data == ((void*)0)) {
                return VAR_1;
            }
        }

        FUNC_7(VAR_10->file.segment_data,
                    sizeof(ngx_http_tfs_segment_data_t) * VAR_14);
    }

    VAR_10->file.segment_count = VAR_14;
    VAR_10->file.still_have = VAR_25->still_have ? :VAR_10->has_split_frag;
    VAR_10->file.segment_index = 0;

    VAR_11 = VAR_24->body_buffer.pos + sizeof(ngx_http_tfs_ms_read_response_t);
    VAR_26 = (ngx_http_tfs_meta_frag_meta_info_t *) VAR_11;

    for (VAR_18 = 0; VAR_18 < VAR_14; VAR_18++, VAR_26++) {
        VAR_10->file.segment_data[VAR_18].segment_info.block_id = VAR_26->block_id;
        VAR_10->file.segment_data[VAR_18].segment_info.file_id = VAR_26->file_id;
        VAR_10->file.segment_data[VAR_18].segment_info.offset = VAR_26->offset;
        VAR_10->file.segment_data[VAR_18].segment_info.size = VAR_26->size;
        VAR_10->file.segment_data[VAR_18].oper_size = VAR_26->size;
    }


    if (VAR_10->r_ctx.action.code == VAR_2) {
        VAR_20 = &VAR_10->file.segment_data[0];
        if (VAR_10->is_first_segment) {

            VAR_20->oper_offset =
                FUNC_6(VAR_10->r_ctx.offset, VAR_20->segment_info.offset);
            if (VAR_20->segment_info.offset > 0) {
                VAR_20->oper_offset %=VAR_20->segment_info.offset;
            }
            VAR_20->oper_size =
                VAR_20->segment_info.size - VAR_20->oper_offset;
            VAR_10->is_first_segment = VAR_5;
            if (VAR_10->r_ctx.chk_file_hole) {
                VAR_16 = FUNC_0(&VAR_10->file_holes, VAR_10->pool,
                                    VAR_4,
                                    sizeof(ngx_http_tfs_file_hole_info_t));
                if (VAR_16 == VAR_1) {
                    return VAR_1;
                }
            }
        }



        if (!VAR_10->file.still_have) {
            VAR_21 = &VAR_10->file.segment_data[VAR_14 - 1];
            VAR_15 = VAR_10->file.file_offset + VAR_10->file.left_length;
            if (VAR_15
                > ((uint64_t)VAR_21->segment_info.offset
                   + VAR_21->oper_offset))
            {
                VAR_21->oper_size =
                    FUNC_8((VAR_15 - (VAR_21->segment_info.offset
                                           + VAR_21->oper_offset)),
                            VAR_21->segment_info.size);

            } else {
                VAR_21->oper_size = 0;
            }
        }


        if (VAR_10->r_ctx.chk_file_hole) {
            VAR_22 = VAR_10->file.segment_data;
            for (VAR_18 = 0; VAR_18 < VAR_14; VAR_18++, VAR_22++) {

                if (VAR_10->file.file_offset < VAR_22->segment_info.offset) {
                    VAR_12 =
                        FUNC_8(VAR_10->file.left_length,
                                (uint64_t)(VAR_22->segment_info.offset
                                           - VAR_10->file.file_offset));
                    VAR_23 = FUNC_1(&VAR_10->file_holes);
                    if (VAR_23 == ((void*)0)) {
                        return VAR_1;
                    }

                    VAR_23->offset = VAR_10->file.file_offset;
                    VAR_23->length = VAR_12;

                    FUNC_5(VAR_7, VAR_10->log, 0,
                                  "find file hole, offset: %uL, length: %uL",
                                  VAR_23->offset,
                                  VAR_23->length);

                    VAR_10->file.file_offset += VAR_12;
                    VAR_10->file.left_length -= VAR_12;
                    if (VAR_10->file.left_length == 0) {
                        return VAR_0;
                    }
                }
                VAR_10->file.file_offset += VAR_22->oper_size;
                VAR_10->file.left_length -= VAR_22->oper_size;
                if (VAR_10->file.left_length == 0) {
                    return VAR_0;
                }
            }
            return VAR_9;
        }
    }
    FUNC_5(VAR_7, VAR_10->log, 0,
                  "still_have is %d, frag count is %d",
                  VAR_10->file.still_have, VAR_14);

    return VAR_9;
}
