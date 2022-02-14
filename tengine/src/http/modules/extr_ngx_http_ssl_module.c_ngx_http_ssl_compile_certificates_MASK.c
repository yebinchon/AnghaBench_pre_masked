
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
typedef int ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_13__ {int * passwords; int * certificate_key_values; int * certificate_values; TYPE_2__* certificates; TYPE_1__* certificate_keys; } ;
typedef TYPE_3__ ngx_http_ssl_srv_conf_t ;
typedef int ngx_http_complex_value_t ;
struct TYPE_14__ {int zero; int * complex_value; int * value; TYPE_5__* cf; } ;
typedef TYPE_4__ ngx_http_compile_complex_value_t ;
struct TYPE_15__ {int pool; } ;
typedef TYPE_5__ ngx_conf_t ;
struct TYPE_12__ {size_t nelts; int * elts; } ;
struct TYPE_11__ {int * elts; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (int ,size_t,int) ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (TYPE_4__*,int) ;
 int * FUNC_5 (TYPE_5__*,int *) ;

__attribute__((used)) static ngx_int_t
FUNC_6(ngx_conf_t *VAR_2,
    ngx_http_ssl_srv_conf_t *VAR_3)
{
    ngx_str_t *VAR_4, *VAR_5;
    ngx_uint_t VAR_6, VAR_7;
    ngx_http_complex_value_t *VAR_8;
    ngx_http_compile_complex_value_t VAR_9;

    VAR_4 = VAR_3->certificates->elts;
    VAR_5 = VAR_3->certificate_keys->elts;
    VAR_7 = VAR_3->certificates->nelts;

    for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {

        if (FUNC_3(&VAR_4[VAR_6])) {
            goto found;
        }

        if (FUNC_3(&VAR_5[VAR_6])) {
            goto found;
        }
    }

    return VAR_1;

found:

    VAR_3->certificate_values = FUNC_0(VAR_2->pool, VAR_7,
                                             sizeof(ngx_http_complex_value_t));
    if (VAR_3->certificate_values == ((void*)0)) {
        return VAR_0;
    }

    VAR_3->certificate_key_values = FUNC_0(VAR_2->pool, VAR_7,
                                             sizeof(ngx_http_complex_value_t));
    if (VAR_3->certificate_key_values == ((void*)0)) {
        return VAR_0;
    }

    for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {

        VAR_8 = FUNC_1(VAR_3->certificate_values);
        if (VAR_8 == ((void*)0)) {
            return VAR_0;
        }

        FUNC_4(&VAR_9, sizeof(ngx_http_compile_complex_value_t));

        VAR_9.cf = VAR_2;
        VAR_9.value = &VAR_4[VAR_6];
        VAR_9.complex_value = VAR_8;
        VAR_9.zero = 1;

        if (FUNC_2(&VAR_9) != VAR_1) {
            return VAR_0;
        }

        VAR_8 = FUNC_1(VAR_3->certificate_key_values);
        if (VAR_8 == ((void*)0)) {
            return VAR_0;
        }

        FUNC_4(&VAR_9, sizeof(ngx_http_compile_complex_value_t));

        VAR_9.cf = VAR_2;
        VAR_9.value = &VAR_5[VAR_6];
        VAR_9.complex_value = VAR_8;
        VAR_9.zero = 1;

        if (FUNC_2(&VAR_9) != VAR_1) {
            return VAR_0;
        }
    }

    VAR_3->passwords = FUNC_5(VAR_2, VAR_3->passwords);
    if (VAR_3->passwords == ((void*)0)) {
        return VAR_0;
    }

    return VAR_1;
}
