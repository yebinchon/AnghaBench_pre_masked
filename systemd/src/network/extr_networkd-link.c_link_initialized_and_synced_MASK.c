
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_20__ {int flags; int bssid; int ssid; int wlan_iftype; int mac; struct TYPE_20__* ifname; int sd_device; struct TYPE_20__* manager; int network; int state; } ;
struct TYPE_19__ {scalar_t__ link_local; scalar_t__ dhcp; scalar_t__ dhcp_server; scalar_t__ unmanaged; } ;
typedef TYPE_1__ Network ;
typedef TYPE_2__ Link ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (TYPE_2__*,char*) ;
 int FUNC_10 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*,int ,TYPE_2__*,int *,int ,int ,int *,TYPE_1__**) ;
 int FUNC_12 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_13(Link *VAR_5) {
        Network *VAR_6;
        int VAR_7;

        FUNC_1(VAR_5);
        FUNC_1(VAR_5->ifname);
        FUNC_1(VAR_5->manager);



        if (!FUNC_0(VAR_5->state, VAR_4, VAR_3))
                return 0;

        FUNC_9(VAR_5, "Link state is up-to-date");
        FUNC_8(VAR_5, VAR_3);

        VAR_7 = FUNC_6(VAR_5);
        if (VAR_7 < 0)
                return VAR_7;

        VAR_7 = FUNC_5(VAR_5);
        if (VAR_7 < 0)
                return VAR_7;

        if (!VAR_5->network) {
                VAR_7 = FUNC_12(VAR_5);
                if (VAR_7 < 0)
                        return VAR_7;

                VAR_7 = FUNC_11(VAR_5->manager, VAR_5->sd_device, VAR_5->ifname,
                                &VAR_5->mac, VAR_5->wlan_iftype, VAR_5->ssid, &VAR_5->bssid, &VAR_6);
                if (VAR_7 == -VAR_1) {
                        FUNC_4(VAR_5);
                        return 0;
                } else if (VAR_7 == 0 && VAR_6->unmanaged) {
                        FUNC_4(VAR_5);
                        return 0;
                } else if (VAR_7 < 0)
                        return VAR_7;

                if (VAR_5->flags & VAR_2) {
                        if (VAR_6->link_local != VAR_0)
                                FUNC_9(VAR_5, "Ignoring link-local autoconfiguration for loopback link");

                        if (VAR_6->dhcp != VAR_0)
                                FUNC_9(VAR_5, "Ignoring DHCP clients for loopback link");

                        if (VAR_6->dhcp_server)
                                FUNC_9(VAR_5, "Ignoring DHCP server for loopback link");
                }

                VAR_7 = FUNC_10(VAR_6, VAR_5);
                if (VAR_7 < 0)
                        return VAR_7;
        }

        VAR_7 = FUNC_7(VAR_5);
        if (VAR_7 < 0)
                return VAR_7;



        VAR_7 = FUNC_3(VAR_5);
        if (VAR_7 <= 0)
                return VAR_7;

        VAR_7 = FUNC_2(VAR_5);
        if (VAR_7 < 0)
                return VAR_7;

        return 0;
}
