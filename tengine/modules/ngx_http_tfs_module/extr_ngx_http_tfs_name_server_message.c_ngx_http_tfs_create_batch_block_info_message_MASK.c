
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


typedef scalar_t__ uint32_t ;
typedef scalar_t__ ngx_uint_t ;
struct TYPE_13__ {scalar_t__ segment_count; size_t segment_index; int open_mode; TYPE_5__* segment_data; } ;
struct TYPE_16__ {int pool; TYPE_1__ file; } ;
typedef TYPE_4__ ngx_http_tfs_t ;
struct TYPE_14__ {scalar_t__ block_id; } ;
struct TYPE_17__ {scalar_t__ cache_hit; TYPE_2__ segment_info; } ;
typedef TYPE_5__ ngx_http_tfs_segment_data_t ;
struct TYPE_15__ {size_t len; int crc; int id; int version; int flag; int type; } ;
struct TYPE_18__ {int mode; TYPE_3__ header; scalar_t__* block_ids; scalar_t__ block_count; } ;
typedef TYPE_6__ ngx_http_tfs_ns_batch_block_info_request_t ;
typedef int ngx_http_tfs_header_t ;
struct TYPE_19__ {int * next; TYPE_8__* buf; } ;
typedef TYPE_7__ ngx_chain_t ;
struct TYPE_20__ {size_t last; scalar_t__ pos; } ;
typedef TYPE_8__ ngx_buf_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_7__* FUNC_0 (int ) ;
 TYPE_8__* FUNC_1 (int ,size_t) ;
 int FUNC_2 (int ,char const*,size_t) ;
 int FUNC_3 () ;

__attribute__((used)) static ngx_chain_t *
FUNC_4(ngx_http_tfs_t *VAR_6)
{
    size_t VAR_7;
    uint32_t VAR_8, VAR_9;
    ngx_uint_t VAR_10, VAR_11;
    ngx_buf_t *VAR_12;
    ngx_chain_t *VAR_13;
    ngx_http_tfs_segment_data_t *VAR_14;
    ngx_http_tfs_ns_batch_block_info_request_t *VAR_15;

    VAR_8 = VAR_6->file.segment_count - VAR_6->file.segment_index;
    if (VAR_8 > VAR_1) {
        VAR_8 = VAR_1;
    }

    VAR_9 = VAR_8;
    if (VAR_6->file.open_mode & VAR_3) {
        VAR_14 = &VAR_6->file.segment_data[VAR_6->file.segment_index];
        for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++, VAR_14++) {
            if (VAR_14->cache_hit != VAR_2) {
                VAR_9--;
            }
        }
    }

    VAR_7 = sizeof(ngx_http_tfs_ns_batch_block_info_request_t)
            + VAR_9 * sizeof(uint32_t);

    VAR_12 = FUNC_1(VAR_6->pool, VAR_7);
    if (VAR_12 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_15 = (ngx_http_tfs_ns_batch_block_info_request_t *) VAR_12->pos;

    VAR_15->header.type = VAR_0;
    VAR_15->header.len = VAR_7 - sizeof(ngx_http_tfs_header_t);
    VAR_15->header.flag = VAR_4;
    VAR_15->header.version = VAR_5;
    VAR_15->header.id = FUNC_3();
    VAR_15->mode = VAR_6->file.open_mode;
    VAR_15->block_count = VAR_9;
    VAR_14 = &VAR_6->file.segment_data[VAR_6->file.segment_index];
    for (VAR_10 = 0, VAR_11 = 0; VAR_10 < VAR_8; VAR_10++, VAR_14++) {
        if (VAR_6->file.open_mode & VAR_3) {
            if (VAR_14->cache_hit == VAR_2) {
                VAR_15->block_ids[VAR_11++] = VAR_14->segment_info.block_id;
            }

        } else {
            VAR_15->block_ids[VAR_10] = 0;
        }
    }
    VAR_15->header.crc = FUNC_2(VAR_4,
                                       (const char *) (&VAR_15->header + 1),
                                       VAR_15->header.len);

    VAR_12->last += VAR_7;

    VAR_13 = FUNC_0(VAR_6->pool);
    if (VAR_13 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_13->buf = VAR_12;
    VAR_13->next = ((void*)0);

    return VAR_13;
}
