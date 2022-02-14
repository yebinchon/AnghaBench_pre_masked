
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int event; int rtnl; int rtnl_event_source; int network_monitor; int network_monitor_event_source; int links_by_name; int links; } ;
typedef TYPE_1__ Manager ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

void FUNC_7(Manager *VAR_1) {
        if (!VAR_1)
                return;

        FUNC_2(VAR_1->links, VAR_0);
        FUNC_1(VAR_1->links_by_name);

        FUNC_3(VAR_1->network_monitor_event_source);
        FUNC_6(VAR_1->network_monitor);

        FUNC_3(VAR_1->rtnl_event_source);
        FUNC_5(VAR_1->rtnl);

        FUNC_4(VAR_1->event);
        FUNC_0(VAR_1);

        return;
}
