
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int u_char ;
typedef int ngx_pool_t ;
typedef int ngx_log_t ;
typedef int ngx_int_t ;
struct TYPE_10__ {int tair_instance; } ;
typedef TYPE_1__ ngx_http_tfs_remote_block_cache_ctx_t ;
struct TYPE_11__ {int ds_count; int ds_addrs; } ;
typedef TYPE_2__ ngx_http_tfs_block_cache_value_t ;
struct TYPE_12__ {int block_id; int ns_addr; } ;
typedef TYPE_3__ ngx_http_tfs_block_cache_key_t ;
struct TYPE_13__ {int len; void* type; int * data; } ;
typedef TYPE_4__ ngx_http_tair_data_t ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int,int *) ;
 int VAR_5 ;
 int FUNC_1 (int ,int *,int *,TYPE_4__*,TYPE_4__*,int ,int ,int ,void*) ;
 int FUNC_2 (int ,int *,int ,char*,int ,int ) ;
 int FUNC_3 (int *,int ,int) ;
 int * FUNC_4 (int *,int) ;

ngx_int_t
FUNC_5(
    ngx_http_tfs_remote_block_cache_ctx_t *VAR_6,
    ngx_pool_t *VAR_7, ngx_log_t *VAR_8,
    ngx_http_tfs_block_cache_key_t *VAR_9,
    ngx_http_tfs_block_cache_value_t *VAR_10)
{
    ngx_int_t VAR_11;
    ngx_pool_t *VAR_12;
    ngx_http_tair_data_t VAR_13, VAR_14;

    FUNC_2(VAR_4, VAR_8, 0,
                   "insert remote block cache, "
                   "ns addr: %uL, block id: %uD",
                   VAR_9->ns_addr, VAR_9->block_id);

    VAR_13.type = VAR_1;
    VAR_13.data = (u_char *)VAR_9;
    VAR_13.len = VAR_2;

    VAR_14.len = VAR_3
                      + VAR_10->ds_count * sizeof(uint64_t);
    VAR_14.data = FUNC_4(VAR_7, VAR_14.len);
    if (VAR_14.data == ((void*)0)) {
        return VAR_0;
    }
    *(uint32_t*)VAR_14.data = VAR_10->ds_count;
    FUNC_3(VAR_14.data+ VAR_3,
               VAR_10->ds_addrs, VAR_10->ds_count * sizeof(uint64_t));
    VAR_14.type = VAR_1;




    VAR_12 = FUNC_0(4096, VAR_8);
    if (VAR_12 == ((void*)0)) {
        return VAR_0;
    }

    VAR_11 = FUNC_1(
                                  VAR_6->tair_instance,
                                  VAR_12, VAR_8,
                                  &VAR_13, &VAR_14,
                                  0 , 0 ,
                                  VAR_5,
                                  (void *)VAR_12);

    return VAR_11;
}
