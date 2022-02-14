
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int bus; int event; int resolve; int network_monitor; int network_event_source; int event_retry; } ;
typedef TYPE_1__ Manager ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

void FUNC_8(Manager *VAR_3) {
        if (!VAR_3)
                return;

        FUNC_1(VAR_3);
        FUNC_2(VAR_3, VAR_2);
        FUNC_2(VAR_3, VAR_1);
        FUNC_2(VAR_3, VAR_0);

        FUNC_4(VAR_3->event_retry);

        FUNC_4(VAR_3->network_event_source);
        FUNC_6(VAR_3->network_monitor);

        FUNC_7(VAR_3->resolve);
        FUNC_5(VAR_3->event);

        FUNC_3(VAR_3->bus);

        FUNC_0(VAR_3);
}
