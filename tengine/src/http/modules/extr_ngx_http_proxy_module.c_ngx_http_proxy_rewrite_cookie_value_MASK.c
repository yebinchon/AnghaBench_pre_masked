
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_9__ {size_t len; int * data; } ;
struct TYPE_10__ {TYPE_1__ value; } ;
typedef TYPE_2__ ngx_table_elt_t ;
typedef scalar_t__ ngx_int_t ;
typedef int ngx_http_request_t ;
struct TYPE_11__ {scalar_t__ (* handler ) (int *,TYPE_2__*,size_t,size_t,TYPE_3__*) ;} ;
typedef TYPE_3__ ngx_http_proxy_rewrite_t ;
struct TYPE_12__ {size_t nelts; TYPE_3__* elts; } ;
typedef TYPE_4__ ngx_array_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,char) ;
 scalar_t__ FUNC_1 (int *,TYPE_2__*,size_t,size_t,TYPE_3__*) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_http_request_t *VAR_1, ngx_table_elt_t *VAR_2,
    u_char *VAR_3, ngx_array_t *VAR_4)
{
    size_t VAR_5, VAR_6;
    u_char *VAR_7;
    ngx_int_t VAR_8;
    ngx_uint_t VAR_9;
    ngx_http_proxy_rewrite_t *VAR_10;

    VAR_6 = VAR_3 - VAR_2->value.data;

    VAR_7 = (u_char *) FUNC_0(VAR_3, ';');

    VAR_5 = VAR_7 ? (size_t) (VAR_7 - VAR_3) : (VAR_2->value.len - VAR_6);

    VAR_10 = VAR_4->elts;

    for (VAR_9 = 0; VAR_9 < VAR_4->nelts; VAR_9++) {
        VAR_8 = VAR_10[VAR_9].handler(VAR_1, VAR_2, VAR_6, VAR_5, &VAR_10[VAR_9]);

        if (VAR_8 != VAR_0) {
            return VAR_8;
        }
    }

    return VAR_0;
}
