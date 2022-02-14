
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_12__ {size_t len; char* data; } ;
typedef TYPE_2__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
typedef int ngx_http_lua_script_copy_code_t ;
struct TYPE_13__ {int complete_lengths; int complete_values; TYPE_5__** values; TYPE_5__** lengths; TYPE_2__* source; int log; int pool; } ;
typedef TYPE_3__ ngx_http_lua_script_compile_t ;
typedef int ngx_http_lua_script_capture_code_t ;
struct TYPE_14__ {TYPE_1__* complex_value; int log; int pool; TYPE_2__* value; } ;
typedef TYPE_4__ ngx_http_lua_compile_complex_value_t ;
struct TYPE_15__ {int * elts; } ;
typedef TYPE_5__ ngx_array_t ;
struct TYPE_11__ {int * values; int * lengths; TYPE_2__ value; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_5__*) ;
 scalar_t__ FUNC_1 (TYPE_5__*,int ,size_t,int) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int) ;

ngx_int_t
FUNC_4(ngx_http_lua_compile_complex_value_t *VAR_2)
{
    ngx_str_t *VAR_3;
    ngx_uint_t VAR_4, VAR_5, VAR_6;
    ngx_array_t VAR_7, VAR_8, *VAR_9, *VAR_10;

    ngx_http_lua_script_compile_t VAR_11;

    VAR_3 = VAR_2->value;

    VAR_6 = 0;

    for (VAR_4 = 0; VAR_4 < VAR_3->len; VAR_4++) {
        if (VAR_3->data[VAR_4] == '$') {
            VAR_6++;
        }
    }

    VAR_2->complex_value->value = *VAR_3;
    VAR_2->complex_value->lengths = ((void*)0);
    VAR_2->complex_value->values = ((void*)0);

    if (VAR_6 == 0) {
        return VAR_1;
    }

    VAR_5 = VAR_6 * (2 * sizeof(ngx_http_lua_script_copy_code_t)
              + sizeof(ngx_http_lua_script_capture_code_t))
        + sizeof(uintptr_t);

    if (FUNC_1(&VAR_7, VAR_2->pool, VAR_5, 1) != VAR_1) {
        return VAR_0;
    }

    VAR_5 = (VAR_6 * (2 * sizeof(ngx_http_lua_script_copy_code_t)
                   + sizeof(ngx_http_lua_script_capture_code_t))
                + sizeof(uintptr_t)
                + sizeof(uintptr_t) - 1)
            & ~(sizeof(uintptr_t) - 1);

    if (FUNC_1(&VAR_8, VAR_2->pool, VAR_5, 1) != VAR_1) {
        return VAR_0;
    }

    VAR_9 = &VAR_7;
    VAR_10 = &VAR_8;

    FUNC_3(&VAR_11, sizeof(ngx_http_lua_script_compile_t));

    VAR_11.pool = VAR_2->pool;
    VAR_11.log = VAR_2->log;
    VAR_11.source = VAR_3;
    VAR_11.lengths = &VAR_9;
    VAR_11.values = &VAR_10;
    VAR_11.complete_lengths = 1;
    VAR_11.complete_values = 1;

    if (FUNC_2(&VAR_11) != VAR_1) {
        FUNC_0(&VAR_7);
        FUNC_0(&VAR_8);
        return VAR_0;
    }

    VAR_2->complex_value->lengths = VAR_7.elts;
    VAR_2->complex_value->values = VAR_8.elts;

    return VAR_1;
}
