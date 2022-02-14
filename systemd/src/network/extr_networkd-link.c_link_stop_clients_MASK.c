
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ radv; scalar_t__ ndisc; scalar_t__ dhcp6_client; scalar_t__ ipv4ll; scalar_t__ dhcp_client; TYPE_1__* network; scalar_t__ restarting; struct TYPE_9__* manager; struct TYPE_9__* event; } ;
struct TYPE_8__ {int keep_configuration; } ;
typedef TYPE_2__ Link ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int,char*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;

int FUNC_10(Link *VAR_1, bool VAR_2) {
        int VAR_3 = 0, VAR_4;

        FUNC_1(VAR_1);
        FUNC_1(VAR_1->manager);
        FUNC_1(VAR_1->manager->event);

        FUNC_2(VAR_1);

        bool VAR_5 = VAR_2 &&
                         VAR_1->network &&
                         (VAR_1->manager->restarting ||
                          FUNC_0(VAR_1->network->keep_configuration, VAR_0));

        if (VAR_1->dhcp_client && !VAR_5) {
                VAR_4 = FUNC_6(VAR_1->dhcp_client);
                if (VAR_4 < 0)
                        VAR_3 = FUNC_4(VAR_1, VAR_4, "Could not stop DHCPv4 client: %m");
        }

        if (VAR_1->ipv4ll) {
                VAR_4 = FUNC_7(VAR_1->ipv4ll);
                if (VAR_4 < 0)
                        VAR_3 = FUNC_4(VAR_1, VAR_4, "Could not stop IPv4 link-local: %m");
        }

        if (VAR_1->dhcp6_client) {
                VAR_4 = FUNC_5(VAR_1->dhcp6_client);
                if (VAR_4 < 0)
                        VAR_3 = FUNC_4(VAR_1, VAR_4, "Could not stop DHCPv6 client: %m");
        }

        if (VAR_1->ndisc) {
                VAR_4 = FUNC_8(VAR_1->ndisc);
                if (VAR_4 < 0)
                        VAR_3 = FUNC_4(VAR_1, VAR_4, "Could not stop IPv6 Router Discovery: %m");
        }

        if (VAR_1->radv) {
                VAR_4 = FUNC_9(VAR_1->radv);
                if (VAR_4 < 0)
                        VAR_3 = FUNC_4(VAR_1, VAR_4, "Could not stop IPv6 Router Advertisement: %m");
        }

        FUNC_3(VAR_1);
        return VAR_3;
}
