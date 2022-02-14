
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* ctx; } ;
typedef TYPE_1__ ngx_thread_task_t ;
typedef int ngx_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;

ngx_thread_task_t *
FUNC_1(ngx_pool_t *VAR_0, size_t VAR_1)
{
    ngx_thread_task_t *VAR_2;

    VAR_2 = FUNC_0(VAR_0, sizeof(ngx_thread_task_t) + VAR_1);
    if (VAR_2 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_2->ctx = VAR_2 + 1;

    return VAR_2;
}
