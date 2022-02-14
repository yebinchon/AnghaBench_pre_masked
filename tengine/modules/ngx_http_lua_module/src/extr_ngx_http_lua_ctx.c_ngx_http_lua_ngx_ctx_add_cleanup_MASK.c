
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* data; int handler; } ;
typedef TYPE_1__ ngx_pool_cleanup_t ;
typedef int ngx_int_t ;
struct TYPE_9__ {int pool; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_10__ {int ref; int * vm; } ;
typedef TYPE_3__ ngx_http_lua_ngx_ctx_cleanup_data_t ;
typedef int ngx_http_lua_ctx_t ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (TYPE_2__*,int ) ;
 int * FUNC_1 (TYPE_2__*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_2 (int ,int) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_http_request_t *VAR_4, int VAR_5)
{
    lua_State *VAR_6;
    ngx_pool_cleanup_t *VAR_7;
    ngx_http_lua_ctx_t *VAR_8;

    ngx_http_lua_ngx_ctx_cleanup_data_t *VAR_9;

    VAR_8 = FUNC_0(VAR_4, VAR_2);
    VAR_6 = FUNC_1(VAR_4, VAR_8);

    VAR_7 = FUNC_2(VAR_4->pool,
                               sizeof(ngx_http_lua_ngx_ctx_cleanup_data_t));
    if (VAR_7 == ((void*)0)) {
        return VAR_0;
    }

    VAR_7->handler = VAR_3;

    VAR_9 = VAR_7->data;
    VAR_9->vm = VAR_6;
    VAR_9->ref = VAR_5;

    return VAR_1;
}
