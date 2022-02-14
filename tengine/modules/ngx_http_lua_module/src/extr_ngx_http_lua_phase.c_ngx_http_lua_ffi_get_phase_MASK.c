
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ngx_http_request_t ;
struct TYPE_3__ {int context; } ;
typedef TYPE_1__ ngx_http_lua_ctx_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int ) ;
 int VAR_1 ;

int
FUNC_1(ngx_http_request_t *VAR_2, char **VAR_3)
{
    ngx_http_lua_ctx_t *VAR_4;

    VAR_4 = FUNC_0(VAR_2, VAR_1);
    if (VAR_4 == ((void*)0)) {
        *VAR_3 = "no request context";
        return VAR_0;
    }

    return VAR_4->context;
}
