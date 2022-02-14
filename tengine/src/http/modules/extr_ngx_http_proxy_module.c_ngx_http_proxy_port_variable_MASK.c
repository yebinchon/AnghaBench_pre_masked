
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_9__ {int not_found; int valid; int data; scalar_t__ no_cacheable; int len; } ;
typedef TYPE_3__ ngx_http_variable_value_t ;
typedef int ngx_http_request_t ;
struct TYPE_7__ {int data; int len; } ;
struct TYPE_8__ {TYPE_1__ port; } ;
struct TYPE_10__ {TYPE_2__ vars; } ;
typedef TYPE_4__ ngx_http_proxy_ctx_t ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (int *,int ) ;
 int VAR_1 ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_http_request_t *VAR_2,
    ngx_http_variable_value_t *VAR_3, uintptr_t VAR_4)
{
    ngx_http_proxy_ctx_t *VAR_5;

    VAR_5 = FUNC_0(VAR_2, VAR_1);

    if (VAR_5 == ((void*)0)) {
        VAR_3->not_found = 1;
        return VAR_0;
    }

    VAR_3->len = VAR_5->vars.port.len;
    VAR_3->valid = 1;
    VAR_3->no_cacheable = 0;
    VAR_3->not_found = 0;
    VAR_3->data = VAR_5->vars.port.data;

    return VAR_0;
}
