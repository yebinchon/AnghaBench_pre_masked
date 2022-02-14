
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int in_run_queue; int run_queue_idx; TYPE_1__* manager; struct TYPE_7__* installed; } ;
struct TYPE_6__ {int run_queue; int run_queue_event_source; } ;
typedef TYPE_2__ Job ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_2__*,int *) ;
 int FUNC_4 (int ,int ) ;

void FUNC_5(Job *VAR_1) {
        int VAR_2;

        FUNC_0(VAR_1);
        FUNC_0(VAR_1->installed);

        if (VAR_1->in_run_queue)
                return;

        if (FUNC_2(VAR_1->manager->run_queue)) {
                VAR_2 = FUNC_4(VAR_1->manager->run_queue_event_source, VAR_0);
                if (VAR_2 < 0)
                        FUNC_1(VAR_2, "Failed to enable job run queue event source, ignoring: %m");
        }

        VAR_2 = FUNC_3(VAR_1->manager->run_queue, VAR_1, &VAR_1->run_queue_idx);
        if (VAR_2 < 0)
                FUNC_1(VAR_2, "Failed put job in run queue, ignoring: %m");
        else
                VAR_1->in_run_queue = 1;
}
