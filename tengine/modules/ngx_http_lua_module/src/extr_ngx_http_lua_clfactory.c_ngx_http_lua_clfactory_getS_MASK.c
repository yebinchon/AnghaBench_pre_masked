
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sent_begin; size_t size; int sent_end; char const* s; } ;
typedef TYPE_1__ ngx_http_lua_clfactory_buffer_ctx_t ;
typedef int lua_State ;


 char const* VAR_0 ;
 size_t VAR_1 ;
 char const* VAR_2 ;
 size_t VAR_3 ;

__attribute__((used)) static const char *
FUNC_0(lua_State *VAR_4, void *VAR_5, size_t *VAR_6)
{
    ngx_http_lua_clfactory_buffer_ctx_t *VAR_7 = VAR_5;


    if (VAR_7->sent_begin == 0) {
        VAR_7->sent_begin = 1;
        *VAR_6 = VAR_1;

        return VAR_0;
    }


    if (VAR_7->size == 0) {

        if (VAR_7->sent_end == 0) {
            VAR_7->sent_end = 1;
            *VAR_6 = VAR_3;
            return VAR_2;
        }


        return ((void*)0);
    }

    *VAR_6 = VAR_7->size;
    VAR_7->size = 0;

    return VAR_7->s;
}
