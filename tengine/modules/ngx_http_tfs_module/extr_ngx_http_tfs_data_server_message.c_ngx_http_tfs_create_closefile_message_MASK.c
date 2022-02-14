
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_18__ {int pool; } ;
typedef TYPE_4__ ngx_http_tfs_t ;
struct TYPE_15__ {int crc; int file_id; int block_id; } ;
struct TYPE_21__ {int ds_count; int version; int lease_id; int * ds_addrs; } ;
struct TYPE_19__ {int write_file_number; TYPE_1__ segment_info; TYPE_7__ block_info; } ;
typedef TYPE_5__ ngx_http_tfs_segment_data_t ;
typedef int ngx_http_tfs_header_t ;
struct TYPE_16__ {size_t len; int crc; int id; int version; int flag; int type; } ;
struct TYPE_17__ {TYPE_2__ base_header; int file_id; int block_id; } ;
struct TYPE_20__ {TYPE_3__ header; int file_number; int crc; int mode; } ;
typedef TYPE_6__ ngx_http_tfs_ds_close_request_t ;
typedef TYPE_7__ ngx_http_tfs_block_info_t ;
struct TYPE_22__ {TYPE_9__* buf; int * next; } ;
typedef TYPE_8__ ngx_chain_t ;
struct TYPE_23__ {size_t last; int * pos; } ;
typedef TYPE_9__ ngx_buf_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_8__* FUNC_0 (int ) ;
 TYPE_9__* FUNC_1 (int ,size_t) ;
 int FUNC_2 (int ,char const*,size_t) ;
 int FUNC_3 () ;

__attribute__((used)) static ngx_chain_t *
FUNC_4(ngx_http_tfs_t *VAR_5,
    ngx_http_tfs_segment_data_t *VAR_6)
{
    u_char *VAR_7;
    size_t VAR_8;
    ngx_buf_t *VAR_9;
    ngx_uint_t VAR_10;
    ngx_chain_t *VAR_11;
    ngx_http_tfs_block_info_t *VAR_12;
    ngx_http_tfs_ds_close_request_t *VAR_13;

    VAR_12 = &VAR_6->block_info;
    VAR_8 = sizeof(ngx_http_tfs_ds_close_request_t) +

        sizeof(uint32_t) +

        VAR_12->ds_count * sizeof(uint64_t) +

        sizeof(uint64_t) * 3 +

        sizeof(uint32_t) * 2 +

        sizeof(uint32_t);

    VAR_9 = FUNC_1(VAR_5->pool, VAR_8);
    if (VAR_9 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_13 = (ngx_http_tfs_ds_close_request_t *) VAR_9->pos;

    VAR_13->header.base_header.type = VAR_1;
    VAR_13->header.base_header.flag = VAR_3;
    VAR_13->header.base_header.version = VAR_4;
    VAR_13->header.base_header.id = FUNC_3();
    VAR_13->header.base_header.len = VAR_8 - sizeof(ngx_http_tfs_header_t);
    VAR_13->header.block_id = VAR_6->segment_info.block_id;
    VAR_13->header.file_id = VAR_6->segment_info.file_id;
    VAR_13->mode = VAR_0;
    VAR_13->crc = VAR_6->segment_info.crc;
    VAR_13->file_number = VAR_6->write_file_number;

    VAR_7 = VAR_9->pos + sizeof(ngx_http_tfs_ds_close_request_t);


    *((uint32_t *) VAR_7) = 3 + VAR_12->ds_count;
    VAR_7 += sizeof(uint32_t);

    for (VAR_10 = 0; VAR_10 < VAR_12->ds_count; VAR_10++) {
        *((uint64_t *) VAR_7) = *((uint64_t *)&VAR_12->ds_addrs[VAR_10]);
        VAR_7 += sizeof(uint64_t);
    }


    *((uint64_t *) VAR_7) = -1;
    VAR_7 += sizeof(uint64_t);

    *((uint64_t *) VAR_7) = VAR_12->version;
    VAR_7 += sizeof(uint64_t);

    *((uint64_t *) VAR_7) = VAR_12->lease_id;
    VAR_7 += sizeof(uint64_t);


    *((uint32_t *) VAR_7) = 0;
    VAR_7 += sizeof(uint32_t);

    *((uint32_t *) VAR_7) = 0;
    VAR_7 += sizeof(uint32_t);

    *((uint32_t *) VAR_7) = VAR_2;

    VAR_13->header.base_header.crc = FUNC_2(VAR_3,
                                  (const char *) (&VAR_13->header.base_header + 1),
                                  (VAR_8 - sizeof(ngx_http_tfs_header_t)));

    VAR_9->last += VAR_8;

    VAR_11 = FUNC_0(VAR_5->pool);
    if (VAR_11 == ((void*)0)) {
        return ((void*)0);
    }
    VAR_11->next = ((void*)0);
    VAR_11->buf = VAR_9;
    return VAR_11;
}
