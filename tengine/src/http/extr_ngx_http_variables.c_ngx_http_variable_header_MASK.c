
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int data; int len; } ;
struct TYPE_6__ {TYPE_1__ value; } ;
typedef TYPE_2__ ngx_table_elt_t ;
typedef int ngx_int_t ;
struct TYPE_7__ {int valid; int not_found; int data; scalar_t__ no_cacheable; int len; } ;
typedef TYPE_3__ ngx_http_variable_value_t ;
typedef int ngx_http_request_t ;


 int VAR_0 ;

__attribute__((used)) static ngx_int_t
FUNC_0(ngx_http_request_t *VAR_1, ngx_http_variable_value_t *VAR_2,
    uintptr_t VAR_3)
{
    ngx_table_elt_t *VAR_4;

    VAR_4 = *(ngx_table_elt_t **) ((char *) VAR_1 + VAR_3);

    if (VAR_4) {
        VAR_2->len = VAR_4->value.len;
        VAR_2->valid = 1;
        VAR_2->no_cacheable = 0;
        VAR_2->not_found = 0;
        VAR_2->data = VAR_4->value.data;

    } else {
        VAR_2->not_found = 1;
    }

    return VAR_0;
}
