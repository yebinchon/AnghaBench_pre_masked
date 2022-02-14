
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct event {TYPE_2__* manager; TYPE_1__* worker; int timeout_event; int timeout_warning_event; int dev_kernel; int dev; } ;
struct TYPE_4__ {scalar_t__ pid; int events; } ;
struct TYPE_3__ {int * event; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct event*,int ,struct event*) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_3 (struct event*) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (char*) ;

__attribute__((used)) static void FUNC_9(struct event *VAR_1) {
        if (!VAR_1)
                return;

        FUNC_2(VAR_1->manager);

        FUNC_1(VAR_1, VAR_1->manager->events, VAR_1);
        FUNC_6(VAR_1->dev);
        FUNC_6(VAR_1->dev_kernel);

        FUNC_7(VAR_1->timeout_warning_event);
        FUNC_7(VAR_1->timeout_event);

        if (VAR_1->worker)
                VAR_1->worker->event = ((void*)0);


        if (FUNC_0(VAR_1->manager->events) &&
            VAR_1->manager->pid == FUNC_4())
                if (FUNC_8("/run/udev/queue") < 0)
                        FUNC_5(VAR_0, "Failed to unlink /run/udev/queue: %m");

        FUNC_3(VAR_1);
}
