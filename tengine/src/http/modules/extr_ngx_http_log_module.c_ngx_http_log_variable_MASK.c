
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char u_char ;
struct TYPE_5__ {scalar_t__ escape; int len; int data; scalar_t__ not_found; } ;
typedef TYPE_1__ ngx_http_variable_value_t ;
typedef int ngx_http_request_t ;
struct TYPE_6__ {int data; } ;
typedef TYPE_2__ ngx_http_log_op_t ;


 char* FUNC_0 (char*,int ,int ) ;
 TYPE_1__* FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (char*,int ,int ) ;

__attribute__((used)) static u_char *
FUNC_3(ngx_http_request_t *VAR_0, u_char *VAR_1, ngx_http_log_op_t *VAR_2)
{
    ngx_http_variable_value_t *VAR_3;

    VAR_3 = FUNC_1(VAR_0, VAR_2->data);

    if (VAR_3 == ((void*)0) || VAR_3->not_found) {
        *VAR_1 = '-';
        return VAR_1 + 1;
    }

    if (VAR_3->escape == 0) {
        return FUNC_0(VAR_1, VAR_3->data, VAR_3->len);

    } else {
        return (u_char *) FUNC_2(VAR_1, VAR_3->data, VAR_3->len);
    }
}
