
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_9__ {int valid; int not_found; scalar_t__ data; scalar_t__ no_cacheable; int len; } ;
typedef TYPE_3__ ngx_http_variable_value_t ;
struct TYPE_10__ {TYPE_2__* main; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_7__ {scalar_t__ data; int len; } ;
struct TYPE_8__ {TYPE_1__ method_name; } ;


 int VAR_0 ;

__attribute__((used)) static ngx_int_t
FUNC_0(ngx_http_request_t *VAR_1,
    ngx_http_variable_value_t *VAR_2, uintptr_t VAR_3)
{
    if (VAR_1->main->method_name.data) {
        VAR_2->len = VAR_1->main->method_name.len;
        VAR_2->valid = 1;
        VAR_2->no_cacheable = 0;
        VAR_2->not_found = 0;
        VAR_2->data = VAR_1->main->method_name.data;

    } else {
        VAR_2->not_found = 1;
    }

    return VAR_0;
}
