
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int event; scalar_t__ bus; } ;
typedef TYPE_1__ Manager ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__*,char*) ;
 int FUNC_2 (int,char*) ;
 int VAR_0 ;
 int FUNC_3 (scalar_t__,int *,char*,char*,int ,TYPE_1__*) ;
 int FUNC_4 (scalar_t__,int ,int ) ;
 int FUNC_5 (scalar_t__,int *,char*,int ,int *,int *) ;

int FUNC_6(Manager *VAR_1) {
        int VAR_2;

        FUNC_0(VAR_1);

        if (VAR_1->bus)
                return 0;

        VAR_2 = FUNC_1(&VAR_1->bus, "bus-api-timesync");
        if (VAR_2 < 0)
                return FUNC_2(VAR_2, "Failed to connect to bus: %m");

        VAR_2 = FUNC_3(VAR_1->bus, ((void*)0), "/org/freedesktop/timesync1", "org.freedesktop.timesync1.Manager", VAR_0, VAR_1);
        if (VAR_2 < 0)
                return FUNC_2(VAR_2, "Failed to add manager object vtable: %m");

        VAR_2 = FUNC_5(VAR_1->bus, ((void*)0), "org.freedesktop.timesync1", 0, ((void*)0), ((void*)0));
        if (VAR_2 < 0)
                return FUNC_2(VAR_2, "Failed to request name: %m");

        VAR_2 = FUNC_4(VAR_1->bus, VAR_1->event, 0);
        if (VAR_2 < 0)
                return FUNC_2(VAR_2, "Failed to attach bus to event loop: %m");

        return 0;
}
