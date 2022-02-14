
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
typedef int ngx_str_t ;
typedef int ngx_ssl_t ;
typedef scalar_t__ ngx_int_t ;
typedef int ngx_conf_t ;
struct TYPE_6__ {size_t nelts; int * elts; } ;
typedef TYPE_1__ ngx_array_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int *,int *,TYPE_1__*) ;

ngx_int_t
FUNC_1(ngx_conf_t *VAR_2, ngx_ssl_t *VAR_3, ngx_array_t *VAR_4,
    ngx_array_t *VAR_5, ngx_array_t *VAR_6)
{
    ngx_str_t *VAR_7, *VAR_8;
    ngx_uint_t VAR_9;

    VAR_7 = VAR_4->elts;
    VAR_8 = VAR_5->elts;

    for (VAR_9 = 0; VAR_9 < VAR_4->nelts; VAR_9++) {

        if (FUNC_0(VAR_2, VAR_3, &VAR_7[VAR_9], &VAR_8[VAR_9], VAR_6)
            != VAR_1)
        {
            return VAR_0;
        }
    }

    return VAR_1;
}
