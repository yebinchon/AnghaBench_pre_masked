
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_uint_t ;
struct TYPE_4__ {int status; } ;
struct TYPE_5__ {int err_status; scalar_t__ http_version; TYPE_1__ headers_out; } ;
typedef TYPE_2__ ngx_http_request_t ;
typedef int ngx_http_log_op_t ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int *,char*,int) ;

__attribute__((used)) static u_char *
FUNC_1(ngx_http_request_t *VAR_1, u_char *VAR_2, ngx_http_log_op_t *VAR_3)
{
    ngx_uint_t VAR_4;

    if (VAR_1->err_status) {
        VAR_4 = VAR_1->err_status;

    } else if (VAR_1->headers_out.status) {
        VAR_4 = VAR_1->headers_out.status;

    } else if (VAR_1->http_version == VAR_0) {
        VAR_4 = 9;

    } else {
        VAR_4 = 0;
    }

    return FUNC_0(VAR_2, "%03ui", VAR_4);
}
