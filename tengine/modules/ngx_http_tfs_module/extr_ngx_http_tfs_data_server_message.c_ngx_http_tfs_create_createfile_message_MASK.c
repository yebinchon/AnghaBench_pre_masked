
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {int pool; } ;
typedef TYPE_3__ ngx_http_tfs_t ;
struct TYPE_13__ {int file_id; int block_id; } ;
struct TYPE_16__ {TYPE_1__ segment_info; } ;
typedef TYPE_4__ ngx_http_tfs_segment_data_t ;
typedef int ngx_http_tfs_header_t ;
struct TYPE_14__ {size_t len; int crc; int id; int version; int flag; int type; } ;
struct TYPE_17__ {TYPE_2__ base_header; int file_id; int block_id; } ;
typedef TYPE_5__ ngx_http_tfs_ds_msg_header_t ;
struct TYPE_18__ {int * next; TYPE_7__* buf; } ;
typedef TYPE_6__ ngx_chain_t ;
struct TYPE_19__ {size_t last; scalar_t__ pos; } ;
typedef TYPE_7__ ngx_buf_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_6__* FUNC_0 (int ) ;
 TYPE_7__* FUNC_1 (int ,size_t) ;
 int FUNC_2 (int ,char const*,size_t) ;
 int FUNC_3 () ;

__attribute__((used)) static ngx_chain_t *
FUNC_4(ngx_http_tfs_t *VAR_3,
    ngx_http_tfs_segment_data_t *VAR_4)
{
    size_t VAR_5;
    ngx_buf_t *VAR_6;
    ngx_chain_t *VAR_7;
    ngx_http_tfs_ds_msg_header_t *VAR_8;

    VAR_5 = sizeof(ngx_http_tfs_ds_msg_header_t);

    VAR_6 = FUNC_1(VAR_3->pool, VAR_5);
    if (VAR_6 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_8 = (ngx_http_tfs_ds_msg_header_t *) VAR_6->pos;

    VAR_8->base_header.type = VAR_0;
    VAR_8->base_header.len = VAR_5 - sizeof(ngx_http_tfs_header_t);
    VAR_8->base_header.flag = VAR_1;
    VAR_8->base_header.version = VAR_2;
    VAR_8->base_header.id = FUNC_3();
    VAR_8->block_id = VAR_4->segment_info.block_id;
    VAR_8->file_id = VAR_4->segment_info.file_id;

    VAR_8->base_header.crc = FUNC_2(VAR_1,
                                         (const char *) (&VAR_8->base_header + 1),
                                         VAR_8->base_header.len);

    VAR_6->last += VAR_5;

    VAR_7 = FUNC_0(VAR_3->pool);
    if (VAR_7 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_7->buf = VAR_6;
    VAR_7->next = ((void*)0);
    return VAR_7;
}
