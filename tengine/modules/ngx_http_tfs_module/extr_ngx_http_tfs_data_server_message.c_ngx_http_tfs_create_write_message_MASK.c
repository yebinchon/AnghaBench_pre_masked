
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
typedef struct TYPE_23__ TYPE_11__ ;
typedef struct TYPE_22__ TYPE_10__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int u_char ;
typedef size_t ngx_uint_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_26__ {int segment_index; } ;
struct TYPE_28__ {TYPE_3__ file; int log; int pool; } ;
typedef TYPE_5__ ngx_http_tfs_t ;
struct TYPE_27__ {int crc; int file_id; int block_id; } ;
struct TYPE_32__ {int ds_count; int version; int lease_id; int * ds_addrs; } ;
struct TYPE_29__ {TYPE_4__ segment_info; TYPE_10__* data; scalar_t__ oper_size; int write_file_number; int oper_offset; TYPE_9__ block_info; } ;
typedef TYPE_6__ ngx_http_tfs_segment_data_t ;
typedef int ngx_http_tfs_header_t ;
struct TYPE_24__ {int crc; scalar_t__ len; int id; int version; int flag; int type; } ;
struct TYPE_25__ {TYPE_1__ base_header; int file_id; int block_id; } ;
struct TYPE_30__ {TYPE_2__ header; scalar_t__ length; int offset; int file_number; scalar_t__ is_server; } ;
typedef TYPE_7__ ngx_http_tfs_ds_write_request_t ;
struct TYPE_31__ {int crc; int data_crc; } ;
typedef TYPE_8__ ngx_http_tfs_crc_t ;
typedef TYPE_9__ ngx_http_tfs_block_info_t ;
struct TYPE_22__ {struct TYPE_22__* next; TYPE_11__* buf; } ;
typedef TYPE_10__ ngx_chain_t ;
struct TYPE_23__ {int* pos; size_t last; } ;
typedef TYPE_11__ ngx_buf_t ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_11__* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 size_t FUNC_2 (TYPE_11__*) ;
 TYPE_11__* FUNC_3 (int ,size_t) ;
 scalar_t__ FUNC_4 (TYPE_8__*,TYPE_11__*,size_t,int ) ;
 int FUNC_5 (int ,char const*,size_t) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int ,int ,char*,int ,int ,int ,int ,scalar_t__,int ) ;
 int FUNC_8 (TYPE_11__*,TYPE_11__*,int) ;

__attribute__((used)) static ngx_chain_t *
FUNC_9(ngx_http_tfs_t *VAR_6,
    ngx_http_tfs_segment_data_t *VAR_7)
{
    u_char *VAR_8, VAR_9;
    size_t VAR_10, VAR_11, VAR_12;
    uint32_t VAR_13;
    ngx_int_t VAR_14;
    ngx_buf_t *VAR_15;
    ngx_uint_t VAR_16;
    ngx_chain_t *VAR_17, *VAR_18, *VAR_19;
    ngx_http_tfs_crc_t VAR_20;
    ngx_http_tfs_block_info_t *VAR_21;
    ngx_http_tfs_ds_write_request_t *VAR_22;

    VAR_9 = 0;

    VAR_21 = &VAR_7->block_info;
    VAR_10 = sizeof(ngx_http_tfs_ds_write_request_t) +

        sizeof(uint32_t) +

        VAR_21->ds_count * sizeof(uint64_t) +

        sizeof(uint64_t) * 3 ;

    VAR_15 = FUNC_3(VAR_6->pool, VAR_10);
    if (VAR_15 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_22 = (ngx_http_tfs_ds_write_request_t *) VAR_15->pos;

    VAR_22->header.base_header.type = VAR_4;
    VAR_22->header.base_header.flag = VAR_2;
    VAR_22->header.base_header.version = VAR_3;
    VAR_22->header.base_header.id = FUNC_6();
    VAR_22->header.block_id = VAR_7->segment_info.block_id;
    VAR_22->header.file_id = VAR_7->segment_info.file_id;
    VAR_22->offset = VAR_7->oper_offset;
    VAR_22->is_server = 0;
    VAR_22->file_number = VAR_7->write_file_number;

    VAR_8 = VAR_15->pos + sizeof(ngx_http_tfs_ds_write_request_t);


    *((uint32_t *) VAR_8) = 3 + VAR_21->ds_count;
    VAR_8 += sizeof(uint32_t);

    for (VAR_16 = 0; VAR_16 < VAR_21->ds_count; VAR_16++) {
        *((uint64_t *) VAR_8) = *((uint64_t *)&VAR_21->ds_addrs[VAR_16]);
        VAR_8 += sizeof(uint64_t);
    }


    *((uint64_t *) VAR_8) = -1;
    VAR_8 += sizeof(uint64_t);

    *((uint64_t *) VAR_8) = VAR_21->version;
    VAR_8 += sizeof(uint64_t);

    *((uint64_t *) VAR_8) = VAR_21->lease_id;
    VAR_15->last += VAR_10;

    VAR_22->length = VAR_7->oper_size;

    VAR_13 = FUNC_5(VAR_2,
                           (const char *) (&VAR_22->header.base_header + 1),
                           (VAR_10 - sizeof(ngx_http_tfs_header_t)));

    VAR_17 = FUNC_1(VAR_6->pool);
    if (VAR_17 == ((void*)0)) {
        return ((void*)0);
    }
    VAR_19 = VAR_17;
    VAR_17->buf = VAR_15;

    VAR_11 = 0;
    VAR_18 = VAR_7->data;

    VAR_20.crc = VAR_13;
    VAR_20.data_crc = VAR_7->segment_info.crc;




    while (VAR_18) {
        VAR_12 = FUNC_2(VAR_18->buf);
        VAR_11 += VAR_12;

        VAR_15 = FUNC_0(VAR_6->pool);
        if (VAR_15 == ((void*)0)) {
            return ((void*)0);
        }

        FUNC_8(VAR_15, VAR_18->buf, sizeof(ngx_buf_t));

        if (VAR_11 > VAR_1) {

            VAR_11 -= VAR_12;
            VAR_12 = VAR_1 - VAR_11;
            VAR_11 = VAR_1;
            VAR_9 = 1;
        }

        VAR_14 = FUNC_4(&VAR_20, VAR_15, VAR_12, VAR_6->log);
        if (VAR_14 == VAR_0) {
            return ((void*)0);
        }

        VAR_17->next = FUNC_1(VAR_6->pool);
        if (VAR_17->next == ((void*)0)) {
            return ((void*)0);
        }

        VAR_17 = VAR_17->next;
        VAR_17->buf = VAR_15;

        if (VAR_9) {
            break;
        }

        VAR_18 = VAR_18->next;
    }
    VAR_17->next = ((void*)0);

    FUNC_7(VAR_5, VAR_6->log, 0,
                  "write segment index %uD, block id: %uD, file id: %uL, "
                  "offset: %D, length: %uD, crc: %uD",
                  VAR_6->file.segment_index, VAR_7->segment_info.block_id,
                  VAR_7->segment_info.file_id, VAR_22->offset,
                  VAR_22->length, VAR_20.data_crc);

    VAR_7->segment_info.crc = VAR_20.data_crc;
    VAR_22->header.base_header.len = VAR_10 - sizeof(ngx_http_tfs_header_t)
                                   + VAR_22->length;
    VAR_22->header.base_header.crc = VAR_20.crc;

    return VAR_19;
}
