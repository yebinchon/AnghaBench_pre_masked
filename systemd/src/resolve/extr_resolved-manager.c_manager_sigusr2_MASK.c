
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct signalfd_siginfo {int dummy; } ;
typedef struct signalfd_siginfo const sd_event_source ;
typedef struct signalfd_siginfo const Manager ;


 int FUNC_0 (struct signalfd_siginfo const*) ;
 int FUNC_1 (struct signalfd_siginfo const*) ;

__attribute__((used)) static int FUNC_2(sd_event_source *VAR_0, const struct signalfd_siginfo *VAR_1, void *VAR_2) {
        Manager *VAR_3 = VAR_2;

        FUNC_0(VAR_0);
        FUNC_0(VAR_1);
        FUNC_0(VAR_3);

        FUNC_1(VAR_3);

        return 0;
}
