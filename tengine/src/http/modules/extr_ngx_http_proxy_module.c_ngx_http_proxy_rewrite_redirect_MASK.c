
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_10__ {size_t len; } ;
struct TYPE_12__ {TYPE_1__ value; } ;
typedef TYPE_3__ ngx_table_elt_t ;
typedef scalar_t__ ngx_int_t ;
typedef int ngx_http_request_t ;
struct TYPE_13__ {scalar_t__ (* handler ) (int *,TYPE_3__*,size_t,size_t,TYPE_4__*) ;} ;
typedef TYPE_4__ ngx_http_proxy_rewrite_t ;
struct TYPE_14__ {TYPE_2__* redirects; } ;
typedef TYPE_5__ ngx_http_proxy_loc_conf_t ;
struct TYPE_11__ {size_t nelts; TYPE_4__* elts; } ;


 scalar_t__ VAR_0 ;
 TYPE_5__* FUNC_0 (int *,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,TYPE_3__*,size_t,size_t,TYPE_4__*) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_http_request_t *VAR_2, ngx_table_elt_t *VAR_3,
    size_t VAR_4)
{
    size_t VAR_5;
    ngx_int_t VAR_6;
    ngx_uint_t VAR_7;
    ngx_http_proxy_rewrite_t *VAR_8;
    ngx_http_proxy_loc_conf_t *VAR_9;

    VAR_9 = FUNC_0(VAR_2, VAR_1);

    VAR_8 = VAR_9->redirects->elts;

    if (VAR_8 == ((void*)0)) {
        return VAR_0;
    }

    VAR_5 = VAR_3->value.len - VAR_4;

    for (VAR_7 = 0; VAR_7 < VAR_9->redirects->nelts; VAR_7++) {
        VAR_6 = VAR_8[VAR_7].handler(VAR_2, VAR_3, VAR_4, VAR_5, &VAR_8[VAR_7]);

        if (VAR_6 != VAR_0) {
            return VAR_6;
        }
    }

    return VAR_0;
}
