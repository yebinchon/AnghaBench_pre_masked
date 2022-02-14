
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ clock_watch_fd; int event_clock_watch; int event; } ;
typedef TYPE_1__ Manager ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int,char*) ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int *,int,int ,int ,TYPE_1__*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 () ;

__attribute__((used)) static int FUNC_6(Manager *VAR_2) {
        int VAR_3;

        FUNC_0(VAR_2);

        VAR_2->event_clock_watch = FUNC_4(VAR_2->event_clock_watch);
        FUNC_2(VAR_2->clock_watch_fd);

        VAR_2->clock_watch_fd = FUNC_5();
        if (VAR_2->clock_watch_fd < 0)
                return FUNC_1(VAR_2->clock_watch_fd, "Failed to create timerfd: %m");

        VAR_3 = FUNC_3(VAR_2->event, &VAR_2->event_clock_watch, VAR_2->clock_watch_fd, VAR_0, VAR_1, VAR_2);
        if (VAR_3 < 0)
                return FUNC_1(VAR_3, "Failed to create clock watch event source: %m");

        return 0;
}
