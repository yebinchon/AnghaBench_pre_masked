
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ block_gc; int notify_transactions_done; int notify_transactions; int notify_zone_items_done; int notify_zone_items; int notify_query_candidates_done; int notify_query_candidates; } ;
typedef TYPE_1__ DnsTransaction ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ) ;

bool FUNC_3(DnsTransaction *VAR_0) {
        FUNC_0(VAR_0);

        if (VAR_0->block_gc > 0)
                return 1;

        if (FUNC_2(VAR_0->notify_query_candidates) &&
            FUNC_2(VAR_0->notify_query_candidates_done) &&
            FUNC_2(VAR_0->notify_zone_items) &&
            FUNC_2(VAR_0->notify_zone_items_done) &&
            FUNC_2(VAR_0->notify_transactions) &&
            FUNC_2(VAR_0->notify_transactions_done)) {
                FUNC_1(VAR_0);
                return 0;
        }

        return 1;
}
