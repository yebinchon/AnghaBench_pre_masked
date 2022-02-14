
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* chain; } ;
typedef TYPE_1__ ngx_pool_t ;
struct TYPE_8__ {struct TYPE_8__* next; } ;
typedef TYPE_2__ ngx_chain_t ;


 TYPE_2__* FUNC_0 (TYPE_1__*,int) ;

ngx_chain_t *
FUNC_1(ngx_pool_t *VAR_0)
{
    ngx_chain_t *VAR_1;

    VAR_1 = VAR_0->chain;

    if (VAR_1) {
        VAR_0->chain = VAR_1->next;
        return VAR_1;
    }

    VAR_1 = FUNC_0(VAR_0, sizeof(ngx_chain_t));
    if (VAR_1 == ((void*)0)) {
        return ((void*)0);
    }

    return VAR_1;
}
