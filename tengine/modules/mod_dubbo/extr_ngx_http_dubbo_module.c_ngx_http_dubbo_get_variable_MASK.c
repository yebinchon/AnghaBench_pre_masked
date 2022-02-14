
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_uint_t ;
struct TYPE_10__ {int len; int * data; } ;
typedef TYPE_1__ ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_11__ {scalar_t__ valid; int len; int * data; scalar_t__ not_found; } ;
typedef TYPE_2__ ngx_http_variable_value_t ;
struct TYPE_12__ {int pool; } ;
typedef TYPE_3__ ngx_http_request_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ) ;
 TYPE_2__* FUNC_1 (TYPE_3__*,TYPE_1__*,int ) ;
 int * FUNC_2 (int ,int ) ;

ngx_int_t
FUNC_3(ngx_http_request_t *VAR_2, ngx_str_t *VAR_3, ngx_str_t *VAR_4)
{
    u_char *VAR_5;
    ngx_str_t VAR_6;
    ngx_uint_t VAR_7;
    ngx_http_variable_value_t *VAR_8;

    if (0 >= VAR_3->len || ((void*)0) == VAR_3->data) {
        return VAR_0;
    }

    VAR_5 = FUNC_2(VAR_2->pool, VAR_3->len);
    if (VAR_5 == ((void*)0)) {
        return VAR_0;
    }

    VAR_7 = FUNC_0(VAR_5, VAR_3->data, VAR_3->len);
    VAR_6.data = VAR_5;
    VAR_6.len = VAR_3->len;

    VAR_8 = FUNC_1(VAR_2, &VAR_6, VAR_7);

    if (VAR_8 == ((void*)0) || VAR_8->not_found || VAR_8->valid == 0) {
        return VAR_0;
    }

    VAR_4->data = VAR_8->data;
    VAR_4->len = VAR_8->len;

    return VAR_1;
}
