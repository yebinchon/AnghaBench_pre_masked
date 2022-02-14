
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int pid; TYPE_2__* machine; TYPE_1__* manager; int message; int extra_fd; int errno_fd; int event_source; } ;
struct TYPE_10__ {int operations; } ;
struct TYPE_9__ {int n_operations; int operations; } ;
typedef TYPE_3__ Operation ;


 int FUNC_0 (int ,int ,TYPE_3__*) ;
 TYPE_3__* FUNC_1 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;

Operation *FUNC_6(Operation *VAR_2) {
        if (!VAR_2)
                return ((void*)0);

        FUNC_4(VAR_2->event_source);

        FUNC_2(VAR_2->errno_fd);
        FUNC_2(VAR_2->extra_fd);

        if (VAR_2->pid > 1)
                (void) FUNC_5(VAR_2->pid);

        FUNC_3(VAR_2->message);

        if (VAR_2->manager) {
                FUNC_0(VAR_0, VAR_2->manager->operations, VAR_2);
                VAR_2->manager->n_operations--;
        }

        if (VAR_2->machine)
                FUNC_0(VAR_1, VAR_2->machine->operations, VAR_2);

        return FUNC_1(VAR_2);
}
