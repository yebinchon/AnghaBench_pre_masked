
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_4__ {size_t ncaptures; int* captures; int * pos; int log; int * captures_data; scalar_t__ ip; } ;
typedef TYPE_1__ ngx_http_lua_script_engine_t ;
struct TYPE_5__ {size_t n; } ;
typedef TYPE_2__ ngx_http_lua_script_capture_code_t ;


 int VAR_0 ;
 int * FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int ,int ,int ,char*,int,int *) ;

__attribute__((used)) static void
FUNC_2(ngx_http_lua_script_engine_t *VAR_1)
{
    int *VAR_2;
    u_char *VAR_3, *VAR_4;
    ngx_uint_t VAR_5;
    ngx_http_lua_script_capture_code_t *VAR_6;

    VAR_6 = (ngx_http_lua_script_capture_code_t *) VAR_1->ip;

    VAR_1->ip += sizeof(ngx_http_lua_script_capture_code_t);

    VAR_5 = VAR_6->n;

    VAR_4 = VAR_1->pos;

    if (VAR_5 < VAR_1->ncaptures) {

        VAR_2 = VAR_1->captures;
        VAR_3 = VAR_1->captures_data;

        VAR_1->pos = FUNC_0(VAR_4, &VAR_3[VAR_2[VAR_5]], VAR_2[VAR_5 + 1] - VAR_2[VAR_5]);
    }

    FUNC_1(VAR_0, VAR_1->log, 0,
                   "lua script capture: \"%*s\"", VAR_1->pos - VAR_4, VAR_4);
}
