
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int run_systemd_timesync_wd; int inotify_fd; } ;
typedef TYPE_1__ ClockState ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static int FUNC_1(ClockState *VAR_2) {
        VAR_2->run_systemd_timesync_wd = FUNC_0(VAR_2->inotify_fd, "/run/systemd/timesync", VAR_0|VAR_1);
        return VAR_2->run_systemd_timesync_wd;
}
