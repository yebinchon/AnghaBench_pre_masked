
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_8__ {size_t nelts; TYPE_4__* elts; struct TYPE_8__* next; } ;
typedef TYPE_2__ ngx_list_part_t ;
struct TYPE_10__ {int * co; } ;
struct TYPE_9__ {TYPE_1__* user_co_ctx; TYPE_4__ entry_co_ctx; } ;
typedef TYPE_3__ ngx_http_lua_ctx_t ;
typedef TYPE_4__ ngx_http_lua_co_ctx_t ;
typedef int lua_State ;
struct TYPE_7__ {TYPE_2__ part; } ;



ngx_http_lua_co_ctx_t *
FUNC_0(lua_State *VAR_0, ngx_http_lua_ctx_t *VAR_1)
{
    ngx_uint_t VAR_2;
    ngx_list_part_t *VAR_3;
    ngx_http_lua_co_ctx_t *VAR_4;

    if (VAR_0 == VAR_1->entry_co_ctx.co) {
        return &VAR_1->entry_co_ctx;
    }

    if (VAR_1->user_co_ctx == ((void*)0)) {
        return ((void*)0);
    }

    VAR_3 = &VAR_1->user_co_ctx->part;
    VAR_4 = VAR_3->elts;



    for (VAR_2 = 0; ; VAR_2++) {

        if (VAR_2 >= VAR_3->nelts) {
            if (VAR_3->next == ((void*)0)) {
                break;
            }

            VAR_3 = VAR_3->next;
            VAR_4 = VAR_3->elts;
            VAR_2 = 0;
        }

        if (VAR_4[VAR_2].co == VAR_0) {
            return &VAR_4[VAR_2];
        }
    }

    return ((void*)0);
}
