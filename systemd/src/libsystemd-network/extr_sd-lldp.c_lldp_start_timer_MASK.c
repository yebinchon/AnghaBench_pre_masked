
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int until; } ;
typedef TYPE_1__ sd_lldp_neighbor ;
struct TYPE_10__ {int event_priority; int timer_event_source; int event; int neighbor_by_expiry; } ;
typedef TYPE_2__ sd_lldp ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int *,int ,int ,int ,int ,TYPE_2__*,int ,char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(sd_lldp *VAR_1, sd_lldp_neighbor *VAR_2) {
        sd_lldp_neighbor *VAR_3;

        FUNC_0(VAR_1);

        if (VAR_2)
                FUNC_4(VAR_2);

        VAR_3 = FUNC_5(VAR_1->neighbor_by_expiry);
        if (!VAR_3)
                return FUNC_3(VAR_1->timer_event_source);

        if (!VAR_1->event)
                return 0;

        return FUNC_2(VAR_1->event, &VAR_1->timer_event_source,
                                FUNC_1(),
                                VAR_3->until, 0,
                                VAR_0, VAR_1,
                                VAR_1->event_priority, "lldp-timer", 1);
}
