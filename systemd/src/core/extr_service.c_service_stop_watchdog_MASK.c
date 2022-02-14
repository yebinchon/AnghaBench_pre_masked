
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int watchdog_timestamp; int watchdog_event_source; } ;
typedef TYPE_1__ Service ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(Service *VAR_1) {
        FUNC_0(VAR_1);

        VAR_1->watchdog_event_source = FUNC_1(VAR_1->watchdog_event_source);
        VAR_1->watchdog_timestamp = VAR_0;
}
