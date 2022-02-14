
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u_char ;
typedef scalar_t__ ngx_uint_t ;
typedef int ngx_pool_t ;
typedef int ngx_log_t ;
typedef int ngx_int_t ;
struct TYPE_12__ {int tair_instance; } ;
typedef TYPE_2__ ngx_http_tfs_remote_block_cache_ctx_t ;
struct TYPE_13__ {int block_id; int ns_addr; } ;
typedef TYPE_3__ ngx_http_tfs_block_cache_key_t ;
struct TYPE_11__ {int len; int * data; int type; } ;
struct TYPE_14__ {TYPE_1__ key; } ;
typedef TYPE_4__ ngx_http_tair_key_value_t ;
struct TYPE_15__ {scalar_t__ nelts; TYPE_3__* elts; } ;
typedef TYPE_5__ ngx_array_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_5__* FUNC_0 (int *,scalar_t__,int) ;
 scalar_t__ FUNC_1 (TYPE_5__*) ;
 int VAR_4 ;
 int FUNC_2 (int ,int *,int *,TYPE_5__*,int ,void*) ;
 int FUNC_3 (int ,int *,int ,char*,int ,int ) ;

ngx_int_t
FUNC_4(
    ngx_http_tfs_remote_block_cache_ctx_t *VAR_5,
    ngx_pool_t *VAR_6, ngx_log_t *VAR_7, ngx_array_t* VAR_8)
{
    ngx_int_t VAR_9;
    ngx_uint_t VAR_10;
    ngx_array_t *VAR_11;
    ngx_http_tair_key_value_t *VAR_12;
    ngx_http_tfs_block_cache_key_t *VAR_13;

    VAR_11 = FUNC_0(VAR_6, VAR_8->nelts,
                                sizeof(ngx_http_tair_key_value_t));
    if (VAR_11 == ((void*)0)) {
        return VAR_0;
    }

    VAR_13 = VAR_8->elts;
    for (VAR_10 = 0; VAR_10 < VAR_8->nelts; VAR_10++, VAR_13++) {
        FUNC_3(VAR_3, VAR_7, 0,
                       "batch lookup remote block cache, "
                       "ns addr: %uL, block id: %uD",
                       VAR_13->ns_addr, VAR_13->block_id);

        VAR_12 = (ngx_http_tair_key_value_t *)FUNC_1(VAR_11);
        if (VAR_12 == ((void*)0)) {
            return VAR_0;
        }

        VAR_12->key.type = VAR_1;
        VAR_12->key.data = (u_char *)VAR_13;
        VAR_12->key.len = VAR_2;
    }

    VAR_9 = FUNC_2(
                                   VAR_5->tair_instance,
                                   VAR_6, VAR_7,
                                   VAR_11,
                                   VAR_4,
                                   (void *)VAR_5);
    return VAR_9;
}
