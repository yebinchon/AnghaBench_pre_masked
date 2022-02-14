
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int timerfd_fd; int timerfd_event_source; } ;
typedef TYPE_1__ ClockState ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(ClockState *VAR_0) {
        VAR_0->timerfd_event_source = FUNC_1(VAR_0->timerfd_event_source);
        VAR_0->timerfd_fd = FUNC_0(VAR_0->timerfd_fd);
}
