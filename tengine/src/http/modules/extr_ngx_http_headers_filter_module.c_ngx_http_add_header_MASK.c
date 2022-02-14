
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ len; } ;
struct TYPE_11__ {int hash; TYPE_3__ value; int key; } ;
typedef TYPE_2__ ngx_table_elt_t ;
typedef TYPE_3__ ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_10__ {int headers; } ;
struct TYPE_13__ {TYPE_1__ headers_out; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_14__ {int key; } ;
typedef TYPE_5__ ngx_http_header_val_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int *) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_http_request_t *VAR_2, ngx_http_header_val_t *VAR_3,
    ngx_str_t *VAR_4)
{
    ngx_table_elt_t *VAR_5;

    if (VAR_4->len) {
        VAR_5 = FUNC_0(&VAR_2->headers_out.headers);
        if (VAR_5 == ((void*)0)) {
            return VAR_0;
        }

        VAR_5->hash = 1;
        VAR_5->key = VAR_3->key;
        VAR_5->value = *VAR_4;
    }

    return VAR_1;
}
