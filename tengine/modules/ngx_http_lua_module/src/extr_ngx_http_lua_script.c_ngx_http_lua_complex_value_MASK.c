
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_15__ {int * data; } ;
typedef TYPE_3__ ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_16__ {int pool; TYPE_2__* connection; } ;
typedef TYPE_4__ ngx_http_request_t ;
typedef scalar_t__ (* ngx_http_lua_script_len_code_pt ) (TYPE_5__*) ;
struct TYPE_17__ {int ncaptures; int* captures; int * ip; int * pos; int * captures_data; int log; } ;
typedef TYPE_5__ ngx_http_lua_script_engine_t ;
typedef int (* ngx_http_lua_script_code_pt ) (TYPE_5__*) ;
struct TYPE_13__ {size_t len; scalar_t__ data; } ;
struct TYPE_18__ {int * values; int * lengths; TYPE_1__ value; } ;
typedef TYPE_8__ ngx_http_lua_complex_value_t ;
typedef int luaL_Buffer ;
struct TYPE_14__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,size_t) ;
 int FUNC_1 (TYPE_5__*,int) ;
 int FUNC_2 (int ,int *) ;
 int * FUNC_3 (int ,size_t) ;

ngx_int_t
FUNC_4(ngx_http_request_t *VAR_2, ngx_str_t *VAR_3,
    size_t VAR_4, ngx_int_t VAR_5, int *VAR_6,
    ngx_http_lua_complex_value_t *VAR_7, luaL_Buffer *VAR_8)
{
    size_t VAR_9;
    u_char *VAR_10;
    ngx_http_lua_script_code_pt VAR_11;
    ngx_http_lua_script_len_code_pt VAR_12;
    ngx_http_lua_script_engine_t VAR_13;

    if (VAR_7->lengths == ((void*)0)) {
        FUNC_0(VAR_8, (char *) &VAR_3->data[VAR_4], VAR_6[0] - VAR_4);
        FUNC_0(VAR_8, (char *) VAR_7->value.data, VAR_7->value.len);

        return VAR_1;
    }

    FUNC_1(&VAR_13, sizeof(ngx_http_lua_script_engine_t));

    VAR_13.log = VAR_2->connection->log;
    VAR_13.ncaptures = VAR_5 * 2;
    VAR_13.captures = VAR_6;
    VAR_13.captures_data = VAR_3->data;

    VAR_13.ip = VAR_7->lengths;

    VAR_9 = 0;

    while (*(uintptr_t *) VAR_13.ip) {
        VAR_12 = *(ngx_http_lua_script_len_code_pt *) VAR_13.ip;
        VAR_9 += VAR_12(&VAR_13);
    }

    VAR_10 = FUNC_3(VAR_2->pool, VAR_9);
    if (VAR_10 == ((void*)0)) {
        return VAR_0;
    }

    VAR_13.ip = VAR_7->values;
    VAR_13.pos = VAR_10;

    while (*(uintptr_t *) VAR_13.ip) {
        VAR_11 = *(ngx_http_lua_script_code_pt *) VAR_13.ip;
        VAR_11((ngx_http_lua_script_engine_t *) &VAR_13);
    }

    FUNC_0(VAR_8, (char *) &VAR_3->data[VAR_4], VAR_6[0] - VAR_4);
    FUNC_0(VAR_8, (char *) VAR_10, VAR_9);

    FUNC_2(VAR_2->pool, VAR_10);

    return VAR_1;
}
