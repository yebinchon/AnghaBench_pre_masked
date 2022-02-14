
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_16__ {int ifindex; char const* ifname; scalar_t__ kind; } ;
typedef TYPE_1__ sd_netlink_message ;
typedef TYPE_1__ NetDev ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char*,int) ;
 int FUNC_2 (TYPE_1__*,char*,...) ;
 int FUNC_3 (TYPE_1__*,int,char*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 char* FUNC_6 (scalar_t__) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,scalar_t__*) ;
 int FUNC_10 (TYPE_1__*,int ,char const**) ;
 int FUNC_11 (TYPE_1__*,int*) ;
 int FUNC_12 (char const*,char const*) ;

int FUNC_13(NetDev *VAR_7, sd_netlink_message *VAR_8) {
        uint16_t VAR_9;
        const char *VAR_10;
        const char *VAR_11;
        const char *VAR_12;
        int VAR_13, VAR_14;

        FUNC_0(VAR_7);
        FUNC_0(VAR_8);

        VAR_13 = FUNC_9(VAR_8, &VAR_9);
        if (VAR_13 < 0)
                return FUNC_3(VAR_7, VAR_13, "Could not get rtnl message type: %m");

        if (VAR_9 != VAR_6) {
                FUNC_2(VAR_7, "Cannot set ifindex from unexpected rtnl message type.");
                return -VAR_1;
        }

        VAR_13 = FUNC_11(VAR_8, &VAR_14);
        if (VAR_13 < 0) {
                FUNC_3(VAR_7, VAR_13, "Could not get ifindex: %m");
                FUNC_4(VAR_7);
                return VAR_13;
        } else if (VAR_14 <= 0) {
                FUNC_2(VAR_7, "Got invalid ifindex: %d", VAR_14);
                FUNC_4(VAR_7);
                return -VAR_1;
        }

        if (VAR_7->ifindex > 0) {
                if (VAR_7->ifindex != VAR_14) {
                        FUNC_2(VAR_7, "Could not set ifindex to %d, already set to %d",
                                         VAR_14, VAR_7->ifindex);
                        FUNC_4(VAR_7);
                        return -VAR_0;
                } else

                        return 0;
        }

        VAR_13 = FUNC_10(VAR_8, VAR_2, &VAR_12);
        if (VAR_13 < 0)
                return FUNC_3(VAR_7, VAR_13, "Could not get IFNAME: %m");

        if (!FUNC_12(VAR_7->ifname, VAR_12)) {
                FUNC_2(VAR_7, "Received newlink with wrong IFNAME %s", VAR_12);
                FUNC_4(VAR_7);
                return VAR_13;
        }

        VAR_13 = FUNC_7(VAR_8, VAR_4);
        if (VAR_13 < 0)
                return FUNC_3(VAR_7, VAR_13, "Could not get LINKINFO: %m");

        VAR_13 = FUNC_10(VAR_8, VAR_3, &VAR_11);
        if (VAR_13 < 0)
                return FUNC_3(VAR_7, VAR_13, "Could not get KIND: %m");

        VAR_13 = FUNC_8(VAR_8);
        if (VAR_13 < 0)
                return FUNC_3(VAR_7, VAR_13, "Could not exit container: %m");

        if (VAR_7->kind == VAR_5)

                VAR_10 = "tun";
        else {
                VAR_10 = FUNC_6(VAR_7->kind);
                if (!VAR_10) {
                        FUNC_2(VAR_7, "Could not get kind");
                        FUNC_4(VAR_7);
                        return -VAR_1;
                }
        }

        if (!FUNC_12(VAR_10, VAR_11)) {
                FUNC_2(VAR_7,
                                 "Received newlink with wrong KIND %s, "
                                 "expected %s", VAR_11, VAR_10);
                FUNC_4(VAR_7);
                return VAR_13;
        }

        VAR_7->ifindex = VAR_14;

        FUNC_1(VAR_7, "netdev has index %d", VAR_7->ifindex);

        FUNC_5(VAR_7);

        return 0;
}
