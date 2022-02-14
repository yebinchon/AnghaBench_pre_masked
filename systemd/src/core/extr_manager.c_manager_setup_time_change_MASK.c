
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ time_change_fd; int time_change_event_source; int event; } ;
typedef TYPE_1__ Manager ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int *,int,int ,int ,TYPE_1__*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 () ;

__attribute__((used)) static int FUNC_10(Manager *VAR_3) {
        int VAR_4;

        FUNC_1(VAR_3);

        if (FUNC_0(VAR_3))
                return 0;

        VAR_3->time_change_event_source = FUNC_8(VAR_3->time_change_event_source);
        VAR_3->time_change_fd = FUNC_4(VAR_3->time_change_fd);

        VAR_3->time_change_fd = FUNC_9();
        if (VAR_3->time_change_fd < 0)
                return FUNC_3(VAR_3->time_change_fd, "Failed to create timer change timer fd: %m");

        VAR_4 = FUNC_5(VAR_3->event, &VAR_3->time_change_event_source, VAR_3->time_change_fd, VAR_0, VAR_2, VAR_3);
        if (VAR_4 < 0)
                return FUNC_3(VAR_4, "Failed to create time change event source: %m");


        VAR_4 = FUNC_7(VAR_3->time_change_event_source, VAR_1-1);
        if (VAR_4 < 0)
                return FUNC_3(VAR_4, "Failed to set priority of time change event sources: %m");

        (void) FUNC_6(VAR_3->time_change_event_source, "manager-time-change");

        FUNC_2("Set up TFD_TIMER_CANCEL_ON_SET timerfd.");

        return 0;
}
