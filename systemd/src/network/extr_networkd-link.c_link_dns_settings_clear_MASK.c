
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int n_dns; int dns_default_route; int dnssec_negative_trust_anchors; int dns_over_tls_mode; int dnssec_mode; void* mdns; void* llmnr; void* route_domains; void* search_domains; int dns; } ;
typedef TYPE_1__ Link ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (void*) ;
 int FUNC_2 (int ) ;

void FUNC_3(Link *VAR_3) {
        VAR_3->dns = FUNC_0(VAR_3->dns);
        VAR_3->n_dns = (unsigned) -1;

        VAR_3->search_domains = FUNC_1(VAR_3->search_domains);
        VAR_3->route_domains = FUNC_1(VAR_3->route_domains);

        VAR_3->dns_default_route = -1;
        VAR_3->llmnr = VAR_2;
        VAR_3->mdns = VAR_2;
        VAR_3->dnssec_mode = VAR_0;
        VAR_3->dns_over_tls_mode = VAR_1;

        VAR_3->dnssec_negative_trust_anchors = FUNC_2(VAR_3->dnssec_negative_trust_anchors);
}
