
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rewatch_pids_event_source; } ;
typedef TYPE_1__ Unit ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (scalar_t__,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

void FUNC_4(Unit *VAR_1) {
        int VAR_2;
        FUNC_0(VAR_1);

        if (!VAR_1->rewatch_pids_event_source)
                return;

        VAR_2 = FUNC_2(VAR_1->rewatch_pids_event_source, VAR_0);
        if (VAR_2 < 0)
                FUNC_1(VAR_2, "Failed to disable event source for tidying watched PIDs, ignoring: %m");

        VAR_1->rewatch_pids_event_source = FUNC_3(VAR_1->rewatch_pids_event_source);
}
