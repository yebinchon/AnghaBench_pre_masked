
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef char u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_13__ {scalar_t__ len; char* data; } ;
struct TYPE_10__ {TYPE_5__ value; int key; } ;
typedef TYPE_2__ ngx_table_elt_t ;
struct TYPE_11__ {scalar_t__ len; char* data; } ;
typedef TYPE_3__ ngx_str_t ;
typedef size_t ngx_int_t ;
struct TYPE_12__ {size_t nelts; TYPE_1__* pool; TYPE_2__** elts; } ;
typedef TYPE_4__ ngx_array_t ;
struct TYPE_9__ {int log; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,char*,int *,TYPE_5__*) ;
 scalar_t__ FUNC_1 (char*,char*,scalar_t__) ;

ngx_int_t
FUNC_2(ngx_array_t *VAR_2, ngx_str_t *VAR_3,
    ngx_str_t *VAR_4)
{
    ngx_uint_t VAR_5;
    u_char *VAR_6, *VAR_7, *VAR_8, VAR_9;
    ngx_table_elt_t **VAR_10;

    VAR_10 = VAR_2->elts;

    for (VAR_5 = 0; VAR_5 < VAR_2->nelts; VAR_5++) {

        FUNC_0(VAR_1, VAR_2->pool->log, 0,
                       "parse header: \"%V: %V\"", &VAR_10[VAR_5]->key, &VAR_10[VAR_5]->value);

        if (VAR_3->len > VAR_10[VAR_5]->value.len) {
            continue;
        }

        VAR_6 = VAR_10[VAR_5]->value.data;
        VAR_8 = VAR_10[VAR_5]->value.data + VAR_10[VAR_5]->value.len;

        while (VAR_6 < VAR_8) {

            if (FUNC_1(VAR_6, VAR_3->data, VAR_3->len) != 0) {
                goto skip;
            }

            for (VAR_6 += VAR_3->len; VAR_6 < VAR_8 && *VAR_6 == ' '; VAR_6++) {

            }

            if (VAR_4 == ((void*)0)) {
                if (VAR_6 == VAR_8 || *VAR_6 == ',') {
                    return VAR_5;
                }

                goto skip;
            }

            if (VAR_6 == VAR_8 || *VAR_6++ != '=') {

                goto skip;
            }

            while (VAR_6 < VAR_8 && *VAR_6 == ' ') { VAR_6++; }

            for (VAR_7 = VAR_6; VAR_7 < VAR_8 && *VAR_7 != ';'; VAR_7++) {

            }

            VAR_4->len = VAR_7 - VAR_6;
            VAR_4->data = VAR_6;

            return VAR_5;

        skip:

            while (VAR_6 < VAR_8) {
                VAR_9 = *VAR_6++;
                if (VAR_9 == ';' || VAR_9 == ',') {
                    break;
                }
            }

            while (VAR_6 < VAR_8 && *VAR_6 == ' ') { VAR_6++; }
        }
    }

    return VAR_0;
}
