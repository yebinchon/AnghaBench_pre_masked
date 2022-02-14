
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_char ;
typedef scalar_t__ ssize_t ;
typedef int ngx_pool_t ;
typedef int ngx_log_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_10__ {int len; int * data; } ;
struct TYPE_8__ {int md5_sumed; int dup_version; int tair_instance; int file_ref_count; TYPE_3__ dup_file_name; int * tair_key; int file_data; } ;
typedef TYPE_1__ ngx_http_tfs_dedup_ctx_t ;
struct TYPE_9__ {int len; void* type; int * data; } ;
typedef TYPE_2__ ngx_http_tair_data_t ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ,int *,scalar_t__*,int *) ;
 scalar_t__ FUNC_2 (int ,int *,int *,TYPE_2__*,TYPE_2__*,int ,int ,int ,TYPE_1__*) ;
 int FUNC_3 (int ,int *,int ,char*,TYPE_3__*,int ,int ) ;
 int FUNC_4 (int *,int *,int) ;
 int * FUNC_5 (int *,int) ;

ngx_int_t
FUNC_6(ngx_http_tfs_dedup_ctx_t *VAR_7,
    ngx_pool_t *VAR_8, ngx_log_t * VAR_9)
{
    u_char *VAR_10;
    ssize_t VAR_11;
    ngx_int_t VAR_12;
    ngx_http_tair_data_t VAR_13, VAR_14;

    VAR_11 = 0;

    if (!VAR_7->md5_sumed) {
        VAR_12 = FUNC_1(VAR_7->file_data, VAR_7->tair_key, &VAR_11,
                                  VAR_9);
        if (VAR_12 == VAR_0) {
            return VAR_0;
        }

        VAR_10 = VAR_7->tair_key;
        VAR_10 += VAR_4;

        *(uint32_t *) VAR_10 = FUNC_0(VAR_11);
        VAR_7->md5_sumed = 1;
    }

    VAR_13.len = VAR_2;
    VAR_13.data = VAR_7->tair_key;
    VAR_13.type = VAR_1;

    VAR_14.len =
        VAR_3 + VAR_7->dup_file_name.len;
    VAR_14.data = FUNC_5(VAR_8, VAR_14.len);
    if (VAR_14.data == ((void*)0)) {
        return VAR_0;
    }
    FUNC_4(VAR_14.data, &VAR_7->file_ref_count,
               VAR_3);
    FUNC_4(VAR_14.data + VAR_3,
               VAR_7->dup_file_name.data, VAR_7->dup_file_name.len);
    VAR_14.type = VAR_1;
    FUNC_3(VAR_5, VAR_9, 0,
                   "set duplicate info: "
                   "file name: %V, file ref count: %d, dup_version: %d",
                   &VAR_7->dup_file_name,
                   VAR_7->file_ref_count,
                   VAR_7->dup_version);

    VAR_12 = FUNC_2(VAR_7->tair_instance, VAR_8, VAR_9,
                                      &VAR_13, &VAR_14, 0 ,
                                      VAR_7->dup_version,
                                      VAR_6, VAR_7);

    return VAR_12;
}
