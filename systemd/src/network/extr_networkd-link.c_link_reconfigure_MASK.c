
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


struct TYPE_24__ {TYPE_1__* network; int state; int dhcp_server; int bssid; int ssid; int wlan_iftype; int mac; int ifname; int sd_device; int manager; } ;
struct TYPE_23__ {int filename; scalar_t__ unmanaged; } ;
typedef TYPE_1__ Network ;
typedef TYPE_2__ Link ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (TYPE_2__*,int) ;
 int FUNC_14 (TYPE_2__*,char*,int ) ;
 int FUNC_15 (TYPE_2__*,char*,int ) ;
 int FUNC_16 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_17 (int ,int ,int ,int *,int ,int ,int *,TYPE_1__**) ;
 TYPE_1__* FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (int ) ;

int FUNC_20(Link *VAR_5, bool VAR_6) {
        Network *VAR_7;
        int VAR_8;

        if (FUNC_0(VAR_5->state, VAR_3, VAR_2))
                return 0;

        VAR_8 = FUNC_17(VAR_5->manager, VAR_5->sd_device, VAR_5->ifname,
                        &VAR_5->mac, VAR_5->wlan_iftype, VAR_5->ssid, &VAR_5->bssid, &VAR_7);
        if (VAR_8 == -VAR_0) {
                FUNC_7(VAR_5);
                return 0;
        } else if (VAR_8 == 0 && VAR_7->unmanaged) {
                FUNC_7(VAR_5);
                return 0;
        } else if (VAR_8 < 0)
                return VAR_8;

        if (VAR_5->network == VAR_7 && !VAR_6)
                return 0;

        FUNC_15(VAR_5, "Re-configuring with %s", VAR_7->filename);


        VAR_8 = FUNC_13(VAR_5, 0);
        if (VAR_8 < 0) {
                FUNC_6(VAR_5);
                return VAR_8;
        }

        if (FUNC_3(VAR_5))
                (void) FUNC_19(VAR_5->dhcp_server);

        VAR_8 = FUNC_4(VAR_5);
        if (VAR_8 < 0)
                return VAR_8;

        if (!FUNC_0(VAR_5->state, VAR_4, VAR_3)) {
                FUNC_14(VAR_5, "State is %s, dropping config", FUNC_12(VAR_5->state));
                VAR_8 = FUNC_5(VAR_5);
                if (VAR_8 < 0)
                        return VAR_8;
        }

        FUNC_8(VAR_5);
        FUNC_9(VAR_5);
        VAR_5->network = FUNC_18(VAR_5->network);


        VAR_8 = FUNC_16(VAR_7, VAR_5);
        if (VAR_8 < 0)
                return VAR_8;

        VAR_8 = FUNC_10(VAR_5);
        if (VAR_8 < 0)
                return VAR_8;

        FUNC_11(VAR_5, VAR_1);



        VAR_8 = FUNC_2(VAR_5);
        if (VAR_8 <= 0)
                return VAR_8;

        VAR_8 = FUNC_1(VAR_5);
        if (VAR_8 < 0)
                return VAR_8;

        return 0;
}
