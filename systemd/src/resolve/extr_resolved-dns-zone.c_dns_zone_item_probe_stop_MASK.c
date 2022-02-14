
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int notify_zone_items_done; int notify_zone_items; } ;
struct TYPE_8__ {int probe_transaction; } ;
typedef TYPE_1__ DnsZoneItem ;
typedef TYPE_2__ DnsTransaction ;


 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,TYPE_1__*) ;

void FUNC_4(DnsZoneItem *VAR_0) {
        DnsTransaction *VAR_1;
        FUNC_1(VAR_0);

        if (!VAR_0->probe_transaction)
                return;

        VAR_1 = FUNC_0(VAR_0->probe_transaction);

        FUNC_3(VAR_1->notify_zone_items, VAR_0);
        FUNC_3(VAR_1->notify_zone_items_done, VAR_0);
        FUNC_2(VAR_1);
}
