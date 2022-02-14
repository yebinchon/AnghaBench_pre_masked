
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_1__ ;


typedef int sd_dhcp_client ;
struct TYPE_15__ {int keep_configuration; struct TYPE_15__* network; int dhcp_lease; int dhcp_send_release; struct TYPE_15__* ipv4ll; int state; struct TYPE_15__* manager; } ;
typedef TYPE_1__ Link ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;






 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *,TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 (TYPE_1__*,char*) ;
 int FUNC_11 (TYPE_1__*,char*) ;
 int FUNC_12 (TYPE_1__*,char*,int) ;
 int FUNC_13 (TYPE_1__*,int,char*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_16(sd_dhcp_client *VAR_5, int VAR_6, void *VAR_7) {
        Link *VAR_8 = VAR_7;
        int VAR_9;

        FUNC_2(VAR_8);
        FUNC_2(VAR_8->network);
        FUNC_2(VAR_8->manager);

        if (FUNC_1(VAR_8->state, VAR_3, VAR_4))
                return 0;

        switch (VAR_6) {
                case 128:

                        if (FUNC_9(VAR_8, VAR_0)) {
                                FUNC_2(VAR_8->ipv4ll);

                                FUNC_10(VAR_8, "DHCP client is stopped. Acquiring IPv4 link-local address");

                                VAR_9 = FUNC_15(VAR_8->ipv4ll);
                                if (VAR_9 < 0)
                                        return FUNC_13(VAR_8, VAR_9, "Could not acquire IPv4 link-local address: %m");
                        }

                        if (FUNC_0(VAR_8->network->keep_configuration, VAR_2)) {
                                FUNC_11(VAR_8, "DHCPv4 connection considered critical, ignoring request to reconfigure it.");
                                return 0;
                        }

                        if (VAR_8->dhcp_lease) {
                                if (VAR_8->network->dhcp_send_release)
                                        (void) FUNC_14(VAR_5);

                                VAR_9 = FUNC_5(VAR_8);
                                if (VAR_9 < 0) {
                                        FUNC_8(VAR_8);
                                        return VAR_9;
                                }
                        }

                        break;
                case 133:
                        if (FUNC_0(VAR_8->network->keep_configuration, VAR_2)) {
                                FUNC_11(VAR_8, "DHCPv4 connection considered critical, ignoring request to reconfigure it.");
                                return 0;
                        }

                        if (VAR_8->dhcp_lease) {
                                VAR_9 = FUNC_5(VAR_8);
                                if (VAR_9 < 0) {
                                        FUNC_8(VAR_8);
                                        return VAR_9;
                                }
                        }

                        break;
                case 131:
                        if (FUNC_0(VAR_8->network->keep_configuration, VAR_2)) {
                                FUNC_11(VAR_8, "DHCPv4 connection considered critical, ignoring request to reconfigure it.");
                                return 0;
                        }

                        VAR_9 = FUNC_4(VAR_5, VAR_8);
                        if (VAR_9 < 0) {
                                FUNC_8(VAR_8);
                                return VAR_9;
                        }

                        break;
                case 130:
                        VAR_9 = FUNC_6(VAR_5, VAR_8);
                        if (VAR_9 < 0) {
                                FUNC_8(VAR_8);
                                return VAR_9;
                        }
                        break;
                case 132:
                        VAR_9 = FUNC_3(VAR_5, VAR_8);
                        if (VAR_9 < 0) {
                                FUNC_8(VAR_8);
                                return VAR_9;
                        }
                        break;
                case 129:
                        VAR_9 = FUNC_7(VAR_8, VAR_5);
                        if (VAR_9 < 0)
                                return VAR_9;
                        if (VAR_9 != 0)
                                return -VAR_1;
                        break;
                default:
                        if (VAR_6 < 0)
                                FUNC_13(VAR_8, VAR_6, "DHCP error: Client failed: %m");
                        else
                                FUNC_12(VAR_8, "DHCP unknown event: %i", VAR_6);
                        break;
        }

        return 0;
}
