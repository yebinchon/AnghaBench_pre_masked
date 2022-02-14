
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ idle_pipe; int idle_pipe_event_source; } ;
typedef TYPE_1__ Manager ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(Manager *VAR_0) {
        FUNC_0(VAR_0);

        VAR_0->idle_pipe_event_source = FUNC_2(VAR_0->idle_pipe_event_source);

        FUNC_1(VAR_0->idle_pipe);
        FUNC_1(VAR_0->idle_pipe + 2);
}
