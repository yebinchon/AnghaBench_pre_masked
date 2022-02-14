
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_3__ {char const* s; size_t size; scalar_t__ sent_end; scalar_t__ sent_begin; } ;
typedef TYPE_1__ ngx_http_lua_clfactory_buffer_ctx_t ;
typedef int lua_State ;


 int FUNC_0 (int *,int ,TYPE_1__*,char const*) ;
 int VAR_0 ;

ngx_int_t
FUNC_1(lua_State *VAR_1, const char *VAR_2,
    size_t VAR_3, const char *VAR_4)
{
    ngx_http_lua_clfactory_buffer_ctx_t VAR_5;

    VAR_5.s = VAR_2;
    VAR_5.size = VAR_3;

    VAR_5.sent_begin = 0;
    VAR_5.sent_end = 0;


    return FUNC_0(VAR_1, VAR_0, &VAR_5, VAR_4);
}
