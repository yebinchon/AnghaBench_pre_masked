
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_5__ {int len; int * data; } ;
typedef TYPE_1__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
typedef int ngx_http_request_t ;
typedef int ngx_http_complex_value_t ;
struct TYPE_6__ {size_t nelts; int * elts; } ;
typedef TYPE_2__ ngx_array_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *,TYPE_1__*) ;

ngx_int_t
FUNC_1(ngx_http_request_t *VAR_3, ngx_array_t *VAR_4)
{
    ngx_str_t VAR_5;
    ngx_uint_t VAR_6;
    ngx_http_complex_value_t *VAR_7;

    if (VAR_4 == ((void*)0)) {
        return VAR_2;
    }

    VAR_7 = VAR_4->elts;

    for (VAR_6 = 0; VAR_6 < VAR_4->nelts; VAR_6++) {
        if (FUNC_0(VAR_3, &VAR_7[VAR_6], &VAR_5) != VAR_2) {
            return VAR_1;
        }

        if (VAR_5.len && (VAR_5.len != 1 || VAR_5.data[0] != '0')) {
            return VAR_0;
        }
    }

    return VAR_2;
}
