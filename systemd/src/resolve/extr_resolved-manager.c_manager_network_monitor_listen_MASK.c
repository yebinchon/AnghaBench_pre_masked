
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int network_event_source; int event; int network_monitor; } ;
typedef TYPE_1__ Manager ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *,int,int,int *,TYPE_1__*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static int FUNC_7(Manager *VAR_2) {
        int VAR_3, VAR_4, VAR_5;

        FUNC_0(VAR_2);

        VAR_3 = FUNC_6(&VAR_2->network_monitor, ((void*)0));
        if (VAR_3 < 0)
                return VAR_3;

        VAR_4 = FUNC_5(VAR_2->network_monitor);
        if (VAR_4 < 0)
                return VAR_4;

        VAR_5 = FUNC_4(VAR_2->network_monitor);
        if (VAR_5 < 0)
                return VAR_5;

        VAR_3 = FUNC_1(VAR_2->event, &VAR_2->network_event_source, VAR_4, VAR_5, &VAR_1, VAR_2);
        if (VAR_3 < 0)
                return VAR_3;

        VAR_3 = FUNC_3(VAR_2->network_event_source, VAR_0+5);
        if (VAR_3 < 0)
                return VAR_3;

        (void) FUNC_2(VAR_2->network_event_source, "network-monitor");

        return 0;
}
