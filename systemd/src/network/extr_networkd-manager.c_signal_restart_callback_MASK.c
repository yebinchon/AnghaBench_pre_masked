
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct signalfd_siginfo {int dummy; } ;
typedef int sd_event_source ;
struct TYPE_3__ {int restarting; } ;
typedef TYPE_1__ Manager ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(sd_event_source *VAR_0, const struct signalfd_siginfo *VAR_1, void *VAR_2) {
        Manager *VAR_3 = VAR_2;

        FUNC_0(VAR_3);
        VAR_3->restarting = 1;

        FUNC_1("Restart operation initiated.");

        return FUNC_2(FUNC_3(VAR_0), 0);
}
