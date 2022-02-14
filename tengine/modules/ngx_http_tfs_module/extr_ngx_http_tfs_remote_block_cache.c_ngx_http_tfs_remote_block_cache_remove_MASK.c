
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_pool_t ;
typedef int ngx_log_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_6__ {int tair_instance; } ;
typedef TYPE_1__ ngx_http_tfs_remote_block_cache_ctx_t ;
struct TYPE_7__ {int block_id; int ns_addr; } ;
typedef TYPE_2__ ngx_http_tfs_block_cache_key_t ;
struct TYPE_8__ {int len; int * data; int type; } ;
typedef TYPE_3__ ngx_http_tair_data_t ;
typedef int ngx_array_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int *,int,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int,int *) ;
 int VAR_4 ;
 int FUNC_3 (int ,int *,int *,int *,int ,void*) ;
 int FUNC_4 (int ,int *,int ,char*,int ,int ) ;

void
FUNC_5(
    ngx_http_tfs_remote_block_cache_ctx_t *VAR_5,
    ngx_pool_t *VAR_6, ngx_log_t *VAR_7, ngx_http_tfs_block_cache_key_t* VAR_8)
{
    ngx_int_t VAR_9;
    ngx_pool_t *VAR_10;
    ngx_array_t VAR_11;
    ngx_http_tair_data_t *VAR_12;

    FUNC_4(VAR_3, VAR_7, 0,
                   "remove remote block cache, ns addr: %uL, block id: %uD",
                   VAR_8->ns_addr, VAR_8->block_id);

    VAR_9 = FUNC_0(&VAR_11, VAR_6, 1, sizeof(ngx_http_tair_data_t));
    if (VAR_9 == VAR_0) {
        return;
    }
    VAR_12 = (ngx_http_tair_data_t*) FUNC_1(&VAR_11);

    VAR_12->type = VAR_1;
    VAR_12->data = (u_char *)VAR_8;
    VAR_12->len = VAR_2;




    VAR_10 = FUNC_2(4096, VAR_7);
    if (VAR_10 == ((void*)0)) {
        return;
    }

    (void) FUNC_3(
                                  VAR_5->tair_instance,
                                  VAR_10, VAR_7,
                                  &VAR_11,
                                  VAR_4,
                                  (void *)VAR_10);

}
