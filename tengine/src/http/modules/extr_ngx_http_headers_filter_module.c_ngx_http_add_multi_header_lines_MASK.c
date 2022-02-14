
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ len; } ;
struct TYPE_15__ {int hash; TYPE_3__ value; int key; } ;
typedef TYPE_2__ ngx_table_elt_t ;
typedef TYPE_3__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_14__ {int headers; } ;
struct TYPE_17__ {TYPE_1__ headers_out; int pool; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_18__ {int offset; int key; } ;
typedef TYPE_5__ ngx_http_header_val_t ;
struct TYPE_19__ {int * elts; } ;
typedef TYPE_6__ ngx_array_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_6__*,int ,int,int) ;
 TYPE_2__** FUNC_1 (TYPE_6__*) ;
 TYPE_2__* FUNC_2 (int *) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_http_request_t *VAR_2,
    ngx_http_header_val_t *VAR_3, ngx_str_t *VAR_4)
{
    ngx_array_t *VAR_5;
    ngx_table_elt_t *VAR_6, **VAR_7;

    if (VAR_4->len == 0) {
        return VAR_1;
    }

    VAR_5 = (ngx_array_t *) ((char *) &VAR_2->headers_out + VAR_3->offset);

    if (VAR_5->elts == ((void*)0)) {
        if (FUNC_0(VAR_5, VAR_2->pool, 1, sizeof(ngx_table_elt_t *)) != VAR_1)
        {
            return VAR_0;
        }
    }

    VAR_6 = FUNC_2(&VAR_2->headers_out.headers);
    if (VAR_6 == ((void*)0)) {
        return VAR_0;
    }

    VAR_6->hash = 1;
    VAR_6->key = VAR_3->key;
    VAR_6->value = *VAR_4;

    VAR_7 = FUNC_1(VAR_5);
    if (VAR_7 == ((void*)0)) {
        return VAR_0;
    }

    *VAR_7 = VAR_6;

    return VAR_1;
}
