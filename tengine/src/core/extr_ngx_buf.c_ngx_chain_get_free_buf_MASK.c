
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ngx_pool_t ;
struct TYPE_5__ {struct TYPE_5__* next; int * buf; } ;
typedef TYPE_1__ ngx_chain_t ;


 TYPE_1__* FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;

ngx_chain_t *
FUNC_2(ngx_pool_t *VAR_0, ngx_chain_t **VAR_1)
{
    ngx_chain_t *VAR_2;

    if (*VAR_1) {
        VAR_2 = *VAR_1;
        *VAR_1 = VAR_2->next;
        VAR_2->next = ((void*)0);
        return VAR_2;
    }

    VAR_2 = FUNC_0(VAR_0);
    if (VAR_2 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_2->buf = FUNC_1(VAR_0);
    if (VAR_2->buf == ((void*)0)) {
        return ((void*)0);
    }

    VAR_2->next = ((void*)0);

    return VAR_2;
}
