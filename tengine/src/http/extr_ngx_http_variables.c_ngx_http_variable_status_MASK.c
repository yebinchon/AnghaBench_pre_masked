
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ngx_uint_t ;
typedef int ngx_int_t ;
struct TYPE_7__ {int valid; scalar_t__ not_found; scalar_t__ no_cacheable; int * data; int * len; } ;
typedef TYPE_2__ ngx_http_variable_value_t ;
struct TYPE_6__ {int status; } ;
struct TYPE_8__ {int err_status; scalar_t__ http_version; TYPE_1__ headers_out; int pool; } ;
typedef TYPE_3__ ngx_http_request_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int ,int ) ;
 int * FUNC_1 (int *,char*,int) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_http_request_t *VAR_4,
    ngx_http_variable_value_t *VAR_5, uintptr_t VAR_6)
{
    ngx_uint_t VAR_7;

    VAR_5->data = FUNC_0(VAR_4->pool, VAR_2);
    if (VAR_5->data == ((void*)0)) {
        return VAR_0;
    }

    if (VAR_4->err_status) {
        VAR_7 = VAR_4->err_status;

    } else if (VAR_4->headers_out.status) {
        VAR_7 = VAR_4->headers_out.status;

    } else if (VAR_4->http_version == VAR_1) {
        VAR_7 = 9;

    } else {
        VAR_7 = 0;
    }

    VAR_5->len = FUNC_1(VAR_5->data, "%03ui", VAR_7) - VAR_5->data;
    VAR_5->valid = 1;
    VAR_5->no_cacheable = 0;
    VAR_5->not_found = 0;

    return VAR_3;
}
