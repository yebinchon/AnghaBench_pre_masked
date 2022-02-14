
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int complete; int (* handler ) (TYPE_2__*) ;scalar_t__ active; int log; } ;
struct TYPE_6__ {struct TYPE_6__* next; TYPE_2__ event; int id; } ;
typedef TYPE_1__ ngx_thread_task_t ;
typedef TYPE_2__ ngx_event_t ;
struct TYPE_8__ {TYPE_1__* first; TYPE_1__** last; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,char*) ;
 int FUNC_1 (int ,int ,int ,char*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int,int) ;
 TYPE_5__ VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_6(ngx_event_t *VAR_3)
{
    ngx_event_t *VAR_4;
    ngx_thread_task_t *VAR_5;

    FUNC_0(VAR_0, VAR_3->log, 0, "thread pool handler");

    FUNC_3(&VAR_2, 1, 2048);

    VAR_5 = VAR_1.first;
    VAR_1.first = ((void*)0);
    VAR_1.last = &VAR_1.first;

    FUNC_2();

    FUNC_4(&VAR_2);

    while (VAR_5) {
        FUNC_1(VAR_0, VAR_3->log, 0,
                       "run completion handler for task #%ui", VAR_5->id);

        VAR_4 = &VAR_5->event;
        VAR_5 = VAR_5->next;

        VAR_4->complete = 1;
        VAR_4->active = 0;

        VAR_4->handler(VAR_4);
    }
}
