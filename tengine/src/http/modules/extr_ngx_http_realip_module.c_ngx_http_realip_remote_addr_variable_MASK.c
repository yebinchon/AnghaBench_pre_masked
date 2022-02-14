
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int data; int len; } ;
typedef TYPE_2__ ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_12__ {int valid; int data; scalar_t__ not_found; scalar_t__ no_cacheable; int len; } ;
typedef TYPE_3__ ngx_http_variable_value_t ;
struct TYPE_13__ {TYPE_1__* connection; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_14__ {TYPE_2__ addr_text; } ;
typedef TYPE_5__ ngx_http_realip_ctx_t ;
struct TYPE_10__ {TYPE_2__ addr_text; } ;


 int VAR_0 ;
 TYPE_5__* FUNC_0 (TYPE_4__*) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_http_request_t *VAR_1,
    ngx_http_variable_value_t *VAR_2, uintptr_t VAR_3)
{
    ngx_str_t *VAR_4;
    ngx_http_realip_ctx_t *VAR_5;

    VAR_5 = FUNC_0(VAR_1);

    VAR_4 = VAR_5 ? &VAR_5->addr_text : &VAR_1->connection->addr_text;

    VAR_2->len = VAR_4->len;
    VAR_2->valid = 1;
    VAR_2->no_cacheable = 0;
    VAR_2->not_found = 0;
    VAR_2->data = VAR_4->data;

    return VAR_0;
}
