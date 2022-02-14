
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int pool; } ;
typedef TYPE_1__ ngx_http_request_t ;
struct TYPE_10__ {int * user_co_ctx; } ;
typedef TYPE_2__ ngx_http_lua_ctx_t ;
struct TYPE_11__ {int co_ref; } ;
typedef TYPE_3__ ngx_http_lua_co_ctx_t ;


 int VAR_0 ;
 int * FUNC_0 (int ,int,int) ;
 TYPE_3__* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*,int) ;

ngx_http_lua_co_ctx_t *
FUNC_3(ngx_http_request_t *VAR_1, ngx_http_lua_ctx_t *VAR_2)
{
    ngx_http_lua_co_ctx_t *VAR_3;

    if (VAR_2->user_co_ctx == ((void*)0)) {
        VAR_2->user_co_ctx = FUNC_0(VAR_1->pool, 4,
                                           sizeof(ngx_http_lua_co_ctx_t));
        if (VAR_2->user_co_ctx == ((void*)0)) {
            return ((void*)0);
        }
    }

    VAR_3 = FUNC_1(VAR_2->user_co_ctx);
    if (VAR_3 == ((void*)0)) {
        return ((void*)0);
    }

    FUNC_2(VAR_3, sizeof(ngx_http_lua_co_ctx_t));

    VAR_3->co_ref = VAR_0;

    return VAR_3;
}
