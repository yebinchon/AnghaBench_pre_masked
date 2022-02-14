
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ llmnr_support; scalar_t__ mdns_support; scalar_t__ dnssec_mode; scalar_t__ dns_over_tls_mode; scalar_t__ default_route; int dnssec_negative_trust_anchors; scalar_t__ search_domains; scalar_t__ dns_servers; scalar_t__ is_managed; } ;
typedef TYPE_1__ Link ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(Link *VAR_4) {
        FUNC_0(VAR_4);



        if (VAR_4->is_managed)
                return 0;

        if (VAR_4->llmnr_support != VAR_1 ||
            VAR_4->mdns_support != VAR_0 ||
            VAR_4->dnssec_mode != VAR_2 ||
            VAR_4->dns_over_tls_mode != VAR_3)
                return 1;

        if (VAR_4->dns_servers ||
            VAR_4->search_domains)
                return 1;

        if (!FUNC_1(VAR_4->dnssec_negative_trust_anchors))
                return 1;

        if (VAR_4->default_route >= 0)
                return 1;

        return 0;
}
