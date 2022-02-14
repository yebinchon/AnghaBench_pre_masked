
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ data; } ;
struct TYPE_13__ {TYPE_1__ value; } ;
typedef TYPE_3__ ngx_table_elt_t ;
struct TYPE_14__ {size_t len; int data; } ;
typedef TYPE_4__ ngx_str_t ;
typedef int ngx_int_t ;
typedef int ngx_http_request_t ;
struct TYPE_12__ {int complex; } ;
struct TYPE_15__ {int replacement; TYPE_2__ pattern; } ;
typedef TYPE_5__ ngx_http_proxy_rewrite_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *,TYPE_4__*) ;
 int FUNC_1 (int *,TYPE_3__*,size_t,size_t,TYPE_4__*) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,size_t) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_http_request_t *VAR_3,
    ngx_table_elt_t *VAR_4, size_t VAR_5, size_t VAR_6, ngx_http_proxy_rewrite_t *VAR_7)
{
    ngx_str_t VAR_8, VAR_9;

    if (FUNC_0(VAR_3, &VAR_7->pattern.complex, &VAR_8) != VAR_2) {
        return VAR_1;
    }

    if (VAR_8.len > VAR_6
        || FUNC_2(VAR_4->value.data + VAR_5, VAR_8.data,
                        VAR_8.len) != 0)
    {
        return VAR_0;
    }

    if (FUNC_0(VAR_3, &VAR_7->replacement, &VAR_9) != VAR_2) {
        return VAR_1;
    }

    return FUNC_1(VAR_3, VAR_4, VAR_5, VAR_8.len, &VAR_9);
}
