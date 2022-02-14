
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_8__ {size_t len; int * data; } ;
struct TYPE_9__ {scalar_t__ hash; TYPE_1__ value; } ;
typedef TYPE_2__ ngx_table_elt_t ;
typedef int ngx_int_t ;
struct TYPE_10__ {int not_found; int valid; size_t len; int * data; scalar_t__ no_cacheable; } ;
typedef TYPE_3__ ngx_http_variable_value_t ;
struct TYPE_11__ {int pool; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_12__ {size_t nelts; TYPE_2__** elts; } ;
typedef TYPE_5__ ngx_array_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,int *,size_t) ;
 int * FUNC_1 (int ,size_t) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_http_request_t *VAR_2,
    ngx_http_variable_value_t *VAR_3, uintptr_t VAR_4, u_char VAR_5)
{
    size_t VAR_6;
    u_char *VAR_7, *VAR_8;
    ngx_uint_t VAR_9, VAR_10;
    ngx_array_t *VAR_11;
    ngx_table_elt_t **VAR_12;

    VAR_11 = (ngx_array_t *) ((char *) VAR_2 + VAR_4);

    VAR_10 = VAR_11->nelts;
    VAR_12 = VAR_11->elts;

    VAR_6 = 0;

    for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {

        if (VAR_12[VAR_9]->hash == 0) {
            continue;
        }

        VAR_6 += VAR_12[VAR_9]->value.len + 2;
    }

    if (VAR_6 == 0) {
        VAR_3->not_found = 1;
        return VAR_1;
    }

    VAR_6 -= 2;

    VAR_3->valid = 1;
    VAR_3->no_cacheable = 0;
    VAR_3->not_found = 0;

    if (VAR_10 == 1) {
        VAR_3->len = (*VAR_12)->value.len;
        VAR_3->data = (*VAR_12)->value.data;

        return VAR_1;
    }

    VAR_7 = FUNC_1(VAR_2->pool, VAR_6);
    if (VAR_7 == ((void*)0)) {
        return VAR_0;
    }

    VAR_3->len = VAR_6;
    VAR_3->data = VAR_7;

    VAR_8 = VAR_7 + VAR_6;

    for (VAR_9 = 0; ; VAR_9++) {

        if (VAR_12[VAR_9]->hash == 0) {
            continue;
        }

        VAR_7 = FUNC_0(VAR_7, VAR_12[VAR_9]->value.data, VAR_12[VAR_9]->value.len);

        if (VAR_7 == VAR_8) {
            break;
        }

        *VAR_7++ = VAR_5; *VAR_7++ = ' ';
    }

    return VAR_1;
}
