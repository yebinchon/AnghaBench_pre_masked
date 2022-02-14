
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int * mdns_ipv6_scope; int * mdns_ipv4_scope; int * llmnr_ipv6_scope; int * llmnr_ipv4_scope; } ;
struct TYPE_8__ {int protocol; int family; int ifindex; int links; } ;
typedef TYPE_1__ Manager ;
typedef TYPE_2__ Link ;
typedef int DnsScope ;
typedef TYPE_1__ DnsPacket ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_2__* FUNC_2 (int ,int ) ;

DnsScope* FUNC_3(Manager *VAR_2, DnsPacket *VAR_3) {
        Link *VAR_4;

        FUNC_1(VAR_2);
        FUNC_1(VAR_3);

        VAR_4 = FUNC_2(VAR_2->links, FUNC_0(VAR_3->ifindex));
        if (!VAR_4)
                return ((void*)0);

        switch (VAR_3->protocol) {
        case 129:
                if (VAR_3->family == VAR_0)
                        return VAR_4->llmnr_ipv4_scope;
                else if (VAR_3->family == VAR_1)
                        return VAR_4->llmnr_ipv6_scope;

                break;

        case 128:
                if (VAR_3->family == VAR_0)
                        return VAR_4->mdns_ipv4_scope;
                else if (VAR_3->family == VAR_1)
                        return VAR_4->mdns_ipv6_scope;

                break;

        default:
                break;
        }

        return ((void*)0);
}
