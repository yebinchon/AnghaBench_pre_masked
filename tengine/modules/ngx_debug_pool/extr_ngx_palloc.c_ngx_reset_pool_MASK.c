
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_7__ {scalar_t__ failed; int * last; TYPE_3__* next; } ;
struct TYPE_8__ {TYPE_4__* large; int * chain; struct TYPE_8__* current; TYPE_2__ d; TYPE_1__* stat; } ;
typedef TYPE_3__ ngx_pool_t ;
struct TYPE_9__ {scalar_t__ alloc; scalar_t__ size; struct TYPE_9__* next; } ;
typedef TYPE_4__ ngx_pool_large_t ;
struct TYPE_6__ {int size; } ;


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
