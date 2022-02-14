
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {struct TYPE_10__* dhcp_client; struct TYPE_10__* ipv4ll; struct TYPE_10__* event; struct TYPE_10__* manager; } ;
typedef TYPE_1__ Link ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*,int,char*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(Link *VAR_1) {
        int VAR_2;

        FUNC_0(VAR_1);
        FUNC_0(VAR_1->manager);
        FUNC_0(VAR_1->manager->event);

        if (FUNC_2(VAR_1, VAR_0)) {
                FUNC_0(VAR_1->ipv4ll);

                FUNC_3(VAR_1, "Acquiring IPv4 link-local address");

                VAR_2 = FUNC_6(VAR_1->ipv4ll);
                if (VAR_2 < 0)
                        return FUNC_4(VAR_1, VAR_2, "Could not acquire IPv4 link-local address: %m");
        }

        if (FUNC_1(VAR_1)) {
                FUNC_0(VAR_1->dhcp_client);

                FUNC_3(VAR_1, "Acquiring DHCPv4 lease");

                VAR_2 = FUNC_5(VAR_1->dhcp_client);
                if (VAR_2 < 0)
                        return FUNC_4(VAR_1, VAR_2, "Could not acquire DHCPv4 lease: %m");
        }

        return 0;
}
