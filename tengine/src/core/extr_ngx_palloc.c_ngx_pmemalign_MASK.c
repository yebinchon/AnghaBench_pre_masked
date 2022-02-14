
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* large; int log; } ;
typedef TYPE_1__ ngx_pool_t ;
struct TYPE_7__ {struct TYPE_7__* next; void* alloc; } ;
typedef TYPE_2__ ngx_pool_large_t ;


 int FUNC_0 (void*) ;
 void* FUNC_1 (size_t,size_t,int ) ;
 TYPE_2__* FUNC_2 (TYPE_1__*,int,int) ;

void *
FUNC_3(ngx_pool_t *VAR_0, size_t VAR_1, size_t VAR_2)
{
    void *VAR_3;
    ngx_pool_large_t *VAR_4;

    VAR_3 = FUNC_1(VAR_2, VAR_1, VAR_0->log);
    if (VAR_3 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_4 = FUNC_2(VAR_0, sizeof(ngx_pool_large_t), 1);
    if (VAR_4 == ((void*)0)) {
        FUNC_0(VAR_3);
        return ((void*)0);
    }

    VAR_4->alloc = VAR_3;
    VAR_4->next = VAR_0->large;
    VAR_0->large = VAR_4;

    return VAR_3;
}
