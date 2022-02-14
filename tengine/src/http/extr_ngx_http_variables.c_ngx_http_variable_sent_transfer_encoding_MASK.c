
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_int_t ;
struct TYPE_5__ {int len; int valid; int not_found; int * data; scalar_t__ no_cacheable; } ;
typedef TYPE_1__ ngx_http_variable_value_t ;
struct TYPE_6__ {scalar_t__ chunked; } ;
typedef TYPE_2__ ngx_http_request_t ;


 int VAR_0 ;

__attribute__((used)) static ngx_int_t
FUNC_0(ngx_http_request_t *VAR_1,
    ngx_http_variable_value_t *VAR_2, uintptr_t VAR_3)
{
    if (VAR_1->chunked) {
        VAR_2->len = sizeof("chunked") - 1;
        VAR_2->valid = 1;
        VAR_2->no_cacheable = 0;
        VAR_2->not_found = 0;
        VAR_2->data = (u_char *) "chunked";

    } else {
        VAR_2->not_found = 1;
    }

    return VAR_0;
}
