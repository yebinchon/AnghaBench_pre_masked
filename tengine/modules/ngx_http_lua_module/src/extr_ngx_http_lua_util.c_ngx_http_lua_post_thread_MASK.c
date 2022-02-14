
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_7__ {int pool; } ;
typedef TYPE_1__ ngx_http_request_t ;
struct TYPE_8__ {struct TYPE_8__* next; int * co_ctx; } ;
typedef TYPE_2__ ngx_http_lua_posted_thread_t ;
struct TYPE_9__ {TYPE_2__* posted_threads; } ;
typedef TYPE_3__ ngx_http_lua_ctx_t ;
typedef int ngx_http_lua_co_ctx_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int ,int) ;

ngx_int_t
FUNC_1(ngx_http_request_t *VAR_2, ngx_http_lua_ctx_t *VAR_3,
    ngx_http_lua_co_ctx_t *VAR_4)
{
    ngx_http_lua_posted_thread_t **VAR_5;
    ngx_http_lua_posted_thread_t *VAR_6;

    VAR_6 = FUNC_0(VAR_2->pool, sizeof(ngx_http_lua_posted_thread_t));
    if (VAR_6 == ((void*)0)) {
        return VAR_0;
    }

    VAR_6->co_ctx = VAR_4;
    VAR_6->next = ((void*)0);

    for (VAR_5 = &VAR_3->posted_threads; *VAR_5; VAR_5 = &(*VAR_5)->next) { }

    *VAR_5 = VAR_6;

    return VAR_1;
}
