
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct in6_addr {int dummy; } ;
struct TYPE_15__ {scalar_t__ dhcp6_client; } ;
struct TYPE_14__ {struct TYPE_14__* dynamic_hostname; struct TYPE_14__* dynamic_timezone; int bus; int polkit_registry; int device_monitor; int event; int speed_meter_event_source; int resolve; int genl; int rtnl; void* rules_saved; void* rules_foreign; void* rules; int * address_pools; void* netdevs; int networks; int duids_requesting_uuid; void* links; void* links_requesting_uuid; void* dirty_links; int dhcp6_prefixes; struct TYPE_14__* state_file; } ;
typedef TYPE_1__ Manager ;
typedef TYPE_2__ Link ;
typedef int AddressPool ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,struct in6_addr*) ;
 int FUNC_4 (TYPE_1__*) ;
 struct in6_addr* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 void* FUNC_7 (void*,int (*) (TYPE_2__*)) ;
 TYPE_2__* FUNC_8 (void*) ;
 int FUNC_9 (TYPE_2__*,int) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 void* FUNC_21 (void*,int (*) (TYPE_2__*)) ;

void FUNC_22(Manager *VAR_1) {
        struct in6_addr *VAR_2;
        AddressPool *VAR_3;
        Link *VAR_4;

        if (!VAR_1)
                return;

        FUNC_4(VAR_1->state_file);

        while ((VAR_2 = FUNC_5(VAR_1->dhcp6_prefixes)))
                (void) FUNC_3(VAR_1, VAR_2);
        VAR_1->dhcp6_prefixes = FUNC_6(VAR_1->dhcp6_prefixes);

        while ((VAR_4 = FUNC_8(VAR_1->links))) {
                if (VAR_4->dhcp6_client)
                        (void) FUNC_2(VAR_4->dhcp6_client, VAR_4);

                (void) FUNC_9(VAR_4, 1);

                FUNC_10(VAR_4);
        }

        VAR_1->dirty_links = FUNC_21(VAR_1->dirty_links, FUNC_10);
        VAR_1->links_requesting_uuid = FUNC_21(VAR_1->links_requesting_uuid, FUNC_10);
        VAR_1->links = FUNC_7(VAR_1->links, FUNC_10);

        VAR_1->duids_requesting_uuid = FUNC_20(VAR_1->duids_requesting_uuid);
        VAR_1->networks = FUNC_12(VAR_1->networks, VAR_0);

        VAR_1->netdevs = FUNC_7(VAR_1->netdevs, FUNC_11);

        while ((VAR_3 = VAR_1->address_pools))
                FUNC_0(VAR_3);



        VAR_1->rules = FUNC_21(VAR_1->rules, FUNC_13);
        VAR_1->rules_foreign = FUNC_21(VAR_1->rules_foreign, FUNC_13);
        FUNC_21(VAR_1->rules_saved, FUNC_13);

        FUNC_18(VAR_1->rtnl);
        FUNC_18(VAR_1->genl);
        FUNC_19(VAR_1->resolve);

        FUNC_16(VAR_1->speed_meter_event_source);
        FUNC_17(VAR_1->event);

        FUNC_15(VAR_1->device_monitor);

        FUNC_1(VAR_1->polkit_registry);
        FUNC_14(VAR_1->bus);

        FUNC_4(VAR_1->dynamic_timezone);
        FUNC_4(VAR_1->dynamic_hostname);

        FUNC_4(VAR_1);
}
