
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ bus; int event; } ;
typedef TYPE_1__ Manager ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (scalar_t__,int *,char*,char*,int ,int ,TYPE_1__*) ;
 int FUNC_5 (scalar_t__,int *,char*,int ,TYPE_1__*) ;
 int FUNC_6 (scalar_t__,int *,char*,char*,int ,TYPE_1__*) ;
 int FUNC_7 (scalar_t__,int ,int ) ;
 int FUNC_8 (scalar_t__,int *,char*,char*,char*,char*,int ,int *,TYPE_1__*) ;
 int FUNC_9 (scalar_t__,int *,char*,int ,int *,int *) ;

int FUNC_10(Manager *VAR_9) {
        int VAR_10;

        FUNC_0(VAR_9);

        if (VAR_9->bus)
                return 0;

        VAR_10 = FUNC_1(&VAR_9->bus, "bus-api-network");
        if (VAR_10 < 0)
                return FUNC_2(VAR_10, "Failed to connect to bus: %m");

        VAR_10 = FUNC_6(VAR_9->bus, ((void*)0), "/org/freedesktop/network1", "org.freedesktop.network1.Manager", VAR_3, VAR_9);
        if (VAR_10 < 0)
                return FUNC_2(VAR_10, "Failed to add manager object vtable: %m");

        VAR_10 = FUNC_4(VAR_9->bus, ((void*)0), "/org/freedesktop/network1/link", "org.freedesktop.network1.Link", VAR_2, VAR_1, VAR_9);
        if (VAR_10 < 0)
               return FUNC_2(VAR_10, "Failed to add link object vtable: %m");

        VAR_10 = FUNC_5(VAR_9->bus, ((void*)0), "/org/freedesktop/network1/link", VAR_0, VAR_9);
        if (VAR_10 < 0)
                return FUNC_2(VAR_10, "Failed to add link enumerator: %m");

        VAR_10 = FUNC_4(VAR_9->bus, ((void*)0), "/org/freedesktop/network1/network", "org.freedesktop.network1.Network", VAR_7, VAR_6, VAR_9);
        if (VAR_10 < 0)
               return FUNC_2(VAR_10, "Failed to add network object vtable: %m");

        VAR_10 = FUNC_5(VAR_9->bus, ((void*)0), "/org/freedesktop/network1/network", VAR_5, VAR_9);
        if (VAR_10 < 0)
                return FUNC_2(VAR_10, "Failed to add network enumerator: %m");

        VAR_10 = FUNC_9(VAR_9->bus, ((void*)0), "org.freedesktop.network1", 0, ((void*)0), ((void*)0));
        if (VAR_10 < 0)
                return FUNC_2(VAR_10, "Failed to request name: %m");

        VAR_10 = FUNC_7(VAR_9->bus, VAR_9->event, 0);
        if (VAR_10 < 0)
                return FUNC_2(VAR_10, "Failed to attach bus to event loop: %m");

        VAR_10 = FUNC_8(
                        VAR_9->bus,
                        ((void*)0),
                        "org.freedesktop.DBus.Local",
                        ((void*)0),
                        "org.freedesktop.DBus.Local",
                        "Connected",
                        VAR_8, ((void*)0), VAR_9);
        if (VAR_10 < 0)
                return FUNC_2(VAR_10, "Failed to request match on Connected signal: %m");

        VAR_10 = FUNC_8(
                        VAR_9->bus,
                        ((void*)0),
                        "org.freedesktop.login1",
                        "/org/freedesktop/login1",
                        "org.freedesktop.login1.Manager",
                        "PrepareForSleep",
                        VAR_4, ((void*)0), VAR_9);
        if (VAR_10 < 0)
                FUNC_3(VAR_10, "Failed to request match for PrepareForSleep, ignoring: %m");

        return 0;
}
