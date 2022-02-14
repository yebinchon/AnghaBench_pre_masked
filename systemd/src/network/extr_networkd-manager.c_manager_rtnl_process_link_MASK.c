
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int sd_netlink_message ;
typedef int sd_netlink ;
typedef int NetDev ;
typedef int Manager ;
typedef int Link ;


 int VAR_0 ;
 int FUNC_0 (int,int,int) ;


 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int *,int **) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int,int **) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (int,char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,char const*,int **) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int*) ;
 scalar_t__ FUNC_14 (int *) ;
 int FUNC_15 (int *,int ,char const**) ;
 int FUNC_16 (int *,int*) ;

__attribute__((used)) static int FUNC_17(sd_netlink *VAR_1, sd_netlink_message *VAR_2, void *VAR_3) {
        Manager *VAR_4 = VAR_3;
        Link *VAR_5 = ((void*)0);
        NetDev *VAR_6 = ((void*)0);
        uint16_t VAR_7;
        const char *VAR_8;
        int VAR_9, VAR_10;

        FUNC_1(VAR_1);
        FUNC_1(VAR_2);
        FUNC_1(VAR_4);

        if (FUNC_14(VAR_2)) {
                VAR_9 = FUNC_12(VAR_2);
                if (VAR_9 < 0)
                        FUNC_8(VAR_9, "rtnl: Could not receive link message, ignoring: %m");

                return 0;
        }

        VAR_9 = FUNC_13(VAR_2, &VAR_7);
        if (VAR_9 < 0) {
                FUNC_8(VAR_9, "rtnl: Could not get message type, ignoring: %m");
                return 0;
        } else if (!FUNC_0(VAR_7, 128, 129)) {
                FUNC_7("rtnl: Received unexpected message type %u when processing link, ignoring.", VAR_7);
                return 0;
        }

        VAR_9 = FUNC_16(VAR_2, &VAR_10);
        if (VAR_9 < 0) {
                FUNC_8(VAR_9, "rtnl: Could not get ifindex from link message, ignoring: %m");
                return 0;
        } else if (VAR_10 <= 0) {
                FUNC_7("rtnl: received link message with invalid ifindex %d, ignoring.", VAR_10);
                return 0;
        }

        VAR_9 = FUNC_15(VAR_2, VAR_0, &VAR_8);
        if (VAR_9 < 0) {
                FUNC_8(VAR_9, "rtnl: Received link message without ifname, ignoring: %m");
                return 0;
        }

        (void) FUNC_5(VAR_4, VAR_10, &VAR_5);
        (void) FUNC_10(VAR_4, VAR_8, &VAR_6);

        switch (VAR_7) {
        case 128:
                if (!VAR_5) {

                        VAR_9 = FUNC_3(VAR_4, VAR_2, &VAR_5);
                        if (VAR_9 < 0) {
                                FUNC_8(VAR_9, "Could not process new link message, ignoring: %m");
                                return 0;
                        }
                }

                if (VAR_6) {

                        VAR_9 = FUNC_11(VAR_6, VAR_2);
                        if (VAR_9 < 0) {
                                FUNC_8(VAR_9, "Could not process new link message for netdev, ignoring: %m");
                                return 0;
                        }
                }

                VAR_9 = FUNC_6(VAR_5, VAR_2);
                if (VAR_9 < 0) {
                        FUNC_8(VAR_9, "Could not process link message, ignoring: %m");
                        return 0;
                }

                break;

        case 129:
                FUNC_4(VAR_5);
                FUNC_9(VAR_6);

                break;

        default:
                FUNC_2("Received link message with invalid RTNL message type.");
        }

        return 1;
}
