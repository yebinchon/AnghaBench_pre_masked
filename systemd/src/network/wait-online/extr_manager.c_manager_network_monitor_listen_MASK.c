
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int network_monitor_event_source; int event; int network_monitor; } ;
typedef TYPE_1__ Manager ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,int,int,int *,TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static int FUNC_5(Manager *VAR_1) {
        int VAR_2, VAR_3, VAR_4;

        FUNC_0(VAR_1);

        VAR_2 = FUNC_4(&VAR_1->network_monitor, ((void*)0));
        if (VAR_2 < 0)
                return VAR_2;

        VAR_3 = FUNC_3(VAR_1->network_monitor);
        if (VAR_3 < 0)
                return VAR_3;

        VAR_4 = FUNC_2(VAR_1->network_monitor);
        if (VAR_4 < 0)
                return VAR_4;

        VAR_2 = FUNC_1(VAR_1->event, &VAR_1->network_monitor_event_source,
                            VAR_3, VAR_4, &VAR_0, VAR_1);
        if (VAR_2 < 0)
                return VAR_2;

        return 0;
}
