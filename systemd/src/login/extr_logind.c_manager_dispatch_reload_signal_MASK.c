
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct signalfd_siginfo {int dummy; } ;
typedef int sd_event_source ;
typedef int Manager ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(sd_event_source *VAR_0, const struct signalfd_siginfo *VAR_1, void *VAR_2) {
        Manager *VAR_3 = VAR_2;
        int VAR_4;

        FUNC_3(VAR_3);
        VAR_4 = FUNC_2(VAR_3);
        if (VAR_4 < 0)
                FUNC_1(VAR_4, "Failed to parse config file, using defaults: %m");
        else
                FUNC_0("Config file reloaded.");

        return 0;
}
