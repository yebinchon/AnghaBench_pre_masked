
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int ifname; int state_file; int mdns_ipv6_scope; int mdns_ipv4_scope; int llmnr_ipv6_scope; int llmnr_ipv4_scope; int unicast_scope; int ifindex; TYPE_1__* manager; scalar_t__ addresses; } ;
struct TYPE_8__ {int links; } ;
typedef TYPE_2__ Link ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_2__*) ;
 TYPE_2__* FUNC_7 (TYPE_2__*) ;

Link *FUNC_8(Link *VAR_0) {
        if (!VAR_0)
                return ((void*)0);


        FUNC_1(VAR_0->mdns_ipv4_scope, 1);
        FUNC_1(VAR_0->mdns_ipv6_scope, 1);

        FUNC_6(VAR_0);

        while (VAR_0->addresses)
                (void) FUNC_5(VAR_0->addresses);

        if (VAR_0->manager)
                FUNC_4(VAR_0->manager->links, FUNC_0(VAR_0->ifindex));

        FUNC_2(VAR_0->unicast_scope);
        FUNC_2(VAR_0->llmnr_ipv4_scope);
        FUNC_2(VAR_0->llmnr_ipv6_scope);
        FUNC_2(VAR_0->mdns_ipv4_scope);
        FUNC_2(VAR_0->mdns_ipv6_scope);

        FUNC_3(VAR_0->state_file);
        FUNC_3(VAR_0->ifname);

        return FUNC_7(VAR_0);
}
