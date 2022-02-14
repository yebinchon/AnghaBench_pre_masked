
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__* idle_pipe; scalar_t__ idle_pipe_event_source; int event; } ;
typedef TYPE_1__ Manager ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int,char*) ;
 int VAR_1 ;
 int FUNC_2 (int ,scalar_t__*,scalar_t__,int ,int ,TYPE_1__*) ;
 int FUNC_3 (scalar_t__,char*) ;

__attribute__((used)) static int FUNC_4(Manager *VAR_2) {
        int VAR_3;

        FUNC_0(VAR_2);

        if (VAR_2->idle_pipe_event_source)
                return 0;

        if (VAR_2->idle_pipe[2] < 0)
                return 0;

        VAR_3 = FUNC_2(VAR_2->event, &VAR_2->idle_pipe_event_source, VAR_2->idle_pipe[2], VAR_0, VAR_1, VAR_2);
        if (VAR_3 < 0)
                return FUNC_1(VAR_3, "Failed to watch idle pipe: %m");

        (void) FUNC_3(VAR_2->idle_pipe_event_source, "manager-idle-pipe");

        return 0;
}
