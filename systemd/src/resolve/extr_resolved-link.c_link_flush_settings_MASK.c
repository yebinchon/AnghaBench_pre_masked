
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int default_route; int dnssec_negative_trust_anchors; int search_domains; int dns_servers; int dns_over_tls_mode; int dnssec_mode; int mdns_support; int llmnr_support; } ;
typedef TYPE_1__ Link ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(Link *VAR_4) {
        FUNC_0(VAR_4);

        VAR_4->default_route = -1;
        VAR_4->llmnr_support = VAR_1;
        VAR_4->mdns_support = VAR_0;
        VAR_4->dnssec_mode = VAR_2;
        VAR_4->dns_over_tls_mode = VAR_3;

        FUNC_2(VAR_4->dns_servers);
        FUNC_1(VAR_4->search_domains);

        VAR_4->dnssec_negative_trust_anchors = FUNC_3(VAR_4->dnssec_negative_trust_anchors);
}
