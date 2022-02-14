
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ngx_uint_t ;
typedef int ngx_int_t ;
struct TYPE_5__ {int * values; int * lengths; } ;
typedef TYPE_1__ ngx_http_lua_script_compile_t ;
typedef int ngx_http_lua_script_code_pt ;
struct TYPE_6__ {int n; int code; } ;
typedef TYPE_2__ ngx_http_lua_script_capture_code_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int ,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_http_lua_script_compile_t *VAR_4,
    ngx_uint_t VAR_5)
{
    ngx_http_lua_script_capture_code_t *VAR_6;

    VAR_6 = FUNC_0(*VAR_4->lengths,
                                  sizeof(ngx_http_lua_script_capture_code_t));
    if (VAR_6 == ((void*)0)) {
        return VAR_0;
    }

    VAR_6->code = (ngx_http_lua_script_code_pt) (void *)
                 VAR_3;
    VAR_6->n = 2 * VAR_5;

    VAR_6 = FUNC_0(*VAR_4->values,
                                  sizeof(ngx_http_lua_script_capture_code_t));
    if (VAR_6 == ((void*)0)) {
        return VAR_0;
    }

    VAR_6->code = VAR_2;
    VAR_6->n = 2 * VAR_5;

    return VAR_1;
}
