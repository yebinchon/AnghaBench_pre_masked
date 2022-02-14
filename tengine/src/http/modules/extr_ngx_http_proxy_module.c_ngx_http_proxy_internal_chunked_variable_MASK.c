
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_int_t ;
struct TYPE_5__ {int not_found; int valid; int len; int * data; scalar_t__ no_cacheable; } ;
typedef TYPE_1__ ngx_http_variable_value_t ;
typedef int ngx_http_request_t ;
struct TYPE_6__ {int internal_chunked; } ;
typedef TYPE_2__ ngx_http_proxy_ctx_t ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int *,int ) ;
 int VAR_1 ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_http_request_t *VAR_2,
    ngx_http_variable_value_t *VAR_3, uintptr_t VAR_4)
{
    ngx_http_proxy_ctx_t *VAR_5;

    VAR_5 = FUNC_0(VAR_2, VAR_1);

    if (VAR_5 == ((void*)0) || !VAR_5->internal_chunked) {
        VAR_3->not_found = 1;
        return VAR_0;
    }

    VAR_3->valid = 1;
    VAR_3->no_cacheable = 0;
    VAR_3->not_found = 0;

    VAR_3->data = (u_char *) "chunked";
    VAR_3->len = sizeof("chunked") - 1;

    return VAR_0;
}
