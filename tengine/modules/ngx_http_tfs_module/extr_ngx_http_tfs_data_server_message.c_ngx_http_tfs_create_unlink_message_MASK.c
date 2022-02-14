
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_23__ {int version; int unlink_type; } ;
struct TYPE_21__ {int segment_index; } ;
struct TYPE_24__ {int pool; TYPE_5__ r_ctx; TYPE_3__ file; int log; } ;
typedef TYPE_6__ ngx_http_tfs_t ;
struct TYPE_22__ {int file_id; int block_id; } ;
struct TYPE_27__ {int ds_count; int version; int lease_id; int * ds_addrs; } ;
struct TYPE_25__ {TYPE_4__ segment_info; TYPE_9__ block_info; } ;
typedef TYPE_7__ ngx_http_tfs_segment_data_t ;
typedef int ngx_http_tfs_header_t ;
struct TYPE_19__ {size_t len; int crc; int id; int version; int flag; int type; } ;
struct TYPE_20__ {TYPE_1__ base_header; int file_id; int block_id; } ;
struct TYPE_26__ {TYPE_2__ header; int server_mode; } ;
typedef TYPE_8__ ngx_http_tfs_ds_unlink_request_t ;
typedef TYPE_9__ ngx_http_tfs_block_info_t ;
struct TYPE_17__ {TYPE_11__* buf; int * next; } ;
typedef TYPE_10__ ngx_chain_t ;
struct TYPE_18__ {size_t last; int * pos; } ;
typedef TYPE_11__ ngx_buf_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_10__* FUNC_0 (int ) ;
 TYPE_11__* FUNC_1 (int ,size_t) ;
 int FUNC_2 (int ,char const*,size_t) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,int ,char*,int ,int ,int ,int ) ;

__attribute__((used)) static ngx_chain_t *
FUNC_5(ngx_http_tfs_t *VAR_7,
    ngx_http_tfs_segment_data_t *VAR_8)
{
    u_char *VAR_9;
    size_t VAR_10;
    ngx_buf_t *VAR_11;
    ngx_uint_t VAR_12;
    ngx_chain_t *VAR_13;
    ngx_http_tfs_block_info_t *VAR_14;
    ngx_http_tfs_ds_unlink_request_t *VAR_15;

    VAR_14 = &VAR_8->block_info;
    VAR_10 = sizeof(ngx_http_tfs_ds_unlink_request_t) +

        sizeof(uint32_t) +

        VAR_14->ds_count * sizeof(uint64_t) +

        sizeof(uint64_t) * 3 +

        sizeof(uint32_t);

    VAR_11 = FUNC_1(VAR_7->pool, VAR_10);
    if (VAR_11 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_15 = (ngx_http_tfs_ds_unlink_request_t *) VAR_11->pos;

    VAR_15->header.base_header.type = VAR_5;
    VAR_15->header.base_header.flag = VAR_1;
    VAR_15->header.base_header.version = VAR_2;
    VAR_15->header.base_header.id = FUNC_3();
    VAR_15->header.base_header.len = VAR_10 - sizeof(ngx_http_tfs_header_t);
    VAR_15->header.block_id = VAR_8->segment_info.block_id;
    VAR_15->header.file_id = VAR_8->segment_info.file_id;
    VAR_15->server_mode = VAR_3;
    if (VAR_7->r_ctx.version == 1) {
        VAR_15->server_mode |= VAR_7->r_ctx.unlink_type;

    } else if (VAR_7->r_ctx.version == 2) {
        VAR_15->server_mode |= VAR_4;
    }

    VAR_9 = VAR_11->pos + sizeof(ngx_http_tfs_ds_unlink_request_t);


    *((uint32_t *) VAR_9) = 3 + VAR_14->ds_count;
    VAR_9 += sizeof(uint32_t);

    for (VAR_12 = 0; VAR_12 < VAR_14->ds_count; VAR_12++) {
        *((uint64_t *) VAR_9) = *((uint64_t *)&VAR_14->ds_addrs[VAR_12]);
        VAR_9 += sizeof(uint64_t);
    }


    *((uint64_t *) VAR_9) = -1;
    VAR_9 += sizeof(uint64_t);

    *((uint64_t *) VAR_9) = VAR_14->version;
    VAR_9 += sizeof(uint64_t);

    *((uint64_t *) VAR_9) = VAR_14->lease_id;
    VAR_9 += sizeof(uint64_t);


    *((uint32_t *) VAR_9) = VAR_0;

    VAR_15->header.base_header.crc = FUNC_2(VAR_1,
                                  (const char *) (&VAR_15->header.base_header + 1),
                                  (VAR_10 - sizeof(ngx_http_tfs_header_t)));

    VAR_11->last += VAR_10;

    FUNC_4(VAR_6, VAR_7->log, 0,
                  "unlink segment index %uD, block id: %uD, "
                  "file id: %uL, type: %i",
                  VAR_7->file.segment_index,
                  VAR_8->segment_info.block_id,
                  VAR_8->segment_info.file_id, VAR_7->r_ctx.unlink_type);

    VAR_13 = FUNC_0(VAR_7->pool);
    if (VAR_13 == ((void*)0)) {
        return ((void*)0);
    }
    VAR_13->next = ((void*)0);
    VAR_13->buf = VAR_11;
    return VAR_13;
}
