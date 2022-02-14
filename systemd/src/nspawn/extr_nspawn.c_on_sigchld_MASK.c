
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct signalfd_siginfo {int dummy; } ;
struct TYPE_3__ {scalar_t__ si_pid; } ;
typedef TYPE_1__ siginfo_t ;
typedef struct signalfd_siginfo const sd_event_source ;
typedef scalar_t__ pid_t ;


 scalar_t__ FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct signalfd_siginfo const*) ;
 int VAR_5 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct signalfd_siginfo const*) ;
 scalar_t__ FUNC_5 (int ,scalar_t__,TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_6(sd_event_source *VAR_6, const struct signalfd_siginfo *VAR_7, void *VAR_8) {
        pid_t VAR_9;

        FUNC_1(VAR_6);
        FUNC_1(VAR_7);

        VAR_9 = FUNC_0(VAR_8);

        for (;;) {
                siginfo_t VAR_10 = {};

                if (FUNC_5(VAR_0, 0, &VAR_10, VAR_3|VAR_4|VAR_2) < 0)
                        return FUNC_2(VAR_5, "Failed to waitid(): %m");
                if (VAR_10.si_pid == 0)
                        break;
                if (VAR_10.si_pid == VAR_9) {


                        FUNC_3(FUNC_4(VAR_6), 0);
                        break;
                }


                (void) FUNC_5(VAR_1, VAR_10.si_pid, &VAR_10, VAR_3|VAR_2);
        }

        return 0;
}
