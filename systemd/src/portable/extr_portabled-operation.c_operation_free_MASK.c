
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int pid; TYPE_1__* manager; int message; int extra_fd; int errno_fd; int event_source; } ;
struct TYPE_8__ {int n_operations; int operations; } ;
typedef TYPE_2__ Operation ;


 int FUNC_0 (int ,int ,TYPE_2__*) ;
 TYPE_2__* FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;

Operation *FUNC_6(Operation *VAR_1) {
        if (!VAR_1)
                return ((void*)0);

        FUNC_4(VAR_1->event_source);

        FUNC_2(VAR_1->errno_fd);
        FUNC_2(VAR_1->extra_fd);

        if (VAR_1->pid > 1)
                (void) FUNC_5(VAR_1->pid);

        FUNC_3(VAR_1->message);

        if (VAR_1->manager) {
                FUNC_0(VAR_0, VAR_1->manager->operations, VAR_1);
                VAR_1->manager->n_operations--;
        }

        return FUNC_1(VAR_1);
}
