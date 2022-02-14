
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ hostname_fd; int hostname_event_source; int event; } ;
typedef TYPE_1__ Server ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*) ;
 scalar_t__ FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int *,scalar_t__,int ,int ,TYPE_1__*) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_7(Server *VAR_8) {
        int VAR_9;

        FUNC_0(VAR_8);

        VAR_8->hostname_fd = FUNC_3("/proc/sys/kernel/hostname",
                              VAR_4|VAR_1|VAR_3|VAR_2);
        if (VAR_8->hostname_fd < 0)
                return FUNC_1(VAR_7, "Failed to open /proc/sys/kernel/hostname: %m");

        VAR_9 = FUNC_5(VAR_8->event, &VAR_8->hostname_event_source, VAR_8->hostname_fd, 0, VAR_6, VAR_8);
        if (VAR_9 < 0) {


                if (VAR_9 == -VAR_0) {
                        FUNC_2(VAR_9, "Failed to register hostname fd in event loop, ignoring: %m");
                        VAR_8->hostname_fd = FUNC_4(VAR_8->hostname_fd);
                        return 0;
                }

                return FUNC_1(VAR_9, "Failed to register hostname fd in event loop: %m");
        }

        VAR_9 = FUNC_6(VAR_8->hostname_event_source, VAR_5-10);
        if (VAR_9 < 0)
                return FUNC_1(VAR_9, "Failed to adjust priority of host name event source: %m");

        return 0;
}
