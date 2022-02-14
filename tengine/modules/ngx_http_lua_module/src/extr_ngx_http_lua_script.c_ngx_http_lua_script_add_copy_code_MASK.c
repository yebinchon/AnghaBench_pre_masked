
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_uint_t ;
struct TYPE_7__ {size_t len; int data; } ;
typedef TYPE_1__ ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_8__ {size_t len; int code; } ;
typedef TYPE_2__ ngx_http_lua_script_copy_code_t ;
struct TYPE_9__ {int * values; int * lengths; } ;
typedef TYPE_3__ ngx_http_lua_script_compile_t ;
typedef int ngx_http_lua_script_code_pt ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int ,size_t) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,int ,size_t) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_http_lua_script_compile_t *VAR_4,
    ngx_str_t *VAR_5, ngx_uint_t VAR_6)
{
    size_t VAR_7, VAR_8;
    ngx_http_lua_script_copy_code_t *VAR_9;

    VAR_8 = VAR_5->len;

    VAR_9 = FUNC_0(*VAR_4->lengths,
                                    sizeof(ngx_http_lua_script_copy_code_t));
    if (VAR_9 == ((void*)0)) {
        return VAR_0;
    }

    VAR_9->code = (ngx_http_lua_script_code_pt) (void *)
                 VAR_3;
    VAR_9->len = VAR_8;

    VAR_7 = (sizeof(ngx_http_lua_script_copy_code_t) + VAR_8 +
            sizeof(uintptr_t) - 1) & ~(sizeof(uintptr_t) - 1);

    VAR_9 = FUNC_0(*VAR_4->values, VAR_7);
    if (VAR_9 == ((void*)0)) {
        return VAR_0;
    }

    VAR_9->code = VAR_2;
    VAR_9->len = VAR_8;

    FUNC_1((u_char *) VAR_9 + sizeof(ngx_http_lua_script_copy_code_t),
               VAR_5->data, VAR_5->len);

    return VAR_1;
}
