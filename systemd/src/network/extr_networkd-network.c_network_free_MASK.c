
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int dhcp_server_raw_options; int dhcp_send_options; int dnssec_negative_trust_anchors; int dhcp_server_sip; int dhcp_server_ntp; int dhcp_server_dns; int dhcp_server_timezone; int name; int duid; TYPE_1__* manager; int qdiscs_by_section; int rules_by_section; int route_prefixes_by_section; int prefixes_by_section; int address_labels_by_section; int neighbors_by_section; int fdb_entries_by_section; int nexthops_by_section; int routes_by_section; int addresses_by_section; int * rules; int * static_route_prefixes; int * static_prefixes; int * address_labels; int * neighbors; int * ipv6_proxy_ndp_addresses; int * static_fdb_entries; int * static_addresses; int * static_nexthops; int * static_routes; int stacked_netdevs; int vrf; int bond; int bridge; int stacked_netdev_names; int vrf_name; int bond_name; int bridge_name; int ndisc_black_listed_prefix; int router_dns; int router_search_domains; int bind_carrier; int route_domains; int search_domains; int sip; int dns; int ntp; int mac; int dhcp_request_options; int dhcp_black_listed_ip; int dhcp_hostname; int dhcp_user_class; int dhcp_vendor_class_identifier; int description; int conditions; int match_bssid; int match_ssid; int match_wlan_iftype; int match_property; int match_name; int match_type; int match_driver; int match_path; int match_mac; int filename; } ;
struct TYPE_7__ {scalar_t__ duids_requesting_uuid; } ;
typedef int RoutingPolicyRule ;
typedef int RoutePrefix ;
typedef int Route ;
typedef int Prefix ;
typedef int NextHop ;
typedef TYPE_2__ Network ;
typedef int Neighbor ;
typedef int IPv6ProxyNDPAddress ;
typedef int FdbEntry ;
typedef int AddressLabel ;
typedef int Address ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int (*) (int )) ;
 int FUNC_8 (int *) ;
 TYPE_2__* FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int *) ;
 int VAR_0 ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (scalar_t__,int *) ;
 int FUNC_23 (int ) ;

__attribute__((used)) static Network *FUNC_24(Network *VAR_1) {
        IPv6ProxyNDPAddress *VAR_2;
        RoutePrefix *VAR_3;
        RoutingPolicyRule *VAR_4;
        AddressLabel *VAR_5;
        FdbEntry *VAR_6;
        Neighbor *VAR_7;
        Address *VAR_8;
        NextHop *VAR_9;
        Prefix *VAR_10;
        Route *VAR_11;

        if (!VAR_1)
                return ((void*)0);

        FUNC_4(VAR_1->filename);

        FUNC_21(VAR_1->match_mac);
        FUNC_23(VAR_1->match_path);
        FUNC_23(VAR_1->match_driver);
        FUNC_23(VAR_1->match_type);
        FUNC_23(VAR_1->match_name);
        FUNC_23(VAR_1->match_property);
        FUNC_23(VAR_1->match_wlan_iftype);
        FUNC_23(VAR_1->match_ssid);
        FUNC_21(VAR_1->match_bssid);
        FUNC_2(VAR_1->conditions);

        FUNC_4(VAR_1->description);
        FUNC_4(VAR_1->dhcp_vendor_class_identifier);
        FUNC_23(VAR_1->dhcp_user_class);
        FUNC_4(VAR_1->dhcp_hostname);
        FUNC_20(VAR_1->dhcp_black_listed_ip);
        FUNC_20(VAR_1->dhcp_request_options);
        FUNC_4(VAR_1->mac);

        FUNC_23(VAR_1->ntp);
        FUNC_4(VAR_1->dns);
        FUNC_23(VAR_1->sip);
        FUNC_15(VAR_1->search_domains);
        FUNC_15(VAR_1->route_domains);
        FUNC_23(VAR_1->bind_carrier);

        FUNC_15(VAR_1->router_search_domains);
        FUNC_4(VAR_1->router_dns);
        FUNC_21(VAR_1->ndisc_black_listed_prefix);

        FUNC_4(VAR_1->bridge_name);
        FUNC_4(VAR_1->bond_name);
        FUNC_4(VAR_1->vrf_name);
        FUNC_6(VAR_1->stacked_netdev_names);
        FUNC_11(VAR_1->bridge);
        FUNC_11(VAR_1->bond);
        FUNC_11(VAR_1->vrf);
        FUNC_7(VAR_1->stacked_netdevs, FUNC_11);

        while ((VAR_11 = VAR_1->static_routes))
                FUNC_17(VAR_11);

        while ((VAR_9 = VAR_1->static_nexthops))
                FUNC_12(VAR_9);

        while ((VAR_8 = VAR_1->static_addresses))
                FUNC_0(VAR_8);

        while ((VAR_6 = VAR_1->static_fdb_entries))
                FUNC_3(VAR_6);

        while ((VAR_2 = VAR_1->ipv6_proxy_ndp_addresses))
                FUNC_8(VAR_2);

        while ((VAR_7 = VAR_1->neighbors))
                FUNC_10(VAR_7);

        while ((VAR_5 = VAR_1->address_labels))
                FUNC_1(VAR_5);

        while ((VAR_10 = VAR_1->static_prefixes))
                FUNC_16(VAR_10);

        while ((VAR_3 = VAR_1->static_route_prefixes))
                FUNC_18(VAR_3);

        while ((VAR_4 = VAR_1->rules))
                FUNC_19(VAR_4);

        FUNC_5(VAR_1->addresses_by_section);
        FUNC_5(VAR_1->routes_by_section);
        FUNC_5(VAR_1->nexthops_by_section);
        FUNC_5(VAR_1->fdb_entries_by_section);
        FUNC_5(VAR_1->neighbors_by_section);
        FUNC_5(VAR_1->address_labels_by_section);
        FUNC_5(VAR_1->prefixes_by_section);
        FUNC_5(VAR_1->route_prefixes_by_section);
        FUNC_5(VAR_1->rules_by_section);
        FUNC_14(VAR_1->qdiscs_by_section, VAR_0);

        if (VAR_1->manager &&
            VAR_1->manager->duids_requesting_uuid)
                FUNC_22(VAR_1->manager->duids_requesting_uuid, &VAR_1->duid);

        FUNC_4(VAR_1->name);

        FUNC_4(VAR_1->dhcp_server_timezone);
        FUNC_4(VAR_1->dhcp_server_dns);
        FUNC_4(VAR_1->dhcp_server_ntp);
        FUNC_4(VAR_1->dhcp_server_sip);

        FUNC_21(VAR_1->dnssec_negative_trust_anchors);

        FUNC_13(VAR_1->dhcp_send_options);
        FUNC_13(VAR_1->dhcp_server_raw_options);

        return FUNC_9(VAR_1);
}
