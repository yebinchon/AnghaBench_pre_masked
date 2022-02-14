
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ngx_http_request_t ;
struct TYPE_3__ {int (* resume_handler ) (int *) ;} ;
typedef TYPE_1__ ngx_http_lua_ctx_t ;


 TYPE_1__* FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;

void
FUNC_2(ngx_http_request_t *VAR_1)
{
    ngx_http_lua_ctx_t *VAR_2;

    VAR_2 = FUNC_0(VAR_1, VAR_0);
    if (VAR_2 == ((void*)0)) {
        return;
    }

    (void) VAR_2->resume_handler(VAR_1);
}
