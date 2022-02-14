
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int retry_curr_ns; int log; int pool; int block_cache_ctx; int name_server_addr; } ;
typedef TYPE_2__ ngx_http_tfs_t ;
struct TYPE_8__ {int block_id; } ;
struct TYPE_10__ {int cache_hit; TYPE_1__ segment_info; } ;
typedef TYPE_3__ ngx_http_tfs_segment_data_t ;
struct TYPE_11__ {int block_id; int ns_addr; } ;
typedef TYPE_4__ ngx_http_tfs_block_cache_key_t ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,TYPE_4__*,int ) ;

void
FUNC_1(ngx_http_tfs_t *VAR_2,
    ngx_http_tfs_segment_data_t *VAR_3)
{
    ngx_http_tfs_block_cache_key_t VAR_4;

    VAR_4.ns_addr = *((int64_t *)(&VAR_2->name_server_addr));
    VAR_4.block_id = VAR_3->segment_info.block_id;
    FUNC_0(&VAR_2->block_cache_ctx, VAR_2->pool, VAR_2->log,
                                    &VAR_4, VAR_3->cache_hit);


    if (VAR_3->cache_hit != VAR_0) {
        VAR_2->retry_curr_ns = VAR_1;
    }

    VAR_3->cache_hit = VAR_0;
}
