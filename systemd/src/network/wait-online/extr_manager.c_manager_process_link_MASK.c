
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_12__ {int links; } ;
typedef TYPE_1__ sd_netlink_message ;
typedef TYPE_1__ sd_netlink ;
typedef TYPE_1__ Manager ;
typedef int Link ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;


 int FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int **,int,char const*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,TYPE_1__*) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (int,char*) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *,int,char*) ;
 int FUNC_11 (char*,int) ;
 int FUNC_12 (int,char*) ;
 int FUNC_13 (TYPE_1__*,int*) ;
 int FUNC_14 (TYPE_1__*,int ,char const**) ;
 int FUNC_15 (TYPE_1__*,int*) ;

__attribute__((used)) static int FUNC_16(sd_netlink *VAR_2, sd_netlink_message *VAR_3, void *VAR_4) {
        Manager *VAR_5 = VAR_4;
        uint16_t VAR_6;
        Link *VAR_7;
        const char *VAR_8;
        int VAR_9, VAR_10;

        FUNC_1(VAR_2);
        FUNC_1(VAR_5);
        FUNC_1(VAR_3);

        VAR_10 = FUNC_13(VAR_3, &VAR_6);
        if (VAR_10 < 0) {
                FUNC_12(VAR_10, "rtnl: Could not get message type, ignoring: %m");
                return 0;
        }

        VAR_10 = FUNC_15(VAR_3, &VAR_9);
        if (VAR_10 < 0) {
                FUNC_12(VAR_10, "rtnl: Could not get ifindex from link, ignoring: %m");
                return 0;
        } else if (VAR_9 <= 0) {
                FUNC_11("rtnl: received link message with invalid ifindex %d, ignoring", VAR_9);
                return 0;
        }

        VAR_10 = FUNC_14(VAR_3, VAR_1, &VAR_8);
        if (VAR_10 < 0) {
                FUNC_12(VAR_10, "rtnl: Received link message without ifname, ignoring: %m");
                return 0;
        }

        VAR_7 = FUNC_2(VAR_5->links, FUNC_0(VAR_9));

        switch (VAR_6) {

        case 128:
                if (!VAR_7) {
                        FUNC_7("Found link %i", VAR_9);

                        VAR_10 = FUNC_4(VAR_5, &VAR_7, VAR_9, VAR_8);
                        if (VAR_10 < 0)
                                return FUNC_8(VAR_10, "Failed to create link object: %m");
                }

                VAR_10 = FUNC_6(VAR_7, VAR_3);
                if (VAR_10 < 0)
                        FUNC_10(VAR_7, VAR_10, "Failed to process RTNL link message, ignoring: %m");

                VAR_10 = FUNC_5(VAR_7);
                if (VAR_10 < 0 && VAR_10 != -VAR_0)
                        FUNC_10(VAR_7, VAR_10, "Failed to update link state, ignoring: %m");

                break;

        case 129:
                if (VAR_7) {
                        FUNC_9(VAR_7, "Removing link");
                        FUNC_3(VAR_7);
                }

                break;
        }

        return 0;
}
