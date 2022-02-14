
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int sd_event_source ;
struct TYPE_3__ {int send_watchdog; int watchdog_usec; int watchdog_event_source; int notify_event_source; } ;
typedef TYPE_1__ Server ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(sd_event_source *VAR_1, uint64_t VAR_2, void *VAR_3) {
        Server *VAR_4 = VAR_3;
        int VAR_5;

        FUNC_0(VAR_4);

        VAR_4->send_watchdog = 1;

        VAR_5 = FUNC_3(VAR_4->notify_event_source, VAR_0);
        if (VAR_5 < 0)
                FUNC_2(VAR_5, "Failed to turn on notify event source: %m");

        VAR_5 = FUNC_4(VAR_4->watchdog_event_source, VAR_2 + VAR_4->watchdog_usec / 2);
        if (VAR_5 < 0)
                return FUNC_1(VAR_5, "Failed to restart watchdog event source: %m");

        VAR_5 = FUNC_3(VAR_4->watchdog_event_source, VAR_0);
        if (VAR_5 < 0)
                return FUNC_1(VAR_5, "Failed to enable watchdog event source: %m");

        return 0;
}
