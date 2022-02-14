
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_13__ ;


struct TYPE_22__ {int zone; } ;
struct TYPE_17__ {int in6_addr; } ;
struct TYPE_16__ {int in_addr; } ;
struct TYPE_21__ {void* ttl; TYPE_2__ aaaa; TYPE_1__ a; } ;
struct TYPE_15__ {int in6; int in; } ;
struct TYPE_20__ {scalar_t__ family; TYPE_8__* mdns_ptr_rr; TYPE_4__* link; TYPE_8__* mdns_address_rr; TYPE_13__ in_addr; TYPE_8__* llmnr_ptr_rr; TYPE_8__* llmnr_address_rr; } ;
struct TYPE_19__ {scalar_t__ llmnr_support; scalar_t__ mdns_support; TYPE_9__* mdns_ipv6_scope; TYPE_3__* manager; TYPE_9__* llmnr_ipv6_scope; TYPE_9__* mdns_ipv4_scope; TYPE_9__* llmnr_ipv4_scope; } ;
struct TYPE_18__ {scalar_t__ llmnr_support; scalar_t__ mdns_support; int mdns_hostname; void* mdns_host_ipv6_key; int llmnr_hostname; void* llmnr_host_ipv6_key; void* mdns_host_ipv4_key; void* llmnr_host_ipv4_key; } ;
typedef TYPE_5__ LinkAddress ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (TYPE_5__*) ;
 void* FUNC_1 (int ,int ,int ) ;
 void* FUNC_2 (void*) ;
 int FUNC_3 (TYPE_8__**,scalar_t__,TYPE_13__*,int ) ;
 void* FUNC_4 (TYPE_8__*) ;
 int FUNC_5 (int *,TYPE_9__*,TYPE_8__*,int) ;
 int FUNC_6 (int *,TYPE_8__*) ;
 scalar_t__ FUNC_7 (TYPE_5__*,int) ;
 int FUNC_8 (int,char*) ;
 int FUNC_9 (int,char*) ;

void FUNC_10(LinkAddress *VAR_9, bool VAR_10) {
        int VAR_11;

        FUNC_0(VAR_9);

        if (VAR_9->family == VAR_0) {

                if (!VAR_10 &&
                    FUNC_7(VAR_9, 1) &&
                    VAR_9->link->llmnr_ipv4_scope &&
                    VAR_9->link->llmnr_support == VAR_8 &&
                    VAR_9->link->manager->llmnr_support == VAR_8) {

                        if (!VAR_9->link->manager->llmnr_host_ipv4_key) {
                                VAR_9->link->manager->llmnr_host_ipv4_key = FUNC_1(VAR_2, VAR_3, VAR_9->link->manager->llmnr_hostname);
                                if (!VAR_9->link->manager->llmnr_host_ipv4_key) {
                                        VAR_11 = -VAR_5;
                                        goto fail;
                                }
                        }

                        if (!VAR_9->llmnr_address_rr) {
                                VAR_9->llmnr_address_rr = FUNC_2(VAR_9->link->manager->llmnr_host_ipv4_key);
                                if (!VAR_9->llmnr_address_rr) {
                                        VAR_11 = -VAR_5;
                                        goto fail;
                                }

                                VAR_9->llmnr_address_rr->a.in_addr = VAR_9->in_addr.in;
                                VAR_9->llmnr_address_rr->ttl = VAR_6;
                        }

                        if (!VAR_9->llmnr_ptr_rr) {
                                VAR_11 = FUNC_3(&VAR_9->llmnr_ptr_rr, VAR_9->family, &VAR_9->in_addr, VAR_9->link->manager->llmnr_hostname);
                                if (VAR_11 < 0)
                                        goto fail;

                                VAR_9->llmnr_ptr_rr->ttl = VAR_6;
                        }

                        VAR_11 = FUNC_5(&VAR_9->link->llmnr_ipv4_scope->zone, VAR_9->link->llmnr_ipv4_scope, VAR_9->llmnr_address_rr, 1);
                        if (VAR_11 < 0)
                                FUNC_9(VAR_11, "Failed to add A record to LLMNR zone: %m");

                        VAR_11 = FUNC_5(&VAR_9->link->llmnr_ipv4_scope->zone, VAR_9->link->llmnr_ipv4_scope, VAR_9->llmnr_ptr_rr, 0);
                        if (VAR_11 < 0)
                                FUNC_9(VAR_11, "Failed to add IPv4 PTR record to LLMNR zone: %m");
                } else {
                        if (VAR_9->llmnr_address_rr) {
                                if (VAR_9->link->llmnr_ipv4_scope)
                                        FUNC_6(&VAR_9->link->llmnr_ipv4_scope->zone, VAR_9->llmnr_address_rr);
                                VAR_9->llmnr_address_rr = FUNC_4(VAR_9->llmnr_address_rr);
                        }

                        if (VAR_9->llmnr_ptr_rr) {
                                if (VAR_9->link->llmnr_ipv4_scope)
                                        FUNC_6(&VAR_9->link->llmnr_ipv4_scope->zone, VAR_9->llmnr_ptr_rr);
                                VAR_9->llmnr_ptr_rr = FUNC_4(VAR_9->llmnr_ptr_rr);
                        }
                }

                if (!VAR_10 &&
                    FUNC_7(VAR_9, 1) &&
                    VAR_9->link->mdns_ipv4_scope &&
                    VAR_9->link->mdns_support == VAR_8 &&
                    VAR_9->link->manager->mdns_support == VAR_8) {
                        if (!VAR_9->link->manager->mdns_host_ipv4_key) {
                                VAR_9->link->manager->mdns_host_ipv4_key = FUNC_1(VAR_2, VAR_3, VAR_9->link->manager->mdns_hostname);
                                if (!VAR_9->link->manager->mdns_host_ipv4_key) {
                                        VAR_11 = -VAR_5;
                                        goto fail;
                                }
                        }

                        if (!VAR_9->mdns_address_rr) {
                                VAR_9->mdns_address_rr = FUNC_2(VAR_9->link->manager->mdns_host_ipv4_key);
                                if (!VAR_9->mdns_address_rr) {
                                        VAR_11 = -VAR_5;
                                        goto fail;
                                }

                                VAR_9->mdns_address_rr->a.in_addr = VAR_9->in_addr.in;
                                VAR_9->mdns_address_rr->ttl = VAR_7;
                        }

                        if (!VAR_9->mdns_ptr_rr) {
                                VAR_11 = FUNC_3(&VAR_9->mdns_ptr_rr, VAR_9->family, &VAR_9->in_addr, VAR_9->link->manager->mdns_hostname);
                                if (VAR_11 < 0)
                                        goto fail;

                                VAR_9->mdns_ptr_rr->ttl = VAR_7;
                        }

                        VAR_11 = FUNC_5(&VAR_9->link->mdns_ipv4_scope->zone, VAR_9->link->mdns_ipv4_scope, VAR_9->mdns_address_rr, 1);
                        if (VAR_11 < 0)
                                FUNC_9(VAR_11, "Failed to add A record to MDNS zone: %m");

                        VAR_11 = FUNC_5(&VAR_9->link->mdns_ipv4_scope->zone, VAR_9->link->mdns_ipv4_scope, VAR_9->mdns_ptr_rr, 0);
                        if (VAR_11 < 0)
                                FUNC_9(VAR_11, "Failed to add IPv4 PTR record to MDNS zone: %m");
                } else {
                        if (VAR_9->mdns_address_rr) {
                                if (VAR_9->link->mdns_ipv4_scope)
                                        FUNC_6(&VAR_9->link->mdns_ipv4_scope->zone, VAR_9->mdns_address_rr);
                                VAR_9->mdns_address_rr = FUNC_4(VAR_9->mdns_address_rr);
                        }

                        if (VAR_9->mdns_ptr_rr) {
                                if (VAR_9->link->mdns_ipv4_scope)
                                        FUNC_6(&VAR_9->link->mdns_ipv4_scope->zone, VAR_9->mdns_ptr_rr);
                                VAR_9->mdns_ptr_rr = FUNC_4(VAR_9->mdns_ptr_rr);
                        }
                }
        }

        if (VAR_9->family == VAR_1) {

                if (!VAR_10 &&
                    FUNC_7(VAR_9, 1) &&
                    VAR_9->link->llmnr_ipv6_scope &&
                    VAR_9->link->llmnr_support == VAR_8 &&
                    VAR_9->link->manager->llmnr_support == VAR_8) {

                        if (!VAR_9->link->manager->llmnr_host_ipv6_key) {
                                VAR_9->link->manager->llmnr_host_ipv6_key = FUNC_1(VAR_2, VAR_4, VAR_9->link->manager->llmnr_hostname);
                                if (!VAR_9->link->manager->llmnr_host_ipv6_key) {
                                        VAR_11 = -VAR_5;
                                        goto fail;
                                }
                        }

                        if (!VAR_9->llmnr_address_rr) {
                                VAR_9->llmnr_address_rr = FUNC_2(VAR_9->link->manager->llmnr_host_ipv6_key);
                                if (!VAR_9->llmnr_address_rr) {
                                        VAR_11 = -VAR_5;
                                        goto fail;
                                }

                                VAR_9->llmnr_address_rr->aaaa.in6_addr = VAR_9->in_addr.in6;
                                VAR_9->llmnr_address_rr->ttl = VAR_6;
                        }

                        if (!VAR_9->llmnr_ptr_rr) {
                                VAR_11 = FUNC_3(&VAR_9->llmnr_ptr_rr, VAR_9->family, &VAR_9->in_addr, VAR_9->link->manager->llmnr_hostname);
                                if (VAR_11 < 0)
                                        goto fail;

                                VAR_9->llmnr_ptr_rr->ttl = VAR_6;
                        }

                        VAR_11 = FUNC_5(&VAR_9->link->llmnr_ipv6_scope->zone, VAR_9->link->llmnr_ipv6_scope, VAR_9->llmnr_address_rr, 1);
                        if (VAR_11 < 0)
                                FUNC_9(VAR_11, "Failed to add AAAA record to LLMNR zone: %m");

                        VAR_11 = FUNC_5(&VAR_9->link->llmnr_ipv6_scope->zone, VAR_9->link->llmnr_ipv6_scope, VAR_9->llmnr_ptr_rr, 0);
                        if (VAR_11 < 0)
                                FUNC_9(VAR_11, "Failed to add IPv6 PTR record to LLMNR zone: %m");
                } else {
                        if (VAR_9->llmnr_address_rr) {
                                if (VAR_9->link->llmnr_ipv6_scope)
                                        FUNC_6(&VAR_9->link->llmnr_ipv6_scope->zone, VAR_9->llmnr_address_rr);
                                VAR_9->llmnr_address_rr = FUNC_4(VAR_9->llmnr_address_rr);
                        }

                        if (VAR_9->llmnr_ptr_rr) {
                                if (VAR_9->link->llmnr_ipv6_scope)
                                        FUNC_6(&VAR_9->link->llmnr_ipv6_scope->zone, VAR_9->llmnr_ptr_rr);
                                VAR_9->llmnr_ptr_rr = FUNC_4(VAR_9->llmnr_ptr_rr);
                        }
                }

                if (!VAR_10 &&
                    FUNC_7(VAR_9, 1) &&
                    VAR_9->link->mdns_ipv6_scope &&
                    VAR_9->link->mdns_support == VAR_8 &&
                    VAR_9->link->manager->mdns_support == VAR_8) {

                        if (!VAR_9->link->manager->mdns_host_ipv6_key) {
                                VAR_9->link->manager->mdns_host_ipv6_key = FUNC_1(VAR_2, VAR_4, VAR_9->link->manager->mdns_hostname);
                                if (!VAR_9->link->manager->mdns_host_ipv6_key) {
                                        VAR_11 = -VAR_5;
                                        goto fail;
                                }
                        }

                        if (!VAR_9->mdns_address_rr) {
                                VAR_9->mdns_address_rr = FUNC_2(VAR_9->link->manager->mdns_host_ipv6_key);
                                if (!VAR_9->mdns_address_rr) {
                                        VAR_11 = -VAR_5;
                                        goto fail;
                                }

                                VAR_9->mdns_address_rr->aaaa.in6_addr = VAR_9->in_addr.in6;
                                VAR_9->mdns_address_rr->ttl = VAR_7;
                        }

                        if (!VAR_9->mdns_ptr_rr) {
                                VAR_11 = FUNC_3(&VAR_9->mdns_ptr_rr, VAR_9->family, &VAR_9->in_addr, VAR_9->link->manager->mdns_hostname);
                                if (VAR_11 < 0)
                                        goto fail;

                                VAR_9->mdns_ptr_rr->ttl = VAR_7;
                        }

                        VAR_11 = FUNC_5(&VAR_9->link->mdns_ipv6_scope->zone, VAR_9->link->mdns_ipv6_scope, VAR_9->mdns_address_rr, 1);
                        if (VAR_11 < 0)
                                FUNC_9(VAR_11, "Failed to add AAAA record to MDNS zone: %m");

                        VAR_11 = FUNC_5(&VAR_9->link->mdns_ipv6_scope->zone, VAR_9->link->mdns_ipv6_scope, VAR_9->mdns_ptr_rr, 0);
                        if (VAR_11 < 0)
                                FUNC_9(VAR_11, "Failed to add IPv6 PTR record to MDNS zone: %m");
                } else {
                        if (VAR_9->mdns_address_rr) {
                                if (VAR_9->link->mdns_ipv6_scope)
                                        FUNC_6(&VAR_9->link->mdns_ipv6_scope->zone, VAR_9->mdns_address_rr);
                                VAR_9->mdns_address_rr = FUNC_4(VAR_9->mdns_address_rr);
                        }

                        if (VAR_9->mdns_ptr_rr) {
                                if (VAR_9->link->mdns_ipv6_scope)
                                        FUNC_6(&VAR_9->link->mdns_ipv6_scope->zone, VAR_9->mdns_ptr_rr);
                                VAR_9->mdns_ptr_rr = FUNC_4(VAR_9->mdns_ptr_rr);
                        }
                }
        }

        return;

fail:
        FUNC_8(VAR_11, "Failed to update address RRs: %m");
}
