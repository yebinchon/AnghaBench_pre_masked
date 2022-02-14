
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_10__ {int suffix; int seq_id; int block_id; } ;
struct TYPE_15__ {TYPE_2__ file; } ;
struct TYPE_11__ {TYPE_7__ fsname; } ;
struct TYPE_9__ {int segment_count; TYPE_6__* segment_data; } ;
struct TYPE_12__ {TYPE_3__ r_ctx; int log; TYPE_1__ file; int pool; } ;
typedef TYPE_4__ ngx_http_tfs_t ;
struct TYPE_13__ {int file_id; int block_id; scalar_t__ size; scalar_t__ offset; } ;
typedef TYPE_5__ ngx_http_tfs_segment_info_t ;
typedef int ngx_http_tfs_segment_data_t ;
struct TYPE_14__ {TYPE_5__ segment_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_7__) ;
 int FUNC_1 (int ,int ,int ,char*,int ,int ,int ,int ) ;
 TYPE_6__* FUNC_2 (int ,int) ;

ngx_int_t
FUNC_3(ngx_http_tfs_t *VAR_3)
{
    ngx_http_tfs_segment_info_t *VAR_4;

    VAR_3->file.segment_count = 1;

    if (VAR_3->file.segment_data == ((void*)0)) {
        VAR_3->file.segment_data = FUNC_2(VAR_3->pool,
                                           sizeof(ngx_http_tfs_segment_data_t));
        if (VAR_3->file.segment_data == ((void*)0)) {
            return VAR_0;
        }
    }

    VAR_4 = &VAR_3->file.segment_data[0].segment_info;
    VAR_4->block_id = VAR_3->r_ctx.fsname.file.block_id;
    VAR_4->file_id =
                           FUNC_0(VAR_3->r_ctx.fsname);
    VAR_4->offset = 0;
    VAR_4->size = 0;

    FUNC_1(VAR_1, VAR_3->log, 0,
                  "meta segment: block_id: %uD, fileid: %uL, "
                  "seq_id: %uD, suffix: %uD",
                  VAR_4->block_id,
                  VAR_4->file_id,
                  VAR_3->r_ctx.fsname.file.seq_id,
                  VAR_3->r_ctx.fsname.file.suffix);

    return VAR_2;
}
