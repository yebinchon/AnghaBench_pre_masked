
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ngx_pool_t ;
typedef int ngx_log_t ;
typedef int ngx_http_tfs_block_cache_value_t ;
typedef int ngx_http_tfs_block_cache_key_t ;
struct TYPE_3__ {int use_cache; int local_ctx; int remote_ctx; } ;
typedef TYPE_1__ ngx_http_tfs_block_cache_ctx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int *,int *) ;
 int FUNC_1 (int *,int *,int *,int *,int *) ;

void
FUNC_2(ngx_http_tfs_block_cache_ctx_t *VAR_2,
    ngx_pool_t *VAR_3, ngx_log_t *VAR_4, ngx_http_tfs_block_cache_key_t *VAR_5,
    ngx_http_tfs_block_cache_value_t *VAR_6)
{
    if (VAR_2->use_cache & VAR_1) {
        FUNC_1(&VAR_2->remote_ctx,
                                               VAR_3, VAR_4, VAR_5, VAR_6);
    }

    if (VAR_2->use_cache & VAR_0) {
        FUNC_0(VAR_2->local_ctx, VAR_4, VAR_5, VAR_6);
    }
}
