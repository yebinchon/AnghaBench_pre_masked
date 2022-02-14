
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_5__ {int content_length_n; } ;
struct TYPE_6__ {TYPE_1__ headers_out; } ;
typedef TYPE_2__ ngx_http_request_t ;
typedef int ngx_http_lua_header_val_t ;


 int FUNC_0 (TYPE_2__*,int *,int *) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_http_request_t *VAR_0,
    ngx_http_lua_header_val_t *VAR_1, ngx_str_t *VAR_2)
{
    VAR_0->headers_out.content_length_n = -1;

    return FUNC_0(VAR_0, VAR_1, VAR_2);
}
