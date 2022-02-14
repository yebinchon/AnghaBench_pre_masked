
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int usec_t ;
struct TYPE_5__ {int watchdog_event_source; int timer_event_source; } ;
typedef TYPE_1__ Service ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(Service *VAR_2, usec_t VAR_3) {
        usec_t VAR_4;

        FUNC_1(VAR_2);

        if (FUNC_0(VAR_3, 0, VAR_1))
                return;

        VAR_4 = FUNC_4(FUNC_2(VAR_0), VAR_3);

        FUNC_3(VAR_2, VAR_2->timer_event_source, VAR_4);
        FUNC_3(VAR_2, VAR_2->watchdog_event_source, VAR_4);
}
