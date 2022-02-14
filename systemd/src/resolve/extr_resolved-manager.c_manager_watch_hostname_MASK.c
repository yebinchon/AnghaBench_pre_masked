
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ hostname_fd; int full_hostname; int mdns_hostname; int llmnr_hostname; int hostname_event_source; int event; } ;
typedef TYPE_1__ Manager ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int *,int *) ;
 int VAR_5 ;
 int FUNC_2 () ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int *,int *,int *) ;
 int VAR_6 ;
 scalar_t__ FUNC_7 (char*,int) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ,int *,scalar_t__,int ,int ,TYPE_1__*) ;
 int FUNC_10 (int ,char*) ;

__attribute__((used)) static int FUNC_11(Manager *VAR_7) {
        int VAR_8;

        FUNC_0(VAR_7);

        VAR_7->hostname_fd = FUNC_7("/proc/sys/kernel/hostname",
                              VAR_4|VAR_1|VAR_3|VAR_2);
        if (VAR_7->hostname_fd < 0) {
                FUNC_5(VAR_5, "Failed to watch hostname: %m");
                return 0;
        }

        VAR_8 = FUNC_9(VAR_7->event, &VAR_7->hostname_event_source, VAR_7->hostname_fd, 0, VAR_6, VAR_7);
        if (VAR_8 < 0) {
                if (VAR_8 == -VAR_0)

                        VAR_7->hostname_fd = FUNC_8(VAR_7->hostname_fd);
                else
                        return FUNC_3(VAR_8, "Failed to add hostname event source: %m");
        }

        (void) FUNC_10(VAR_7->hostname_event_source, "hostname");

        VAR_8 = FUNC_1(&VAR_7->full_hostname, &VAR_7->llmnr_hostname, &VAR_7->mdns_hostname);
        if (VAR_8 < 0) {
                FUNC_4("Defaulting to hostname '%s'.", FUNC_2());

                VAR_8 = FUNC_6(&VAR_7->full_hostname, &VAR_7->llmnr_hostname, &VAR_7->mdns_hostname);
                if (VAR_8 < 0)
                        return VAR_8;
        } else
                FUNC_4("Using system hostname '%s'.", VAR_7->full_hostname);

        return 0;
}
