
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ len; int data; } ;
typedef TYPE_1__ ngx_str_t ;
typedef int ngx_log_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_8__ {scalar_t__ code; scalar_t__ error_len; int error_str; } ;
typedef TYPE_2__ ngx_http_tfs_status_msg_t ;
struct TYPE_9__ {scalar_t__ pos; } ;
typedef TYPE_3__ ngx_buf_t ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int *,int ,char*,TYPE_1__*,...) ;

ngx_int_t
FUNC_1(ngx_buf_t *VAR_5, ngx_str_t *VAR_6, ngx_log_t *VAR_7)
{
    int32_t VAR_8, VAR_9;
    ngx_str_t VAR_10;
    ngx_http_tfs_status_msg_t *VAR_11;

    VAR_11 = (ngx_http_tfs_status_msg_t *) VAR_5->pos;
    VAR_10.len = 0;
    VAR_8 = VAR_11->code;

    if (VAR_8 != VAR_1) {
        VAR_9 = VAR_11->error_len;
        if (VAR_9 > 0) {
            VAR_10.data = VAR_11->error_str;
            VAR_10.len = VAR_9;
        }

        FUNC_0(VAR_2, VAR_7, 0,
                      "%V failed error code (%d) err_msg(%V)",
                      VAR_6, VAR_8, &VAR_10);
        if (VAR_8 <= VAR_0) {
            return VAR_8;
        }

        return VAR_0;
    }

    FUNC_0(VAR_3, VAR_7, 0, "%V success ", VAR_6);
    return VAR_4;
}
