
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {size_t len; int * data; } ;
typedef TYPE_1__ ngx_str_t ;
typedef int ngx_int_t ;
typedef scalar_t__ (* ngx_http_script_len_code_pt ) (TYPE_2__*) ;
struct TYPE_14__ {int flushed; TYPE_1__ buf; int * ip; int * pos; TYPE_5__* request; } ;
typedef TYPE_2__ ngx_http_script_engine_t ;
typedef int (* ngx_http_script_code_pt ) (TYPE_2__*) ;
struct TYPE_15__ {int pool; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_16__ {int * values; int * lengths; TYPE_1__ value; } ;
typedef TYPE_6__ ngx_http_complex_value_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__*,TYPE_6__*) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int * FUNC_2 (int ,size_t) ;

ngx_int_t
FUNC_3(ngx_http_request_t *VAR_2, ngx_http_complex_value_t *VAR_3,
    ngx_str_t *VAR_4)
{
    size_t VAR_5;
    ngx_http_script_code_pt VAR_6;
    ngx_http_script_len_code_pt VAR_7;
    ngx_http_script_engine_t VAR_8;

    if (VAR_3->lengths == ((void*)0)) {
        *VAR_4 = VAR_3->value;
        return VAR_1;
    }

    FUNC_0(VAR_2, VAR_3);

    FUNC_1(&VAR_8, sizeof(ngx_http_script_engine_t));

    VAR_8.ip = VAR_3->lengths;
    VAR_8.request = VAR_2;
    VAR_8.flushed = 1;

    VAR_5 = 0;

    while (*(uintptr_t *) VAR_8.ip) {
        VAR_7 = *(ngx_http_script_len_code_pt *) VAR_8.ip;
        VAR_5 += VAR_7(&VAR_8);
    }

    VAR_4->len = VAR_5;
    VAR_4->data = FUNC_2(VAR_2->pool, VAR_5);
    if (VAR_4->data == ((void*)0)) {
        return VAR_0;
    }

    VAR_8.ip = VAR_3->values;
    VAR_8.pos = VAR_4->data;
    VAR_8.buf = *VAR_4;

    while (*(uintptr_t *) VAR_8.ip) {
        VAR_6 = *(ngx_http_script_code_pt *) VAR_8.ip;
        VAR_6((ngx_http_script_engine_t *) &VAR_8);
    }

    *VAR_4 = VAR_8.buf;

    return VAR_1;
}
