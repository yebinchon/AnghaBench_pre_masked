
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ family; TYPE_2__* manager; int zone; int cache; int announce_event_source; int conflict_event_source; int conflict_queue; int transactions_by_key; scalar_t__ query_candidates; int protocol; TYPE_1__* link; } ;
struct TYPE_13__ {int dns_scopes; } ;
struct TYPE_12__ {char* ifname; } ;
typedef TYPE_3__ DnsScope ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,TYPE_3__*) ;
 char* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int) ;
 int FUNC_7 (TYPE_3__*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,char*,int ,char*) ;
 TYPE_3__* FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (int ,int ) ;
 int VAR_2 ;
 int FUNC_13 (int ) ;

DnsScope* FUNC_14(DnsScope *VAR_3) {
        if (!VAR_3)
                return ((void*)0);

        FUNC_10("Removing scope on link %s, protocol %s, family %s", VAR_3->link ? VAR_3->link->ifname : "*", FUNC_3(VAR_3->protocol), VAR_3->family == VAR_0 ? "*" : FUNC_1(VAR_3->family));

        FUNC_6(VAR_3, 0);
        FUNC_7(VAR_3, 0);
        FUNC_5(VAR_3);

        while (VAR_3->query_candidates)
                FUNC_4(VAR_3->query_candidates);

        FUNC_9(VAR_3->transactions_by_key);

        FUNC_12(VAR_3->conflict_queue, VAR_1);
        FUNC_13(VAR_3->conflict_event_source);

        FUNC_13(VAR_3->announce_event_source);

        FUNC_2(&VAR_3->cache);
        FUNC_8(&VAR_3->zone);

        FUNC_0(VAR_2, VAR_3->manager->dns_scopes, VAR_3);
        return FUNC_11(VAR_3);
}
