
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int radv; int ndisc; int dhcp6_client; int ipv4ll; int lldp; int dhcp_routes; int dhcp_lease; int dhcp_client; int dhcp_server; } ;
typedef TYPE_1__ Link ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(Link *VAR_0) {
        if (!VAR_0)
                return;

        VAR_0->dhcp_server = FUNC_4(VAR_0->dhcp_server);
        VAR_0->dhcp_client = FUNC_2(VAR_0->dhcp_client);
        VAR_0->dhcp_lease = FUNC_3(VAR_0->dhcp_lease);
        VAR_0->dhcp_routes = FUNC_9(VAR_0->dhcp_routes);

        VAR_0->lldp = FUNC_6(VAR_0->lldp);

        FUNC_0(VAR_0);

        VAR_0->ipv4ll = FUNC_5(VAR_0->ipv4ll);
        VAR_0->dhcp6_client = FUNC_1(VAR_0->dhcp6_client);
        VAR_0->ndisc = FUNC_7(VAR_0->ndisc);
        VAR_0->radv = FUNC_8(VAR_0->radv);
}
