
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int wait_queue; } ;
typedef TYPE_1__ ngx_http_lua_sema_t ;
struct TYPE_8__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_6__* VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,int ,char*,TYPE_1__*) ;
 int FUNC_2 (int ,int ,int ,char*,TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_4(ngx_http_lua_sema_t *VAR_5)
{
    FUNC_1(VAR_0, VAR_2->log, 0,
                   "in lua gc, semaphore %p", VAR_5);

    if (VAR_5 == ((void*)0)) {
        return;
    }

    if (!VAR_4
        && !VAR_3
        && !FUNC_3(&VAR_5->wait_queue))
    {
        FUNC_2(VAR_1, VAR_2->log, 0,
                      "in lua semaphore gc wait queue is"
                      " not empty while the semaphore %p is being "
                      "destroyed", VAR_5);
    }

    FUNC_0(VAR_5);
}
