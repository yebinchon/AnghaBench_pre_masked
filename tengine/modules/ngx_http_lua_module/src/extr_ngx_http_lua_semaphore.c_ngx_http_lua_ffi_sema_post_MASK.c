
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int resource_count; int sem_event; int wait_queue; } ;
typedef TYPE_1__ ngx_http_lua_sema_t ;
struct TYPE_6__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* VAR_2 ;
 int FUNC_0 (int ,int ,int ,char*,TYPE_1__*,int,int) ;
 int FUNC_1 (int *,int *) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;

int
FUNC_3(ngx_http_lua_sema_t *VAR_4, int VAR_5)
{
    FUNC_0(VAR_0, VAR_2->log, 0,
                   "http lua semaphore post: %p, n: %d, resources: %d",
                   VAR_4, VAR_5, VAR_4->resource_count);

    VAR_4->resource_count += VAR_5;

    if (!FUNC_2(&VAR_4->wait_queue)) {




        FUNC_1((&VAR_4->sem_event), &VAR_3);
    }

    return VAR_1;
}
