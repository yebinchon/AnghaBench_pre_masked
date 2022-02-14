
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ngx_str_t ;
typedef int ngx_int_t ;
typedef int ngx_http_variable_value_t ;
struct TYPE_5__ {int part; } ;
struct TYPE_6__ {TYPE_1__ headers; } ;
struct TYPE_7__ {TYPE_2__ headers_in; } ;
typedef TYPE_3__ ngx_http_request_t ;


 int FUNC_0 (int *,int *,int *,int) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_http_request_t *VAR_0,
    ngx_http_variable_value_t *VAR_1, uintptr_t VAR_2)
{
    return FUNC_0(VAR_1, (ngx_str_t *) VAR_2,
                                            &VAR_0->headers_in.headers.part,
                                            sizeof("http_") - 1);
}
