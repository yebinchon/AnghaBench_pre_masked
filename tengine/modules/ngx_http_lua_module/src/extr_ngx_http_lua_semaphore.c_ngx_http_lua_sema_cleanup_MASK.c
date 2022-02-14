
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ngx_queue_t ;
struct TYPE_5__ {int wait_count; } ;
typedef TYPE_1__ ngx_http_lua_sema_t ;
struct TYPE_7__ {scalar_t__ timer_set; } ;
struct TYPE_6__ {int * cleanup; int sem_wait_queue; TYPE_3__ sleep; TYPE_1__* data; } ;
typedef TYPE_2__ ngx_http_lua_co_ctx_t ;
struct TYPE_8__ {int log; } ;


 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,int ,int ,char*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(void *VAR_2)
{
    ngx_http_lua_co_ctx_t *VAR_3 = VAR_2;
    ngx_queue_t *VAR_4;
    ngx_http_lua_sema_t *VAR_5;

    VAR_5 = VAR_3->data;

    FUNC_1(VAR_0, VAR_1->log, 0,
                   "http lua semaphore cleanup");

    if (VAR_3->sleep.timer_set) {
        FUNC_0(&VAR_3->sleep);
    }

    VAR_4 = &VAR_3->sem_wait_queue;

    FUNC_2(VAR_4);
    VAR_5->wait_count--;
    VAR_3->cleanup = ((void*)0);
}
