
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
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (scalar_t__,int *,char*,char*,int ,int ,TYPE_1__*) ;
 int FUNC_5 (scalar_t__,int *,char*,int ,TYPE_1__*) ;
 int FUNC_6 (scalar_t__,int *,char*,char*,int ,TYPE_1__*) ;
 int FUNC_7 (scalar_t__,int ,int ) ;
 int FUNC_8 (scalar_t__,int *,char*,char*,char*,char*,int ,int *,TYPE_1__*) ;
 int FUNC_9 (scalar_t__,int *,char*,int ,int *,int *) ;

int FUNC_10(Manager *VAR_8) {
        int VAR_9;

        FUNC_0(VAR_8);

        if (VAR_8->bus)
                return 0;

        VAR_9 = FUNC_1(&VAR_8->bus, "bus-api-resolve");
        if (VAR_9 < 0)
                return FUNC_2(VAR_9, "Failed to connect to system bus: %m");

        VAR_9 = FUNC_6(VAR_8->bus, ((void*)0), "/org/freedesktop/resolve1", "org.freedesktop.resolve1.Manager", VAR_7, VAR_8);
        if (VAR_9 < 0)
                return FUNC_2(VAR_9, "Failed to register object: %m");

        VAR_9 = FUNC_4(VAR_8->bus, ((void*)0), "/org/freedesktop/resolve1/link", "org.freedesktop.resolve1.Link", VAR_5, VAR_4, VAR_8);
        if (VAR_9 < 0)
                return FUNC_2(VAR_9, "Failed to register link objects: %m");

        VAR_9 = FUNC_5(VAR_8->bus, ((void*)0), "/org/freedesktop/resolve1/link", VAR_3, VAR_8);
        if (VAR_9 < 0)
                return FUNC_2(VAR_9, "Failed to register link enumerator: %m");

        VAR_9 = FUNC_4(VAR_8->bus, ((void*)0), "/org/freedesktop/resolve1/dnssd", "org.freedesktop.resolve1.DnssdService", VAR_2, VAR_1, VAR_8);
        if (VAR_9 < 0)
                return FUNC_2(VAR_9, "Failed to register dnssd objects: %m");

        VAR_9 = FUNC_5(VAR_8->bus, ((void*)0), "/org/freedesktop/resolve1/dnssd", VAR_0, VAR_8);
        if (VAR_9 < 0)
                return FUNC_2(VAR_9, "Failed to register dnssd enumerator: %m");

        VAR_9 = FUNC_9(VAR_8->bus, ((void*)0), "org.freedesktop.resolve1", 0, ((void*)0), ((void*)0));
        if (VAR_9 < 0)
                return FUNC_2(VAR_9, "Failed to request name: %m");

        VAR_9 = FUNC_7(VAR_8->bus, VAR_8->event, 0);
        if (VAR_9 < 0)
                return FUNC_2(VAR_9, "Failed to attach bus to event loop: %m");

        VAR_9 = FUNC_8(
                        VAR_8->bus,
                        ((void*)0),
                        "org.freedesktop.login1",
                        "/org/freedesktop/login1",
                        "org.freedesktop.login1.Manager",
                        "PrepareForSleep",
                        VAR_6,
                        ((void*)0),
                        VAR_8);
        if (VAR_9 < 0)
                FUNC_3(VAR_9, "Failed to request match for PrepareForSleep, ignoring: %m");

        return 0;
}
