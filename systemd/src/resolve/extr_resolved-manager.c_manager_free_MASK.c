
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int trust_anchor; int dnssd_services; int mdns_hostname; int llmnr_hostname; int full_hostname; int hostname_fd; int hostname_event_source; int mdns_host_ipv6_key; int mdns_host_ipv4_key; int llmnr_host_ipv6_key; int llmnr_host_ipv4_key; int event; int sigrtmin1_event_source; int sigusr2_event_source; int sigusr1_event_source; int bus; int polkit_registry; int rtnl_event_source; int rtnl; int network_monitor; int network_event_source; int dns_transactions; int links; scalar_t__ dns_streams; int unicast_scope; scalar_t__ dns_queries; int search_domains; int fallback_dns_servers; int dns_servers; } ;
typedef TYPE_1__ Manager ;
typedef int Link ;
typedef int DnssdService ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int ) ;
 void* FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*) ;
 TYPE_1__* FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ) ;

Manager *FUNC_25(Manager *VAR_0) {
        Link *VAR_1;
        DnssdService *VAR_2;

        if (!VAR_0)
                return ((void*)0);

        FUNC_5(VAR_0->dns_servers);
        FUNC_5(VAR_0->fallback_dns_servers);
        FUNC_4(VAR_0->search_domains);

        while ((VAR_1 = FUNC_11(VAR_0->links)))
               FUNC_13(VAR_1);

        while (VAR_0->dns_queries)
                FUNC_1(VAR_0->dns_queries);

        FUNC_3(VAR_0->unicast_scope);



        while (VAR_0->dns_streams)
                FUNC_6(VAR_0->dns_streams);





        FUNC_12(VAR_0->links);
        FUNC_12(VAR_0->dns_transactions);

        FUNC_21(VAR_0->network_event_source);
        FUNC_24(VAR_0->network_monitor);

        FUNC_23(VAR_0->rtnl);
        FUNC_21(VAR_0->rtnl_event_source);

        FUNC_16(VAR_0);
        FUNC_17(VAR_0);
        FUNC_14(VAR_0);

        FUNC_0(VAR_0->polkit_registry);

        FUNC_20(VAR_0->bus);

        FUNC_21(VAR_0->sigusr1_event_source);
        FUNC_21(VAR_0->sigusr2_event_source);
        FUNC_21(VAR_0->sigrtmin1_event_source);

        FUNC_22(VAR_0->event);

        FUNC_2(VAR_0->llmnr_host_ipv4_key);
        FUNC_2(VAR_0->llmnr_host_ipv6_key);
        FUNC_2(VAR_0->mdns_host_ipv4_key);
        FUNC_2(VAR_0->mdns_host_ipv6_key);

        FUNC_21(VAR_0->hostname_event_source);
        FUNC_19(VAR_0->hostname_fd);

        FUNC_10(VAR_0->full_hostname);
        FUNC_10(VAR_0->llmnr_hostname);
        FUNC_10(VAR_0->mdns_hostname);

        while ((VAR_2 = FUNC_11(VAR_0->dnssd_services)))
               FUNC_8(VAR_2);
        FUNC_12(VAR_0->dnssd_services);

        FUNC_7(&VAR_0->trust_anchor);
        FUNC_15(VAR_0);

        return FUNC_18(VAR_0);
}
