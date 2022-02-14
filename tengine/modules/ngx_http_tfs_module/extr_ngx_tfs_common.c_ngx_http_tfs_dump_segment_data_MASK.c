
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ngx_log_t ;
struct TYPE_4__ {int crc; int size; int offset; int file_id; int block_id; } ;
struct TYPE_5__ {int oper_size; int oper_offset; TYPE_1__ segment_info; } ;
typedef TYPE_2__ ngx_http_tfs_segment_data_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ,char*,int ,int ,int ,int ,int ,int ,int ) ;

void
FUNC_1(ngx_http_tfs_segment_data_t *VAR_1,
    ngx_log_t *VAR_2)
{
    FUNC_0(VAR_0, VAR_2, 0,
                   "=========dump segment data=========\n"
                   "block id: %uD, file id: %uL, "
                   "offset: %L, size: %uL, crc: %uD, "
                   "oper_offset: %uD, oper_size: %uL",
                   VAR_1->segment_info.block_id,
                   VAR_1->segment_info.file_id,
                   VAR_1->segment_info.offset,
                   VAR_1->segment_info.size,
                   VAR_1->segment_info.crc,
                   VAR_1->oper_offset,
                   VAR_1->oper_size);
}
