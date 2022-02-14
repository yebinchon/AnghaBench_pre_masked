
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sd_bus_message ;
typedef int sd_bus_error ;
struct TYPE_5__ {scalar_t__ dhcp_client; TYPE_1__* manager; int ifname; int network; } ;
struct TYPE_4__ {int polkit_registry; } ;
typedef TYPE_2__ Link ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,int ,char*,int *,int,int ,int *,int *) ;
 int FUNC_2 (int *,int ,char*,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (scalar_t__) ;

int FUNC_5(sd_bus_message *VAR_3, void *VAR_4, sd_bus_error *VAR_5) {
        Link *VAR_6 = VAR_4;
        int VAR_7;

        FUNC_0(VAR_6);

        if (!VAR_6->network)
                return FUNC_2(VAR_5, VAR_0,
                                         "Interface %s is not managed by systemd-networkd",
                                         VAR_6->ifname);

        VAR_7 = FUNC_1(VAR_3, VAR_1,
                                    "org.freedesktop.network1.renew",
                                    ((void*)0), 1, VAR_2,
                                    &VAR_6->manager->polkit_registry, VAR_5);
        if (VAR_7 < 0)
                return VAR_7;
        if (VAR_7 == 0)
                return 1;

        if (VAR_6->dhcp_client) {
                VAR_7 = FUNC_4(VAR_6->dhcp_client);
                if (VAR_7 < 0)
                        return VAR_7;
        }

        return FUNC_3(VAR_3, ((void*)0));
}
