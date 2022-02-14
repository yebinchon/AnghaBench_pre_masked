
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int ifname; int links_by_name; struct TYPE_10__* manager; int flags; } ;
typedef TYPE_1__ sd_netlink_message ;
typedef TYPE_1__ Link ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ,TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_1__*,int ,char const**) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 char* FUNC_7 (char const*) ;
 int FUNC_8 (int ,char const*) ;

int FUNC_9(Link *VAR_2, sd_netlink_message *VAR_3) {
        const char *VAR_4;
        int VAR_5;

        FUNC_0(VAR_2);
        FUNC_0(VAR_2->manager);
        FUNC_0(VAR_3);

        VAR_5 = FUNC_6(VAR_3, &VAR_2->flags);
        if (VAR_5 < 0)
                return VAR_5;

        VAR_5 = FUNC_5(VAR_3, VAR_1, &VAR_4);
        if (VAR_5 < 0)
                return VAR_5;

        if (!FUNC_8(VAR_2->ifname, VAR_4)) {
                char *VAR_6;

                VAR_6 = FUNC_7(VAR_4);
                if (!VAR_6)
                        return -VAR_0;

                FUNC_1(FUNC_4(VAR_2->manager->links_by_name, VAR_2->ifname) == VAR_2);
                FUNC_2(VAR_2->ifname, VAR_6);

                VAR_5 = FUNC_3(VAR_2->manager->links_by_name, VAR_2->ifname, VAR_2);
                if (VAR_5 < 0)
                        return VAR_5;
        }

        return 0;
}
