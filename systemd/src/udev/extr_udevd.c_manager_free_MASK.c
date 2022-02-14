
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ pid; int worker_watch; int fd_inotify; int rules; int properties; int rtnl; int ctrl; int monitor; } ;
typedef TYPE_1__ Manager ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(Manager *VAR_0) {
        if (!VAR_0)
                return;

        VAR_0->monitor = FUNC_6(VAR_0->monitor);

        FUNC_8();

        if (VAR_0->pid == FUNC_1())
                FUNC_9(VAR_0->ctrl);

        FUNC_3(VAR_0);

        FUNC_7(VAR_0->rtnl);

        FUNC_2(VAR_0->properties);
        FUNC_10(VAR_0->rules);

        FUNC_4(VAR_0->fd_inotify);
        FUNC_5(VAR_0->worker_watch);

        FUNC_0(VAR_0);
}
