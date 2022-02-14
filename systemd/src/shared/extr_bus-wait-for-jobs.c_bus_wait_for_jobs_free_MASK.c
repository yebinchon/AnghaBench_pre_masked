
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* result; struct TYPE_4__* name; int bus; int slot_job_removed; int slot_disconnected; int jobs; } ;
typedef TYPE_1__ BusWaitForJobs ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(BusWaitForJobs *VAR_0) {
        if (!VAR_0)
                return;

        FUNC_3(VAR_0->jobs);

        FUNC_1(VAR_0->slot_disconnected);
        FUNC_1(VAR_0->slot_job_removed);

        FUNC_2(VAR_0->bus);

        FUNC_0(VAR_0->name);
        FUNC_0(VAR_0->result);

        FUNC_0(VAR_0);
}
