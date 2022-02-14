
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * worker_watch; int ctrl; int monitor; int workers; int event; void* kill_workers_event; void* inotify_event; } ;
typedef TYPE_1__ Manager ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (void*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(Manager *VAR_2) {
        FUNC_0(VAR_2);

        VAR_2->inotify_event = FUNC_5(VAR_2->inotify_event);
        VAR_2->kill_workers_event = FUNC_5(VAR_2->kill_workers_event);

        VAR_2->event = FUNC_6(VAR_2->event);

        VAR_2->workers = FUNC_2(VAR_2->workers);
        FUNC_1(VAR_2, VAR_0);

        VAR_2->monitor = FUNC_4(VAR_2->monitor);
        VAR_2->ctrl = FUNC_7(VAR_2->ctrl);

        VAR_2->worker_watch[VAR_1] = FUNC_3(VAR_2->worker_watch[VAR_1]);
}
