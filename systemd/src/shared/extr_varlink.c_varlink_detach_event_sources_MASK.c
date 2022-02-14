
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* defer_event_source; void* quit_event_source; void* time_event_source; void* io_event_source; } ;
typedef TYPE_1__ Varlink ;


 int FUNC_0 (TYPE_1__*) ;
 void* FUNC_1 (void*) ;

__attribute__((used)) static void FUNC_2(Varlink *VAR_0) {
        FUNC_0(VAR_0);

        VAR_0->io_event_source = FUNC_1(VAR_0->io_event_source);

        VAR_0->time_event_source = FUNC_1(VAR_0->time_event_source);

        VAR_0->quit_event_source = FUNC_1(VAR_0->quit_event_source);

        VAR_0->defer_event_source = FUNC_1(VAR_0->defer_event_source);
}
