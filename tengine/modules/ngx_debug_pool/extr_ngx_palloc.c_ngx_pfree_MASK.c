
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* stat; int log; TYPE_3__* large; } ;
typedef TYPE_2__ ngx_pool_t ;
struct TYPE_7__ {void* alloc; scalar_t__ size; struct TYPE_7__* next; } ;
typedef TYPE_3__ ngx_pool_large_t ;
typedef int ngx_int_t ;
struct TYPE_5__ {int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int ,int ,int ,char*,void*) ;

ngx_int_t
FUNC_2(ngx_pool_t *VAR_3, void *VAR_4)
{
    ngx_pool_large_t *VAR_5;

    for (VAR_5 = VAR_3->large; VAR_5; VAR_5 = VAR_5->next) {
        if (VAR_4 == VAR_5->alloc) {
            FUNC_1(VAR_1, VAR_3->log, 0,
                           "free: %p", VAR_5->alloc);
            FUNC_0(VAR_5->alloc);
            VAR_5->alloc = ((void*)0);






            return VAR_2;
        }
    }

    return VAR_0;
}
