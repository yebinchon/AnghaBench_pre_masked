
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ data; int len; } ;
typedef TYPE_1__ ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_5__ {int valid; int not_found; scalar_t__ data; scalar_t__ no_cacheable; int len; } ;
typedef TYPE_2__ ngx_http_variable_value_t ;
typedef int ngx_http_request_t ;


 int VAR_0 ;

__attribute__((used)) static ngx_int_t
FUNC_0(ngx_http_request_t *VAR_1, ngx_http_variable_value_t *VAR_2,
    uintptr_t VAR_3)
{
    ngx_str_t *VAR_4;

    VAR_4 = (ngx_str_t *) ((char *) VAR_1 + VAR_3);

    if (VAR_4->data) {
        VAR_2->len = VAR_4->len;
        VAR_2->valid = 1;
        VAR_2->no_cacheable = 0;
        VAR_2->not_found = 0;
        VAR_2->data = VAR_4->data;

    } else {
        VAR_2->not_found = 1;
    }

    return VAR_0;
}
