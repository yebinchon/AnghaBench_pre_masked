
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_int_t ;
struct TYPE_9__ {int log; int pool; } ;
typedef TYPE_2__ ngx_http_tfs_t ;
struct TYPE_12__ {scalar_t__ len; int * data; } ;
struct TYPE_10__ {int dup_version; int file_ref_count; TYPE_5__ dup_file_name; TYPE_2__* data; } ;
typedef TYPE_3__ ngx_http_tfs_dedup_ctx_t ;
struct TYPE_11__ {int version; TYPE_1__* value; } ;
typedef TYPE_4__ ngx_http_tair_key_value_t ;
typedef int int32_t ;
struct TYPE_8__ {scalar_t__ len; int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (int ,int ,int ,char*,TYPE_5__*,int ,int ) ;
 int FUNC_2 (int *,int *,scalar_t__) ;
 int * FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(ngx_http_tair_key_value_t *VAR_6, ngx_int_t VAR_7,
    void *VAR_8)
{
    u_char *VAR_9;
    ngx_http_tfs_t *VAR_10;
    ngx_http_tfs_dedup_ctx_t *VAR_11;

    VAR_11 = VAR_8;
    VAR_10 = VAR_11->data;

    if (VAR_7 == VAR_1) {
        VAR_9 = VAR_6->value->data;
        if (VAR_9 != ((void*)0)
            && (VAR_6->value->len > VAR_3))
        {
            VAR_11->file_ref_count = *(int32_t *)VAR_9;
            VAR_9 += sizeof(int32_t);
            VAR_11->dup_file_name.len = VAR_6->value->len - sizeof(int32_t);
            VAR_11->dup_file_name.data = FUNC_3(VAR_10->pool,
                                                  VAR_11->dup_file_name.len);
            if (VAR_11->dup_file_name.data == ((void*)0)) {
                VAR_7 = VAR_0;

            } else {
                FUNC_2(VAR_11->dup_file_name.data, VAR_9, VAR_11->dup_file_name.len);
                VAR_7 = VAR_5;
            }
            VAR_11->dup_version = VAR_6->version;

        } else {
            VAR_7 = VAR_0;
        }
        FUNC_1(VAR_4, VAR_10->log, 0,
                       "get duplicate info: "
                       "file name: %V, file ref count: %d, dup_version: %d",
                       &VAR_11->dup_file_name,
                       VAR_11->file_ref_count,
                       VAR_11->dup_version);

    } else {
        VAR_7 = VAR_0;
        VAR_11->dup_version = VAR_2;
    }
    FUNC_0(VAR_11, VAR_7);
}
