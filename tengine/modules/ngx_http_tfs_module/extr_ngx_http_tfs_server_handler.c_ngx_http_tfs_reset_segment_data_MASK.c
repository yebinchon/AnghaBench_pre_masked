
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_9__ {scalar_t__ segment_count; size_t segment_index; scalar_t__ curr_batch_count; TYPE_5__* segment_data; } ;
struct TYPE_7__ {int curr_lookup_cache; } ;
struct TYPE_10__ {TYPE_3__ file; TYPE_1__ block_cache_ctx; } ;
typedef TYPE_4__ ngx_http_tfs_t ;
struct TYPE_8__ {int * ds_addrs; } ;
struct TYPE_11__ {scalar_t__ ds_index; scalar_t__ ds_retry; TYPE_2__ block_info; int cache_hit; } ;
typedef TYPE_5__ ngx_http_tfs_segment_data_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

void
FUNC_0(ngx_http_tfs_t *VAR_3)
{
    uint32_t VAR_4, VAR_5;
    ngx_http_tfs_segment_data_t *VAR_6;


    VAR_3->block_cache_ctx.curr_lookup_cache = VAR_0;

    VAR_4 = VAR_3->file.segment_count - VAR_3->file.segment_index;
    if (VAR_4 > VAR_1) {
        VAR_4 = VAR_1;
    }

    VAR_6 = &VAR_3->file.segment_data[VAR_3->file.segment_index];
    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++, VAR_6++) {
        VAR_6->cache_hit = VAR_2;
        VAR_6->block_info.ds_addrs = ((void*)0);
        VAR_6->ds_retry = 0;
        VAR_6->ds_index = 0;
    }

    VAR_3->file.curr_batch_count = 0;
}
