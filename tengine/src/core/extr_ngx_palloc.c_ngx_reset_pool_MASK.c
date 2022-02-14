
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_5__ {scalar_t__ failed; int * last; TYPE_2__* next; } ;
struct TYPE_6__ {TYPE_3__* large; int * chain; struct TYPE_6__* current; TYPE_1__ d; } ;
typedef TYPE_2__ ngx_pool_t ;
struct TYPE_7__ {scalar_t__ alloc; struct TYPE_7__* next; } ;
typedef TYPE_3__ ngx_pool_large_t ;


 int FUNC_0 (scalar_t__) ;

void
FUNC_1(ngx_pool_t *VAR_0)
{
    ngx_pool_t *VAR_1;
    ngx_pool_large_t *VAR_2;

    for (VAR_2 = VAR_0->large; VAR_2; VAR_2 = VAR_2->next) {
        if (VAR_2->alloc) {
            FUNC_0(VAR_2->alloc);
        }
    }

    for (VAR_1 = VAR_0; VAR_1; VAR_1 = VAR_1->d.next) {
        VAR_1->d.last = (u_char *) VAR_1 + sizeof(ngx_pool_t);
        VAR_1->d.failed = 0;
    }

    VAR_0->current = VAR_0;
    VAR_0->chain = ((void*)0);
    VAR_0->large = ((void*)0);
}
