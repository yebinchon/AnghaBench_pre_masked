
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
typedef int ngx_pool_t ;
struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ ngx_chain_t ;


 TYPE_1__* FUNC_0 (int *) ;

ngx_chain_t *
FUNC_1(ngx_pool_t *VAR_0, size_t VAR_1)
{
    ngx_uint_t VAR_2;
    ngx_chain_t *VAR_3, **VAR_4;

    VAR_4 = &VAR_3;

    for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
        *VAR_4 = FUNC_0(VAR_0);
        if (*VAR_4 == ((void*)0)) {
            return ((void*)0);
        }

        VAR_4 = &(*VAR_4)->next;
    }

    (*VAR_4) = ((void*)0);

    return VAR_3;
}
