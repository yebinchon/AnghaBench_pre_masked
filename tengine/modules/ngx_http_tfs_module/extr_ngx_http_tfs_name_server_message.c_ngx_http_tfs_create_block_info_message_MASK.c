
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int open_mode; } ;
struct TYPE_17__ {int pool; TYPE_1__ file; } ;
typedef TYPE_4__ ngx_http_tfs_t ;
struct TYPE_15__ {int block_id; } ;
struct TYPE_18__ {TYPE_2__ segment_info; } ;
typedef TYPE_5__ ngx_http_tfs_segment_data_t ;
struct TYPE_16__ {size_t len; int crc; int id; int version; int flag; int type; } ;
struct TYPE_19__ {TYPE_3__ header; scalar_t__ fs_count; int block_id; int mode; } ;
typedef TYPE_6__ ngx_http_tfs_ns_block_info_request_t ;
typedef int ngx_http_tfs_header_t ;
struct TYPE_20__ {int * next; TYPE_8__* buf; } ;
typedef TYPE_7__ ngx_chain_t ;
struct TYPE_21__ {size_t last; scalar_t__ pos; } ;
typedef TYPE_8__ ngx_buf_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_7__* FUNC_0 (int ) ;
 TYPE_8__* FUNC_1 (int ,size_t) ;
 int FUNC_2 (int ,char const*,size_t) ;
 int FUNC_3 () ;

__attribute__((used)) static ngx_chain_t *
FUNC_4(ngx_http_tfs_t *VAR_3,
    ngx_http_tfs_segment_data_t *VAR_4)
{
    size_t VAR_5;
    ngx_buf_t *VAR_6;
    ngx_chain_t *VAR_7;
    ngx_http_tfs_ns_block_info_request_t *VAR_8;

    VAR_5 = sizeof(ngx_http_tfs_ns_block_info_request_t);

    VAR_6 = FUNC_1(VAR_3->pool, VAR_5);
    if (VAR_6 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_8 = (ngx_http_tfs_ns_block_info_request_t *) VAR_6->pos;

    VAR_8->header.type = VAR_0;
    VAR_8->header.len = VAR_5 - sizeof(ngx_http_tfs_header_t);
    VAR_8->header.flag = VAR_1;
    VAR_8->header.version = VAR_2;
    VAR_8->header.id = FUNC_3();
    VAR_8->mode = VAR_3->file.open_mode;
    VAR_8->block_id = VAR_4->segment_info.block_id;
    VAR_8->fs_count = 0;

    VAR_8->header.crc = FUNC_2(VAR_1,
        (const char *) (&VAR_8->header + 1), VAR_8->header.len);

    VAR_6->last += VAR_5;

    VAR_7 = FUNC_0(VAR_3->pool);
    if (VAR_7 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_7->buf = VAR_6;
    VAR_7->next = ((void*)0);

    return VAR_7;
}
