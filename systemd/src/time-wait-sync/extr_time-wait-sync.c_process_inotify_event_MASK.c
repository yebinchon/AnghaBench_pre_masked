
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct inotify_event {scalar_t__ wd; int mask; } ;
typedef int sd_event ;
struct TYPE_5__ {scalar_t__ run_systemd_wd; scalar_t__ run_systemd_timesync_wd; int inotify_fd; } ;
typedef TYPE_1__ ClockState ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(sd_event *VAR_1, ClockState *VAR_2, struct inotify_event *VAR_3) {
        if (VAR_3->wd == VAR_2->run_systemd_wd) {

                if (VAR_2->run_systemd_timesync_wd < 0)
                        FUNC_2(VAR_2);
        } else if (VAR_3->wd == VAR_2->run_systemd_timesync_wd) {
                if (VAR_3->mask & VAR_0) {

                        (void) FUNC_1(VAR_2->inotify_fd, VAR_2->run_systemd_timesync_wd);
                        VAR_2->run_systemd_timesync_wd = -1;
                } else

                        FUNC_0(VAR_2, VAR_1);
        }
}
