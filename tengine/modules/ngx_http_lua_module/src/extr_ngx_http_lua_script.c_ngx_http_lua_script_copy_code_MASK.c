
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_4__ {int * pos; int log; scalar_t__ ip; int skip; } ;
typedef TYPE_1__ ngx_http_lua_script_engine_t ;
struct TYPE_5__ {int len; } ;
typedef TYPE_2__ ngx_http_lua_script_copy_code_t ;


 int VAR_0 ;
 int * FUNC_0 (int *,scalar_t__,int) ;
 int FUNC_1 (int ,int ,int ,char*,int,int *) ;

__attribute__((used)) static void
FUNC_2(ngx_http_lua_script_engine_t *VAR_1)
{
    u_char *VAR_2;
    ngx_http_lua_script_copy_code_t *VAR_3;

    VAR_3 = (ngx_http_lua_script_copy_code_t *) VAR_1->ip;

    VAR_2 = VAR_1->pos;

    if (!VAR_1->skip) {
        VAR_1->pos = FUNC_0(VAR_2, VAR_1->ip + sizeof(ngx_http_lua_script_copy_code_t),
                          VAR_3->len);
    }

    VAR_1->ip += sizeof(ngx_http_lua_script_copy_code_t)
          + ((VAR_3->len + sizeof(uintptr_t) - 1) & ~(sizeof(uintptr_t) - 1));

    FUNC_1(VAR_0, VAR_1->log, 0,
                   "lua script copy: \"%*s\"", VAR_1->pos - VAR_2, VAR_2);
}
