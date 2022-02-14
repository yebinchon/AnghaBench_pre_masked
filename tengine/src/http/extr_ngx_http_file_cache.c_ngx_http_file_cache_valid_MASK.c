
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int time_t ;
typedef size_t ngx_uint_t ;
struct TYPE_4__ {scalar_t__ status; int valid; } ;
typedef TYPE_1__ ngx_http_cache_valid_t ;
struct TYPE_5__ {size_t nelts; TYPE_1__* elts; } ;
typedef TYPE_2__ ngx_array_t ;



time_t
FUNC_0(ngx_array_t *VAR_0, ngx_uint_t VAR_1)
{
    ngx_uint_t VAR_2;
    ngx_http_cache_valid_t *VAR_3;

    if (VAR_0 == ((void*)0)) {
        return 0;
    }

    VAR_3 = VAR_0->elts;
    for (VAR_2 = 0; VAR_2 < VAR_0->nelts; VAR_2++) {

        if (VAR_3[VAR_2].status == 0) {
            return VAR_3[VAR_2].valid;
        }

        if (VAR_3[VAR_2].status == VAR_1) {
            return VAR_3[VAR_2].valid;
        }
    }

    return 0;
}
