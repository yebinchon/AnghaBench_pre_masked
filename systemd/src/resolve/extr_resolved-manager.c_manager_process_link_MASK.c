
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_18__ {int links; } ;
typedef TYPE_1__ sd_netlink_message ;
typedef TYPE_1__ sd_netlink ;
struct TYPE_19__ {int ifindex; int ifname; } ;
typedef TYPE_1__ Manager ;
typedef TYPE_4__ Link ;


 int FUNC_0 (int) ;


 int FUNC_1 (TYPE_1__*) ;
 TYPE_4__* FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_4__**,int) ;
 int FUNC_5 (TYPE_4__*,TYPE_1__*) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (char*,int,int ) ;
 int FUNC_9 (int,char*) ;
 int FUNC_10 (TYPE_1__*,int*) ;
 int FUNC_11 (TYPE_1__*,int*) ;

__attribute__((used)) static int FUNC_12(sd_netlink *VAR_0, sd_netlink_message *VAR_1, void *VAR_2) {
        Manager *VAR_3 = VAR_2;
        uint16_t VAR_4;
        Link *VAR_5;
        int VAR_6, VAR_7;

        FUNC_1(VAR_0);
        FUNC_1(VAR_3);
        FUNC_1(VAR_1);

        VAR_7 = FUNC_10(VAR_1, &VAR_4);
        if (VAR_7 < 0)
                goto fail;

        VAR_7 = FUNC_11(VAR_1, &VAR_6);
        if (VAR_7 < 0)
                goto fail;

        VAR_5 = FUNC_2(VAR_3->links, FUNC_0(VAR_6));

        switch (VAR_4) {

        case 128:{
                bool VAR_8 = !VAR_5;

                if (!VAR_5) {
                        VAR_7 = FUNC_4(VAR_3, &VAR_5, VAR_6);
                        if (VAR_7 < 0)
                                goto fail;
                }

                VAR_7 = FUNC_5(VAR_5, VAR_1);
                if (VAR_7 < 0)
                        goto fail;

                VAR_7 = FUNC_7(VAR_5);
                if (VAR_7 < 0)
                        goto fail;

                if (VAR_8)
                        FUNC_8("Found new link %i/%s", VAR_6, VAR_5->ifname);

                break;
        }

        case 129:
                if (VAR_5) {
                        FUNC_8("Removing link %i/%s", VAR_5->ifindex, VAR_5->ifname);
                        FUNC_6(VAR_5);
                        FUNC_3(VAR_5);
                }

                break;
        }

        return 0;

fail:
        FUNC_9(VAR_7, "Failed to process RTNL link message: %m");
        return 0;
}
