
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_char ;
typedef scalar_t__ ssize_t ;
typedef int ngx_pool_t ;
typedef int ngx_log_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_6__ {int md5_sumed; int tair_instance; int * tair_key; int file_data; } ;
typedef TYPE_1__ ngx_http_tfs_dedup_ctx_t ;
struct TYPE_7__ {int len; int * data; int type; } ;
typedef TYPE_2__ ngx_http_tair_data_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,int *,scalar_t__*,int *) ;
 scalar_t__ FUNC_2 (int ,int *,int *,TYPE_2__*,int ,TYPE_1__*) ;

ngx_int_t
FUNC_3(ngx_http_tfs_dedup_ctx_t *VAR_5,
    ngx_pool_t *VAR_6, ngx_log_t * VAR_7)
{
    u_char *VAR_8;
    ssize_t VAR_9;
    ngx_int_t VAR_10;
    ngx_http_tair_data_t VAR_11;

    VAR_9 = 0;

    VAR_10 = FUNC_1(VAR_5->file_data, VAR_5->tair_key, &VAR_9, VAR_7);
    if (VAR_10 == VAR_0) {
        return VAR_0;
    }

    VAR_8 = VAR_5->tair_key;
    VAR_8 += VAR_3;

    *(uint32_t *) VAR_8 = FUNC_0(VAR_9);

    VAR_11.type = VAR_1;
    VAR_11.data = VAR_5->tair_key;
    VAR_11.len = VAR_2;

    VAR_5->md5_sumed = 1;

    VAR_10 = FUNC_2(VAR_5->tair_instance, VAR_6, VAR_7,
                                      &VAR_11,
                                      VAR_4,
                                      VAR_5);

    return VAR_10;
}
