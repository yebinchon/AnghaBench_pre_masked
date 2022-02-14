
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


typedef scalar_t__ uint8_t ;
struct TYPE_17__ {int segment_index; } ;
struct TYPE_19__ {int pool; TYPE_3__ file; int log; } ;
typedef TYPE_5__ ngx_http_tfs_t ;
struct TYPE_18__ {int file_id; int block_id; } ;
struct TYPE_20__ {TYPE_4__ segment_info; int oper_size; int oper_offset; } ;
typedef TYPE_6__ ngx_http_tfs_segment_data_t ;
typedef int ngx_http_tfs_header_t ;
struct TYPE_15__ {size_t len; int crc; int id; int version; int flag; int type; } ;
struct TYPE_16__ {TYPE_1__ base_header; int file_id; int block_id; } ;
struct TYPE_21__ {int length; int offset; TYPE_2__ header; scalar_t__ flag; } ;
typedef TYPE_7__ ngx_http_tfs_ds_read_request_t ;
struct TYPE_22__ {int * next; TYPE_9__* buf; } ;
typedef TYPE_8__ ngx_chain_t ;
struct TYPE_23__ {size_t last; scalar_t__ pos; } ;
typedef TYPE_9__ ngx_buf_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 TYPE_8__* FUNC_0 (int ) ;
 TYPE_9__* FUNC_1 (int ,size_t) ;
 int FUNC_2 (int ,char const*,size_t) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,int ,char*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static ngx_chain_t *
FUNC_5(ngx_http_tfs_t *VAR_7,
    ngx_http_tfs_segment_data_t *VAR_8, uint8_t VAR_9,
    uint8_t VAR_10)
{
    size_t VAR_11;
    ngx_buf_t *VAR_12;
    ngx_chain_t *VAR_13;
    ngx_http_tfs_ds_read_request_t *VAR_14;

    VAR_11 = sizeof(ngx_http_tfs_ds_read_request_t);

    VAR_12 = FUNC_1(VAR_7->pool, VAR_11);
    if (VAR_12 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_14 = (ngx_http_tfs_ds_read_request_t *) VAR_12->pos;

    if (VAR_9 == VAR_2) {
        VAR_14->header.base_header.type = VAR_3;

    } else if (VAR_9 == VAR_5) {
        VAR_14->header.base_header.type = VAR_4;
    }
    VAR_14->header.base_header.flag = VAR_0;
    VAR_14->header.base_header.version = VAR_1;
    VAR_14->header.base_header.id = FUNC_3();
    VAR_14->header.base_header.len = VAR_11 - sizeof(ngx_http_tfs_header_t);
    VAR_14->header.block_id = VAR_8->segment_info.block_id;
    VAR_14->header.file_id = VAR_8->segment_info.file_id;
    VAR_14->offset = VAR_8->oper_offset;
    VAR_14->length = VAR_8->oper_size;
    VAR_14->flag = VAR_10;
    VAR_14->header.base_header.crc = FUNC_2(VAR_0,
                                  (const char *) (&VAR_14->header.base_header + 1),
                                  (VAR_11 - sizeof(ngx_http_tfs_header_t)));

    VAR_12->last += VAR_11;

    FUNC_4(VAR_6, VAR_7->log, 0,
                  "read segment index %uD, block id: %uD, "
                  "file id: %uL, offset: %D, length: %uD",
                  VAR_7->file.segment_index,
                  VAR_8->segment_info.block_id,
                  VAR_8->segment_info.file_id, VAR_14->offset,
                  VAR_14->length);

    VAR_13 = FUNC_0(VAR_7->pool);
    if (VAR_13 == ((void*)0)) {
        return ((void*)0);
    }
    VAR_13->buf = VAR_12;
    VAR_13->next = ((void*)0);

    return VAR_13;
}
