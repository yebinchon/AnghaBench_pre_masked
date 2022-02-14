
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ngx_pool_t ;
typedef int ngx_log_t ;
typedef scalar_t__ ngx_int_t ;
typedef int ngx_http_tfs_block_cache_value_t ;
typedef int ngx_http_tfs_block_cache_key_t ;
struct TYPE_3__ {int curr_lookup_cache; int use_cache; int remote_ctx; int local_ctx; } ;
typedef TYPE_1__ ngx_http_tfs_block_cache_ctx_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ,int *,int *,int *,int *) ;
 scalar_t__ FUNC_1 (int *,int *,int *,int *) ;

ngx_int_t
FUNC_2(ngx_http_tfs_block_cache_ctx_t *VAR_5,
    ngx_pool_t *VAR_6, ngx_log_t *VAR_7, ngx_http_tfs_block_cache_key_t *VAR_8,
    ngx_http_tfs_block_cache_value_t *VAR_9)
{
    ngx_int_t VAR_10 = VAR_0;

    if (VAR_5->curr_lookup_cache == VAR_1) {

        VAR_5->curr_lookup_cache = VAR_3;

        if (VAR_5->use_cache & VAR_1) {
            VAR_10 = FUNC_0(VAR_5->local_ctx,
                                                       VAR_6, VAR_7, VAR_8, VAR_9);

            if (VAR_10 == VAR_4) {
                return VAR_10;
            }
        }
    }

    if (VAR_5->curr_lookup_cache == VAR_3) {

        VAR_5->curr_lookup_cache = VAR_2;

        if (VAR_5->use_cache & VAR_3) {
            VAR_10 = FUNC_1(&VAR_5->remote_ctx,
                                                        VAR_6, VAR_7, VAR_8);
        }
    }

    return VAR_10;
}
