
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ data; scalar_t__ len; } ;
typedef TYPE_1__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_14__ {uintptr_t value; uintptr_t text_len; uintptr_t text_data; int code; } ;
typedef TYPE_2__ ngx_http_script_value_code_t ;
struct TYPE_15__ {int * lengths; int code; } ;
typedef TYPE_3__ ngx_http_script_complex_value_code_t ;
struct TYPE_16__ {int complete_lengths; scalar_t__ variables; int * values; int ** lengths; TYPE_1__* source; TYPE_6__* cf; } ;
typedef TYPE_4__ ngx_http_script_compile_t ;
struct TYPE_17__ {int codes; } ;
typedef TYPE_5__ ngx_http_rewrite_loc_conf_t ;
struct TYPE_18__ {int pool; } ;
typedef TYPE_6__ ngx_conf_t ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int VAR_4 ;
 void* FUNC_2 (int ,int *,int) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_4__*,int) ;

__attribute__((used)) static char *
FUNC_5(ngx_conf_t *VAR_6, ngx_http_rewrite_loc_conf_t *VAR_7,
    ngx_str_t *VAR_8)
{
    ngx_int_t VAR_9;
    ngx_http_script_compile_t VAR_10;
    ngx_http_script_value_code_t *VAR_11;
    ngx_http_script_complex_value_code_t *VAR_12;

    VAR_9 = FUNC_3(VAR_8);

    if (VAR_9 == 0) {
        VAR_11 = FUNC_2(VAR_6->pool, &VAR_7->codes,
                                         sizeof(ngx_http_script_value_code_t));
        if (VAR_11 == ((void*)0)) {
            return VAR_0;
        }

        VAR_9 = FUNC_0(VAR_8->data, VAR_8->len);

        if (VAR_9 == VAR_2) {
            VAR_9 = 0;
        }

        VAR_11->code = VAR_5;
        VAR_11->value = (uintptr_t) VAR_9;
        VAR_11->text_len = (uintptr_t) VAR_8->len;
        VAR_11->text_data = (uintptr_t) VAR_8->data;

        return VAR_1;
    }

    VAR_12 = FUNC_2(VAR_6->pool, &VAR_7->codes,
                                 sizeof(ngx_http_script_complex_value_code_t));
    if (VAR_12 == ((void*)0)) {
        return VAR_0;
    }

    VAR_12->code = VAR_4;
    VAR_12->lengths = ((void*)0);

    FUNC_4(&VAR_10, sizeof(ngx_http_script_compile_t));

    VAR_10.cf = VAR_6;
    VAR_10.source = VAR_8;
    VAR_10.lengths = &VAR_12->lengths;
    VAR_10.values = &VAR_7->codes;
    VAR_10.variables = VAR_9;
    VAR_10.complete_lengths = 1;

    if (FUNC_1(&VAR_10) != VAR_3) {
        return VAR_0;
    }

    return VAR_1;
}
