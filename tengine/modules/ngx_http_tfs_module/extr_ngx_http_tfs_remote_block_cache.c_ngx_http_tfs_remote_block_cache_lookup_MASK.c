
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_pool_t ;
typedef int ngx_log_t ;
typedef int ngx_int_t ;
struct TYPE_7__ {int tair_instance; } ;
typedef TYPE_1__ ngx_http_tfs_remote_block_cache_ctx_t ;
struct TYPE_8__ {int block_id; int ns_addr; } ;
typedef TYPE_2__ ngx_http_tfs_block_cache_key_t ;
struct TYPE_9__ {int len; int * data; int type; } ;
typedef TYPE_3__ ngx_http_tair_data_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *,int *,TYPE_3__*,int ,void*) ;
 int FUNC_1 (int ,int *,int ,char*,int ,int ) ;

ngx_int_t
FUNC_2(
    ngx_http_tfs_remote_block_cache_ctx_t *VAR_4,
    ngx_pool_t *VAR_5, ngx_log_t *VAR_6, ngx_http_tfs_block_cache_key_t* VAR_7)
{
    ngx_int_t VAR_8;
    ngx_http_tair_data_t VAR_9;

    FUNC_1(VAR_2, VAR_6, 0,
                   "lookup remote block cache, ns addr: %uL, block id: %uD",
                   VAR_7->ns_addr, VAR_7->block_id);

    VAR_9.type = VAR_0;
    VAR_9.data = (u_char *)VAR_7;
    VAR_9.len = VAR_1;

    VAR_8 = FUNC_0(
                                    VAR_4->tair_instance,
                                    VAR_5, VAR_6,
                                    &VAR_9,
                                    VAR_3,
                                    (void *)VAR_4);

    return VAR_8;
}
