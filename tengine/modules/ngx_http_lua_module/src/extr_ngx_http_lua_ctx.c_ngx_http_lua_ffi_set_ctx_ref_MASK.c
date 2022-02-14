
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ngx_http_request_t ;
struct TYPE_3__ {int ctx_ref; } ;
typedef TYPE_1__ ngx_http_lua_ctx_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_0 (int *,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *,int) ;

int
FUNC_2(ngx_http_request_t *VAR_4, int VAR_5)
{
    ngx_http_lua_ctx_t *VAR_6;

    VAR_6 = FUNC_0(VAR_4, VAR_3);
    if (VAR_6 == ((void*)0)) {
        return VAR_1;
    }

    VAR_6->ctx_ref = VAR_5;

    if (FUNC_1(VAR_4, VAR_5) != VAR_2) {
        return VAR_0;
    }

    return VAR_2;
}
