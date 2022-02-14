
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ family; scalar_t__ mdns_ptr_rr; scalar_t__ mdns_address_rr; scalar_t__ llmnr_ptr_rr; scalar_t__ llmnr_address_rr; TYPE_5__* link; } ;
struct TYPE_16__ {scalar_t__ n_addresses; TYPE_4__* mdns_ipv6_scope; TYPE_3__* mdns_ipv4_scope; TYPE_2__* llmnr_ipv6_scope; TYPE_1__* llmnr_ipv4_scope; int addresses; } ;
struct TYPE_15__ {int zone; } ;
struct TYPE_14__ {int zone; } ;
struct TYPE_13__ {int zone; } ;
struct TYPE_12__ {int zone; } ;
typedef TYPE_6__ LinkAddress ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,TYPE_6__*) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,scalar_t__) ;
 TYPE_6__* FUNC_4 (TYPE_6__*) ;

LinkAddress *FUNC_5(LinkAddress *VAR_3) {
        if (!VAR_3)
                return ((void*)0);

        if (VAR_3->link) {
                FUNC_0(VAR_2, VAR_3->link->addresses, VAR_3);

                FUNC_1(VAR_3->link->n_addresses > 0);
                VAR_3->link->n_addresses--;

                if (VAR_3->llmnr_address_rr) {
                        if (VAR_3->family == VAR_0 && VAR_3->link->llmnr_ipv4_scope)
                                FUNC_3(&VAR_3->link->llmnr_ipv4_scope->zone, VAR_3->llmnr_address_rr);
                        else if (VAR_3->family == VAR_1 && VAR_3->link->llmnr_ipv6_scope)
                                FUNC_3(&VAR_3->link->llmnr_ipv6_scope->zone, VAR_3->llmnr_address_rr);
                }

                if (VAR_3->llmnr_ptr_rr) {
                        if (VAR_3->family == VAR_0 && VAR_3->link->llmnr_ipv4_scope)
                                FUNC_3(&VAR_3->link->llmnr_ipv4_scope->zone, VAR_3->llmnr_ptr_rr);
                        else if (VAR_3->family == VAR_1 && VAR_3->link->llmnr_ipv6_scope)
                                FUNC_3(&VAR_3->link->llmnr_ipv6_scope->zone, VAR_3->llmnr_ptr_rr);
                }

                if (VAR_3->mdns_address_rr) {
                        if (VAR_3->family == VAR_0 && VAR_3->link->mdns_ipv4_scope)
                                FUNC_3(&VAR_3->link->mdns_ipv4_scope->zone, VAR_3->mdns_address_rr);
                        else if (VAR_3->family == VAR_1 && VAR_3->link->mdns_ipv6_scope)
                                FUNC_3(&VAR_3->link->mdns_ipv6_scope->zone, VAR_3->mdns_address_rr);
                }

                if (VAR_3->mdns_ptr_rr) {
                        if (VAR_3->family == VAR_0 && VAR_3->link->mdns_ipv4_scope)
                                FUNC_3(&VAR_3->link->mdns_ipv4_scope->zone, VAR_3->mdns_ptr_rr);
                        else if (VAR_3->family == VAR_1 && VAR_3->link->mdns_ipv6_scope)
                                FUNC_3(&VAR_3->link->mdns_ipv6_scope->zone, VAR_3->mdns_ptr_rr);
                }
        }

        FUNC_2(VAR_3->llmnr_address_rr);
        FUNC_2(VAR_3->llmnr_ptr_rr);
        FUNC_2(VAR_3->mdns_address_rr);
        FUNC_2(VAR_3->mdns_ptr_rr);

        return FUNC_4(VAR_3);
}
