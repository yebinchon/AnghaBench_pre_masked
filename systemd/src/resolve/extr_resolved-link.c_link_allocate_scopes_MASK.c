
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ llmnr_support; scalar_t__ mdns_support; TYPE_1__* unicast_scope; scalar_t__ dns_servers; scalar_t__ fallback_dns_servers; } ;
struct TYPE_9__ {int unicast_relevant; scalar_t__ llmnr_support; scalar_t__ mdns_support; void* mdns_ipv6_scope; TYPE_5__* manager; void* mdns_ipv4_scope; void* llmnr_ipv6_scope; void* llmnr_ipv4_scope; void* unicast_scope; scalar_t__ dns_servers; } ;
struct TYPE_8__ {int cache; } ;
typedef TYPE_2__ Link ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (void*) ;
 int FUNC_3 (TYPE_5__*,void**,TYPE_2__*,int ,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_2__*,int ,int) ;
 int FUNC_6 (int,char*) ;
 scalar_t__ FUNC_7 () ;

void FUNC_8(Link *VAR_7) {
        bool VAR_8;
        int VAR_9;

        FUNC_0(VAR_7);





        VAR_8 = FUNC_5(VAR_7, VAR_2, 0);
        if (VAR_8 != VAR_7->unicast_relevant) {
                VAR_7->unicast_relevant = VAR_8;

                FUNC_4(VAR_7->manager->fallback_dns_servers);
                FUNC_4(VAR_7->manager->dns_servers);



                if (VAR_7->manager->unicast_scope)
                        FUNC_1(&VAR_7->manager->unicast_scope->cache);
        }




        if (VAR_8 && VAR_7->dns_servers) {
                if (!VAR_7->unicast_scope) {
                        FUNC_4(VAR_7->dns_servers);

                        VAR_9 = FUNC_3(VAR_7->manager, &VAR_7->unicast_scope, VAR_7, VAR_3, VAR_2);
                        if (VAR_9 < 0)
                                FUNC_6(VAR_9, "Failed to allocate DNS scope: %m");
                }
        } else
                VAR_7->unicast_scope = FUNC_2(VAR_7->unicast_scope);

        if (FUNC_5(VAR_7, VAR_0, 1) &&
            VAR_7->llmnr_support != VAR_6 &&
            VAR_7->manager->llmnr_support != VAR_6) {
                if (!VAR_7->llmnr_ipv4_scope) {
                        VAR_9 = FUNC_3(VAR_7->manager, &VAR_7->llmnr_ipv4_scope, VAR_7, VAR_4, VAR_0);
                        if (VAR_9 < 0)
                                FUNC_6(VAR_9, "Failed to allocate LLMNR IPv4 scope: %m");
                }
        } else
                VAR_7->llmnr_ipv4_scope = FUNC_2(VAR_7->llmnr_ipv4_scope);

        if (FUNC_5(VAR_7, VAR_1, 1) &&
            VAR_7->llmnr_support != VAR_6 &&
            VAR_7->manager->llmnr_support != VAR_6 &&
            FUNC_7()) {
                if (!VAR_7->llmnr_ipv6_scope) {
                        VAR_9 = FUNC_3(VAR_7->manager, &VAR_7->llmnr_ipv6_scope, VAR_7, VAR_4, VAR_1);
                        if (VAR_9 < 0)
                                FUNC_6(VAR_9, "Failed to allocate LLMNR IPv6 scope: %m");
                }
        } else
                VAR_7->llmnr_ipv6_scope = FUNC_2(VAR_7->llmnr_ipv6_scope);

        if (FUNC_5(VAR_7, VAR_0, 1) &&
            VAR_7->mdns_support != VAR_6 &&
            VAR_7->manager->mdns_support != VAR_6) {
                if (!VAR_7->mdns_ipv4_scope) {
                        VAR_9 = FUNC_3(VAR_7->manager, &VAR_7->mdns_ipv4_scope, VAR_7, VAR_5, VAR_0);
                        if (VAR_9 < 0)
                                FUNC_6(VAR_9, "Failed to allocate mDNS IPv4 scope: %m");
                }
        } else
                VAR_7->mdns_ipv4_scope = FUNC_2(VAR_7->mdns_ipv4_scope);

        if (FUNC_5(VAR_7, VAR_1, 1) &&
            VAR_7->mdns_support != VAR_6 &&
            VAR_7->manager->mdns_support != VAR_6) {
                if (!VAR_7->mdns_ipv6_scope) {
                        VAR_9 = FUNC_3(VAR_7->manager, &VAR_7->mdns_ipv6_scope, VAR_7, VAR_5, VAR_1);
                        if (VAR_9 < 0)
                                FUNC_6(VAR_9, "Failed to allocate mDNS IPv6 scope: %m");
                }
        } else
                VAR_7->mdns_ipv6_scope = FUNC_2(VAR_7->mdns_ipv6_scope);
}
