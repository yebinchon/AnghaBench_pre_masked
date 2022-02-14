
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct signalfd_siginfo {int dummy; } ;
typedef int sd_event_source ;
typedef scalar_t__ pid_t ;


 scalar_t__ FUNC_0 (void*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static int FUNC_6(sd_event_source *VAR_1, const struct signalfd_siginfo *VAR_2, void *VAR_3) {
        pid_t VAR_4;

        VAR_4 = FUNC_0(VAR_3);
        if (VAR_4 > 0) {
                if (FUNC_1(VAR_4, VAR_0) >= 0) {
                        FUNC_2("Trying to halt container. Send SIGTERM again to trigger immediate termination.");
                        FUNC_5(VAR_1, ((void*)0));
                        return 0;
                }
        }

        FUNC_3(FUNC_4(VAR_1), 0);
        return 0;
}
