
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_4__ {scalar_t__ ns_addr; scalar_t__ block_id; } ;
typedef TYPE_1__ ngx_http_tfs_block_cache_key_t ;



ngx_int_t
FUNC_0(ngx_http_tfs_block_cache_key_t *VAR_0,
    ngx_http_tfs_block_cache_key_t *VAR_1)
{
    if (VAR_0->ns_addr == VAR_1->ns_addr) {

        if (VAR_0->block_id == VAR_1->block_id) {
            return 0;
        }

        if (VAR_0->block_id < VAR_1->block_id) {
            return -1;
        }

        return 1;
    }

    if (VAR_0->ns_addr < VAR_1->ns_addr) {
        return -1;
    }

    return 1;
}
