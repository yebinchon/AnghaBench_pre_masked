
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ngx_uint_t ;
struct TYPE_4__ {int ncaptures; int* captures; scalar_t__ ip; } ;
typedef TYPE_1__ ngx_http_lua_script_engine_t ;
struct TYPE_5__ {int n; } ;
typedef TYPE_2__ ngx_http_lua_script_capture_code_t ;



__attribute__((used)) static size_t
FUNC_0(ngx_http_lua_script_engine_t *VAR_0)
{
    int *VAR_1;
    ngx_uint_t VAR_2;
    ngx_http_lua_script_capture_code_t *VAR_3;

    VAR_3 = (ngx_http_lua_script_capture_code_t *) VAR_0->ip;

    VAR_0->ip += sizeof(ngx_http_lua_script_capture_code_t);

    VAR_2 = VAR_3->n;

    if (VAR_2 < VAR_0->ncaptures) {
        VAR_1 = VAR_0->captures;
        return VAR_1[VAR_2 + 1] - VAR_1[VAR_2];
    }

    return 0;
}
