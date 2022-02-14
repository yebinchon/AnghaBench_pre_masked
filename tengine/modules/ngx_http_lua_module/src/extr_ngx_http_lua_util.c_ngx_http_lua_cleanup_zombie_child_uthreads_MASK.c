
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ngx_http_request_t ;
struct TYPE_8__ {TYPE_5__* co_ctx; struct TYPE_8__* next; } ;
typedef TYPE_1__ ngx_http_lua_posted_thread_t ;
struct TYPE_9__ {int uthreads; } ;
typedef TYPE_2__ ngx_http_lua_ctx_t ;
struct TYPE_10__ {TYPE_1__* zombie_child_threads; } ;
typedef TYPE_3__ ngx_http_lua_co_ctx_t ;
typedef int lua_State ;
struct TYPE_11__ {scalar_t__ co_ref; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *,TYPE_2__*,TYPE_5__*) ;

__attribute__((used)) static void
FUNC_1(ngx_http_request_t *VAR_1,
    lua_State *VAR_2, ngx_http_lua_ctx_t *VAR_3, ngx_http_lua_co_ctx_t *VAR_4)
{
    ngx_http_lua_posted_thread_t *VAR_5;

    for (VAR_5 = VAR_4->zombie_child_threads; VAR_5; VAR_5 = VAR_5->next) {
        if (VAR_5->co_ctx->co_ref != VAR_0) {
            FUNC_0(VAR_1, VAR_2, VAR_3, VAR_5->co_ctx);
            VAR_3->uthreads--;
        }
    }

    VAR_4->zombie_child_threads = ((void*)0);
}
