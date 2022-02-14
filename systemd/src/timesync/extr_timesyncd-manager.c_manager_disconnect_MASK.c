
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* event_timeout; int clock_watch_fd; void* event_clock_watch; void* event_timer; int resolve_query; } ;
typedef TYPE_1__ Manager ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (void*) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int ) ;

void FUNC_6(Manager *VAR_0) {
        FUNC_0(VAR_0);

        VAR_0->resolve_query = FUNC_5(VAR_0->resolve_query);

        VAR_0->event_timer = FUNC_3(VAR_0->event_timer);

        FUNC_1(VAR_0);

        VAR_0->event_clock_watch = FUNC_3(VAR_0->event_clock_watch);
        VAR_0->clock_watch_fd = FUNC_2(VAR_0->clock_watch_fd);

        VAR_0->event_timeout = FUNC_3(VAR_0->event_timeout);

        FUNC_4(0, "STATUS=Idle.");
}
