
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ngx_int_t ;
typedef int ngx_http_variable_value_t ;
struct TYPE_4__ {scalar_t__ msie; } ;
struct TYPE_5__ {TYPE_1__ headers_in; } ;
typedef TYPE_2__ ngx_http_request_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static ngx_int_t
FUNC_0(ngx_http_request_t *VAR_3, ngx_http_variable_value_t *VAR_4,
    uintptr_t VAR_5)
{
    if (VAR_3->headers_in.msie) {
        *VAR_4 = VAR_2;
        return VAR_0;
    }

    *VAR_4 = VAR_1;
    return VAR_0;
}
