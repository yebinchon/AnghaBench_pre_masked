
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ TimerState ;
struct TYPE_5__ {scalar_t__ state; void* next_elapse_realtime; void* next_elapse_monotonic_or_boottime; void* realtime_event_source; void* monotonic_event_source; } ;
typedef TYPE_1__ Timer ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 void* VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,char*,int ,int ) ;
 void* FUNC_4 (void*) ;
 int * VAR_2 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_7(Timer *VAR_3, TimerState VAR_4) {
        TimerState VAR_5;
        FUNC_1(VAR_3);

        if (VAR_3->state != VAR_4)
                FUNC_2(FUNC_0(VAR_3), 0);

        VAR_5 = VAR_3->state;
        VAR_3->state = VAR_4;

        if (VAR_4 != VAR_0) {
                VAR_3->monotonic_event_source = FUNC_4(VAR_3->monotonic_event_source);
                VAR_3->realtime_event_source = FUNC_4(VAR_3->realtime_event_source);
                VAR_3->next_elapse_monotonic_or_boottime = VAR_1;
                VAR_3->next_elapse_realtime = VAR_1;
        }

        if (VAR_4 != VAR_5)
                FUNC_3(FUNC_0(VAR_3), "Changed %s -> %s", FUNC_5(VAR_5), FUNC_5(VAR_4));

        FUNC_6(FUNC_0(VAR_3), VAR_2[VAR_5], VAR_2[VAR_4], 0);
}
